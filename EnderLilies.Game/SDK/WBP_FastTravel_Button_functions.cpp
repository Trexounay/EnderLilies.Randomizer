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
//		Name   -> Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.IsCurrentMap
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_FastTravel_Button_C::IsCurrentMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.IsCurrentMap");

	UWBP_FastTravel_Button_C_IsCurrentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_FastTravel_Button_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnFocusReceived");

	UWBP_FastTravel_Button_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_FastTravel_Button_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.Construct");

	UWBP_FastTravel_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_FastTravel_Button_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.RefreshDesign");

	UWBP_FastTravel_Button_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.BndEvt__WBP_RestMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_FastTravel_Button_C::BndEvt__WBP_RestMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.BndEvt__WBP_RestMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_FastTravel_Button_C_BndEvt__WBP_RestMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.ExecuteUbergraph_WBP_FastTravel_Button
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FastTravel_Button_C::ExecuteUbergraph_WBP_FastTravel_Button(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.ExecuteUbergraph_WBP_FastTravel_Button");

	UWBP_FastTravel_Button_C_ExecuteUbergraph_WBP_FastTravel_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_FastTravel_Button_C*                    FastTravelButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FastTravel_Button_C::OnFocused__DelegateSignature(class UWBP_FastTravel_Button_C* FastTravelButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnFocused__DelegateSignature");

	UWBP_FastTravel_Button_C_OnFocused__DelegateSignature_Params params;
	params.FastTravelButton = FastTravelButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnConfirmed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_FastTravel_Button_C*                    FastTravelButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FastTravel_Button_C::OnConfirmed__DelegateSignature(class UWBP_FastTravel_Button_C* FastTravelButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnConfirmed__DelegateSignature");

	UWBP_FastTravel_Button_C_OnConfirmed__DelegateSignature_Params params;
	params.FastTravelButton = FastTravelButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
