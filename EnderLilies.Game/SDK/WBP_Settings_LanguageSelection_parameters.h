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

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.GetNewCultureIndex
struct UWBP_Settings_LanguageSelection_C_GetNewCultureIndex_Params
{
	bool                                               Increment;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.Get Converted Language Display Name
struct UWBP_Settings_LanguageSelection_C_Get_Converted_Language_Display_Name_Params
{
	struct FString                                     IETF_Language_Tag;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.GetLanguage
struct UWBP_Settings_LanguageSelection_C_GetLanguage_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.SetLanguage
struct UWBP_Settings_LanguageSelection_C_SetLanguage_Params
{
	struct FString                                     Language;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.OnFocusReceived
struct UWBP_Settings_LanguageSelection_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.Construct
struct UWBP_Settings_LanguageSelection_C_Construct_Params
{
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.RefreshDisplay
struct UWBP_Settings_LanguageSelection_C_RefreshDisplay_Params
{
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.ChangeCulture
struct UWBP_Settings_LanguageSelection_C_ChangeCulture_Params
{
	bool                                               Increment;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
struct UWBP_Settings_LanguageSelection_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature
struct UWBP_Settings_LanguageSelection_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.ExecuteUbergraph_WBP_Settings_LanguageSelection
struct UWBP_Settings_LanguageSelection_C_ExecuteUbergraph_WBP_Settings_LanguageSelection_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
