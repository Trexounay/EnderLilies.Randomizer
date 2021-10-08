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
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.IsStandingOnElevator
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Character_Enemy_Base_C::IsStandingOnElevator(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.IsStandingOnElevator");

	ABP_Character_Enemy_Base_C_IsStandingOnElevator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.GetCurrentTarget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      CurrentTarget                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Enemy_Base_C::GetCurrentTarget(class AActor** CurrentTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.GetCurrentTarget");

	ABP_Character_Enemy_Base_C_GetCurrentTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentTarget != nullptr)
		*CurrentTarget = params.CurrentTarget;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.StopMeatAction
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Character_Enemy_Base_C::StopMeatAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.StopMeatAction");

	ABP_Character_Enemy_Base_C_StopMeatAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.PlayMeatAction
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Character_Enemy_Base_C::PlayMeatAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.PlayMeatAction");

	ABP_Character_Enemy_Base_C_PlayMeatAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.IsPaused
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               paused                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Character_Enemy_Base_C::IsPaused(bool* paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.IsPaused");

	ABP_Character_Enemy_Base_C_IsPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (paused != nullptr)
		*paused = params.paused;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.SetPaused
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               paused                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Character_Enemy_Base_C::SetPaused(bool paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.SetPaused");

	ABP_Character_Enemy_Base_C_SetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.GetContactDamage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ContactDamage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Enemy_Base_C::GetContactDamage(int* ContactDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.GetContactDamage");

	ABP_Character_Enemy_Base_C_GetContactDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContactDamage != nullptr)
		*ContactDamage = params.ContactDamage;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ComputeSortPriority
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SortPriority                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Enemy_Base_C::ComputeSortPriority(int* SortPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ComputeSortPriority");

	ABP_Character_Enemy_Base_C_ComputeSortPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SortPriority != nullptr)
		*SortPriority = params.SortPriority;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.FadeOut__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Enemy_Base_C::FadeOut__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.FadeOut__FinishedFunc");

	ABP_Character_Enemy_Base_C_FadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.FadeOut__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Enemy_Base_C::FadeOut__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.FadeOut__UpdateFunc");

	ABP_Character_Enemy_Base_C_FadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Character_Enemy_Base_C::BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Character_Enemy_Base_C_BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Enemy_Base_C::BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	ABP_Character_Enemy_Base_C_BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params params;
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
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Character_Enemy_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ReceiveBeginPlay");

	ABP_Character_Enemy_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__DeathComponent_K2Node_ComponentBoundEvent_3_DeathEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_Character_Enemy_Base_C::BndEvt__DeathComponent_K2Node_ComponentBoundEvent_3_DeathEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__DeathComponent_K2Node_ComponentBoundEvent_3_DeathEvent__DelegateSignature");

	ABP_Character_Enemy_Base_C_BndEvt__DeathComponent_K2Node_ComponentBoundEvent_3_DeathEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnLanded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Character_Enemy_Base_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnLanded");

	ABP_Character_Enemy_Base_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnChangeTarget
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Enemy_Base_C::OnChangeTarget(class AActor* NewTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnChangeTarget");

	ABP_Character_Enemy_Base_C_OnChangeTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.K2_OnMovementModeChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Enemy_Base_C::K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.K2_OnMovementModeChanged");

	ABP_Character_Enemy_Base_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnMovementModeChanged_ToSwimming
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Character_Enemy_Base_C::OnMovementModeChanged_ToSwimming()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnMovementModeChanged_ToSwimming");

	ABP_Character_Enemy_Base_C_OnMovementModeChanged_ToSwimming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnRespawn
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Character_Enemy_Base_C::OnRespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnRespawn");

	ABP_Character_Enemy_Base_C_OnRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ExecuteUbergraph_BP_Character_Enemy_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Enemy_Base_C::ExecuteUbergraph_BP_Character_Enemy_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ExecuteUbergraph_BP_Character_Enemy_Base");

	ABP_Character_Enemy_Base_C_ExecuteUbergraph_BP_Character_Enemy_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
