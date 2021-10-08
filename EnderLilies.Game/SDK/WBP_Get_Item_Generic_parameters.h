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

// Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.Play SE
struct UWBP_Get_Item_Generic_C_Play_SE_Params
{
};

// Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.SetTextWithFormat
struct UWBP_Get_Item_Generic_C_SetTextWithFormat_Params
{
	class URefreshableRichTextBlock*                   TextBlock;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NewFormat;                                                 // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FRichTextFormatElement>              NewFormatElements;                                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.OnFocusReceived
struct UWBP_Get_Item_Generic_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.Construct
struct UWBP_Get_Item_Generic_C_Construct_Params
{
};

// Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_Get_Item_Generic_C_BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.ExecuteUbergraph_WBP_Get_Item_Generic
struct UWBP_Get_Item_Generic_C_ExecuteUbergraph_WBP_Get_Item_Generic_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
