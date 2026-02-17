#pragma once
#include <vector>
#include <string>
#include <Windows.h>

class PatternScan {
private:
	struct PatternData {
		std::vector<uint8_t> m_bytes;
		std::string m_szMask;
	};

	uint8_t*				m_pTextSection;
	DWORD					m_nSectionSize;

	bool					m_bIsInit;

	static PatternData PatternToBytes(std::string_view pattern);
	bool FindTextSection(HMODULE hModule);

public:
	PatternScan() {};
	PatternScan(HMODULE hModule);
	PatternScan(const std::string& module_name);

	PatternScan(const PatternScan&) = delete;
	PatternScan& operator=(const PatternScan&) = delete;
	PatternScan(PatternScan&&) = default;
	PatternScan& operator=(PatternScan&&) = default;

	uintptr_t Find(std::string_view pattern);

	bool IsInitialized() { return m_bIsInit; }
};