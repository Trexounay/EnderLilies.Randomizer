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

// Function WBP_Settings.WBP_Settings_C.SetupLocalization
struct UWBP_Settings_C_SetupLocalization_Params
{
};

// Function WBP_Settings.WBP_Settings_C.SetFooterVisibility
struct UWBP_Settings_C_SetFooterVisibility_Params
{
	bool                                               DisplayBindingFooter;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings.WBP_Settings_C.CustomNavigation_ToCurrentTab
struct UWBP_Settings_C_CustomNavigation_ToCurrentTab_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings.WBP_Settings_C.CustomNavigation_ToBackButton
struct UWBP_Settings_C_CustomNavigation_ToBackButton_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings.WBP_Settings_C.SetupSettings
struct UWBP_Settings_C_SetupSettings_Params
{
};

// Function WBP_Settings.WBP_Settings_C.OnPressPrevPage
struct UWBP_Settings_C_OnPressPrevPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings.WBP_Settings_C.OnPressNextPage
struct UWBP_Settings_C_OnPressNextPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings.WBP_Settings_C.OnPressCancel
struct UWBP_Settings_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings.WBP_Settings_C.GoToSideTab
struct UWBP_Settings_C_GoToSideTab_Params
{
	bool                                               NextTab;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings.WBP_Settings_C.OnKeyDown
struct UWBP_Settings_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings.WBP_Settings_C.OnFocusReceived
struct UWBP_Settings_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Settings.WBP_Settings_C.SelectTab
struct UWBP_Settings_C_SelectTab_Params
{
	int                                                TabIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings.WBP_Settings_C.OnFinish_066E292E42E788874C41348F9F49BA18
struct UWBP_Settings_C_OnFinish_066E292E42E788874C41348F9F49BA18_Params
{
};

// Function WBP_Settings.WBP_Settings_C.OnFinish_2071A4134BF576284BB5479C2EE5FE3B
struct UWBP_Settings_C_OnFinish_2071A4134BF576284BB5479C2EE5FE3B_Params
{
};

// Function WBP_Settings.WBP_Settings_C.OnFinish_066E292E42E788874C41348FE16E1C50
struct UWBP_Settings_C_OnFinish_066E292E42E788874C41348FE16E1C50_Params
{
};

// Function WBP_Settings.WBP_Settings_C.OnFinish_2071A4134BF576284BB5479C50C25873
struct UWBP_Settings_C_OnFinish_2071A4134BF576284BB5479C50C25873_Params
{
};

// Function WBP_Settings.WBP_Settings_C.Construct
struct UWBP_Settings_C_Construct_Params
{
};

// Function WBP_Settings.WBP_Settings_C.BndEvt__SoundTab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_Settings_C_BndEvt__SoundTab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Settings.WBP_Settings_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_Settings_C_BndEvt__GameplayTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_Settings_C_BndEvt__WBP_BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_SettingsTab_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWBP_Settings_C_BndEvt__WBP_SettingsTab_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Settings.WBP_Settings_C.CloseMenu
struct UWBP_Settings_C_CloseMenu_Params
{
};

// Function WBP_Settings.WBP_Settings_C.BndEvt__KeyTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_Settings_C_BndEvt__KeyTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Settings.WBP_Settings_C.BndEvt__KeyboardBindingTab_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWBP_Settings_C_BndEvt__KeyboardBindingTab_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_KeyBindings_Gamepad_K2Node_ComponentBoundEvent_6_OnKeyBindingModeChanged__DelegateSignature
struct UWBP_Settings_C_BndEvt__WBP_KeyBindings_Gamepad_K2Node_ComponentBoundEvent_6_OnKeyBindingModeChanged__DelegateSignature_Params
{
	class UWBP_KeyBindingEntry_C*                      KeyBindingEntry;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelectingKey;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_KeyBindings_Keyboard_K2Node_ComponentBoundEvent_7_OnKeyBindingModeChanged__DelegateSignature
struct UWBP_Settings_C_BndEvt__WBP_KeyBindings_Keyboard_K2Node_ComponentBoundEvent_7_OnKeyBindingModeChanged__DelegateSignature_Params
{
	class UWBP_KeyBindingEntry_C*                      KeyBindingEntry;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelectingKey;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Settings.WBP_Settings_C.OnRemovedFromFocusPath
struct UWBP_Settings_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Settings.WBP_Settings_C.ExecuteUbergraph_WBP_Settings
struct UWBP_Settings_C_ExecuteUbergraph_WBP_Settings_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Settings.WBP_Settings_C.OnClose__DelegateSignature
struct UWBP_Settings_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
