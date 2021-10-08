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
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPreviewMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_KeyBindingEntry_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPreviewMouseButtonDown");

	UWBP_KeyBindingEntry_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.Cancel Binding Operation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_KeyBindingEntry_C::Cancel_Binding_Operation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.Cancel Binding Operation");

	UWBP_KeyBindingEntry_C_Cancel_Binding_Operation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.ChangeSelectKeyMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               WaitingForKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyBindingEntry_C::ChangeSelectKeyMode(bool WaitingForKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.ChangeSelectKeyMode");

	UWBP_KeyBindingEntry_C_ChangeSelectKeyMode_Params params;
	params.WaitingForKey = WaitingForKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_KeyBindingEntry_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPreviewKeyDown");

	UWBP_KeyBindingEntry_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPressConfirm
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_KeyBindingEntry_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPressConfirm");

	UWBP_KeyBindingEntry_C_OnPressConfirm_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.GetInputChord
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 InputChord                                                 (Parm, OutParm, HasGetValueTypeHash)
void UWBP_KeyBindingEntry_C::GetInputChord(struct FInputChord* InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.GetInputChord");

	UWBP_KeyBindingEntry_C_GetInputChord_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputChord != nullptr)
		*InputChord = params.InputChord;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_KeyBindingEntry_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnFocusReceived");

	UWBP_KeyBindingEntry_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OverrideActionBinding
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 InputChord                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_KeyBindingEntry_C::OverrideActionBinding(const struct FInputChord& InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OverrideActionBinding");

	UWBP_KeyBindingEntry_C_OverrideActionBinding_Params params;
	params.InputChord = InputChord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.RefreshDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KeyBindingEntry_C::RefreshDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.RefreshDisplay");

	UWBP_KeyBindingEntry_C_RefreshDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_KeyBindingEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.Construct");

	UWBP_KeyBindingEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyBindingEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.PreConstruct");

	UWBP_KeyBindingEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnNewKeySelected
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputChord                                 InputChord                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void UWBP_KeyBindingEntry_C::OnNewKeySelected(const struct FInputChord& InputChord)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnNewKeySelected");

	UWBP_KeyBindingEntry_C_OnNewKeySelected_Params params;
	params.InputChord = InputChord;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnSelectKeyModeChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelectingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyBindingEntry_C::OnSelectKeyModeChange(bool IsSelectingKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnSelectKeyModeChange");

	UWBP_KeyBindingEntry_C_OnSelectKeyModeChange_Params params;
	params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_KeyBindingEntry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnRemovedFromFocusPath");

	UWBP_KeyBindingEntry_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.ExecuteUbergraph_WBP_KeyBindingEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KeyBindingEntry_C::ExecuteUbergraph_WBP_KeyBindingEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.ExecuteUbergraph_WBP_KeyBindingEntry");

	UWBP_KeyBindingEntry_C_ExecuteUbergraph_WBP_KeyBindingEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnSelectKeyModeChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KeyBindingEntry_C*                      KeyBindingEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsSelectingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyBindingEntry_C::OnSelectKeyModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnSelectKeyModeChanged__DelegateSignature");

	UWBP_KeyBindingEntry_C_OnSelectKeyModeChanged__DelegateSignature_Params params;
	params.KeyBindingEntry = KeyBindingEntry;
	params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnOverrideActionMapping__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_KeyBindingEntry_C::OnOverrideActionMapping__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnOverrideActionMapping__DelegateSignature");

	UWBP_KeyBindingEntry_C_OnOverrideActionMapping__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
