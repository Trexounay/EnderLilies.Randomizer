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
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.CanBeMarkedAsCleared
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Interactable_Event_C::CanBeMarkedAsCleared()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.CanBeMarkedAsCleared");

	ABP_Interactable_Event_C_CanBeMarkedAsCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.AddActorBinding
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Event_C::AddActorBinding(const struct FName& Key, class AActor* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.AddActorBinding");

	ABP_Interactable_Event_C_AddActorBinding_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.GetEventAssetToPlay
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UEventAsset*                                 EventAsset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Event_C::GetEventAssetToPlay(class UEventAsset** EventAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.GetEventAssetToPlay");

	ABP_Interactable_Event_C_GetEventAssetToPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EventAsset != nullptr)
		*EventAsset = params.EventAsset;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.ConfigureEventPlayer
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Event_C::ConfigureEventPlayer(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.ConfigureEventPlayer");

	ABP_Interactable_Event_C_ConfigureEventPlayer_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.OnIsInteractable
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Interactable_Event_C::OnIsInteractable(class APlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.OnIsInteractable");

	ABP_Interactable_Event_C_OnIsInteractable_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.LaunchEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Event_C::LaunchEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.LaunchEvent");

	ABP_Interactable_Event_C_LaunchEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.OnInteract
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Event_C::OnInteract(class APlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.OnInteract");

	ABP_Interactable_Event_C_OnInteract_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.OnDialogueOver
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Event_C::OnDialogueOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.OnDialogueOver");

	ABP_Interactable_Event_C_OnDialogueOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Event_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.ReceiveEndPlay");

	ABP_Interactable_Event_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.OnEventFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Event_C::OnEventFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.OnEventFinished");

	ABP_Interactable_Event_C_OnEventFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.OnLaunchEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Event_C::OnLaunchEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.OnLaunchEvent");

	ABP_Interactable_Event_C_OnLaunchEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Interactable_Event_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.ReceiveBeginPlay");

	ABP_Interactable_Event_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Event.BP_Interactable_Event_C.ExecuteUbergraph_BP_Interactable_Event
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Event_C::ExecuteUbergraph_BP_Interactable_Event(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Event.BP_Interactable_Event_C.ExecuteUbergraph_BP_Interactable_Event");

	ABP_Interactable_Event_C_ExecuteUbergraph_BP_Interactable_Event_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
