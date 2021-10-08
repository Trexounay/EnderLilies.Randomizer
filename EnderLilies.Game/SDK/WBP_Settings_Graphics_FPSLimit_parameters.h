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

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ApplyFPSLimit
struct UWBP_Settings_Graphics_FPSLimit_C_ApplyFPSLimit_Params
{
	int                                                NewLimit;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.SetActive
struct UWBP_Settings_Graphics_FPSLimit_C_SetActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.GetIndexFromFPS
struct UWBP_Settings_Graphics_FPSLimit_C_GetIndexFromFPS_Params
{
	float                                              FPS;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.GetFPSFromIndex
struct UWBP_Settings_Graphics_FPSLimit_C_GetFPSFromIndex_Params
{
	int                                                Selection;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FPSLimit;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.OnFocusReceived
struct UWBP_Settings_Graphics_FPSLimit_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.RefreshVisual
struct UWBP_Settings_Graphics_FPSLimit_C_RefreshVisual_Params
{
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ChangeMode
struct UWBP_Settings_Graphics_FPSLimit_C_ChangeMode_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
struct UWBP_Settings_Graphics_FPSLimit_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature
struct UWBP_Settings_Graphics_FPSLimit_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.Construct
struct UWBP_Settings_Graphics_FPSLimit_C_Construct_Params
{
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ReloadSettings
struct UWBP_Settings_Graphics_FPSLimit_C_ReloadSettings_Params
{
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ExecuteUbergraph_WBP_Settings_Graphics_FPSLimit
struct UWBP_Settings_Graphics_FPSLimit_C_ExecuteUbergraph_WBP_Settings_Graphics_FPSLimit_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.OnOptionChanged__DelegateSignature
struct UWBP_Settings_Graphics_FPSLimit_C_OnOptionChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
