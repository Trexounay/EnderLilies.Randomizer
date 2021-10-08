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

// Function WBP_Item.WBP_Item_C.OnFocusReceived
struct UWBP_Item_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Item.WBP_Item_C.MarkItemAsChecked
struct UWBP_Item_C_MarkItemAsChecked_Params
{
};

// Function WBP_Item.WBP_Item_C.ClearNewIcon
struct UWBP_Item_C_ClearNewIcon_Params
{
};

// Function WBP_Item.WBP_Item_C.SetBase
struct UWBP_Item_C_SetBase_Params
{
	class UWidget*                                     Base;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Item.WBP_Item_C.IsSpiritCurrentItem
struct UWBP_Item_C_IsSpiritCurrentItem_Params
{
	struct FSpiritData                                 SpiritData;                                                // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0148(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_Item.WBP_Item_C.TrySetPassiveData
struct UWBP_Item_C_TrySetPassiveData_Params
{
};

// Function WBP_Item.WBP_Item_C.TrySetSpiritData
struct UWBP_Item_C_TrySetSpiritData_Params
{
};

// Function WBP_Item.WBP_Item_C.SetSelectedGreyVisibility
struct UWBP_Item_C_SetSelectedGreyVisibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Item.WBP_Item_C.RefreshBaseImage
struct UWBP_Item_C_RefreshBaseImage_Params
{
	bool                                               Focused;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Item.WBP_Item_C.OnPressConfirm
struct UWBP_Item_C_OnPressConfirm_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Item.WBP_Item_C.RefreshDesign
struct UWBP_Item_C_RefreshDesign_Params
{
	bool                                               bFocused;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Item.WBP_Item_C.Refresh
struct UWBP_Item_C_Refresh_Params
{
	struct FDataTableRowHandle                         ItemDataHandle;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Item.WBP_Item_C.Clear
struct UWBP_Item_C_Clear_Params
{
};

// Function WBP_Item.WBP_Item_C.OnUnequipSpirit
struct UWBP_Item_C_OnUnequipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpiritData                                 SpiritData;                                                // 0x0008(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Item.WBP_Item_C.OnEquipSpirit
struct UWBP_Item_C_OnEquipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpiritData                                 SpiritData;                                                // 0x0008(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Item.WBP_Item_C.Construct
struct UWBP_Item_C_Construct_Params
{
};

// Function WBP_Item.WBP_Item_C.OnPassiveEquipped
struct UWBP_Item_C_OnPassiveEquipped_Params
{
};

// Function WBP_Item.WBP_Item_C.OnPassiveUnequipped
struct UWBP_Item_C_OnPassiveUnequipped_Params
{
};

// Function WBP_Item.WBP_Item_C.ExecuteUbergraph_WBP_Item
struct UWBP_Item_C_ExecuteUbergraph_WBP_Item_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Item.WBP_Item_C.OnFocused__DelegateSignature
struct UWBP_Item_C_OnFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Item.WBP_Item_C.OnSelected__DelegateSignature
struct UWBP_Item_C_OnSelected__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
