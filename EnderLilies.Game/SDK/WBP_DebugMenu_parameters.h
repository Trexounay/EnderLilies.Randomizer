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

// Function WBP_DebugMenu.WBP_DebugMenu_C.SetNewGamePlusText
struct UWBP_DebugMenu_C_SetNewGamePlusText_Params
{
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.SetMapDifficultyText
struct UWBP_DebugMenu_C_SetMapDifficultyText_Params
{
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.Get_MapNameText
struct UWBP_DebugMenu_C_Get_MapNameText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.Get_RHIText
struct UWBP_DebugMenu_C_Get_RHIText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.Get_BuildText
struct UWBP_DebugMenu_C_Get_BuildText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.Get_VersionText
struct UWBP_DebugMenu_C_Get_VersionText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.OnFocusReceived
struct UWBP_DebugMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.ToggleOpacity
struct UWBP_DebugMenu_C_ToggleOpacity_Params
{
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.OnKeyDown
struct UWBP_DebugMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.OnOpenMenu
struct UWBP_DebugMenu_C_OnOpenMenu_Params
{
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.OnCloseMenu
struct UWBP_DebugMenu_C_OnCloseMenu_Params
{
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.SwitchMenu
struct UWBP_DebugMenu_C_SwitchMenu_Params
{
	bool                                               GoingRight;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.RefreshPageText
struct UWBP_DebugMenu_C_RefreshPageText_Params
{
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.Construct
struct UWBP_DebugMenu_C_Construct_Params
{
};

// Function WBP_DebugMenu.WBP_DebugMenu_C.ExecuteUbergraph_WBP_DebugMenu
struct UWBP_DebugMenu_C_ExecuteUbergraph_WBP_DebugMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
