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
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DefaultScrollView_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnFocusReceived");

	UWBP_DefaultScrollView_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Get_ArrowDown_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_DefaultScrollView_C::Get_ArrowDown_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Get_ArrowDown_ColorAndOpacity_1");

	UWBP_DefaultScrollView_C_Get_ArrowDown_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Get_ArrowUp_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_DefaultScrollView_C::Get_ArrowUp_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Get_ArrowUp_ColorAndOpacity_1");

	UWBP_DefaultScrollView_C_Get_ArrowUp_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DefaultScrollView_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.PreConstruct");

	UWBP_DefaultScrollView_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DefaultScrollView_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Construct");

	UWBP_DefaultScrollView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnAddedToFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_DefaultScrollView_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnAddedToFocusPath");

	UWBP_DefaultScrollView_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_DefaultScrollView_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnRemovedFromFocusPath");

	UWBP_DefaultScrollView_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnDescendantFocused
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UNativeWidgetHost*                           FocusedWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		SlateCore_EFocusCause                              FocusCause                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DefaultScrollView_C::OnDescendantFocused(class UNativeWidgetHost* FocusedWidget, SlateCore_EFocusCause FocusCause)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnDescendantFocused");

	UWBP_DefaultScrollView_C_OnDescendantFocused_Params params;
	params.FocusedWidget = FocusedWidget;
	params.FocusCause = FocusCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.ExecuteUbergraph_WBP_DefaultScrollView
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DefaultScrollView_C::ExecuteUbergraph_WBP_DefaultScrollView(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.ExecuteUbergraph_WBP_DefaultScrollView");

	UWBP_DefaultScrollView_C_ExecuteUbergraph_WBP_DefaultScrollView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
