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

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.GetSelectedDisplayMode
struct UWBP_Settings_Graphics_DisplayMode_C_GetSelectedDisplayMode_Params
{
	TEnumAsByte<Engine_EWindowMode>                    CurrMode;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.OnFocusReceived
struct UWBP_Settings_Graphics_DisplayMode_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.RefreshVisual
struct UWBP_Settings_Graphics_DisplayMode_C_RefreshVisual_Params
{
	TEnumAsByte<Engine_EWindowMode>                    WindowMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.ChangeMode
struct UWBP_Settings_Graphics_DisplayMode_C_ChangeMode_Params
{
	bool                                               bRight;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
struct UWBP_Settings_Graphics_DisplayMode_C_BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature
struct UWBP_Settings_Graphics_DisplayMode_C_BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.Construct
struct UWBP_Settings_Graphics_DisplayMode_C_Construct_Params
{
};

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.ExecuteUbergraph_WBP_Settings_Graphics_DisplayMode
struct UWBP_Settings_Graphics_DisplayMode_C_ExecuteUbergraph_WBP_Settings_Graphics_DisplayMode_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.OnOptionChanged__DelegateSignature
struct UWBP_Settings_Graphics_DisplayMode_C_OnOptionChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
