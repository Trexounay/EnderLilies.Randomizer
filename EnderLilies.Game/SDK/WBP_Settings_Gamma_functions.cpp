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
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnPressConfirm
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Gamma_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnPressConfirm");

	UWBP_Settings_Gamma_C_OnPressConfirm_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.GetText_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_Settings_Gamma_C::GetText_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.GetText_1");

	UWBP_Settings_Gamma_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Gamma_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFocusReceived");

	UWBP_Settings_Gamma_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFinish_066E292E42E788874C41348F555FED74
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Gamma_C::OnFinish_066E292E42E788874C41348F555FED74()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFinish_066E292E42E788874C41348F555FED74");

	UWBP_Settings_Gamma_C_OnFinish_066E292E42E788874C41348F555FED74_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFinish_2071A4134BF576284BB5479CE4F3A957
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Gamma_C::OnFinish_2071A4134BF576284BB5479CE4F3A957()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFinish_2071A4134BF576284BB5479CE4F3A957");

	UWBP_Settings_Gamma_C_OnFinish_2071A4134BF576284BB5479CE4F3A957_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFinish_066E292E42E788874C41348FECB216C9
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Gamma_C::OnFinish_066E292E42E788874C41348FECB216C9()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFinish_066E292E42E788874C41348FECB216C9");

	UWBP_Settings_Gamma_C_OnFinish_066E292E42E788874C41348FECB216C9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFinish_2071A4134BF576284BB5479C5D1E52EA
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Gamma_C::OnFinish_2071A4134BF576284BB5479C5D1E52EA()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnFinish_2071A4134BF576284BB5479C5D1E52EA");

	UWBP_Settings_Gamma_C_OnFinish_2071A4134BF576284BB5479C5D1E52EA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_Gamma_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.Construct");

	UWBP_Settings_Gamma_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.Close
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Gamma_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.Close");

	UWBP_Settings_Gamma_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.BndEvt__WB_Settings_GammaSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Gamma_C::BndEvt__WB_Settings_GammaSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.BndEvt__WB_Settings_GammaSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");

	UWBP_Settings_Gamma_C_BndEvt__WB_Settings_GammaSlider_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnPressedConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Gamma_C::OnPressedConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnPressedConfirm");

	UWBP_Settings_Gamma_C_OnPressedConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.ExecuteUbergraph_WBP_Settings_Gamma
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Gamma_C::ExecuteUbergraph_WBP_Settings_Gamma(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.ExecuteUbergraph_WBP_Settings_Gamma");

	UWBP_Settings_Gamma_C_ExecuteUbergraph_WBP_Settings_Gamma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Gamma_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Gamma.WBP_Settings_Gamma_C.OnClose__DelegateSignature");

	UWBP_Settings_Gamma_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
