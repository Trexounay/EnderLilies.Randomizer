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

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.RefreshLockVisibility
struct UWBP_EquipmentMenu_C_RefreshLockVisibility_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.UnequipFromEquipmentEntry
struct UWBP_EquipmentMenu_C_UnequipFromEquipmentEntry_Params
{
	class UWBP_EquipmentEntry_C*                       EquipmentEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.CanUnequip
struct UWBP_EquipmentMenu_C_CanUnequip_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.RefreshFooter
struct UWBP_EquipmentMenu_C_RefreshFooter_Params
{
	TArray<struct FFRichTextInputPair>                 RichTextDataArray;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IgnoreCache;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.EquipItemToSlot
struct UWBP_EquipmentMenu_C_EquipItemToSlot_Params
{
	class UWBP_Item_C*                                 ItemEntry;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_EquipmentEntry_C*                       EquipmentEntry;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.TryUnequipFromSet
struct UWBP_EquipmentMenu_C_TryUnequipFromSet_Params
{
	class UWBP_EquipmentEntry_C*                       EquipmentEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ESummonSet                                  Set;                                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.CanChangeEquipment
struct UWBP_EquipmentMenu_C_CanChangeEquipment_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OnPressCancel
struct UWBP_EquipmentMenu_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.RefreshEquipmentSlots
struct UWBP_EquipmentMenu_C_RefreshEquipmentSlots_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.SetFooter
struct UWBP_EquipmentMenu_C_SetFooter_Params
{
	class UWBP_MainMenu_Footer_C*                      Footer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OnFocusReceived
struct UWBP_EquipmentMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.Construct
struct UWBP_EquipmentMenu_C_Construct_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_1_OnClicked_Entry_Attack__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_1_OnClicked_Entry_Attack__DelegateSignature_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_4_OnClicked_Entry_Summon2__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_4_OnClicked_Entry_Summon2__DelegateSignature_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_7_OnClicked_Entry_Summon1__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_7_OnClicked_Entry_Summon1__DelegateSignature_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_0_OnClicked_Entry_Attack__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_0_OnClicked_Entry_Attack__DelegateSignature_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_2_OnClicked_Entry_Summon1__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_2_OnClicked_Entry_Summon1__DelegateSignature_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_3_OnClicked_Entry_Summon2__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_3_OnClicked_Entry_Summon2__DelegateSignature_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_12_OnSelect__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_12_OnSelect__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OnCancelItemEntrySelection
struct UWBP_EquipmentMenu_C_OnCancelItemEntrySelection_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_10_OnFocusedItem__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_10_OnFocusedItem__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_13_OnFocusedItem__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_13_OnFocusedItem__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_5_OnContextItem__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_5_OnContextItem__DelegateSignature_Params
{
	class UWBP_EquipmentEntry_C*                       EquipmentEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_8_OnContextItem__DelegateSignature
struct UWBP_EquipmentMenu_C_BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_8_OnContextItem__DelegateSignature_Params
{
	class UWBP_EquipmentEntry_C*                       EquipmentEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.Reset
struct UWBP_EquipmentMenu_C_Reset_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OpenErrorDialog
struct UWBP_EquipmentMenu_C_OpenErrorDialog_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OnClickedOK
struct UWBP_EquipmentMenu_C_OnClickedOK_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.ActivateEquipmentEntrySelection
struct UWBP_EquipmentMenu_C_ActivateEquipmentEntrySelection_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OnConfirmEquipmentEntry
struct UWBP_EquipmentMenu_C_OnConfirmEquipmentEntry_Params
{
	class UWBP_EquipmentEntry_C*                       CurrentEquipmentEntry;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ESummonSet                                  CurrentSetTarget;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.ActivateItemEntrySelection
struct UWBP_EquipmentMenu_C_ActivateItemEntrySelection_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.DeactivateItemEntrySelection
struct UWBP_EquipmentMenu_C_DeactivateItemEntrySelection_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.DeactivateEquipmentEntrySelection
struct UWBP_EquipmentMenu_C_DeactivateEquipmentEntrySelection_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OnCancelEquipmentEntrySelection
struct UWBP_EquipmentMenu_C_OnCancelEquipmentEntrySelection_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.CancelPendingEquipActions
struct UWBP_EquipmentMenu_C_CancelPendingEquipActions_Params
{
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OnFocusLost
struct UWBP_EquipmentMenu_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.ExecuteUbergraph_WBP_EquipmentMenu
struct UWBP_EquipmentMenu_C_ExecuteUbergraph_WBP_EquipmentMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentMenu.WBP_EquipmentMenu_C.OnCancel__DelegateSignature
struct UWBP_EquipmentMenu_C_OnCancel__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
