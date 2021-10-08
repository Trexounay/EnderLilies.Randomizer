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
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.GetActorTransform
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTransform                                  ActorTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBP_SoundComponent_C::GetActorTransform(struct FTransform* ActorTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.GetActorTransform");

	UBP_SoundComponent_C_GetActorTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorTransform != nullptr)
		*ActorTransform = params.ActorTransform;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.GetActorLocation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SoundComponent_C::GetActorLocation(struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.GetActorLocation");

	UBP_SoundComponent_C_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.TriggerJustGuardSE
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_SoundComponent_C::TriggerJustGuardSE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.TriggerJustGuardSE");

	UBP_SoundComponent_C_TriggerJustGuardSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.TriggerLandingSE
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_SoundComponent_C::TriggerLandingSE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.TriggerLandingSE");

	UBP_SoundComponent_C_TriggerLandingSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.TriggerLandingSEWithFloorHit
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  FloorHit                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UBP_SoundComponent_C::TriggerLandingSEWithFloorHit(const struct FHitResult& FloorHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.TriggerLandingSEWithFloorHit");

	UBP_SoundComponent_C_TriggerLandingSEWithFloorHit_Params params;
	params.FloorHit = FloorHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.TriggerSoundEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFMODEvent*                                  Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SoundComponent_C::TriggerSoundEvent(class UFMODEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.TriggerSoundEvent");

	UBP_SoundComponent_C_TriggerSoundEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.AddInstanceToRemoveOnCancel
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UBP_SoundComponent_C::AddInstanceToRemoveOnCancel(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.AddInstanceToRemoveOnCancel");

	UBP_SoundComponent_C_AddInstanceToRemoveOnCancel_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_SoundComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.ReceiveBeginPlay");

	UBP_SoundComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.OnEndCommandAction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UCommandAction*                              CommandAction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SoundComponent_C::OnEndCommandAction(class UCommandAction* CommandAction, Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.OnEndCommandAction");

	UBP_SoundComponent_C_OnEndCommandAction_Params params;
	params.CommandAction = CommandAction;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.AddComponentToRemoveOnCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UFMODAudioComponent*                         AudioComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SoundComponent_C::AddComponentToRemoveOnCancel(class UFMODAudioComponent* AudioComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.AddComponentToRemoveOnCancel");

	UBP_SoundComponent_C_AddComponentToRemoveOnCancel_Params params;
	params.AudioComponent = AudioComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_SoundComponent.BP_SoundComponent_C.ExecuteUbergraph_BP_SoundComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_SoundComponent_C::ExecuteUbergraph_BP_SoundComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SoundComponent.BP_SoundComponent_C.ExecuteUbergraph_BP_SoundComponent");

	UBP_SoundComponent_C_ExecuteUbergraph_BP_SoundComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
