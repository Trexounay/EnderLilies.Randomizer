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
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_SettingEntry_Text_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.OnFocusReceived");

	UWBP_SettingEntry_Text_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.SetLabelText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Text_C::SetLabelText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.SetLabelText");

	UWBP_SettingEntry_Text_C_SetLabelText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.SetOptionColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Text_C::SetOptionColor(const struct FSlateColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.SetOptionColor");

	UWBP_SettingEntry_Text_C_SetOptionColor_Params params;
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.SetOptionText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Text_C::SetOptionText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.SetOptionText");

	UWBP_SettingEntry_Text_C_SetOptionText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingEntry_Text_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.PreConstruct");

	UWBP_SettingEntry_Text_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_0_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Text_C::BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_0_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_0_OnPressedLeft__DelegateSignature");

	UWBP_SettingEntry_Text_C_BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_0_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Text_C::BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature");

	UWBP_SettingEntry_Text_C_BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.ExecuteUbergraph_WBP_SettingEntry_Text
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingEntry_Text_C::ExecuteUbergraph_WBP_SettingEntry_Text(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.ExecuteUbergraph_WBP_SettingEntry_Text");

	UWBP_SettingEntry_Text_C_ExecuteUbergraph_WBP_SettingEntry_Text_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.OnPressedRight__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Text_C::OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.OnPressedRight__DelegateSignature");

	UWBP_SettingEntry_Text_C_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.OnPressedLeft__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Text_C::OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Text.WBP_SettingEntry_Text_C.OnPressedLeft__DelegateSignature");

	UWBP_SettingEntry_Text_C_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
