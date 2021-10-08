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
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.RefreshButtonVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HealingItems_C::RefreshButtonVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.RefreshButtonVisibility");

	UWBP_HealingItems_C_RefreshButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.BindEvents
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HealingItems_C::BindEvents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.BindEvents");

	UWBP_HealingItems_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UHealComponent*                              HealComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UHPComponent*                                HPComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HealingItems_C::Initialize(class UHealComponent* HealComponent, class UHPComponent* HPComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.Initialize");

	UWBP_HealingItems_C_Initialize_Params params;
	params.HealComponent = HealComponent;
	params.HPComponent = HPComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.BuildItems
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HealingItems_C::BuildItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.BuildItems");

	UWBP_HealingItems_C_BuildItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.BuildItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldMarkUsed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HealingItems_C::BuildItem(bool ShouldMarkUsed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.BuildItem");

	UWBP_HealingItems_C_BuildItem_Params params;
	params.ShouldMarkUsed = ShouldMarkUsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.OnUseHealingItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HealingItems_C::OnUseHealingItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.OnUseHealingItem");

	UWBP_HealingItems_C_OnUseHealingItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.OnRestoreHealingItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HealingItems_C::OnRestoreHealingItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.OnRestoreHealingItem");

	UWBP_HealingItems_C_OnRestoreHealingItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.OnHealCountChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HealingItems_C::OnHealCountChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.OnHealCountChanged");

	UWBP_HealingItems_C_OnHealCountChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.OnFullyRestoreHealingItems
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HealingItems_C::OnFullyRestoreHealingItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.OnFullyRestoreHealingItems");

	UWBP_HealingItems_C_OnFullyRestoreHealingItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.OnHPChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HealingItems_C::OnHPChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.OnHPChanged");

	UWBP_HealingItems_C_OnHPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HealingItems.WBP_HealingItems_C.ExecuteUbergraph_WBP_HealingItems
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HealingItems_C::ExecuteUbergraph_WBP_HealingItems(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HealingItems.WBP_HealingItems_C.ExecuteUbergraph_WBP_HealingItems");

	UWBP_HealingItems_C_ExecuteUbergraph_WBP_HealingItems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
