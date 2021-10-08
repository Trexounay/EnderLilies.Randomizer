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
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.AddValue
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ValueToAdd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_ResolutionScale_C::AddValue(float ValueToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.AddValue");

	UWBP_Settings_Graphics_ResolutionScale_C_AddValue_Params params;
	params.ValueToAdd = ValueToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.RefreshPercentageValue
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Settings_Graphics_ResolutionScale_C::RefreshPercentageValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.RefreshPercentageValue");

	UWBP_Settings_Graphics_ResolutionScale_C_RefreshPercentageValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Graphics_ResolutionScale_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.RefreshDesign");

	UWBP_Settings_Graphics_ResolutionScale_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_ResolutionScale_C::BndEvt__GammaSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_Settings_Graphics_ResolutionScale_C_BndEvt__GammaSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.SetValue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_ResolutionScale_C::SetValue(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.SetValue");

	UWBP_Settings_Graphics_ResolutionScale_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_Graphics_ResolutionScale_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_Settings_Graphics_ResolutionScale_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Settings_Graphics_ResolutionScale_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWBP_Settings_Graphics_ResolutionScale_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.ExecuteUbergraph_WBP_Settings_Graphics_ResolutionScale
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_ResolutionScale_C::ExecuteUbergraph_WBP_Settings_Graphics_ResolutionScale(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.ExecuteUbergraph_WBP_Settings_Graphics_ResolutionScale");

	UWBP_Settings_Graphics_ResolutionScale_C_ExecuteUbergraph_WBP_Settings_Graphics_ResolutionScale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.OnValueChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Graphics_ResolutionScale_C::OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Graphics_ResolutionScale.WBP_Settings_Graphics_ResolutionScale_C.OnValueChanged__DelegateSignature");

	UWBP_Settings_Graphics_ResolutionScale_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
