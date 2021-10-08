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
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DialogProfileChange_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnKeyDown");

	UWBP_DialogProfileChange_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DialogProfileChange_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFocusReceived");

	UWBP_DialogProfileChange_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFinish_066E292E42E788874C41348FEA270E86
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogProfileChange_C::OnFinish_066E292E42E788874C41348FEA270E86()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFinish_066E292E42E788874C41348FEA270E86");

	UWBP_DialogProfileChange_C_OnFinish_066E292E42E788874C41348FEA270E86_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFinish_2071A4134BF576284BB5479C5B8B4AA5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogProfileChange_C::OnFinish_2071A4134BF576284BB5479C5B8B4AA5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFinish_2071A4134BF576284BB5479C5B8B4AA5");

	UWBP_DialogProfileChange_C_OnFinish_2071A4134BF576284BB5479C5B8B4AA5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFinish_066E292E42E788874C41348F621B212A
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogProfileChange_C::OnFinish_066E292E42E788874C41348F621B212A()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFinish_066E292E42E788874C41348F621B212A");

	UWBP_DialogProfileChange_C_OnFinish_066E292E42E788874C41348F621B212A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFinish_2071A4134BF576284BB5479CD3B76509
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogProfileChange_C::OnFinish_2071A4134BF576284BB5479CD3B76509()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnFinish_2071A4134BF576284BB5479CD3B76509");

	UWBP_DialogProfileChange_C_OnFinish_2071A4134BF576284BB5479CD3B76509_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_DialogProfileChange_C::BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_DialogProfileChange_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_DialogProfileChange_C::BndEvt__Button_NO_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_DialogProfileChange_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DialogProfileChange_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.Construct");

	UWBP_DialogProfileChange_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.ResumeGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogProfileChange_C::ResumeGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.ResumeGame");

	UWBP_DialogProfileChange_C_ResumeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnCurrentProfileChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogProfileChange_C::OnCurrentProfileChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnCurrentProfileChanged");

	UWBP_DialogProfileChange_C_OnCurrentProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnCloseProfileUI
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bValidSelection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DialogProfileChange_C::OnCloseProfileUI(bool bValidSelection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnCloseProfileUI");

	UWBP_DialogProfileChange_C_OnCloseProfileUI_Params params;
	params.bValidSelection = bValidSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.ExecuteUbergraph_WBP_DialogProfileChange
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DialogProfileChange_C::ExecuteUbergraph_WBP_DialogProfileChange(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.ExecuteUbergraph_WBP_DialogProfileChange");

	UWBP_DialogProfileChange_C_ExecuteUbergraph_WBP_DialogProfileChange_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnResumeGame__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_DialogProfileChange_C::OnResumeGame__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogProfileChange.WBP_DialogProfileChange_C.OnResumeGame__DelegateSignature");

	UWBP_DialogProfileChange_C_OnResumeGame__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
