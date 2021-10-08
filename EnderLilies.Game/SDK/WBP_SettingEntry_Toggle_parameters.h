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

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetOptionColor
struct UWBP_SettingEntry_Toggle_C_SetOptionColor_Params
{
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetLabelText
struct UWBP_SettingEntry_Toggle_C_SetLabelText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.OnFocusReceived
struct UWBP_SettingEntry_Toggle_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.PreConstruct
struct UWBP_SettingEntry_Toggle_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetToggle
struct UWBP_SettingEntry_Toggle_C_SetToggle_Params
{
	bool                                               ToggleValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
struct UWBP_SettingEntry_Toggle_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature
struct UWBP_SettingEntry_Toggle_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.RefreshText
struct UWBP_SettingEntry_Toggle_C_RefreshText_Params
{
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.ExecuteUbergraph_WBP_SettingEntry_Toggle
struct UWBP_SettingEntry_Toggle_C_ExecuteUbergraph_WBP_SettingEntry_Toggle_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.OnToggle__DelegateSignature
struct UWBP_SettingEntry_Toggle_C_OnToggle__DelegateSignature_Params
{
	bool                                               ToggleValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
