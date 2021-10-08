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
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DialogNoController_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.OnFocusReceived");

	UWBP_DialogNoController_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.OnFinish_066E292E42E788874C41348FA048AB13
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogNoController_C::OnFinish_066E292E42E788874C41348FA048AB13()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.OnFinish_066E292E42E788874C41348FA048AB13");

	UWBP_DialogNoController_C_OnFinish_066E292E42E788874C41348FA048AB13_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.OnFinish_2071A4134BF576284BB5479C11E4EF30
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogNoController_C::OnFinish_2071A4134BF576284BB5479C11E4EF30()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.OnFinish_2071A4134BF576284BB5479C11E4EF30");

	UWBP_DialogNoController_C_OnFinish_2071A4134BF576284BB5479C11E4EF30_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.OnFinish_066E292E42E788874C41348FECA9FE0F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogNoController_C::OnFinish_066E292E42E788874C41348FECA9FE0F()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.OnFinish_066E292E42E788874C41348FECA9FE0F");

	UWBP_DialogNoController_C_OnFinish_066E292E42E788874C41348FECA9FE0F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.OnFinish_2071A4134BF576284BB5479C5D05BA2C
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogNoController_C::OnFinish_2071A4134BF576284BB5479C5D05BA2C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.OnFinish_2071A4134BF576284BB5479C5D05BA2C");

	UWBP_DialogNoController_C_OnFinish_2071A4134BF576284BB5479C5D05BA2C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DialogNoController_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.Construct");

	UWBP_DialogNoController_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.OnProfileSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bValidSelection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DialogNoController_C::OnProfileSelected(bool bValidSelection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.OnProfileSelected");

	UWBP_DialogNoController_C_OnProfileSelected_Params params;
	params.bValidSelection = bValidSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.Close
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DialogNoController_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.Close");

	UWBP_DialogNoController_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_DialogNoController_C::BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_DialogNoController_C_BndEvt__Button_Resume_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DialogNoController_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.PreConstruct");

	UWBP_DialogNoController_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.ExecuteUbergraph_WBP_DialogNoController
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DialogNoController_C::ExecuteUbergraph_WBP_DialogNoController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.ExecuteUbergraph_WBP_DialogNoController");

	UWBP_DialogNoController_C_ExecuteUbergraph_WBP_DialogNoController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DialogNoController.WBP_DialogNoController_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_DialogNoController_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DialogNoController.WBP_DialogNoController_C.OnClose__DelegateSignature");

	UWBP_DialogNoController_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
