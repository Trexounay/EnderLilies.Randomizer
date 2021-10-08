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
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.GetWrappedDownItemIndex
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ItemCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SlotPerLine                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_PassiveMenu_C::GetWrappedDownItemIndex(int SlotIndex, int ItemCount, int SlotPerLine)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.GetWrappedDownItemIndex");

	UWBP_PassiveMenu_C_GetWrappedDownItemIndex_Params params;
	params.SlotIndex = SlotIndex;
	params.ItemCount = ItemCount;
	params.SlotPerLine = SlotPerLine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.ScrollItemListToStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PassiveMenu_C::ScrollItemListToStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.ScrollItemListToStart");

	UWBP_PassiveMenu_C_ScrollItemListToStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.DoCustomNavigation_EquippedList
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_PassiveMenu_C::DoCustomNavigation_EquippedList(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.DoCustomNavigation_EquippedList");

	UWBP_PassiveMenu_C_DoCustomNavigation_EquippedList_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.DoCustomNavigation_ItemList
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_PassiveMenu_C::DoCustomNavigation_ItemList(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.DoCustomNavigation_ItemList");

	UWBP_PassiveMenu_C_DoCustomNavigation_ItemList_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnPressContext
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PassiveMenu_C::OnPressContext(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnPressContext");

	UWBP_PassiveMenu_C_OnPressContext_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.RefreshFooterForItemEntry
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 ItemEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::RefreshFooterForItemEntry(class UWBP_Item_C* ItemEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.RefreshFooterForItemEntry");

	UWBP_PassiveMenu_C_RefreshFooterForItemEntry_Params params;
	params.ItemEntry = ItemEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.RefreshFooter
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IgnoreCache                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FFRichTextInputPair>                 RichTextDataArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_PassiveMenu_C::RefreshFooter(bool IgnoreCache, TArray<struct FFRichTextInputPair> RichTextDataArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.RefreshFooter");

	UWBP_PassiveMenu_C_RefreshFooter_Params params;
	params.IgnoreCache = IgnoreCache;
	params.RichTextDataArray = RichTextDataArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.IsPassiveItemEquipped
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PassiveMenu_C::IsPassiveItemEquipped(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.IsPassiveItemEquipped");

	UWBP_PassiveMenu_C_IsPassiveItemEquipped_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.CanChangeEquipment
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PassiveMenu_C::CanChangeEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.CanChangeEquipment");

	UWBP_PassiveMenu_C_CanChangeEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.UnequipPassiveFromItem
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::UnequipPassiveFromItem(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.UnequipPassiveFromItem");

	UWBP_PassiveMenu_C_UnequipPassiveFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.UnequipFromPassiveEquippedList
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::UnequipFromPassiveEquippedList(class UWBP_Item_C* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.UnequipFromPassiveEquippedList");

	UWBP_PassiveMenu_C_UnequipFromPassiveEquippedList_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.SetFooter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_MainMenu_Footer_C*                      Footer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::SetFooter(class UWBP_MainMenu_Footer_C* Footer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.SetFooter");

	UWBP_PassiveMenu_C_SetFooter_Params params;
	params.Footer = Footer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_PassiveMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnFocusReceived");

	UWBP_PassiveMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature");

	UWBP_PassiveMenu_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");

	UWBP_PassiveMenu_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PassiveMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.Construct");

	UWBP_PassiveMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_2_OnPassiveFocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_2_OnPassiveFocused__DelegateSignature(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_2_OnPassiveFocused__DelegateSignature");

	UWBP_PassiveMenu_C_BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_2_OnPassiveFocused__DelegateSignature_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_3_OnPassiveSelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_3_OnPassiveSelected__DelegateSignature(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_3_OnPassiveSelected__DelegateSignature");

	UWBP_PassiveMenu_C_BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_3_OnPassiveSelected__DelegateSignature_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_RestPoint
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PassiveMenu_C::OpenErrorDialog_RestPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_RestPoint");

	UWBP_PassiveMenu_C_OpenErrorDialog_RestPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_SlotCount
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PassiveMenu_C::OpenErrorDialog_SlotCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_SlotCount");

	UWBP_PassiveMenu_C_OpenErrorDialog_SlotCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnClickedOK_Error
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PassiveMenu_C::OnClickedOK_Error()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnClickedOK_Error");

	UWBP_PassiveMenu_C_OnClickedOK_Error_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnContext
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PassiveMenu_C::OnContext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnContext");

	UWBP_PassiveMenu_C_OnContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_PassiveLimit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PassiveMenu_C::OpenErrorDialog_PassiveLimit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_PassiveLimit");

	UWBP_PassiveMenu_C_OpenErrorDialog_PassiveLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PassiveMenu.WBP_PassiveMenu_C.ExecuteUbergraph_WBP_PassiveMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PassiveMenu_C::ExecuteUbergraph_WBP_PassiveMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PassiveMenu.WBP_PassiveMenu_C.ExecuteUbergraph_WBP_PassiveMenu");

	UWBP_PassiveMenu_C_ExecuteUbergraph_WBP_PassiveMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
