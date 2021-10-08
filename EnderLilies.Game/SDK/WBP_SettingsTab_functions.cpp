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
//		Name   -> Function WBP_SettingsTab.WBP_SettingsTab_C.SetText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingsTab_C::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingsTab.WBP_SettingsTab_C.SetText");

	UWBP_SettingsTab_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingsTab.WBP_SettingsTab_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_SettingsTab_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingsTab.WBP_SettingsTab_C.OnFocusReceived");

	UWBP_SettingsTab_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingsTab.WBP_SettingsTab_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsTab_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingsTab.WBP_SettingsTab_C.PreConstruct");

	UWBP_SettingsTab_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingsTab.WBP_SettingsTab_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_SettingsTab_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingsTab.WBP_SettingsTab_C.Construct");

	UWBP_SettingsTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingsTab.WBP_SettingsTab_C.SetSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SettingsTab_C::SetSelected(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingsTab.WBP_SettingsTab_C.SetSelected");

	UWBP_SettingsTab_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingsTab.WBP_SettingsTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_SettingsTab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingsTab.WBP_SettingsTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UWBP_SettingsTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingsTab.WBP_SettingsTab_C.ExecuteUbergraph_WBP_SettingsTab
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingsTab_C::ExecuteUbergraph_WBP_SettingsTab(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingsTab.WBP_SettingsTab_C.ExecuteUbergraph_WBP_SettingsTab");

	UWBP_SettingsTab_C_ExecuteUbergraph_WBP_SettingsTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingsTab.WBP_SettingsTab_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_SettingsTab_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingsTab.WBP_SettingsTab_C.OnClicked__DelegateSignature");

	UWBP_SettingsTab_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
