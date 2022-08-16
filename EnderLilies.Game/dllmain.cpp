// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

#include <Windows.h>
#include <iostream>
#include <Xinput.h>
#include <thread>
#include <fstream>

#include "SDK.h"
#include "lib/detours.h"
#include "Randomizer.h"


template<class T>
T DoDetourFunction(const char* str, PVOID target);
bool DoDetour();


bool g_cancel = false;
Randomizer* rando;

typedef int (*AddDifficultyPtr)(CG::AGameModeZenithBase*, void*);
static AddDifficultyPtr addDifficulty = nullptr;
__declspec(noinline) int  AddDifficultyHook(CG::AGameModeZenithBase* obj, void *param)
{
	return addDifficulty(obj, param);
}

class ProcessEventCache
{
public:
	int _objComparisonIndex;
	int _fnComparisonIndex;

	const char* _objName;
	const char* _fnName;
	ProcessEventCache(const char* objName, const char* fnName) :
		_objName(objName), _fnName(fnName) { }

	bool Match(CG::UObject* obj, CG::UFunction* fn)
	{
		if (_objComparisonIndex == 0)
		{
			if (obj->Name.GetAnsiName() != _objName)
				return false;
			_objComparisonIndex = obj->Name.ComparisonIndex;
		}
		if (_fnComparisonIndex == 0)
		{
			if (fn->Name.GetAnsiName() != _fnName)
				return false;
			_fnComparisonIndex = fn->Name.ComparisonIndex;
		}
		return obj->Name.ComparisonIndex == _objComparisonIndex && fn->Name.ComparisonIndex == _fnComparisonIndex;
	}
};


typedef void (*ProcessEventPtr)(CG::UObject*, CG::UFunction*, void*);
static ProcessEventPtr processEvent;
__declspec(noinline) void  ProcessEventHook(CG::UObject* obj, CG::UFunction* fn, void* parms)
{
	static ProcessEventCache controllerTick("PC_Base_C", "ReceiveTick");
	static ProcessEventCache onEquipSpirit("SpiritCompanionComponent", "OnEquipSpirit");

	if (rando->IsReady())
	{
		if (controllerTick.Match(obj, fn))
			rando->Update();
	}
	if (onEquipSpirit.Match(obj, fn))
		rando->EquipSpirit((CG::USummonerComponent_OnEquipSpirit_Params*)parms);
	processEvent(obj, fn, parms);
}


template<class T>
T DoDetourFunction(const char *str, PVOID target)
{
	if (rando->World() == nullptr || rando->World()->Name.ComparisonIndex <= 0)
		return nullptr;
	CG::UFunction* fn = CG::UObject::FindObject<CG::UFunction>(str);
	if (fn == nullptr)
		return nullptr;
	T og = reinterpret_cast<T>(fn->Func);
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)og, target);
	LONG error = DetourTransactionCommit();

	if (error == NO_ERROR) {
		std::cout << "No error detouring " << str << std::endl;
		return og;
	}
	else {
		std::cout << " Error detouring " << error << std::endl;
		return nullptr;
	}
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


	CG::InitSdk116();

	char  dllName[MAX_PATH];
	GetModuleFileNameA(hModule, dllName, MAX_PATH); 
	std::string path(dllName);
	path = path.substr(0, path.find_last_of("\\/"));
	rando = new Randomizer(path);
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


namespace
{
	HMODULE xinput;
}

BOOL DllMain(HMODULE hModule,
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
		/*
		xinput = LoadLibrary(L"C:\\Windows\\System32\\xinput1_3-orig.dll");
		if (xinput == 0)
			xinput = LoadLibrary(L"C:\\Windows\\System32\\xinput1_3.dll");
			*/
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

template<class T>
T set_call(T& ptr, const char* name) {
	if (ptr == 0)
		ptr = (T)GetProcAddress(xinput, name);
	return ptr;
}

template<class T>
T set_call(T& ptr, int ord) {
	if (ptr == 0)
		ptr = (T)GetProcAddress(xinput, (const char*)ord);
	return ptr;
}

void WINAPI XInputEnable(BOOL state) WIN_NOEXCEPT
{
	static void (WINAPI * orig)(BOOL state);
	return set_call(orig, __FUNCTION__)(state);
}

DWORD WINAPI XInputGetBatteryInformation(DWORD dwUserIndex, BYTE devType, XINPUT_BATTERY_INFORMATION* pBatteryInformation) WIN_NOEXCEPT
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, BYTE devType, XINPUT_BATTERY_INFORMATION * pBatteryInformation);
	return set_call(orig, __FUNCTION__)(dwUserIndex, devType, pBatteryInformation);
}

DWORD WINAPI XInputGetCapabilities(DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES* pCapabilities) WIN_NOEXCEPT
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES * pCapabilities);
	return set_call(orig, __FUNCTION__)(dwUserIndex, dwFlags, pCapabilities);
}

DWORD WINAPI XInputGetDSoundAudioDeviceGuids(DWORD dwUserIndex, GUID* pDSoundRenderGuid, GUID* pDSoundCaptureGuid)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, GUID * pDSoundRenderGuid, GUID * pDSoundCaptureGuid);
	return set_call(orig, __FUNCTION__)(dwUserIndex, pDSoundRenderGuid, pDSoundCaptureGuid);
}

DWORD WINAPI XInputGetKeystroke(DWORD dwUserIndex, DWORD dwReserved, PXINPUT_KEYSTROKE pKeystroke) WIN_NOEXCEPT
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, DWORD dwReserved, PXINPUT_KEYSTROKE pKeystroke);
	return set_call(orig, __FUNCTION__)(dwUserIndex, dwReserved, pKeystroke);
}

DWORD WINAPI XInputGetState(DWORD dwUserIndex, XINPUT_STATE* pState) WIN_NOEXCEPT
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, XINPUT_STATE * pState);
	return set_call(orig, __FUNCTION__)(dwUserIndex, pState);
}

DWORD WINAPI XInputSetState(DWORD dwUserIndex, XINPUT_VIBRATION* pVibration) WIN_NOEXCEPT
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, XINPUT_VIBRATION * pVibration);
	return set_call(orig, __FUNCTION__)(dwUserIndex, pVibration);
}

DWORD WINAPI XInputOrd100(DWORD dwUserIndex, XINPUT_STATE* pState)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, XINPUT_STATE * pState);
	return set_call(orig, "XInputGetState")(dwUserIndex, pState);
}

DWORD WINAPI XInputOrd101(DWORD dwUserIndex, DWORD unk, void* ptr)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex, DWORD unk, void* ptr);
	return set_call(orig, 101)(dwUserIndex, unk, ptr);
}

DWORD WINAPI XInputOrd102(DWORD dwUserIndex)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex);
	return set_call(orig, 102)(dwUserIndex);
}

DWORD WINAPI XInputOrd103(DWORD dwUserIndex)
{
	static DWORD(WINAPI * orig)(DWORD dwUserIndex);
	return set_call(orig, 103)(dwUserIndex);
}
