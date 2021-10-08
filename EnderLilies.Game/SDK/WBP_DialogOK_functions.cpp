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
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.SetTexts
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       OKText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_DialogOK_C::SetTexts(const struct FText& MessageText, const struct FText& OKText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.SetTexts");

	UWBP_DialogOK_C_SetTexts_Params params;
	params.MessageText = MessageText;
	params.OKText = OKText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DialogOK_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.OnKeyDown");

	UWBP_DialogOK_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DialogOK_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.OnFocusReceived");

	UWBP_DialogOK_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_066E292E42E788874C41348F1CA5C6C8
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogOK_C::OnFinish_066E292E42E788874C41348F1CA5C6C8()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_066E292E42E788874C41348F1CA5C6C8");

	UWBP_DialogOK_C_OnFinish_066E292E42E788874C41348F1CA5C6C8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_2071A4134BF576284BB5479CAD0982EB
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogOK_C::OnFinish_2071A4134BF576284BB5479CAD0982EB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_2071A4134BF576284BB5479CAD0982EB");

	UWBP_DialogOK_C_OnFinish_2071A4134BF576284BB5479CAD0982EB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_066E292E42E788874C41348FFB4E85B5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogOK_C::OnFinish_066E292E42E788874C41348FFB4E85B5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_066E292E42E788874C41348FFB4E85B5");

	UWBP_DialogOK_C_OnFinish_066E292E42E788874C41348FFB4E85B5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_2071A4134BF576284BB5479C4AE2C196
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogOK_C::OnFinish_2071A4134BF576284BB5479C4AE2C196()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.OnFinish_2071A4134BF576284BB5479C4AE2C196");

	UWBP_DialogOK_C_OnFinish_2071A4134BF576284BB5479C4AE2C196_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DialogOK_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.Construct");

	UWBP_DialogOK_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_DialogOK_C::BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_DialogOK_C_BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.SetErrorMessage
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Title                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FText                                       Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_DialogOK_C::SetErrorMessage(const struct FText& Title, const struct FText& Message)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.SetErrorMessage");

	UWBP_DialogOK_C_SetErrorMessage_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.ExecuteUbergraph_WBP_DialogOK
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DialogOK_C::ExecuteUbergraph_WBP_DialogOK(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.ExecuteUbergraph_WBP_DialogOK");

	UWBP_DialogOK_C_ExecuteUbergraph_WBP_DialogOK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogOK.WBP_DialogOK_C.OnClickOK__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_DialogOK_C::OnClickOK__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogOK.WBP_DialogOK_C.OnClickOK__DelegateSignature");

	UWBP_DialogOK_C_OnClickOK__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
