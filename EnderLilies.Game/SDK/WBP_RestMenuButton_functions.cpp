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
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnPressConfirm
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RestMenuButton_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnPressConfirm");

	UWBP_RestMenuButton_C_OnPressConfirm_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RestMenuButton_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnPressCancel");

	UWBP_RestMenuButton_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RestMenuButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnFocusReceived");

	UWBP_RestMenuButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenuButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.PreConstruct");

	UWBP_RestMenuButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenuButton_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.RefreshDesign");

	UWBP_RestMenuButton_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.SetText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_RestMenuButton_C::SetText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.SetText");

	UWBP_RestMenuButton_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RestMenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.Construct");

	UWBP_RestMenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.ExecuteUbergraph_WBP_RestMenuButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RestMenuButton_C::ExecuteUbergraph_WBP_RestMenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.ExecuteUbergraph_WBP_RestMenuButton");

	UWBP_RestMenuButton_C_ExecuteUbergraph_WBP_RestMenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnCancel__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RestMenuButton_C::OnCancel__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnCancel__DelegateSignature");

	UWBP_RestMenuButton_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RestMenuButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenuButton.WBP_RestMenuButton_C.OnClicked__DelegateSignature");

	UWBP_RestMenuButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
