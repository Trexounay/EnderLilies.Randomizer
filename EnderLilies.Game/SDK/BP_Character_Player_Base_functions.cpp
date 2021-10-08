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
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.IsPlayerAptitudeUnlocked
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Zenith_EAptitudeType                               Aptitude                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Character_Player_Base_C::IsPlayerAptitudeUnlocked(Zenith_EAptitudeType Aptitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.IsPlayerAptitudeUnlocked");

	ABP_Character_Player_Base_C_IsPlayerAptitudeUnlocked_Params params;
	params.Aptitude = Aptitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.ShouldTriggerAutoDive
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Character_Player_Base_C::ShouldTriggerAutoDive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.ShouldTriggerAutoDive");

	ABP_Character_Player_Base_C_ShouldTriggerAutoDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.GetContactDamage
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class ABP_Character_Enemy_Base_C*                  EnemyCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ContactDamage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Player_Base_C::GetContactDamage(class ABP_Character_Enemy_Base_C* EnemyCharacter, int* ContactDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.GetContactDamage");

	ABP_Character_Player_Base_C_GetContactDamage_Params params;
	params.EnemyCharacter = EnemyCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContactDamage != nullptr)
		*ContactDamage = params.ContactDamage;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.SetSpineData
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FFSpineDataGroup                            FSpineDataGroup                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ABP_Character_Player_Base_C::SetSpineData(const struct FFSpineDataGroup& FSpineDataGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.SetSpineData");

	ABP_Character_Player_Base_C_SetSpineData_Params params;
	params.FSpineDataGroup = FSpineDataGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.FindSpineDataForLevel
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FFSpineDataGroup                            SpindDataGroup                                             (Parm, OutParm, HasGetValueTypeHash)
void ABP_Character_Player_Base_C::FindSpineDataForLevel(bool* Result, struct FFSpineDataGroup* SpindDataGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.FindSpineDataForLevel");

	ABP_Character_Player_Base_C_FindSpineDataForLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (SpindDataGroup != nullptr)
		*SpindDataGroup = params.SpindDataGroup;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.RefreshSpineData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Changed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Character_Player_Base_C::RefreshSpineData(bool* Changed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.RefreshSpineData");

	ABP_Character_Player_Base_C_RefreshSpineData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Changed != nullptr)
		*Changed = params.Changed;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.DamageColorCurve__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Player_Base_C::DamageColorCurve__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.DamageColorCurve__FinishedFunc");

	ABP_Character_Player_Base_C_DamageColorCurve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.DamageColorCurve__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Player_Base_C::DamageColorCurve__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.DamageColorCurve__UpdateFunc");

	ABP_Character_Player_Base_C_DamageColorCurve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnFinish_9EDCDC9446133E62BE79C0B3D03533F1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Character_Player_Base_C::OnFinish_9EDCDC9446133E62BE79C0B3D03533F1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnFinish_9EDCDC9446133E62BE79C0B3D03533F1");

	ABP_Character_Player_Base_C_OnFinish_9EDCDC9446133E62BE79C0B3D03533F1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Knockback_K2Node_ComponentBoundEvent_2_KnockbackEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKnockbackRuntimeData                       KnockbackRuntimeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_Character_Player_Base_C::BndEvt__Knockback_K2Node_ComponentBoundEvent_2_KnockbackEvent__DelegateSignature(const struct FKnockbackRuntimeData& KnockbackRuntimeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Knockback_K2Node_ComponentBoundEvent_2_KnockbackEvent__DelegateSignature");

	ABP_Character_Player_Base_C_BndEvt__Knockback_K2Node_ComponentBoundEvent_2_KnockbackEvent__DelegateSignature_Params params;
	params.KnockbackRuntimeData = KnockbackRuntimeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKnockbackRuntimeData                       KnockbackRuntimeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void ABP_Character_Player_Base_C::BndEvt__Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature(const struct FKnockbackRuntimeData& KnockbackRuntimeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature");

	ABP_Character_Player_Base_C_BndEvt__Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature_Params params;
	params.KnockbackRuntimeData = KnockbackRuntimeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__AutoClimb_K2Node_ComponentBoundEvent_3_AutoClimbEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		Zenith_EAutoClimbType                              ClimbType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DirectlyAbove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Player_Base_C::BndEvt__AutoClimb_K2Node_ComponentBoundEvent_3_AutoClimbEvent__DelegateSignature(Zenith_EAutoClimbType ClimbType, bool DirectlyAbove, const struct FVector& TargetLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__AutoClimb_K2Node_ComponentBoundEvent_3_AutoClimbEvent__DelegateSignature");

	ABP_Character_Player_Base_C_BndEvt__AutoClimb_K2Node_ComponentBoundEvent_3_AutoClimbEvent__DelegateSignature_Params params;
	params.ClimbType = ClimbType;
	params.DirectlyAbove = DirectlyAbove;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnSubmerged
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Character_Player_Base_C::OnSubmerged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnSubmerged");

	ABP_Character_Player_Base_C_OnSubmerged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Collision_K2Node_ComponentBoundEvent_5_CollisionEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class AActor*                                      OverlapActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Player_Base_C::BndEvt__Collision_K2Node_ComponentBoundEvent_5_CollisionEvent__DelegateSignature(class AActor* OverlapActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Collision_K2Node_ComponentBoundEvent_5_CollisionEvent__DelegateSignature");

	ABP_Character_Player_Base_C_BndEvt__Collision_K2Node_ComponentBoundEvent_5_CollisionEvent__DelegateSignature_Params params;
	params.OverlapActor = OverlapActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Character_Player_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.ReceiveBeginPlay");

	ABP_Character_Player_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_1_HPDamageEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Player_Base_C::BndEvt__HPComponent_K2Node_ComponentBoundEvent_1_HPDamageEvent__DelegateSignature(class AActor* From, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_1_HPDamageEvent__DelegateSignature");

	ABP_Character_Player_Base_C_BndEvt__HPComponent_K2Node_ComponentBoundEvent_1_HPDamageEvent__DelegateSignature_Params params;
	params.From = From;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.K2_OnMovementModeChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Player_Base_C::K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.K2_OnMovementModeChanged");

	ABP_Character_Player_Base_C_K2_OnMovementModeChanged_Params params;
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
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnJustGuard
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAbility*                                    Ability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Invoker                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWillForwardEventToAttacker                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Character_Player_Base_C::OnJustGuard(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnJustGuard");

	ABP_Character_Player_Base_C_OnJustGuard_Params params;
	params.Ability = Ability;
	params.Invoker = Invoker;
	params.bWillForwardEventToAttacker = bWillForwardEventToAttacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnEventStop
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Character_Player_Base_C::OnEventStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnEventStop");

	ABP_Character_Player_Base_C_OnEventStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Player_Base.BP_Character_Player_Base_C.ExecuteUbergraph_BP_Character_Player_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Player_Base_C::ExecuteUbergraph_BP_Character_Player_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_Player_Base.BP_Character_Player_Base_C.ExecuteUbergraph_BP_Character_Player_Base");

	ABP_Character_Player_Base_C_ExecuteUbergraph_BP_Character_Player_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
