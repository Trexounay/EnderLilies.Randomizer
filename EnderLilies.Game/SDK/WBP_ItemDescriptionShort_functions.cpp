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
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.SetRecastArrowVisible
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ItemDescriptionShort_C::SetRecastArrowVisible(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.SetRecastArrowVisible");

	UWBP_ItemDescriptionShort_C_SetRecastArrowVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.SetCastCountArrowVisible
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ItemDescriptionShort_C::SetCastCountArrowVisible(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.SetCastCountArrowVisible");

	UWBP_ItemDescriptionShort_C_SetCastCountArrowVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.SetItemIcon
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UWBP_ItemDescriptionShort_C::SetItemIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.SetItemIcon");

	UWBP_ItemDescriptionShort_C_SetItemIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.InitializeForPassiveItem
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemDescriptionShort_C::InitializeForPassiveItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.InitializeForPassiveItem");

	UWBP_ItemDescriptionShort_C_InitializeForPassiveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.InitializeForSpiritItem
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemDescriptionShort_C::InitializeForSpiritItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.InitializeForSpiritItem");

	UWBP_ItemDescriptionShort_C_InitializeForSpiritItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.InitializeForItem
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemDescriptionShort_C::InitializeForItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.InitializeForItem");

	UWBP_ItemDescriptionShort_C_InitializeForItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.Clear
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_ItemDescriptionShort_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.Clear");

	UWBP_ItemDescriptionShort_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         ItemDataHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_ItemDescriptionShort_C::Initialize(const struct FDataTableRowHandle& ItemDataHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.Initialize");

	UWBP_ItemDescriptionShort_C_Initialize_Params params;
	params.ItemDataHandle = ItemDataHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.ExecuteUbergraph_WBP_ItemDescriptionShort
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemDescriptionShort_C::ExecuteUbergraph_WBP_ItemDescriptionShort(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescriptionShort.WBP_ItemDescriptionShort_C.ExecuteUbergraph_WBP_ItemDescriptionShort");

	UWBP_ItemDescriptionShort_C_ExecuteUbergraph_WBP_ItemDescriptionShort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
