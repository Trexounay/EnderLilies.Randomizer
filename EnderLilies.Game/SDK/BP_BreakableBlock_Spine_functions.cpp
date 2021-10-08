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
//		Name   -> Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.OnBreak
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_BreakableBlock_Spine_C::OnBreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.OnBreak");

	ABP_BreakableBlock_Spine_C_OnBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBlock_Spine_C::BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature(class AActor* From, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature");

	ABP_BreakableBlock_Spine_C_BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature_Params params;
	params.From = From;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_BreakableBlock_Spine_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.ReceiveBeginPlay");

	ABP_BreakableBlock_Spine_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.OnAttackLevelInsufficient
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                AttackLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NecessaryAttackLevel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBlock_Spine_C::OnAttackLevelInsufficient(int AttackLevel, int NecessaryAttackLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.OnAttackLevelInsufficient");

	ABP_BreakableBlock_Spine_C_OnAttackLevelInsufficient_Params params;
	params.AttackLevel = AttackLevel;
	params.NecessaryAttackLevel = NecessaryAttackLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.PostBreakDestroy
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_BreakableBlock_Spine_C::PostBreakDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.PostBreakDestroy");

	ABP_BreakableBlock_Spine_C_PostBreakDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.ExecuteUbergraph_BP_BreakableBlock_Spine
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBlock_Spine_C::ExecuteUbergraph_BP_BreakableBlock_Spine(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C.ExecuteUbergraph_BP_BreakableBlock_Spine");

	ABP_BreakableBlock_Spine_C_ExecuteUbergraph_BP_BreakableBlock_Spine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
