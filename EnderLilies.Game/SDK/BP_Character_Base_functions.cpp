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
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.SimulateLanding
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Base_C::SimulateLanding(float Size, float Strength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.SimulateLanding");

	ABP_Character_Base_C_SimulateLanding_Params params;
	params.Size = Size;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.CanPlayLandingEvents
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Character_Base_C::CanPlayLandingEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.CanPlayLandingEvents");

	ABP_Character_Base_C_CanPlayLandingEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.CanBePossessed
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               CanBePossessed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Character_Base_C::CanBePossessed(bool* CanBePossessed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.CanBePossessed");

	ABP_Character_Base_C_CanBePossessed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanBePossessed != nullptr)
		*CanBePossessed = params.CanBePossessed;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Base_C::ResetVisualPivotTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotTimeline__FinishedFunc");

	ABP_Character_Base_C_ResetVisualPivotTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Base_C::ResetVisualPivotTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotTimeline__UpdateFunc");

	ABP_Character_Base_C_ResetVisualPivotTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.OnJustGuard
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAbility*                                    Ability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Invoker                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWillForwardEventToAttacker                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Character_Base_C::OnJustGuard(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.OnJustGuard");

	ABP_Character_Base_C_OnJustGuard_Params params;
	params.Ability = Ability;
	params.Invoker = Invoker;
	params.bWillForwardEventToAttacker = bWillForwardEventToAttacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.OnLanded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Character_Base_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.OnLanded");

	ABP_Character_Base_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotLocation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              BlendTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Base_C::ResetVisualPivotLocation(float BlendTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotLocation");

	ABP_Character_Base_C_ResetVisualPivotLocation_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.BndEvt__BP_Character_Base_Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKnockbackRuntimeData                       KnockbackRuntimeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_Character_Base_C::BndEvt__BP_Character_Base_Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature(const struct FKnockbackRuntimeData& KnockbackRuntimeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.BndEvt__BP_Character_Base_Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature");

	ABP_Character_Base_C_BndEvt__BP_Character_Base_Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature_Params params;
	params.KnockbackRuntimeData = KnockbackRuntimeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.ReceiveUnpossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Base_C::ReceiveUnpossessed(class AController* OldController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.ReceiveUnpossessed");

	ABP_Character_Base_C_ReceiveUnpossessed_Params params;
	params.OldController = OldController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.K2_OnMovementModeChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Base_C::K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.K2_OnMovementModeChanged");

	ABP_Character_Base_C_K2_OnMovementModeChanged_Params params;
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
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.OnGotJustGuarded
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAbility*                                    Ability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Base_C::OnGotJustGuarded(class AAbility* Ability, class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.OnGotJustGuarded");

	ABP_Character_Base_C_OnGotJustGuarded_Params params;
	params.Ability = Ability;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Base.BP_Character_Base_C.ExecuteUbergraph_BP_Character_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Base_C::ExecuteUbergraph_BP_Character_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Base.BP_Character_Base_C.ExecuteUbergraph_BP_Character_Base");

	ABP_Character_Base_C_ExecuteUbergraph_BP_Character_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
