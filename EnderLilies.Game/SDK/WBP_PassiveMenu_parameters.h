#pragma once

// Name: enderlilies, Version: 1.1.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.GetWrappedDownItemIndex
struct UWBP_PassiveMenu_C_GetWrappedDownItemIndex_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemCount;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SlotPerLine;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.ScrollItemListToStart
struct UWBP_PassiveMenu_C_ScrollItemListToStart_Params
{
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.DoCustomNavigation_EquippedList
struct UWBP_PassiveMenu_C_DoCustomNavigation_EquippedList_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.DoCustomNavigation_ItemList
struct UWBP_PassiveMenu_C_DoCustomNavigation_ItemList_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnPressContext
struct UWBP_PassiveMenu_C_OnPressContext_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.RefreshFooterForItemEntry
struct UWBP_PassiveMenu_C_RefreshFooterForItemEntry_Params
{
	class UWBP_Item_C*                                 ItemEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.RefreshFooter
struct UWBP_PassiveMenu_C_RefreshFooter_Params
{
	bool                                               IgnoreCache;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FFRichTextInputPair>                 RichTextDataArray;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.IsPassiveItemEquipped
struct UWBP_PassiveMenu_C_IsPassiveItemEquipped_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.CanChangeEquipment
struct UWBP_PassiveMenu_C_CanChangeEquipment_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.UnequipPassiveFromItem
struct UWBP_PassiveMenu_C_UnequipPassiveFromItem_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.UnequipFromPassiveEquippedList
struct UWBP_PassiveMenu_C_UnequipFromPassiveEquippedList_Params
{
	class UWBP_Item_C*                                 InputPin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.SetFooter
struct UWBP_PassiveMenu_C_SetFooter_Params
{
	class UWBP_MainMenu_Footer_C*                      Footer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnFocusReceived
struct UWBP_PassiveMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature
struct UWBP_PassiveMenu_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
struct UWBP_PassiveMenu_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.Construct
struct UWBP_PassiveMenu_C_Construct_Params
{
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_2_OnPassiveFocused__DelegateSignature
struct UWBP_PassiveMenu_C_BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_2_OnPassiveFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_3_OnPassiveSelected__DelegateSignature
struct UWBP_PassiveMenu_C_BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_3_OnPassiveSelected__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_RestPoint
struct UWBP_PassiveMenu_C_OpenErrorDialog_RestPoint_Params
{
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_SlotCount
struct UWBP_PassiveMenu_C_OpenErrorDialog_SlotCount_Params
{
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnClickedOK_Error
struct UWBP_PassiveMenu_C_OnClickedOK_Error_Params
{
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.OnContext
struct UWBP_PassiveMenu_C_OnContext_Params
{
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.OpenErrorDialog_PassiveLimit
struct UWBP_PassiveMenu_C_OpenErrorDialog_PassiveLimit_Params
{
};

// Function WBP_PassiveMenu.WBP_PassiveMenu_C.ExecuteUbergraph_WBP_PassiveMenu
struct UWBP_PassiveMenu_C_ExecuteUbergraph_WBP_PassiveMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
