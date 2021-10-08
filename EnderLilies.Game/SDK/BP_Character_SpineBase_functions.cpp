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
//		Name   -> Function BP_Character_SpineBase.BP_Character_SpineBase_C.ComputeSortPriority
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SortPriority                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_SpineBase_C::ComputeSortPriority(int* SortPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_SpineBase.BP_Character_SpineBase_C.ComputeSortPriority");

	ABP_Character_SpineBase_C_ComputeSortPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SortPriority != nullptr)
		*SortPriority = params.SortPriority;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_SpineBase.BP_Character_SpineBase_C.BndEvt__FactionComponent_K2Node_ComponentBoundEvent_2_FactionEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_Character_SpineBase_C::BndEvt__FactionComponent_K2Node_ComponentBoundEvent_2_FactionEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_SpineBase.BP_Character_SpineBase_C.BndEvt__FactionComponent_K2Node_ComponentBoundEvent_2_FactionEvent__DelegateSignature");

	ABP_Character_SpineBase_C_BndEvt__FactionComponent_K2Node_ComponentBoundEvent_2_FactionEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_SpineBase.BP_Character_SpineBase_C.OnRefreshTranslucentSortPriority
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewTranslucentSortPriority                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_SpineBase_C::OnRefreshTranslucentSortPriority(int NewTranslucentSortPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_SpineBase.BP_Character_SpineBase_C.OnRefreshTranslucentSortPriority");

	ABP_Character_SpineBase_C_OnRefreshTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_SpineBase.BP_Character_SpineBase_C.OnRespawn
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Character_SpineBase_C::OnRespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_SpineBase.BP_Character_SpineBase_C.OnRespawn");

	ABP_Character_SpineBase_C_OnRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_SpineBase.BP_Character_SpineBase_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_SpineBase_C::BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature(class AActor* From, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_SpineBase.BP_Character_SpineBase_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature");

	ABP_Character_SpineBase_C_BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature_Params params;
	params.From = From;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_SpineBase.BP_Character_SpineBase_C.ExecuteUbergraph_BP_Character_SpineBase
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_SpineBase_C::ExecuteUbergraph_BP_Character_SpineBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Character_SpineBase.BP_Character_SpineBase_C.ExecuteUbergraph_BP_Character_SpineBase");

	ABP_Character_SpineBase_C_ExecuteUbergraph_BP_Character_SpineBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
