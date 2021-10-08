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
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.GetSelectedResolution
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FIntPoint                                   SelectedResolution                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_Resolution_C::GetSelectedResolution(struct FIntPoint* SelectedResolution)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.GetSelectedResolution");

	UWBP_Settings_Graphics_Resolution_C_GetSelectedResolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedResolution != nullptr)
		*SelectedResolution = params.SelectedResolution;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Graphics_Resolution_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.OnFocusReceived");

	UWBP_Settings_Graphics_Resolution_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_Graphics_Resolution_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.Construct");

	UWBP_Settings_Graphics_Resolution_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.RefreshResolutionText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_Resolution_C::RefreshResolutionText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.RefreshResolutionText");

	UWBP_Settings_Graphics_Resolution_C_RefreshResolutionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.RefreshResolutionChoices
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EWindowMode>                    WindowMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_Resolution_C::RefreshResolutionChoices(TEnumAsByte<Engine_EWindowMode> WindowMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.RefreshResolutionChoices");

	UWBP_Settings_Graphics_Resolution_C_RefreshResolutionChoices_Params params;
	params.WindowMode = WindowMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.RefreshVisibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EWindowMode>                    Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UWBP_Settings_Graphics_Resolution_C::RefreshVisibility(TEnumAsByte<Engine_EWindowMode> Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.RefreshVisibility");

	UWBP_Settings_Graphics_Resolution_C_RefreshVisibility_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_Resolution_C::BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedRight__DelegateSignature");

	UWBP_Settings_Graphics_Resolution_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_Resolution_C::BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedLeft__DelegateSignature");

	UWBP_Settings_Graphics_Resolution_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.ExecuteUbergraph_WBP_Settings_Graphics_Resolution
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_Resolution_C::ExecuteUbergraph_WBP_Settings_Graphics_Resolution(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.ExecuteUbergraph_WBP_Settings_Graphics_Resolution");

	UWBP_Settings_Graphics_Resolution_C_ExecuteUbergraph_WBP_Settings_Graphics_Resolution_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.OnOptionChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_Resolution_C::OnOptionChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C.OnOptionChanged__DelegateSignature");

	UWBP_Settings_Graphics_Resolution_C_OnOptionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
