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
//		Name   -> Function WBP_Item.WBP_Item_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Item_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.OnFocusReceived");

	UWBP_Item_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.MarkItemAsChecked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Item_C::MarkItemAsChecked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.MarkItemAsChecked");

	UWBP_Item_C_MarkItemAsChecked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.ClearNewIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Item_C::ClearNewIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.ClearNewIcon");

	UWBP_Item_C_ClearNewIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.SetBase
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Base                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Item_C::SetBase(class UWidget* Base)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.SetBase");

	UWBP_Item_C_SetBase_Params params;
	params.Base = Base;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.IsSpiritCurrentItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FSpiritData                                 SpiritData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_Item_C::IsSpiritCurrentItem(const struct FSpiritData& SpiritData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.IsSpiritCurrentItem");

	UWBP_Item_C_IsSpiritCurrentItem_Params params;
	params.SpiritData = SpiritData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.TrySetPassiveData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Item_C::TrySetPassiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.TrySetPassiveData");

	UWBP_Item_C_TrySetPassiveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.TrySetSpiritData
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Item_C::TrySetSpiritData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.TrySetSpiritData");

	UWBP_Item_C_TrySetSpiritData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.SetSelectedGreyVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Item_C::SetSelectedGreyVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.SetSelectedGreyVisibility");

	UWBP_Item_C_SetSelectedGreyVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.RefreshBaseImage
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Focused                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Item_C::RefreshBaseImage(bool Focused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.RefreshBaseImage");

	UWBP_Item_C_RefreshBaseImage_Params params;
	params.Focused = Focused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.OnPressConfirm
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Item_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.OnPressConfirm");

	UWBP_Item_C_OnPressConfirm_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Item_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.RefreshDesign");

	UWBP_Item_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.Refresh
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         ItemDataHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Item_C::Refresh(const struct FDataTableRowHandle& ItemDataHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.Refresh");

	UWBP_Item_C_Refresh_Params params;
	params.ItemDataHandle = ItemDataHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.Clear
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Item_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.Clear");

	UWBP_Item_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.OnUnequipSpirit
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ESummonSet                                  SummonSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSpiritData                                 SpiritData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_Item_C::OnUnequipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.OnUnequipSpirit");

	UWBP_Item_C_OnUnequipSpirit_Params params;
	params.SummonSet = SummonSet;
	params.SpiritData = SpiritData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.OnEquipSpirit
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ESummonSet                                  SummonSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSpiritData                                 SpiritData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_Item_C::OnEquipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.OnEquipSpirit");

	UWBP_Item_C_OnEquipSpirit_Params params;
	params.SummonSet = SummonSet;
	params.SpiritData = SpiritData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Item_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.Construct");

	UWBP_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.OnPassiveEquipped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Item_C::OnPassiveEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.OnPassiveEquipped");

	UWBP_Item_C_OnPassiveEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.OnPassiveUnequipped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Item_C::OnPassiveUnequipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.OnPassiveUnequipped");

	UWBP_Item_C_OnPassiveUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.ExecuteUbergraph_WBP_Item
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Item_C::ExecuteUbergraph_WBP_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.ExecuteUbergraph_WBP_Item");

	UWBP_Item_C_ExecuteUbergraph_WBP_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.OnFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Item_C::OnFocused__DelegateSignature(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.OnFocused__DelegateSignature");

	UWBP_Item_C_OnFocused__DelegateSignature_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Item.WBP_Item_C.OnSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Item_C::OnSelected__DelegateSignature(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Item.WBP_Item_C.OnSelected__DelegateSignature");

	UWBP_Item_C_OnSelected__DelegateSignature_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
