#include "schemadumper.hpp"

#include <algorithm>
#include <format>
#include <fstream>
#include <chrono>

#include "../sdk/schemasystem/CSchemaSystemTypeScope.hpp"
#include "../sdk/schemasystem/CSchemaType.hpp"

void SchemaDumper::Dump(fs::path path) {
	fs::path directory = path / "dump";
	fs::create_directories(directory);

	auto start = std::chrono::high_resolution_clock::now();

	auto& pTypeScopes = g_pCSchemaSystem->m_TypeScopes;
	int TypeScopesSize = pTypeScopes.m_Size;

	for (int i = 0; i < TypeScopesSize; i++) {
		CSchemaCacheClassMap unSorted;
		CSchemaCacheClassMap sorted;

		CSchemaCacheEnumVector enums;

		std::vector<std::string> orderOfSelection;

		CSchemaSystemTypeScope* pTypeScope = pTypeScopes.Element(i);

		if (!ProccesTypeScope(pTypeScope, enums, unSorted, sorted, orderOfSelection))
			continue;

		bool changed = true;
		while (!unSorted.empty() && changed)
			changed = SchemaDumper::ResolveStep(unSorted, sorted, orderOfSelection);

		while (!unSorted.empty() && SchemaDumper::ResolveStep(unSorted, sorted, orderOfSelection));
		auto missingParrents = ResolveOrphans(unSorted, sorted, orderOfSelection);

		for (const std::string& name : missingParrents) {
			lg::Warn("[SCHEMA DUMPER]", "Could not resolve class %s\n", name.c_str());
		}

		std::string sScopeName = pTypeScope->m_szScopeName;
		std::string toRemove = ".dll";

		DumperData_t::ModuleDumpData_t moduleDumpData;
		moduleDumpData.m_sModuleName	= sScopeName;
		moduleDumpData.m_nDumpedClasses = missingParrents.size() + sorted.size();
		moduleDumpData.m_nDumpedEnums	= enums.size();

		m_DumpData.m_ModuleData.push_back(std::move(moduleDumpData));

		GenerateHeaderFile(directory, sScopeName, enums, sorted, missingParrents, orderOfSelection);
	}

	auto end = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

	m_DumpData.m_nExecutionTime = duration.count();
	for (const auto& data : m_DumpData.m_ModuleData) {
		m_DumpData.m_nTotalDumpedClasses += data.m_nDumpedClasses;
		m_DumpData.m_nTotalDumpedEnums += data.m_nDumpedEnums;
	}

	printf("\n");
	lg::Success("[SCHEMA DUMPER]", "Dump successfully generated in \"%s\"\n", fs::absolute(directory).string().data());

	GenerateInfoFile(directory);
}

std::string SchemaDumper::GetBaseClassName(CSchemaClassInfo* pClassInfo) {
	auto pBaseClass = SafeRead<SchemaBaseClassInfoData_t*>(pClassInfo, offsetof(CSchemaClassInfo, m_pBaseClasses));
	if (!pBaseClass)
		return "";

	auto pClass = SafeRead<CSchemaClassInfo*>((*pBaseClass), offsetof(SchemaBaseClassInfoData_t, m_pClass));
	if (!pClass)
		return "";

	if (!SafeRead<const char*>((*pClass), offsetof(CSchemaClassInfo, m_pszName)))
		return "";

	auto psBaseClass = SafeReadString((*pClass)->m_pszName);
	return psBaseClass ? std::string(*psBaseClass) : "";
}

// Object processing
bool SchemaDumper::ProccesTypeScope(
	CSchemaSystemTypeScope* pTypeScope,
	CSchemaCacheEnumVector& enums,
	CSchemaCacheClassMap&	cachedClasses,
	CSchemaCacheClassMap&	toFile,
	CSchemaStringVector&	order)
{
	auto ScopeName = SafeReadString(pTypeScope->m_szScopeName);
	if (!ScopeName)
		return false;

	printf("\n");
	lg::Info("[SCHEMA DUMPER]", "Dumping %s\n", (*ScopeName).data());

	bool result;
	result = ProcessEnums(pTypeScope, enums);
	result = ProcessClasses(pTypeScope, cachedClasses, toFile, order);

	return result;
}

bool SchemaDumper::ProcessClasses(
	CSchemaSystemTypeScope* pTypeScope,
	CSchemaCacheClassMap&	unSorted,
	CSchemaCacheClassMap&	sorted,
	CSchemaStringVector&	order)
{
	auto pDeclaredClasses = SafeRead<SchemaDeclaredTypeEntry_t<CSchemaType_DeclaredClass>*>(pTypeScope, offsetof(CSchemaSystemTypeScope, m_pDeclaredClasses));
	if (!pDeclaredClasses || !*pDeclaredClasses)
		return false;

	uint16_t nNumDeclaredClasses = pTypeScope->m_nNumDeclaredClasses;
	SchemaDeclaredTypeEntry_t<CSchemaType_DeclaredClass>* pArray = *pDeclaredClasses;

	ProcessObjectGeneric<SchemaDeclaredTypeEntry_t<CSchemaType_DeclaredClass>, CSchemaClassInfo>(
		pArray,
		nNumDeclaredClasses,
		offsetof(CSchemaType_DeclaredClass, m_pClassInfo),
		ProcessSingleClass,
		unSorted,
		sorted,
		order
	);

	return true;
}

bool SchemaDumper::ProcessEnums(
	CSchemaSystemTypeScope* pTypeScope,
	CSchemaCacheEnumVector& enums)
{
	auto pDeclaredEnums = SafeRead<SchemaDeclaredTypeEntry_t<CSchemaType_DeclaredEnum>*>(pTypeScope, offsetof(CSchemaSystemTypeScope, m_pDeclaredEnums));
	if (!pDeclaredEnums || !*pDeclaredEnums)
		return false;

	uint16_t nNumDeclaredEnums = pTypeScope->m_nNumDeclaredEnums;

	SchemaDeclaredTypeEntry_t<CSchemaType_DeclaredEnum>* pArray = *pDeclaredEnums;

	ProcessObjectGeneric<SchemaDeclaredTypeEntry_t<CSchemaType_DeclaredEnum>, CSchemaEnumInfo>(
		pArray,
		nNumDeclaredEnums,
		offsetof(CSchemaType_DeclaredEnum, m_pEnumInfo),
		ProcessSingleEnum,
		enums
	);

	return true;
}

bool SchemaDumper::ProcessSingleClass(
	CSchemaClassInfo*		pClassInfo,
	CSchemaCacheClassMap&	unsorted,
	CSchemaCacheClassMap&	sorted,
	CSchemaStringVector&	order)
{
	auto pName = SafeReadString(pClassInfo->m_pszName);
	if (!pName)
		return false;

	std::string sBaseClass = GetBaseClassName(pClassInfo);

	lg::Info("[SCHEMA DUMPER]", "Dumping class %s\n", (*pName).data());

	SchemaCacheClassInfo_t SchemaInfo	= {};
	SchemaInfo.m_sClassName			= std::string(*pName);
	SchemaInfo.m_Fields				= CollectClassFields(pClassInfo);
	SchemaInfo.m_sParentName		= sBaseClass;
	SchemaInfo.m_nFlags			= pClassInfo->m_nFlags1;

	if (sBaseClass.empty()) {
		sorted[std::string(*pName)] = std::move(SchemaInfo);
		order.push_back(std::string(*pName));
	}
	else
		unsorted[std::string(*pName)] = SchemaInfo;

	return true;
}

bool SchemaDumper::ProcessSingleEnum(
	CSchemaEnumInfo*		pEnumInfo,
	CSchemaCacheEnumVector& enums)
{
	auto pName = SafeReadString(pEnumInfo->m_pszName);
	if (!pName)
		return false;

	lg::Info("[SCHEMA DUMPER]", "Dumping enum %s\n", (*pName).data());

	std::string sType = std::format("std::uint{}_t", pEnumInfo->m_nSize * 8);

	SchemaCacheEnumInfo_t SchemaInfo	= {};
	SchemaInfo.m_sEnumName				= std::string(*pName);
	SchemaInfo.m_Fields					= CollectEnumFields(pEnumInfo);
	SchemaInfo.m_nFlags					= pEnumInfo->m_nFlags;
	SchemaInfo.m_sType					= sType;

	enums.push_back(SchemaInfo);

	return true;
}

// Collecting fields
SchemaDumper::CSchemaCacheClassFieldVector SchemaDumper::CollectClassFields(CSchemaClassInfo* pClassInfo) {
	CSchemaCacheClassFieldVector fields;
	
	auto pFields = SafeRead<SchemaClassFieldData_t*>(pClassInfo, offsetof(CSchemaClassInfo, m_pFields));
	if (!pFields)
		return fields;

	SchemaClassFieldData_t* pFieldsArray = *pFields;
	uint16_t nFieldCount = pClassInfo->m_nFieldCount;

	auto extractor = [](CSchemaCacheClassFieldVector& vec, const SchemaClassFieldData_t& field) {

		std::string sTypeInfo = "";
		if (field.m_pType) {
			auto pTypeInfo = SafeReadString(field.m_pType->m_sTypeName);
			sTypeInfo = pTypeInfo ? (*pTypeInfo) : "";
			std::erase(sTypeInfo, ' ');
		}

		vec.push_back({ field.m_pszName, std::format("0x{:04X}", field.m_nSingleInheritanceOffset), sTypeInfo });
	};

	CollectFieldsGeneric<CSchemaCacheClassFieldVector, SchemaClassFieldData_t>(fields, pFieldsArray, nFieldCount, extractor);

	return fields;
}

SchemaDumper::CSchemaCacheEnumFieldVector SchemaDumper::CollectEnumFields(CSchemaEnumInfo* pEnumInfo) {
	CSchemaCacheEnumFieldVector fields;

	auto pEnumerators = SafeRead<SchemaEnumeratorInfoData_t*>(pEnumInfo, offsetof(SchemaEnumInfoData_t, m_pEnumerators));
	if (!pEnumerators)
		return fields;

	SchemaEnumeratorInfoData_t* pEnumsArray = *pEnumerators;
	uint16_t nEnumeratorCount = pEnumInfo->m_nEnumeratorCount;

	auto extractor = [](CSchemaCacheEnumFieldVector& vec, const SchemaEnumeratorInfoData_t& field) {
		vec.push_back({ field.m_pszName, field.m_nValue });
	};

	CollectFieldsGeneric<CSchemaCacheEnumFieldVector, SchemaEnumeratorInfoData_t>(fields, pEnumsArray, nEnumeratorCount, extractor);

	return fields;
}

// Sorting
bool SchemaDumper::ResolveStep(CSchemaCacheClassMap& unSorted, CSchemaCacheClassMap& sorted, CSchemaStringVector& order) {
	auto ResolveElement = [&](auto it) {
		order.push_back(it->first);
		sorted[it->first] = std::move(it->second);
		return unSorted.erase(it);
	};

	bool changed = false;
	for (auto it = unSorted.begin(); it != unSorted.end(); ) {
		if (sorted.find(it->second.m_sParentName) != sorted.end()) {
			it = ResolveElement(it);
			changed = true;
		}
		else {
			++it;
		}
	}

	return changed;
}

SchemaDumper::CSchemaUnorderedSetString SchemaDumper::ResolveOrphans(
	CSchemaCacheClassMap&	unSorted,
	CSchemaCacheClassMap&	sorted,
	CSchemaStringVector&	order)
{
	auto ResolveElement = [&](auto it) {
		order.push_back(it->first);
		sorted[it->first] = std::move(it->second);
		return unSorted.erase(it);
	};
	
	while (!unSorted.empty()) {
		if (!ResolveStep(unSorted, sorted, order))
			if (!unSorted.empty())
				ResolveElement(unSorted.begin());
	}

	CSchemaUnorderedSetString missingParents;

	for (const std::string& className : order) {
		const auto& info = sorted[className];
		std::string parentName = info.m_sParentName;
		std::replace(parentName.begin(), parentName.end(), ':', '_');

		if (!parentName.empty() && sorted.find(parentName) == sorted.end())
			missingParents.insert(parentName);
	}

	return missingParents;
}

// Generating files
void SchemaDumper::GenerateClass(std::ofstream& file, CSchemaCacheClassMap& classes, CSchemaStringVector& order) {
	std::string tab = "    ";
	
	for (const std::string& originalName : order) {
		const auto& info = classes[originalName];

		std::string className = info.m_sClassName;
		std::string sParentName = info.m_sParentName;

		std::replace(sParentName.begin(), sParentName.end(), ':', '_');
		std::replace(className.begin(), className.end(), ':', '_');

		auto WriteClassFlag = [&](SchemaClassFlags1_t flag, std::string onTrue) {
			if (info.m_nFlags & flag) {
				file << tab << tab << "// ";
				file << onTrue;
				file << "\n";
			}
		};

		WriteClassFlag(SCHEMA_CF1_HAS_VIRTUAL_MEMBERS,		"Has VTable"				);
		WriteClassFlag(SCHEMA_CF1_IS_ABSTRACT,				"Is Absract"				);
		WriteClassFlag(SCHEMA_CF1_HAS_TRIVIAL_CONSTRUCTOR,	"Has Trivial Constructor"	);
		WriteClassFlag(SCHEMA_CF1_HAS_TRIVIAL_DESTRUCTOR,	"Has Trivial Destructor"	);
		WriteClassFlag(SCHEMA_CF1_CONSTRUCT_ALLOWED,		"Construct Allowed"			);
		WriteClassFlag(SCHEMA_CF1_MODULE_LOCAL_TYPE_SCOPE,	"Local Type Scope"			);
		WriteClassFlag(SCHEMA_CF1_GLOBAL_TYPE_SCOPE,		"Global Type Scope"			);

		std::string structureType = className.ends_with("_t") ? "struct" : "class";
		std::string classHeader = sParentName == "" ? std::format("{} {} {{", structureType, className) : std::format("class {} : public {} {{", className, sParentName);

		file << tab << tab;
		file << classHeader << "\n";

		file << tab << tab;
		file << "public:\n";

		size_t maxNameLen = 0;
		for (const auto& field : info.m_Fields) {
			if (field.m_sName.length() > maxNameLen)
				maxNameLen = field.m_sName.length();
		}

		for (const auto& [name, offset, typeInfo] : info.m_Fields) {
			std::string padding(maxNameLen - name.length(), ' ');
			file << tab << tab << tab;
			file << std::format("static constexpr std::uintptr_t {}{} = {}; // {}\n", name, padding, offset, typeInfo);
		}

		file << tab << tab << "};\n\n";
	}
}

void SchemaDumper::GenerateEnum(std::ofstream& file, CSchemaCacheEnumVector& enums) {
	std::string tab = "    ";

	for (const auto& info : enums) {
		auto formatValue = [&](int64_t value) -> std::string {
			if (value >= 0) return std::format("0x{:X}", value);

			if (info.m_sType == "std::uint8_t")		return std::format("0x{:02X}",	static_cast<uint8_t>(value));
			if (info.m_sType == "std::uint16_t")	return std::format("0x{:04X}",	static_cast<uint16_t>(value));
			if (info.m_sType == "std::uint32_t")	return std::format("0x{:08X}",	static_cast<uint32_t>(value));
			if (info.m_sType == "std::uint64_t")	return std::format("0x{:016X}", static_cast<uint64_t>(value));

			return std::format("0x{:X}", value);
		};

		std::string sEnumName = info.m_sEnumName;
		std::replace(sEnumName.begin(), sEnumName.end(), ':', '_');

		auto WriteClassFlag = [&](SchemaEnumFlags_t flag, std::string onTrue) {
			if (info.m_nFlags & flag) {
				file << tab << tab << "// ";
				file << onTrue;
				file << "\n";
			}
		};

		WriteClassFlag(SCHEMA_EF_MODULE_LOCAL_TYPE_SCOPE,	"Local Type Scope"	);
		WriteClassFlag(SCHEMA_EF_GLOBAL_TYPE_SCOPE,			"Global Type Scope"	);

		std::string enumHeader = std::format("enum class {} : {} {{", sEnumName, info.m_sType);

		file << tab << tab;
		file << enumHeader << "\n";

		size_t maxNameLen = 0;
		for (const auto& field : info.m_Fields) {
			if (field.m_sName.length() > maxNameLen)
				maxNameLen = field.m_sName.length();
		}

		size_t index = 0;
		for (const auto& [name, value] : info.m_Fields) {
			std::string padding(maxNameLen - name.length(), ' ');
			file << tab << tab << tab;

			bool isLast = (++index == info.m_Fields.size());
			
			std::string fixedValue = formatValue(value);

			file << std::format("{}{} = {}{}\n", name, padding, fixedValue, isLast ? "" : ",");
		}

		file << tab << tab << "};\n\n";
	}
}

void SchemaDumper::GenerateHeaderFile(
	const fs::path&				directory,
	std::string_view			sScopeName,
	CSchemaCacheEnumVector&		enums,
	CSchemaCacheClassMap&		classes,
	CSchemaUnorderedSetString&	missingParents,
	CSchemaStringVector&		order)
{
	std::string sCleanedScopeName = std::string(sScopeName);
	std::string toRemove = ".dll";
	size_t pos = sCleanedScopeName.find(toRemove);
	if (pos != std::string::npos) {
		sCleanedScopeName.erase(pos, toRemove.length());
	}

	fs::path filePath = directory / std::format("{}.hpp", sCleanedScopeName);
	std::ofstream file(filePath);

	if (!file.is_open()) {
		lg::Error("[SCHEMA DUMPER]", "Failed to create file: %s", filePath.string().data());
		return;
	}

	std::string tab = "    ";

	file << "#pragma once\n#include <cstdint>\n\n";
	file << "namespace offsets {\n";
	file << tab;
	file << std::format("namespace {} {{\n", sCleanedScopeName);

	if (!missingParents.empty()) {
		file << tab << tab;
		file << "/* --- UNRESOLVED CLASSES --- */\n";
		for (const std::string& parent : missingParents) {
			file << tab << tab;
			file << "class " << parent << " {}; \n";
		}
		file << tab << tab;
		file << "/* --- END --- */\n\n";
	}

	GenerateEnum(file, enums);
	GenerateClass(file, classes, order);

	file << tab << "}\n";
	file << "}\n";

	file.close();
}

void SchemaDumper::GenerateInfoFile(const fs::path& directory) {
	auto GetModuleTimeStamp = [](const char* moduleName) -> DWORD {
		HMODULE hModule = GetModuleHandleA(moduleName);
		if (!hModule) return 0;

		auto pDosHeader = (PIMAGE_DOS_HEADER)hModule;
		if (pDosHeader->e_magic != IMAGE_DOS_SIGNATURE) return 0;

		auto pNtHeaders = (PIMAGE_NT_HEADERS)((BYTE*)hModule + pDosHeader->e_lfanew);
		if (pNtHeaders->Signature != IMAGE_NT_SIGNATURE) return 0;

		return pNtHeaders->FileHeader.TimeDateStamp;
	};

	auto TimeStampToString = [](DWORD timestamp) -> std::string {
		std::time_t rawTime = (std::time_t)timestamp;
		std::tm timeInfo;
		if (localtime_s(&timeInfo, &rawTime) != 0) {
			return "Invalid Time";
		}

		std::stringstream ss;
		ss << std::put_time(&timeInfo, "%Y-%m-%d %H:%M:%S");
		return ss.str();
	};

	for (auto& data : m_DumpData.m_ModuleData)
		data.m_sTimestamp = TimeStampToString(GetModuleTimeStamp(data.m_sModuleName.data()));

	auto now = std::chrono::system_clock::now();
	std::time_t now_c = std::chrono::system_clock::to_time_t(now);

	std::stringstream ss;
	ss << std::put_time(std::localtime(&now_c), "%Y-%m-%d %H:%M:%S");
	m_DumpData.m_Date = ss.str();

	fs::path filePath = directory / "info.txt";
	std::ofstream file(filePath);

	if (!file.is_open()) {
		lg::Error("[SCHEMA DUMPER]", "Failed to create file: %s", filePath.string().data());
		return;
	}

	std::string tab = "    ";

	file << "[General]\n";
	file << tab << "Game: Counter-Strike 2\n";
	file << tab << std::format("Dump Date: {}\n", m_DumpData.m_Date);
	file << tab << "Generator: Shade Dumper 1.0\n\n";

	file << "[Modules]\n";
	for (const auto& data : m_DumpData.m_ModuleData) {
		file << tab << data.m_sModuleName << "\n";
		file << tab << tab << std::format("- Timestamp: {}\n", data.m_sTimestamp);
		file << tab << tab << std::format("- Classes Dumped: {}\n", data.m_nDumpedClasses);
		file << tab << tab << std::format("- Enumerators Dumped: {}\n", data.m_nDumpedEnums);
		file << "\n";
	}

	file << "[Stats]\n";
	file << tab << std::format("Total Classes Dumped: {}\n", m_DumpData.m_nTotalDumpedClasses);
	file << tab << std::format("Total Enumerators Dumped: {}\n", m_DumpData.m_nTotalDumpedEnums);
	file << tab << std::format("Execution Time: {}ms\n", m_DumpData.m_nExecutionTime);

	file.close();
}
