#include "schemadumper.hpp"

#include <format>
#include <fstream>
#include <chrono>
#include <psapi.h>
#include <functional>

#include "../sdk/schemasystem/CSchemaSystem.hpp"

std::vector<HMODULE> GetProcessModules() {
	std::vector<HMODULE> modules;
	HANDLE hProcess = GetCurrentProcess();
	DWORD needed = 0;

	EnumProcessModules(GetCurrentProcess(), nullptr, 0, &needed);

	modules.resize(needed / sizeof(HMODULE));
	if (!EnumProcessModules(hProcess, modules.data(), needed, &needed))
		modules.clear();

	modules.resize(needed / sizeof(HMODULE));
	return modules;
}

SchemaDumper::CSchemaCacheClassVector SchemaDumper::SortByInheritance(const CSchemaCacheClassVector& input) {
	std::unordered_map<std::string, const SchemaCacheClassInfo_t*> byName;
	byName.reserve(input.size());

	for (const auto& cls : input)
		byName[cls.m_sClassName] = &cls;

	CSchemaCacheClassVector result;
	result.reserve(input.size());

	std::unordered_set<std::string_view> visiting;
	std::unordered_set<std::string_view> visited;
	std::unordered_set<std::string_view> addedMissingBases;

	std::function<void(const SchemaCacheClassInfo_t&)> dfs =
		[&](const SchemaCacheClassInfo_t& cls)
		{
			if (visited.count(cls.m_sClassName))
				return;
			if (visiting.count(cls.m_sClassName))
				return;

			visiting.insert(cls.m_sClassName);

			if (!cls.m_sBaseClassName.empty()) {
				auto it = byName.find(cls.m_sBaseClassName);
				if (it != byName.end()) {
					dfs(*it->second);
				}
				else {
					if (!addedMissingBases.count(cls.m_sBaseClassName)) {
						lg::Warn("[DUMPER]", "%s not found, empty class added.\n", cls.m_sBaseClassName.data());
						addedMissingBases.insert(cls.m_sBaseClassName);

						std::vector<std::string> emptyFlags;
						SchemaCacheClassInfo_t stub{
							cls.m_sBaseClassName,
							"",
							emptyFlags
						};

						result.insert(result.begin(), std::move(stub));
					}
				}
			}

			visiting.erase(cls.m_sClassName);
			visited.insert(cls.m_sClassName);
			result.push_back(cls);
		};

	for (const auto& cls : input)
		dfs(cls);

	return result;
}

void SchemaDumper::Dump(fs::path path) {
	fs::path directory = path / "dump";
	fs::create_directories(directory);

	auto start = std::chrono::high_resolution_clock::now();

	std::vector<std::string> moduleNames;
	auto modules = GetProcessModules();
	for (const auto& module : modules) {
		if (GetProcAddress(module, "InstallSchemaBindings") == nullptr)
			continue;

		char path[MAX_PATH];
		if (GetModuleFileNameExA(GetCurrentProcess(), module, path, MAX_PATH))
			moduleNames.push_back(fs::path(path).filename().string());
	}

	for (const auto& module : moduleNames) {
		CSchemaCacheEnumVector enums;
		CSchemaCacheClassVector classes;

		CSchemaSystemTypeScope* pTypeScope = g_pSchemaSystem->FindTypeScopeForModule(module.data());
		if (!pTypeScope)
			continue;

		lg::Info("[DUMPER]", "Processing %s module.\n", module.data());

		auto& enumBindings = pTypeScope->m_EnumBindings;
		for (auto handle : enumBindings.GetElements()) {
			lg::Info("[DUMPER]", "Found enum %s\n", handle->GetName().data());
			SchemaCacheEnumInfo_t cache(handle->GetName(), handle->GetSize(), handle->GetStringFlags());

			for (const auto& field : handle->GetFields())
				cache.AddField(field.m_pszName, field.m_nValue);

			enums.push_back(std::move(cache));
		}

		auto& classBindings = pTypeScope->m_ClassBindings;
		for (auto handle : classBindings.GetElements()) {
			lg::Info("[DUMPER]", "Found class %s\n", handle->GetName().data());

			SchemaCacheClassInfo_t cache(handle->GetName(), handle->GetBaseClassName(), handle->GetStringFlags());

			for (const auto& field : handle->GetFields())
				cache.AddField(field.m_pszName, field.m_nSingleInheritanceOffset, field.GetTypeName());

			classes.push_back(std::move(cache));
		}

		classes = SortByInheritance(classes);

		GenerateHeaderFile(directory, module, enums, classes);

		DumperData_t::ModuleDumpData_t moduleData;
		moduleData.m_sModuleName = module;
		moduleData.m_nDumpedClasses = classes.size();
		moduleData.m_nDumpedEnums = enums.size();
		m_DumpData.m_ModuleData.push_back(std::move(moduleData));

		printf("\n");
	}

	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	m_DumpData.m_nExecutionTime = duration.count();

	for (const auto& data : m_DumpData.m_ModuleData) {
		m_DumpData.m_nTotalDumpedClasses += data.m_nDumpedClasses;
		m_DumpData.m_nTotalDumpedEnums += data.m_nDumpedEnums;
	}

	printf("\n");
	lg::Success("[DUMPER]", "Dump successfully generated in \"%s\"\n", fs::absolute(directory).string().data());

	GenerateInfoFile(directory);
}

void SchemaDumper::GenerateClass(std::ofstream& file, const CSchemaCacheClassVector& classes) {
	constexpr std::string_view tab2 = "        ";
	constexpr std::string_view tab3 = "            ";

	size_t index = 0;
	for (const auto& obj : classes) {
		for (const auto& flag : obj.m_Flags)
			file << std::format("{}// {}\n", tab2, flag);

		std::string_view className = obj.m_sClassName;
		std::string_view sParentName = obj.m_sBaseClassName;

		std::string_view structureType = className.ends_with("_t") ? "struct" : "class";
		std::string classHeader = std::format("{} {}{} {{", structureType, className, sParentName.empty() ? "" : std::format(" : public {}", sParentName));

		file << std::format("{}{}\n", tab2, classHeader);
		file << std::format("{}public:\n", tab2);

		size_t maxNameLen = 0;
		for (const auto& field : obj.m_Fields)
			maxNameLen = std::max(maxNameLen, field.m_sName.length());

		for (const auto& [name, offset, typeInfo] : obj.m_Fields)
			file << std::format("{}static constexpr std::uintptr_t {:<{}} = {:#06X}; // {}\n", tab3, name, maxNameLen, offset, typeInfo);

		file << std::format("{}}};\n", tab2);
		file << std::format("{}", ++index == classes.size() ? "" : "\n");
	}
}

void SchemaDumper::GenerateEnum(std::ofstream& file, const CSchemaCacheEnumVector& enums) {
	constexpr std::string_view tab2 = "        ";
	constexpr std::string_view tab3 = "            ";

	for (const auto& obj : enums) {
		for (const auto& flag : obj.m_Flags)
			file << std::format("{}// {}\n", tab2, flag);

		std::string enumHeader = std::format("enum class {} : {} {{", obj.m_sEnumName, std::format("std::uint{}_t", obj.m_nSize * 8));
		file << std::format("{}{}\n", tab2, enumHeader);

		size_t maxNameLen = 0;
		for (const auto& field : obj.m_Fields)
			maxNameLen = std::max(maxNameLen, field.m_sName.length());

		size_t index = 0;
		for (const auto& [name, value] : obj.m_Fields) {
			bool isLast = (++index == obj.m_Fields.size());

			uint64_t maskedValue = static_cast<uint64_t>(value);
			if (value < 0) {
				switch (obj.m_nSize) {
				case 1: maskedValue = static_cast<uint8_t>(value); break;
				case 2: maskedValue = static_cast<uint16_t>(value); break;
				case 4: maskedValue = static_cast<uint32_t>(value); break;
				}
			}

			file << std::format("{}{:<{}} = 0x{:X}{}\n", tab3, name, maxNameLen, maskedValue, isLast ? "" : ",");
		}

		file << std::format("{}}};\n\n", tab2);
	}
}

void SchemaDumper::GenerateHeaderFile(const fs::path& directory, std::string_view sScopeName, const CSchemaCacheEnumVector& enums, const CSchemaCacheClassVector& classes) {
	sScopeName.remove_suffix(4);

	fs::path filePath = directory / std::format("{}.hpp", sScopeName);
	std::ofstream file(filePath);

	if (!file.is_open()) {
		lg::Error("[DUMPER]", "Failed to create file: %s", filePath.string().data());
		return;
	}

	constexpr std::string_view tab = "    ";

	file << "#pragma once\n#include <cstdint>\n\n";
	file << "namespace offsets {\n";
	file << std::format("{}namespace {} {{\n", tab, sScopeName);

	GenerateEnum(file, enums);
	GenerateClass(file, classes);

	file << std::format("{}}}\n", tab);
	file << "}\n";
}

void SchemaDumper::GenerateInfoFile(const fs::path& directory) {
	auto GetModuleTimeStamp = [](const char* moduleName) -> DWORD {
		HMODULE hModule = GetModuleHandleA(moduleName);
		if (!hModule) return 0;

		auto pDosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(hModule);
		if (pDosHeader->e_magic != IMAGE_DOS_SIGNATURE) return 0;

		auto pNtHeaders = reinterpret_cast<PIMAGE_NT_HEADERS>(reinterpret_cast<BYTE*>(hModule) + pDosHeader->e_lfanew);
		if (pNtHeaders->Signature != IMAGE_NT_SIGNATURE) return 0;

		return pNtHeaders->FileHeader.TimeDateStamp;
		};

	auto TimeStampToString = [](DWORD timestamp) -> std::string {
		if (timestamp == 0)
			return "Invalid Time";

		std::time_t rawTime = static_cast<std::time_t>(timestamp);
		std::tm timeInfo{};
		if (localtime_s(&timeInfo, &rawTime) != 0)
			return "Invalid Time";

		char buffer[32];
		std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeInfo);
		return buffer;
		};

	for (auto& data : m_DumpData.m_ModuleData)
		data.m_sTimestamp = TimeStampToString(GetModuleTimeStamp(data.m_sModuleName.data()));

	auto now = std::chrono::system_clock::now();
	std::time_t now_c = std::chrono::system_clock::to_time_t(now);
	std::tm now_tm{};
	localtime_s(&now_tm, &now_c);

	char dateBuffer[32];
	std::strftime(dateBuffer, sizeof(dateBuffer), "%Y-%m-%d %H:%M:%S", &now_tm);
	m_DumpData.m_Date = dateBuffer;

	fs::path filePath = directory / "info.txt";
	std::ofstream file(filePath);

	if (!file.is_open()) {
		lg::Error("[DUMPER]", "Failed to create file: %s", filePath.string().data());
		return;
	}

	constexpr std::string_view tab = "    ";
	constexpr std::string_view tab2 = "        ";

	file << "[General]\n";
	file << std::format("{}Game: Counter-Strike 2\n", tab);
	file << std::format("{}Dump Date: {}\n", tab, m_DumpData.m_Date);
	file << std::format("{}Generator: Shade Dumper 1.1\n\n", tab);

	file << "[Modules]\n";
	for (const auto& data : m_DumpData.m_ModuleData) {
		file << std::format("{}{}\n", tab, data.m_sModuleName);
		file << std::format("{}- Timestamp: {}\n", tab2, data.m_sTimestamp);
		file << std::format("{}- Classes Dumped: {}\n", tab2, data.m_nDumpedClasses);
		file << std::format("{}- Enumerators Dumped: {}\n\n", tab2, data.m_nDumpedEnums);
	}

	file << "[Stats]\n";
	file << std::format("{}Total Classes Dumped: {}\n", tab, m_DumpData.m_nTotalDumpedClasses);
	file << std::format("{}Total Enumerators Dumped: {}\n", tab, m_DumpData.m_nTotalDumpedEnums);
	file << std::format("{}Execution Time: {}ms\n", tab, m_DumpData.m_nExecutionTime);
}