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
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.AddValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ValueToAdd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Settings_GammaSlider_C::AddValue(float ValueToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.AddValue");

	UWB_Settings_GammaSlider_C_AddValue_Params params;
	params.ValueToAdd = ValueToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.RefreshArrowsVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWB_Settings_GammaSlider_C::RefreshArrowsVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.RefreshArrowsVisibility");

	UWB_Settings_GammaSlider_C_RefreshArrowsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.GetPercent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_Settings_GammaSlider_C::GetPercent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.GetPercent_1");

	UWB_Settings_GammaSlider_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.GetValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWB_Settings_GammaSlider_C::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.GetValue");

	UWB_Settings_GammaSlider_C_GetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWB_Settings_GammaSlider_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.OnFocusReceived");

	UWB_Settings_GammaSlider_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Settings_GammaSlider_C::BndEvt__GammaSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UWB_Settings_GammaSlider_C_BndEvt__GammaSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.SetValue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Settings_GammaSlider_C::SetValue(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.SetValue");

	UWB_Settings_GammaSlider_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_Settings_GammaSlider_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.RefreshDesign");

	UWB_Settings_GammaSlider_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Settings_GammaSlider_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWB_Settings_GammaSlider_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWB_Settings_GammaSlider_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWB_Settings_GammaSlider_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.ExecuteUbergraph_WB_Settings_GammaSlider
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Settings_GammaSlider_C::ExecuteUbergraph_WB_Settings_GammaSlider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.ExecuteUbergraph_WB_Settings_GammaSlider");

	UWB_Settings_GammaSlider_C_ExecuteUbergraph_WB_Settings_GammaSlider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.OnValueChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_Settings_GammaSlider_C::OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_Settings_GammaSlider.WB_Settings_GammaSlider_C.OnValueChanged__DelegateSignature");

	UWB_Settings_GammaSlider_C_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
