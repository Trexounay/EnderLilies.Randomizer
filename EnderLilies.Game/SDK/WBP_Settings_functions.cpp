// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.SetupLocalization
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Settings_C::SetupLocalization()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.SetupLocalization");

	UWBP_Settings_C_SetupLocalization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.SetFooterVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DisplayBindingFooter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_C::SetFooterVisibility(bool DisplayBindingFooter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.SetFooterVisibility");

	UWBP_Settings_C_SetFooterVisibility_Params params;
	params.DisplayBindingFooter = DisplayBindingFooter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.CustomNavigation_ToCurrentTab
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_Settings_C::CustomNavigation_ToCurrentTab(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.CustomNavigation_ToCurrentTab");

	UWBP_Settings_C_CustomNavigation_ToCurrentTab_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.CustomNavigation_ToBackButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_Settings_C::CustomNavigation_ToBackButton(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.CustomNavigation_ToBackButton");

	UWBP_Settings_C_CustomNavigation_ToBackButton_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.SetupSettings
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Settings_C::SetupSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.SetupSettings");

	UWBP_Settings_C_SetupSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnPressPrevPage
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_C::OnPressPrevPage(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnPressPrevPage");

	UWBP_Settings_C_OnPressPrevPage_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnPressNextPage
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_C::OnPressNextPage(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnPressNextPage");

	UWBP_Settings_C_OnPressNextPage_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnPressCancel");

	UWBP_Settings_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.GoToSideTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               NextTab                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_C::GoToSideTab(bool NextTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.GoToSideTab");

	UWBP_Settings_C_GoToSideTab_Params params;
	params.NextTab = NextTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnKeyDown");

	UWBP_Settings_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnFocusReceived");

	UWBP_Settings_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.SelectTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_C::SelectTab(int TabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.SelectTab");

	UWBP_Settings_C_SelectTab_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnFinish_066E292E42E788874C41348F9F49BA18
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_C::OnFinish_066E292E42E788874C41348F9F49BA18()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnFinish_066E292E42E788874C41348F9F49BA18");

	UWBP_Settings_C_OnFinish_066E292E42E788874C41348F9F49BA18_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnFinish_2071A4134BF576284BB5479C2EE5FE3B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_C::OnFinish_2071A4134BF576284BB5479C2EE5FE3B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnFinish_2071A4134BF576284BB5479C2EE5FE3B");

	UWBP_Settings_C_OnFinish_2071A4134BF576284BB5479C2EE5FE3B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnFinish_066E292E42E788874C41348FE16E1C50
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_C::OnFinish_066E292E42E788874C41348FE16E1C50()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnFinish_066E292E42E788874C41348FE16E1C50");

	UWBP_Settings_C_OnFinish_066E292E42E788874C41348FE16E1C50_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnFinish_2071A4134BF576284BB5479C50C25873
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_C::OnFinish_2071A4134BF576284BB5479C50C25873()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnFinish_2071A4134BF576284BB5479C50C25873");

	UWBP_Settings_C_OnFinish_2071A4134BF576284BB5479C50C25873_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.Construct");

	UWBP_Settings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.BndEvt__SoundTab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_C::BndEvt__SoundTab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.BndEvt__SoundTab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_Settings_C_BndEvt__SoundTab_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_C::BndEvt__GameplayTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_Settings_C_BndEvt__GameplayTab_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_C::BndEvt__WBP_BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWBP_Settings_C_BndEvt__WBP_BackButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_SettingsTab_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_C::BndEvt__WBP_SettingsTab_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_SettingsTab_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWBP_Settings_C_BndEvt__WBP_SettingsTab_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.CloseMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.CloseMenu");

	UWBP_Settings_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.BndEvt__KeyTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_C::BndEvt__KeyTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.BndEvt__KeyTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_Settings_C_BndEvt__KeyTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.BndEvt__KeyboardBindingTab_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_C::BndEvt__KeyboardBindingTab_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.BndEvt__KeyboardBindingTab_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWBP_Settings_C_BndEvt__KeyboardBindingTab_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_KeyBindings_Gamepad_K2Node_ComponentBoundEvent_6_OnKeyBindingModeChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_KeyBindingEntry_C*                      KeyBindingEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsSelectingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_C::BndEvt__WBP_KeyBindings_Gamepad_K2Node_ComponentBoundEvent_6_OnKeyBindingModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_KeyBindings_Gamepad_K2Node_ComponentBoundEvent_6_OnKeyBindingModeChanged__DelegateSignature");

	UWBP_Settings_C_BndEvt__WBP_KeyBindings_Gamepad_K2Node_ComponentBoundEvent_6_OnKeyBindingModeChanged__DelegateSignature_Params params;
	params.KeyBindingEntry = KeyBindingEntry;
	params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_KeyBindings_Keyboard_K2Node_ComponentBoundEvent_7_OnKeyBindingModeChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_KeyBindingEntry_C*                      KeyBindingEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsSelectingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_C::BndEvt__WBP_KeyBindings_Keyboard_K2Node_ComponentBoundEvent_7_OnKeyBindingModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.BndEvt__WBP_KeyBindings_Keyboard_K2Node_ComponentBoundEvent_7_OnKeyBindingModeChanged__DelegateSignature");

	UWBP_Settings_C_BndEvt__WBP_KeyBindings_Keyboard_K2Node_ComponentBoundEvent_7_OnKeyBindingModeChanged__DelegateSignature_Params params;
	params.KeyBindingEntry = KeyBindingEntry;
	params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Settings_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnRemovedFromFocusPath");

	UWBP_Settings_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.ExecuteUbergraph_WBP_Settings
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_C::ExecuteUbergraph_WBP_Settings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.ExecuteUbergraph_WBP_Settings");

	UWBP_Settings_C_ExecuteUbergraph_WBP_Settings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings.WBP_Settings_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Settings_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings.WBP_Settings_C.OnClose__DelegateSignature");

	UWBP_Settings_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
