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
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.RevertToDefault
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_C::RevertToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.RevertToDefault");

	UWBP_Settings_Graphics_C_RevertToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.SetVideoApplyEnabled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_C::SetVideoApplyEnabled(bool bInIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.SetVideoApplyEnabled");

	UWBP_Settings_Graphics_C_SetVideoApplyEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Graphics_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.OnFocusReceived");

	UWBP_Settings_Graphics_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_C::BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Toggle_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_C::BndEvt__WBP_Settings_Toggle_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Toggle_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__WBP_Settings_Toggle_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__DisplayMode_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_Graphics_C::BndEvt__DisplayMode_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__DisplayMode_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__DisplayMode_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_Graphics_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.Destruct");

	UWBP_Settings_Graphics_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__Gamma_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_C::BndEvt__Gamma_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__Gamma_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__Gamma_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.OnCloseGamma
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_C::OnCloseGamma()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.OnCloseGamma");

	UWBP_Settings_Graphics_C_OnCloseGamma_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_C::BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_Graphics_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.Construct");

	UWBP_Settings_Graphics_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__Resolution_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_Graphics_C::BndEvt__Resolution_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__Resolution_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__Resolution_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__PostProcessQuality_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_C::BndEvt__PostProcessQuality_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__PostProcessQuality_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__PostProcessQuality_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__EffectQuality_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_C::BndEvt__EffectQuality_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__EffectQuality_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__EffectQuality_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Graphics_ResolutionScale_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_C::BndEvt__WBP_Settings_Graphics_ResolutionScale_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Graphics_ResolutionScale_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__WBP_Settings_Graphics_ResolutionScale_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Graphics_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_C::BndEvt__WBP_Settings_Graphics_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.BndEvt__WBP_Settings_Graphics_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UWBP_Settings_Graphics_C_BndEvt__WBP_Settings_Graphics_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.RefreshDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_C::RefreshDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.RefreshDisplay");

	UWBP_Settings_Graphics_C_RefreshDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.ExecuteUbergraph_WBP_Settings_Graphics
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_C::ExecuteUbergraph_WBP_Settings_Graphics(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics.WBP_Settings_Graphics_C.ExecuteUbergraph_WBP_Settings_Graphics");

	UWBP_Settings_Graphics_C_ExecuteUbergraph_WBP_Settings_Graphics_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
