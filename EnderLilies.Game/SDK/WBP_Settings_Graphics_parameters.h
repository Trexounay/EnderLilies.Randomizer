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

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.RevertToDefault
struct UWBP_Settings_Graphics_C_RevertToDefault_Params
{
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.SetVideoApplyEnabled
struct UWBP_Settings_Graphics_C_SetVideoApplyEnabled_Params
{
	bool                                               bInIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.OnFocusReceived
struct UWBP_Settings_Graphics_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Toggle_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__WBP_Settings_Toggle_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature_Params
{
	bool                                               ToggleValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__DisplayMode_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__DisplayMode_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params
{
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.Destruct
struct UWBP_Settings_Graphics_C_Destruct_Params
{
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__Gamma_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__Gamma_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.OnCloseGamma
struct UWBP_Settings_Graphics_C_OnCloseGamma_Params
{
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature_Params
{
	bool                                               ToggleValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.Construct
struct UWBP_Settings_Graphics_C_Construct_Params
{
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__Resolution_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__Resolution_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params
{
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__PostProcessQuality_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__PostProcessQuality_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature_Params
{
	bool                                               ToggleValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__EffectQuality_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__EffectQuality_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature_Params
{
	bool                                               ToggleValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Graphics_ResolutionScale_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__WBP_Settings_Graphics_ResolutionScale_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Graphics_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UWBP_Settings_Graphics_C_BndEvt__WBP_Settings_Graphics_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.RefreshDisplay
struct UWBP_Settings_Graphics_C_RefreshDisplay_Params
{
};

// Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.ExecuteUbergraph_WBP_Settings_Graphics
struct UWBP_Settings_Graphics_C_ExecuteUbergraph_WBP_Settings_Graphics_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
