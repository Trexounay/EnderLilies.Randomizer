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
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetOptionColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 ColorAndOpacity                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Toggle_C::SetOptionColor(const struct FSlateColor& ColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetOptionColor");

	UWBP_SettingEntry_Toggle_C_SetOptionColor_Params params;
	params.ColorAndOpacity = ColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetLabelText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Toggle_C::SetLabelText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetLabelText");

	UWBP_SettingEntry_Toggle_C_SetLabelText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_SettingEntry_Toggle_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.OnFocusReceived");

	UWBP_SettingEntry_Toggle_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingEntry_Toggle_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.PreConstruct");

	UWBP_SettingEntry_Toggle_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetToggle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingEntry_Toggle_C::SetToggle(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.SetToggle");

	UWBP_SettingEntry_Toggle_C_SetToggle_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Toggle_C::BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature");

	UWBP_SettingEntry_Toggle_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Toggle_C::BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature");

	UWBP_SettingEntry_Toggle_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.RefreshText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SettingEntry_Toggle_C::RefreshText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.RefreshText");

	UWBP_SettingEntry_Toggle_C_RefreshText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.ExecuteUbergraph_WBP_SettingEntry_Toggle
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingEntry_Toggle_C::ExecuteUbergraph_WBP_SettingEntry_Toggle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.ExecuteUbergraph_WBP_SettingEntry_Toggle");

	UWBP_SettingEntry_Toggle_C_ExecuteUbergraph_WBP_SettingEntry_Toggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.OnToggle__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingEntry_Toggle_C::OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C.OnToggle__DelegateSignature");

	UWBP_SettingEntry_Toggle_C_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
