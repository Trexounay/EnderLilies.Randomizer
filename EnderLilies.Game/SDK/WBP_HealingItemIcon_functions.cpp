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
//		Name   -> Function WBP_HealingItemIcon.WBP_HealingItemIcon_C.MarkUsed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               SkipAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HealingItemIcon_C::MarkUsed(bool SkipAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItemIcon.WBP_HealingItemIcon_C.MarkUsed");

	UWBP_HealingItemIcon_C_MarkUsed_Params params;
	params.SkipAnimation = SkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItemIcon.WBP_HealingItemIcon_C.RestoreItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HealingItemIcon_C::RestoreItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItemIcon.WBP_HealingItemIcon_C.RestoreItem");

	UWBP_HealingItemIcon_C_RestoreItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItemIcon.WBP_HealingItemIcon_C.ExecuteUbergraph_WBP_HealingItemIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HealingItemIcon_C::ExecuteUbergraph_WBP_HealingItemIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItemIcon.WBP_HealingItemIcon_C.ExecuteUbergraph_WBP_HealingItemIcon");

	UWBP_HealingItemIcon_C_ExecuteUbergraph_WBP_HealingItemIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
