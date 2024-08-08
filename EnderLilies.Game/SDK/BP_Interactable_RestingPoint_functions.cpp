// Name: enderlilies, Version: 1.1.3

#include "pch.h"
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
//		Name   -> Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ReplaceRestingCompanion
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCompanionData                              CompanionData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper)
void ABP_Interactable_RestingPoint_C::ReplaceRestingCompanion(const struct FCompanionData& CompanionData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ReplaceRestingCompanion");

	ABP_Interactable_RestingPoint_C_ReplaceRestingCompanion_Params params;
	params.CompanionData = CompanionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ConfigureEventPlayer
//		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_RestingPoint_C::ConfigureEventPlayer(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ConfigureEventPlayer");

	ABP_Interactable_RestingPoint_C_ConfigureEventPlayer_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnInteract
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_RestingPoint_C::OnInteract(class APlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnInteract");

	ABP_Interactable_RestingPoint_C_OnInteract_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Interactable_RestingPoint_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ReceiveBeginPlay");

	ABP_Interactable_RestingPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnSpawnCompanion
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCompanionData                              CompanionData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ABP_Interactable_RestingPoint_C::OnSpawnCompanion(const struct FCompanionData& CompanionData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnSpawnCompanion");

	ABP_Interactable_RestingPoint_C_OnSpawnCompanion_Params params;
	params.CompanionData = CompanionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnEventFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_RestingPoint_C::OnEventFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnEventFinished");

	ABP_Interactable_RestingPoint_C_OnEventFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ExecuteUbergraph_BP_Interactable_RestingPoint
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_RestingPoint_C::ExecuteUbergraph_BP_Interactable_RestingPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ExecuteUbergraph_BP_Interactable_RestingPoint");

	ABP_Interactable_RestingPoint_C_ExecuteUbergraph_BP_Interactable_RestingPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
