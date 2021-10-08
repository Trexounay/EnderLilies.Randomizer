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

// Function WBP_EventUI.WBP_EventUI_C.OnFocusReceived
struct UWBP_EventUI_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_EventUI.WBP_EventUI_C.OnKeyDown
struct UWBP_EventUI_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_EventUI.WBP_EventUI_C.ShowSkipMenu
struct UWBP_EventUI_C_ShowSkipMenu_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnResumeGame
struct UWBP_EventUI_C_OnResumeGame_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.RequestRemove
struct UWBP_EventUI_C_RequestRemove_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnConfirmSkip
struct UWBP_EventUI_C_OnConfirmSkip_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnCancelSkip
struct UWBP_EventUI_C_OnCancelSkip_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnFadeFinished
struct UWBP_EventUI_C_OnFadeFinished_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnFadeInFinished
struct UWBP_EventUI_C_OnFadeInFinished_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.ShowPauseMenu
struct UWBP_EventUI_C_ShowPauseMenu_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnPressPause
struct UWBP_EventUI_C_OnPressPause_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnStartNewAction
struct UWBP_EventUI_C_OnStartNewAction_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.Destruct
struct UWBP_EventUI_C_Destruct_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnControllerDisconnect
struct UWBP_EventUI_C_OnControllerDisconnect_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnApplicationDeactivated
struct UWBP_EventUI_C_OnApplicationDeactivated_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.Construct
struct UWBP_EventUI_C_Construct_Params
{
};

// Function WBP_EventUI.WBP_EventUI_C.OnFocusLost
struct UWBP_EventUI_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_EventUI.WBP_EventUI_C.ExecuteUbergraph_WBP_EventUI
struct UWBP_EventUI_C_ExecuteUbergraph_WBP_EventUI_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
