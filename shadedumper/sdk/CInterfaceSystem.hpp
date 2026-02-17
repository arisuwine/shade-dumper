#pragma once
#include <Windows.h>
#include <string_view>

#include "../utils/debug.hpp"

namespace CInterfaceSystem {
	#define RESOLVE_RIP_EX(type, addr, offset, size) reinterpret_cast<type*>(addr + *((int32_t*)(addr + offset)) + size)
	#define RESOLVE_RIP(type, addr) RESOLVE_RIP_EX(type, addr, 3, 7)

	template<typename T>
	static T* Get(const std::string_view& module_name, const std::string_view& sInterfaceName){
		HMODULE hModule = GetModuleHandleA(module_name.data());

		if (!hModule)
			return nullptr;

		uintptr_t CreateInterface = reinterpret_cast<uintptr_t>(GetProcAddress(hModule, "CreateInterface"));

		if (!CreateInterface)
			return nullptr;

		using InterfaceCallbackFn = void* (__cdecl*)();

		typedef struct InterfaceReg_t
		{
			InterfaceCallbackFn m_callback;
			const char* m_sName;
			InterfaceReg_t* m_pFlink;
		} InterfaceReg_t;

		InterfaceReg_t* interfaceList = *reinterpret_cast<InterfaceReg_t**>(RESOLVE_RIP(uintptr_t, CreateInterface));

		if (!interfaceList)
			return nullptr;

		for (InterfaceReg_t* it = interfaceList; it; it = it->m_pFlink)
		{
			if (!strcmp(it->m_sName, sInterfaceName.data()))
			{
				lg::Success("[+]", "Successfully found %s at %p\n", sInterfaceName.data(), it->m_callback());
				return reinterpret_cast<T*>(it->m_callback());
			}
		}

		lg::Error("", "Failed to initialize %s in %s\n", sInterfaceName.data(), module_name.data());
		return nullptr;
	}
}