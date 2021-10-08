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

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnPressConfirm
struct UWBP_RestMenuButton_C_OnPressConfirm_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnPressCancel
struct UWBP_RestMenuButton_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnFocusReceived
struct UWBP_RestMenuButton_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.PreConstruct
struct UWBP_RestMenuButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.RefreshDesign
struct UWBP_RestMenuButton_C_RefreshDesign_Params
{
	bool                                               bFocused;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.SetText
struct UWBP_RestMenuButton_C_SetText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.Construct
struct UWBP_RestMenuButton_C_Construct_Params
{
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.ExecuteUbergraph_WBP_RestMenuButton
struct UWBP_RestMenuButton_C_ExecuteUbergraph_WBP_RestMenuButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnCancel__DelegateSignature
struct UWBP_RestMenuButton_C_OnCancel__DelegateSignature_Params
{
};

// Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnClicked__DelegateSignature
struct UWBP_RestMenuButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
