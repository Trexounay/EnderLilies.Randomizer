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

// Function WBP_DialogOK.WBP_DialogOK_C.SetTexts
struct UWBP_DialogOK_C_SetTexts_Params
{
	struct FText                                       MessageText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       OKText;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_DialogOK.WBP_DialogOK_C.OnKeyDown
struct UWBP_DialogOK_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DialogOK.WBP_DialogOK_C.OnFocusReceived
struct UWBP_DialogOK_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_066E292E42E788874C41348F1CA5C6C8
struct UWBP_DialogOK_C_OnFinish_066E292E42E788874C41348F1CA5C6C8_Params
{
};

// Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_2071A4134BF576284BB5479CAD0982EB
struct UWBP_DialogOK_C_OnFinish_2071A4134BF576284BB5479CAD0982EB_Params
{
};

// Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_066E292E42E788874C41348FFB4E85B5
struct UWBP_DialogOK_C_OnFinish_066E292E42E788874C41348FFB4E85B5_Params
{
};

// Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_2071A4134BF576284BB5479C4AE2C196
struct UWBP_DialogOK_C_OnFinish_2071A4134BF576284BB5479C4AE2C196_Params
{
};

// Function WBP_DialogOK.WBP_DialogOK_C.Construct
struct UWBP_DialogOK_C_Construct_Params
{
};

// Function WBP_DialogOK.WBP_DialogOK_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_DialogOK_C_BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_DialogOK.WBP_DialogOK_C.SetErrorMessage
struct UWBP_DialogOK_C_SetErrorMessage_Params
{
	struct FText                                       Title;                                                     // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Message;                                                   // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_DialogOK.WBP_DialogOK_C.ExecuteUbergraph_WBP_DialogOK
struct UWBP_DialogOK_C_ExecuteUbergraph_WBP_DialogOK_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DialogOK.WBP_DialogOK_C.OnClickOK__DelegateSignature
struct UWBP_DialogOK_C_OnClickOK__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
