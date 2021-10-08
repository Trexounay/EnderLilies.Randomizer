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
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ApplyFPSLimit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewLimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_FPSLimit_C::ApplyFPSLimit(int NewLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ApplyFPSLimit");

	UWBP_Settings_Graphics_FPSLimit_C_ApplyFPSLimit_Params params;
	params.NewLimit = NewLimit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.SetActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_FPSLimit_C::SetActive(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.SetActive");

	UWBP_Settings_Graphics_FPSLimit_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.GetIndexFromFPS
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              FPS                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_FPSLimit_C::GetIndexFromFPS(float FPS, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.GetIndexFromFPS");

	UWBP_Settings_Graphics_FPSLimit_C_GetIndexFromFPS_Params params;
	params.FPS = FPS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.GetFPSFromIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                FPSLimit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_FPSLimit_C::GetFPSFromIndex(int Selection, int* FPSLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.GetFPSFromIndex");

	UWBP_Settings_Graphics_FPSLimit_C_GetFPSFromIndex_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FPSLimit != nullptr)
		*FPSLimit = params.FPSLimit;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Graphics_FPSLimit_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.OnFocusReceived");

	UWBP_Settings_Graphics_FPSLimit_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.RefreshVisual
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_FPSLimit_C::RefreshVisual()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.RefreshVisual");

	UWBP_Settings_Graphics_FPSLimit_C_RefreshVisual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ChangeMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bRight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_FPSLimit_C::ChangeMode(bool bRight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ChangeMode");

	UWBP_Settings_Graphics_FPSLimit_C_ChangeMode_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_FPSLimit_C::BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature");

	UWBP_Settings_Graphics_FPSLimit_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_FPSLimit_C::BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature");

	UWBP_Settings_Graphics_FPSLimit_C_BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_Graphics_FPSLimit_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.Construct");

	UWBP_Settings_Graphics_FPSLimit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ReloadSettings
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_FPSLimit_C::ReloadSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ReloadSettings");

	UWBP_Settings_Graphics_FPSLimit_C_ReloadSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ExecuteUbergraph_WBP_Settings_Graphics_FPSLimit
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_FPSLimit_C::ExecuteUbergraph_WBP_Settings_Graphics_FPSLimit(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.ExecuteUbergraph_WBP_Settings_Graphics_FPSLimit");

	UWBP_Settings_Graphics_FPSLimit_C_ExecuteUbergraph_WBP_Settings_Graphics_FPSLimit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.OnOptionChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_FPSLimit_C::OnOptionChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_FPSLimit.WBP_Settings_Graphics_FPSLimit_C.OnOptionChanged__DelegateSignature");

	UWBP_Settings_Graphics_FPSLimit_C_OnOptionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
