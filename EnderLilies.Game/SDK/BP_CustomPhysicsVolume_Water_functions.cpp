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
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.SetupAudioSnapshotTrigger
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CustomPhysicsVolume_Water_C::SetupAudioSnapshotTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.SetupAudioSnapshotTrigger");

	ABP_CustomPhysicsVolume_Water_C_SetupAudioSnapshotTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetLocationOnSurface
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_EBoxSide                                    BoxSide                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_CustomPhysicsVolume_Water_C::GetLocationOnSurface(class AActor* Actor, Zenith_EBoxSide* BoxSide)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetLocationOnSurface");

	ABP_CustomPhysicsVolume_Water_C_GetLocationOnSurface_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BoxSide != nullptr)
		*BoxSide = params.BoxSide;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetAudioSnapshotTag
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName ABP_CustomPhysicsVolume_Water_C::GetAudioSnapshotTag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetAudioSnapshotTag");

	ABP_CustomPhysicsVolume_Water_C_GetAudioSnapshotTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckPlayerExit
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::CheckPlayerExit(class UObject* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckPlayerExit");

	ABP_CustomPhysicsVolume_Water_C_CheckPlayerExit_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckPlayerEnter
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::CheckPlayerEnter(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckPlayerEnter");

	ABP_CustomPhysicsVolume_Water_C_CheckPlayerEnter_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckAbilityHitboxEnter
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::CheckAbilityHitboxEnter(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckAbilityHitboxEnter");

	ABP_CustomPhysicsVolume_Water_C_CheckAbilityHitboxEnter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ApplyInteractingActorSplashes
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_CustomPhysicsVolume_Water_C::ApplyInteractingActorSplashes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ApplyInteractingActorSplashes");

	ABP_CustomPhysicsVolume_Water_C_ApplyInteractingActorSplashes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.WorldSpaceToUVSpace
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     InVec                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                UV                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::WorldSpaceToUVSpace(const struct FVector& InVec, struct FLinearColor* UV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.WorldSpaceToUVSpace");

	ABP_CustomPhysicsVolume_Water_C_WorldSpaceToUVSpace_Params params;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UV != nullptr)
		*UV = params.UV;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetHeightRT
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                CurrentHeightIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NumFrameOld                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextureRenderTarget2D*                      Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::GetHeightRT(int CurrentHeightIndex, int NumFrameOld, class UTextureRenderTarget2D** Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetHeightRT");

	ABP_CustomPhysicsVolume_Water_C_GetHeightRT_Params params;
	params.CurrentHeightIndex = CurrentHeightIndex;
	params.NumFrameOld = NumFrameOld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetActorLocationOnWave
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::GetActorLocationOnWave(class AActor* Target, struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetActorLocationOnWave");

	ABP_CustomPhysicsVolume_Water_C_GetActorLocationOnWave_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PlayFXAtActorLocation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bLargeFX                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CustomPhysicsVolume_Water_C::PlayFXAtActorLocation(class AActor* Actor, bool bLargeFX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PlayFXAtActorLocation");

	ABP_CustomPhysicsVolume_Water_C_PlayFXAtActorLocation_Params params;
	params.Actor = Actor;
	params.bLargeFX = bLargeFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CustomPhysicsVolume_Water_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.UserConstructionScript");

	ABP_CustomPhysicsVolume_Water_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PostProcessBlend__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_CustomPhysicsVolume_Water_C::PostProcessBlend__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PostProcessBlend__FinishedFunc");

	ABP_CustomPhysicsVolume_Water_C_PostProcessBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PostProcessBlend__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_CustomPhysicsVolume_Water_C::PostProcessBlend__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PostProcessBlend__UpdateFunc");

	ABP_CustomPhysicsVolume_Water_C_PostProcessBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.DisableReverb
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CustomPhysicsVolume_Water_C::DisableReverb()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.DisableReverb");

	ABP_CustomPhysicsVolume_Water_C_DisableReverb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.EnableReverb
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CustomPhysicsVolume_Water_C::EnableReverb()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.EnableReverb");

	ABP_CustomPhysicsVolume_Water_C_EnableReverb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_CustomPhysicsVolume_Water_C::BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CustomPhysicsVolume_Water_C_BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CustomPhysicsVolume_Water_C_BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CustomPhysicsVolume_Water_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ReceiveBeginPlay");

	ABP_CustomPhysicsVolume_Water_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__FluidMeshComponent_K2Node_ComponentBoundEvent_0_FluidMeshEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              VelocityZ                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::BndEvt__FluidMeshComponent_K2Node_ComponentBoundEvent_0_FluidMeshEvent__DelegateSignature(class AActor* Actor, float VelocityZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__FluidMeshComponent_K2Node_ComponentBoundEvent_0_FluidMeshEvent__DelegateSignature");

	ABP_CustomPhysicsVolume_Water_C_BndEvt__FluidMeshComponent_K2Node_ComponentBoundEvent_0_FluidMeshEvent__DelegateSignature_Params params;
	params.Actor = Actor;
	params.VelocityZ = VelocityZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__BoxComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_CustomPhysicsVolume_Water_C::BndEvt__BoxComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__BoxComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_CustomPhysicsVolume_Water_C_BndEvt__BoxComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorEnter_Large
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::OnActorEnter_Large(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorEnter_Large");

	ABP_CustomPhysicsVolume_Water_C_OnActorEnter_Large_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorExit_Large
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::OnActorExit_Large(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorExit_Large");

	ABP_CustomPhysicsVolume_Water_C_OnActorExit_Large_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorEnter_Medium
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::OnActorEnter_Medium(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorEnter_Medium");

	ABP_CustomPhysicsVolume_Water_C_OnActorEnter_Medium_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorExit_Medium
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::OnActorExit_Medium(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorExit_Medium");

	ABP_CustomPhysicsVolume_Water_C_OnActorExit_Medium_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ReceiveTick");

	ABP_CustomPhysicsVolume_Water_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.splash
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVec                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::splash(const struct FVector& InVec, float Size, float Strength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.splash");

	ABP_CustomPhysicsVolume_Water_C_splash_Params params;
	params.InVec = InVec;
	params.Size = Size;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__BoxComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::BndEvt__BoxComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__BoxComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_CustomPhysicsVolume_Water_C_BndEvt__BoxComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BlendInPostProcess
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CustomPhysicsVolume_Water_C::BlendInPostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BlendInPostProcess");

	ABP_CustomPhysicsVolume_Water_C_BlendInPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BlendOutPostProcess
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CustomPhysicsVolume_Water_C::BlendOutPostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BlendOutPostProcess");

	ABP_CustomPhysicsVolume_Water_C_BlendOutPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ExecuteUbergraph_BP_CustomPhysicsVolume_Water
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CustomPhysicsVolume_Water_C::ExecuteUbergraph_BP_CustomPhysicsVolume_Water(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ExecuteUbergraph_BP_CustomPhysicsVolume_Water");

	ABP_CustomPhysicsVolume_Water_C_ExecuteUbergraph_BP_CustomPhysicsVolume_Water_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
