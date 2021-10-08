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
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.GetNewCultureIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_Settings_LanguageSelection_C::GetNewCultureIndex(bool Increment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.GetNewCultureIndex");

	UWBP_Settings_LanguageSelection_C_GetNewCultureIndex_Params params;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.Get Converted Language Display Name
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FString                                     IETF_Language_Tag                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_Settings_LanguageSelection_C::Get_Converted_Language_Display_Name(const struct FString& IETF_Language_Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.Get Converted Language Display Name");

	UWBP_Settings_LanguageSelection_C_Get_Converted_Language_Display_Name_Params params;
	params.IETF_Language_Tag = IETF_Language_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.GetLanguage
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString UWBP_Settings_LanguageSelection_C::GetLanguage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.GetLanguage");

	UWBP_Settings_LanguageSelection_C_GetLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.SetLanguage
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Language                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_Settings_LanguageSelection_C::SetLanguage(const struct FString& Language)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.SetLanguage");

	UWBP_Settings_LanguageSelection_C_SetLanguage_Params params;
	params.Language = Language;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_LanguageSelection_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.OnFocusReceived");

	UWBP_Settings_LanguageSelection_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_LanguageSelection_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.Construct");

	UWBP_Settings_LanguageSelection_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.RefreshDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_LanguageSelection_C::RefreshDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.RefreshDisplay");

	UWBP_Settings_LanguageSelection_C_RefreshDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.ChangeCulture
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Increment                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_LanguageSelection_C::ChangeCulture(bool Increment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.ChangeCulture");

	UWBP_Settings_LanguageSelection_C_ChangeCulture_Params params;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_LanguageSelection_C::BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature");

	UWBP_Settings_LanguageSelection_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_LanguageSelection_C::BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature");

	UWBP_Settings_LanguageSelection_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.ExecuteUbergraph_WBP_Settings_LanguageSelection
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_LanguageSelection_C::ExecuteUbergraph_WBP_Settings_LanguageSelection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_LanguageSelection.WBP_Settings_LanguageSelection_C.ExecuteUbergraph_WBP_Settings_LanguageSelection");

	UWBP_Settings_LanguageSelection_C_ExecuteUbergraph_WBP_Settings_LanguageSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
