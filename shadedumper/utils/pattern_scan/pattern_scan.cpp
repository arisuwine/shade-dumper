#include "pattern_scan.hpp"

#include <psapi.h>
#include <sstream>

#include "../debug.hpp"

PatternScan::PatternData PatternScan::PatternToBytes(std::string_view pattern) {
	PatternData result;
	std::stringstream ss(std::string{pattern});
	std::string word;

	while (ss >> word) {
		if (word == "?" || word == "??") {
			result.m_bytes.push_back(0);
			result.m_szMask.push_back('?');
		}
		else {
			result.m_bytes.push_back(static_cast<uint8_t>(std::strtoul(word.c_str(), nullptr, 16)));
			result.m_szMask.push_back('x');
		}
	}

	return result;
}

bool PatternScan::FindTextSection(HMODULE hModule) {
	MODULEINFO info = { 0 };
	if (!GetModuleInformation(GetCurrentProcess(), hModule, &info, sizeof(MODULEINFO))) {
		lg::Error("[PATTERN SCAN]", "Failed to get module information: %d\n", GetLastError());
	}

	BYTE* pBaseAddress = reinterpret_cast<BYTE*>(info.lpBaseOfDll);

	PIMAGE_DOS_HEADER DosHeader = reinterpret_cast<PIMAGE_DOS_HEADER>(pBaseAddress);
	PIMAGE_NT_HEADERS64 NtHeaders = reinterpret_cast<PIMAGE_NT_HEADERS64>(pBaseAddress + DosHeader->e_lfanew);
	PIMAGE_SECTION_HEADER firstSection = IMAGE_FIRST_SECTION(NtHeaders);

	WORD NumberOfSections = NtHeaders->FileHeader.NumberOfSections;

	for (WORD i = 0; i < NumberOfSections; i++) {
		std::string_view sectionName(reinterpret_cast<char*>(firstSection[i].Name), IMAGE_SIZEOF_SHORT_NAME);
		if (sectionName.starts_with(".text")) {
			m_pTextSection = reinterpret_cast<uint8_t*>(pBaseAddress + firstSection[i].VirtualAddress);
			m_nSectionSize = firstSection[i].Misc.VirtualSize;
			
			return true;
		}
	}

	lg::Error("[PATTERN SCAN]", "Failed to find .text section at 0x%p: %d\n", pBaseAddress);
}

PatternScan::PatternScan(const std::string& module_name) : m_pTextSection(nullptr), m_nSectionSize(0), m_bIsInit(false) {
	HMODULE hModule;
	if (!(hModule = GetModuleHandleA(module_name.data()))) {
		lg::Error("[PATTERN SCAN]", "Module Name is invalid argument\n");

		return;
	}

	if (!FindTextSection(hModule))
		return;

	m_bIsInit = true;
}

PatternScan::PatternScan(HMODULE hModule) : m_pTextSection(nullptr), m_nSectionSize(0), m_bIsInit(false) {
	if (!hModule) {
		lg::Error("[PATTERN SCAN]", "HMODULE is invalid argument\n");
		return;
	}

	if (!FindTextSection(hModule))
		return;

	m_bIsInit = true;
}

uintptr_t PatternScan::Find(std::string_view pattern) {
	auto [bytes, mask] = PatternToBytes(pattern);

	if (bytes.empty())
		return 0;

	if (bytes.size() != mask.size())
		return 0;

	if (m_nSectionSize < bytes.size())
		return 0;

	if (!m_pTextSection)
		return 0;

	const size_t patternSize = bytes.size();
	const size_t scanSize = m_nSectionSize - patternSize;

	const uint8_t* pScanBytes = bytes.data();
	const char* pMask = mask.data();

	for (size_t i = 0; i <= scanSize; ++i) {
		bool found = true;

		for (size_t j = 0; j < patternSize; ++j) {
			if (pMask[j] == 'x' && m_pTextSection[i + j] != pScanBytes[j]) {
				found = false;
				break;
			}
		}

		if (found) {
			return reinterpret_cast<uintptr_t>(m_pTextSection + i);
		}
	}

	return 0;
}