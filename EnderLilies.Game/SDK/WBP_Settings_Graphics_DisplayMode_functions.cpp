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
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.GetSelectedDisplayMode
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<Engine_EWindowMode>                    CurrMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_DisplayMode_C::GetSelectedDisplayMode(TEnumAsByte<Engine_EWindowMode>* CurrMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.GetSelectedDisplayMode");

	UWBP_Settings_Graphics_DisplayMode_C_GetSelectedDisplayMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrMode != nullptr)
		*CurrMode = params.CurrMode;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Graphics_DisplayMode_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.OnFocusReceived");

	UWBP_Settings_Graphics_DisplayMode_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.RefreshVisual
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EWindowMode>                    WindowMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_DisplayMode_C::RefreshVisual(TEnumAsByte<Engine_EWindowMode> WindowMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.RefreshVisual");

	UWBP_Settings_Graphics_DisplayMode_C_RefreshVisual_Params params;
	params.WindowMode = WindowMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.ChangeMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bRight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_DisplayMode_C::ChangeMode(bool bRight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.ChangeMode");

	UWBP_Settings_Graphics_DisplayMode_C_ChangeMode_Params params;
	params.bRight = bRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_DisplayMode_C::BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature");

	UWBP_Settings_Graphics_DisplayMode_C_BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Graphics_DisplayMode_C::BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature");

	UWBP_Settings_Graphics_DisplayMode_C_BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_Graphics_DisplayMode_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.Construct");

	UWBP_Settings_Graphics_DisplayMode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.ExecuteUbergraph_WBP_Settings_Graphics_DisplayMode
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_DisplayMode_C::ExecuteUbergraph_WBP_Settings_Graphics_DisplayMode(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.ExecuteUbergraph_WBP_Settings_Graphics_DisplayMode");

	UWBP_Settings_Graphics_DisplayMode_C_ExecuteUbergraph_WBP_Settings_Graphics_DisplayMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.OnOptionChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Graphics_DisplayMode_C::OnOptionChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C.OnOptionChanged__DelegateSignature");

	UWBP_Settings_Graphics_DisplayMode_C_OnOptionChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
