// Name: enderlilies, Version: 1.1.3

#include "pch.h"

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
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.GetRotationFromLastAttacker
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator ABP_Breakable_Base_C::GetRotationFromLastAttacker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.GetRotationFromLastAttacker");

	ABP_Breakable_Base_C_GetRotationFromLastAttacker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerPlayerOverlap
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void ABP_Breakable_Base_C::TriggerPlayerOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerPlayerOverlap");

	ABP_Breakable_Base_C_TriggerPlayerOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerDisableCollision
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_Breakable_Base_C::TriggerDisableCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerDisableCollision");

	ABP_Breakable_Base_C_TriggerDisableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerAbility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void ABP_Breakable_Base_C::TriggerAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerAbility");

	ABP_Breakable_Base_C_TriggerAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerBreakFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Breakable_Base_C::TriggerBreakFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerBreakFX");

	ABP_Breakable_Base_C_TriggerBreakFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerBreakSE
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Breakable_Base_C::TriggerBreakSE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerBreakSE");

	ABP_Breakable_Base_C_TriggerBreakSE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_2_HPDamageEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Breakable_Base_C::BndEvt__HPComponent_K2Node_ComponentBoundEvent_2_HPDamageEvent__DelegateSignature(class AActor* From, int Damage)
{
	UFunction* fn = UObject::FindFunction("BP_Breakable_Base_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_2_HPDamageEvent__DelegateSignature");

	//static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_2_HPDamageEvent__DelegateSignature");

	ABP_Breakable_Base_C_BndEvt__HPComponent_K2Node_ComponentBoundEvent_2_HPDamageEvent__DelegateSignature_Params params;
	params.From = From;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.OnBreak
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Breakable_Base_C::OnBreak()
{
	UFunction* fn = UObject::FindFunction("BP_Breakable_Base_C.OnBreak");
	//static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.OnBreak");

	ABP_Breakable_Base_C_OnBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.PostBreakDestroy
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Breakable_Base_C::PostBreakDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.PostBreakDestroy");

	ABP_Breakable_Base_C_PostBreakDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_1_ClearableEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bAlreadyCleared                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Breakable_Base_C::BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_1_ClearableEvent__DelegateSignature(bool bAlreadyCleared)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_1_ClearableEvent__DelegateSignature");

	ABP_Breakable_Base_C_BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_1_ClearableEvent__DelegateSignature_Params params;
	params.bAlreadyCleared = bAlreadyCleared;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_Breakable_Base_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Breakable_Base_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.OnPlayerOverlap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Breakable_Base_C::OnPlayerOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.OnPlayerOverlap");

	ABP_Breakable_Base_C_OnPlayerOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Breakable_Base.BP_Breakable_Base_C.ExecuteUbergraph_BP_Breakable_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Breakable_Base_C::ExecuteUbergraph_BP_Breakable_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Breakable_Base.BP_Breakable_Base_C.ExecuteUbergraph_BP_Breakable_Base");

	ABP_Breakable_Base_C_ExecuteUbergraph_BP_Breakable_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
