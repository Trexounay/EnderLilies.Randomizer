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

// Function WBP_Tips_List.WBP_Tips_List_C.OnFocusReceived
struct UWBP_Tips_List_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Tips_List.WBP_Tips_List_C.OnFocusTipItem
struct UWBP_Tips_List_C_OnFocusTipItem_Params
{
	class UWBP_Tips_Item_C*                            TipItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Tips_List.WBP_Tips_List_C.AddTips
struct UWBP_Tips_List_C_AddTips_Params
{
	struct FDataTableRowHandle                         handle;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Tips_List.WBP_Tips_List_C.ExecuteUbergraph_WBP_Tips_List
struct UWBP_Tips_List_C_ExecuteUbergraph_WBP_Tips_List_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Tips_List.WBP_Tips_List_C.OnFocusedTipItem__DelegateSignature
struct UWBP_Tips_List_C_OnFocusedTipItem__DelegateSignature_Params
{
	class UWBP_Tips_Item_C*                            TipItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
