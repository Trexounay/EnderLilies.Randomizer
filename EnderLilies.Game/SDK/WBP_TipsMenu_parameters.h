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

// Function WBP_TipsMenu.WBP_TipsMenu_C.Get_ArrowRight_ColorAndOpacity_1
struct UWBP_TipsMenu_C_Get_ArrowRight_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.Get_ArrowLeft_ColorAndOpacity_1
struct UWBP_TipsMenu_C_Get_ArrowLeft_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.RefreshPageDisplay
struct UWBP_TipsMenu_C_RefreshPageDisplay_Params
{
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.ConstructTipsList
struct UWBP_TipsMenu_C_ConstructTipsList_Params
{
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.CreateTipsPage
struct UWBP_TipsMenu_C_CreateTipsPage_Params
{
	class UWBP_Tips_List_C*                            TipsPage;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.OnFocusReceived
struct UWBP_TipsMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.Construct
struct UWBP_TipsMenu_C_Construct_Params
{
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.BndEvt__TipsPageScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
struct UWBP_TipsMenu_C_BndEvt__TipsPageScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              CurrentOffset;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.OnFocusedTipItem
struct UWBP_TipsMenu_C_OnFocusedTipItem_Params
{
	class UWBP_Tips_Item_C*                            TipItem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TipsMenu.WBP_TipsMenu_C.ExecuteUbergraph_WBP_TipsMenu
struct UWBP_TipsMenu_C_ExecuteUbergraph_WBP_TipsMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
