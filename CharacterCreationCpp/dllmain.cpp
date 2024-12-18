// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "inc/main.h"
#include "mainScript.h"

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        scriptRegister(hModule, MainScriptMain);
        break;
    case DLL_PROCESS_DETACH:
        MainScriptAbort();
        scriptUnregister(hModule);
        break;
    }
    return TRUE;
}

