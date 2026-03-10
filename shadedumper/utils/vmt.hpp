#pragma once
#include <Windows.h>

#include "debug.hpp"

#define CALL_VIRTUAL(instance, type, index, ...) \
	vmt::CallVirtual<type>(instance, index, __VA_ARGS__)

namespace vmt {
	template <typename T>
	T GetVirtual(void* instance, size_t index) {
		if (!instance)
			return T{};

		void** vft = *static_cast<void***>(instance);
		if (!vft)
			return T{};

		T method = reinterpret_cast<T>(vft[index]);
		if (!method)
			return T{};

		return method;
	}

	template <typename T, typename... Args>
	T CallVirtual(void* instance, size_t index, Args... args) {
		auto pFunc = GetVirtual<T(__fastcall*)(void*, Args...)>(instance, index);
		if (!pFunc)
			return T{};

		return pFunc(instance, args...);
	}
}