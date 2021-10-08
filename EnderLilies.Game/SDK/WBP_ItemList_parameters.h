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

// Function WBP_ItemList.WBP_ItemList_C.FocusFirstChild
struct UWBP_ItemList_C_FocusFirstChild_Params
{
};

// Function WBP_ItemList.WBP_ItemList_C.OnFocusReceived
struct UWBP_ItemList_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_ItemList.WBP_ItemList_C.AddEntry
struct UWBP_ItemList_C_AddEntry_Params
{
	struct FDataTableRowHandle                         ItemDataHandle;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_ItemList.WBP_ItemList_C.PreConstruct
struct UWBP_ItemList_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ItemList.WBP_ItemList_C.Construct
struct UWBP_ItemList_C_Construct_Params
{
};

// Function WBP_ItemList.WBP_ItemList_C.Clear
struct UWBP_ItemList_C_Clear_Params
{
};

// Function WBP_ItemList.WBP_ItemList_C.Initialize
struct UWBP_ItemList_C_Initialize_Params
{
	class UBaseInventory*                              Inventory;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemList.WBP_ItemList_C.OnEntrySelected
struct UWBP_ItemList_C_OnEntrySelected_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemList.WBP_ItemList_C.OnItemFocused
struct UWBP_ItemList_C_OnItemFocused_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemList.WBP_ItemList_C.ExecuteUbergraph_WBP_ItemList
struct UWBP_ItemList_C_ExecuteUbergraph_WBP_ItemList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemList.WBP_ItemList_C.OnFocused__DelegateSignature
struct UWBP_ItemList_C_OnFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemList.WBP_ItemList_C.OnSelect__DelegateSignature
struct UWBP_ItemList_C_OnSelect__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ItemList.WBP_ItemList_C.OnCancel__DelegateSignature
struct UWBP_ItemList_C_OnCancel__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
