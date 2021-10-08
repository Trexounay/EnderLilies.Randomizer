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

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnPaint
struct UWBP_PlayerUI_C_OnPaint_Params
{
	struct FPaintContext                               Context;                                                   // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.PlayAnimationWithTime
struct UWBP_PlayerUI_C_PlayAnimationWithTime_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.SetMinimapSize
struct UWBP_PlayerUI_C_SetMinimapSize_Params
{
	int                                                MinimapSizeIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.ToggleMinimap
struct UWBP_PlayerUI_C_ToggleMinimap_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.ShowUIWithTime
struct UWBP_PlayerUI_C_ShowUIWithTime_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.ShowUI
struct UWBP_PlayerUI_C_ShowUI_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.HideUIWithTime
struct UWBP_PlayerUI_C_HideUIWithTime_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.HideUI
struct UWBP_PlayerUI_C_HideUI_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.RefreshPlayerUIContainerVisibility
struct UWBP_PlayerUI_C_RefreshPlayerUIContainerVisibility_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnFinish_EF5570CD41D995E70BC60EAC4CF2DD0D
struct UWBP_PlayerUI_C_OnFinish_EF5570CD41D995E70BC60EAC4CF2DD0D_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.Initialize
struct UWBP_PlayerUI_C_Initialize_Params
{
	class AZenithPlayerController*                     Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZenithCharacter*                            Character;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.DelayedInvalidate
struct UWBP_PlayerUI_C_DelayedInvalidate_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.Construct
struct UWBP_PlayerUI_C_Construct_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.Destruct
struct UWBP_PlayerUI_C_Destruct_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.OnPlayerUIVisibilitySettingsChanged
struct UWBP_PlayerUI_C_OnPlayerUIVisibilitySettingsChanged_Params
{
};

// Function WBP_PlayerUI.WBP_PlayerUI_C.ExecuteUbergraph_WBP_PlayerUI
struct UWBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
