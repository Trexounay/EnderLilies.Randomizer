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
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.IsOverlappingWaterSurface
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               CanDisplay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_WaterInteractionComponent_C::IsOverlappingWaterSurface(bool* CanDisplay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.IsOverlappingWaterSurface");

	UBP_WaterInteractionComponent_C_IsOverlappingWaterSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanDisplay != nullptr)
		*CanDisplay = params.CanDisplay;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnFinish_E3898B81464AE4DC15F4A1B8E356DF1B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_WaterInteractionComponent_C::OnFinish_E3898B81464AE4DC15F4A1B8E356DF1B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnFinish_E3898B81464AE4DC15F4A1B8E356DF1B");

	UBP_WaterInteractionComponent_C_OnFinish_E3898B81464AE4DC15F4A1B8E356DF1B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_WaterInteractionComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.ReceiveBeginPlay");

	UBP_WaterInteractionComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnActorBeginOverlap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WaterInteractionComponent_C::OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnActorBeginOverlap");

	UBP_WaterInteractionComponent_C_OnActorBeginOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnActorEndOverlap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WaterInteractionComponent_C::OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnActorEndOverlap");

	UBP_WaterInteractionComponent_C_OnActorEndOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.splash
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WaterInteractionComponent_C::splash(const struct FVector& WorldLocation, float Size, float Strength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.splash");

	UBP_WaterInteractionComponent_C_splash_Params params;
	params.WorldLocation = WorldLocation;
	params.Size = Size;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.TriggerStep
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_EWalkMode                                   Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WaterInteractionComponent_C::TriggerStep(Zenith_EWalkMode Index, const struct FVector& ActorLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.TriggerStep");

	UBP_WaterInteractionComponent_C_TriggerStep_Params params;
	params.Index = Index;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.TriggerWaterVolumeEntryMedium
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_WaterInteractionComponent_C::TriggerWaterVolumeEntryMedium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.TriggerWaterVolumeEntryMedium");

	UBP_WaterInteractionComponent_C_TriggerWaterVolumeEntryMedium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.ExecuteUbergraph_BP_WaterInteractionComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_WaterInteractionComponent_C::ExecuteUbergraph_BP_WaterInteractionComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.ExecuteUbergraph_BP_WaterInteractionComponent");

	UBP_WaterInteractionComponent_C_ExecuteUbergraph_BP_WaterInteractionComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
