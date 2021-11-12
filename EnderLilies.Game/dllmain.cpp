// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

#include <Windows.h>
#include <iostream>
#include "SDK.h"
#include <thread>
#include "lib/detours.h"
#include "Randomizer.h"

bool g_cancel = false;
Randomizer* rando;

typedef void (*ProcessEventPtr)(CG::UObject*, CG::UFunction*, void*);
static ProcessEventPtr processEvent;
__declspec(noinline) void  ProcessEventHook(CG::UObject* obj, CG::UFunction* fn, void* parms)
{
	static int pcName = 0;
	static int tickFname = 0;
	if (pcName == 0 && obj->GetName().compare(0, 9, "PC_Base_C") == 0)
		pcName = obj->Name.ComparisonIndex;
	if (tickFname == 0 && fn->GetName() == "ReceiveTick")
		tickFname = fn->Name.ComparisonIndex;
	if (rando->IsReady() && pcName == obj->Name.ComparisonIndex && tickFname == fn->Name.ComparisonIndex)
		rando->Update();
	processEvent(obj, fn, parms);
}


bool DoDetour()
{
	if (rando->World() == nullptr || rando->World()->Name.ComparisonIndex <= 0)
		return false;

	processEvent = CG::GetVFunction<void(*)(CG::UObject*, CG::UFunction*, void*)>(rando->World(), 67);
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)processEvent, ProcessEventHook);
	LONG error = DetourTransactionCommit();

	if (error == NO_ERROR) {
		std::cout << "No error detouring " << std::endl;
		return true;
	}
	else {
		std::cout << " Error detouring " << error << std::endl;
		return false;
	}
}

DWORD APIENTRY HackMain(HMODULE hModule)
{
#ifdef _DEBUG
	AllocConsole();
	FILE* fDummy;
	freopen_s(&fDummy, "CONIN$", "r", stdin);
	freopen_s(&fDummy, "CONOUT$", "w", stdout);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
#endif
	std::cout << "RANDOMIZER" << std::endl;
	Sleep(1000);
	CG::InitSdk();

	char  dllName[MAX_PATH];
	GetModuleFileNameA(hModule, dllName, MAX_PATH); 
	std::string path(dllName);
	path = path.substr(0, path.find_last_of("\\/"));

	auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA("EnderLiliesSteam-Win64-Shipping.exe"));
	rando = new Randomizer(path, (CG::UWorld**)(mBaseAddress + 0x4655590));
	//GEngine = *(CG::UGameEngine**)(mBaseAddress + 0x4651CC0);
	while (!g_cancel)
	{
		Sleep(100);
		if (DoDetour())
			break;
	}
	FreeLibraryAndExitThread(hModule, 0);
	return false;
}


void CleanUp()
{
	std::cout << "Bye World!" << std::endl;
	g_cancel = true;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	if (DetourIsHelperProcess()) {
		return TRUE;
	}
	std::thread* second;
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		second = new std::thread(HackMain, hModule);
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		CleanUp();
		break;
	}
	return TRUE;
}

