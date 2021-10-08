// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BaseGameplayMap.BaseGameplayMap_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABaseGameplayMap_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BaseGameplayMap.BaseGameplayMap_C.ReceiveBeginPlay");

	ABaseGameplayMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BaseGameplayMap.BaseGameplayMap_C.ExecuteUbergraph_BaseGameplayMap
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseGameplayMap_C::ExecuteUbergraph_BaseGameplayMap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BaseGameplayMap.BaseGameplayMap_C.ExecuteUbergraph_BaseGameplayMap");

	ABaseGameplayMap_C_ExecuteUbergraph_BaseGameplayMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
