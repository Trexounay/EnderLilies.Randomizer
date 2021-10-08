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

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnPressCancel
struct UWBP_Settings_Sound_Entry_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.Get_VolumeSlider_Value_1
struct UWBP_Settings_Sound_Entry_C_Get_VolumeSlider_Value_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnFocusReceived
struct UWBP_Settings_Sound_Entry_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.Construct
struct UWBP_Settings_Sound_Entry_C_Construct_Params
{
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__Slider_45_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UWBP_Settings_Sound_Entry_C_BndEvt__Slider_45_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature
struct UWBP_Settings_Sound_Entry_C_BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
struct UWBP_Settings_Sound_Entry_C_BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.SetVolume
struct UWBP_Settings_Sound_Entry_C_SetVolume_Params
{
	float                                              NewVolume;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.PlayTestLoop
struct UWBP_Settings_Sound_Entry_C_PlayTestLoop_Params
{
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.StopTestLoop
struct UWBP_Settings_Sound_Entry_C_StopTestLoop_Params
{
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnAddedToFocusPath
struct UWBP_Settings_Sound_Entry_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnRemovedFromFocusPath
struct UWBP_Settings_Sound_Entry_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.PreConstruct
struct UWBP_Settings_Sound_Entry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.RefreshDisplay
struct UWBP_Settings_Sound_Entry_C_RefreshDisplay_Params
{
};

// Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.ExecuteUbergraph_WBP_Settings_Sound_Entry
struct UWBP_Settings_Sound_Entry_C_ExecuteUbergraph_WBP_Settings_Sound_Entry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
