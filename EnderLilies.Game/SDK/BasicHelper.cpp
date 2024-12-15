// Name: enderlilies, Version: 1.1.3

#include "pch.h"
#include "../SDK.h"
#include "../UnrealFunctions.hpp"
#include <iostream>
#include <sstream>



/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
GNAME_TYPE* FName::GNames = nullptr;
TUObjectArray* UObject::GObjects = nullptr;
UWorld** UWorld::GWorld = nullptr;

//---------------------------------------------------------------------------
#if defined(EXTERNAL_PROPS)
MemoryManager* Mem = new MemoryManager();
#else
bool InitSdk(const std::string& moduleName, const uintptr_t gObjectsOffset, const uintptr_t gNamesOffset, const uintptr_t gWorldOffset)
{
	auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(moduleName.c_str()));

	if (mBaseAddress == 0x00)
		return false;

	// FNAME::TOSTRING 0x0000000000EEAE00
	// FNAME::CONSTRUCTOR 0x00000000010D9FC0
	// FNAME::FNAME 0x0000000000EDD150
	// GUOBJECT ARRAY 0x000000000451C058

	UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + gObjectsOffset);
	FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(mBaseAddress + gNamesOffset);
	UWorld::GWorld = reinterpret_cast<CG::UWorld**>(mBaseAddress + gWorldOffset);
	RC::Function<CG::FName(const wchar_t*, Unreal::EFindName)> toto;

	Unreal::FName::ConstructorInternal.assign_address((void*)(mBaseAddress + 0xEDD150));
	Unreal::FName::ToStringInternal.assign_address((void*)(mBaseAddress + 0xEEAE00));

	return true;
}
bool InitSdk115()
{
	return InitSdk("EnderLiliesSteam-Win64-Shipping.exe", 0x451C028, 0x4503A80, 0x4651CC0);
}
bool InitSdk116()
{

	return InitSdk("EnderLiliesSteam-Win64-Shipping.exe", 0x451C068, 0x4503AC0, 0x46555D0);
}
#endif
//---------------------------------------------------------------------------
#ifdef UE4
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
#endif
//---------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

