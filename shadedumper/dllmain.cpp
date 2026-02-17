#include <Windows.h>

#include "utils/console.hpp"

#include "dumper/schemadumper.hpp"

DWORD WINAPI OnDllAttach(LPVOID lpParam) {
#ifdef _DEBUG
    utils::AttachConsole();
#endif

    char path[MAX_PATH];
    GetModuleFileNameA(static_cast<HMODULE>(lpParam), path, MAX_PATH);
    fs::path directory(path);

    SchemaDumper::Dump(directory.parent_path());

    utils::WaitForPress();
    FreeLibraryAndExitThread(static_cast<HMODULE>(lpParam), 1);

    return TRUE;
}

DWORD WINAPI OnDllDetach() {
#ifdef _DEBUG
    utils::DetachConsole();
#endif

    return TRUE;
}

BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved)
{
    switch (ul_reason_for_call) {
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(hModule);
            CreateThread(nullptr, 0, OnDllAttach, hModule, 0, nullptr);
            return TRUE;
        case DLL_PROCESS_DETACH:
            if (lpReserved == nullptr)
                return OnDllDetach();
            return TRUE;
        default:
            return TRUE;
    }
}