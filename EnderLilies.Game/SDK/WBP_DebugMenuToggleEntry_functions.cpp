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
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnPressRight
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenuToggleEntry_C::OnPressRight(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnPressRight");

	UWBP_DebugMenuToggleEntry_C_OnPressRight_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnPressLeft
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenuToggleEntry_C::OnPressLeft(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnPressLeft");

	UWBP_DebugMenuToggleEntry_C_OnPressLeft_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnPressConfirm
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenuToggleEntry_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnPressConfirm");

	UWBP_DebugMenuToggleEntry_C_OnPressConfirm_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.RefreshStatusText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_DebugMenuToggleEntry_C::RefreshStatusText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.RefreshStatusText");

	UWBP_DebugMenuToggleEntry_C_RefreshStatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.Toggle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuToggleEntry_C::Toggle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.Toggle");

	UWBP_DebugMenuToggleEntry_C_Toggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugMenuToggleEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.PreConstruct");

	UWBP_DebugMenuToggleEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugMenuToggleEntry_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.RefreshDesign");

	UWBP_DebugMenuToggleEntry_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DebugMenuToggleEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.Construct");

	UWBP_DebugMenuToggleEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DebugMenuToggleEntry_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnInitialized");

	UWBP_DebugMenuToggleEntry_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.SetToggleValue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugMenuToggleEntry_C::SetToggleValue(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.SetToggleValue");

	UWBP_DebugMenuToggleEntry_C_SetToggleValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.ExecuteUbergraph_WBP_DebugMenuToggleEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenuToggleEntry_C::ExecuteUbergraph_WBP_DebugMenuToggleEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.ExecuteUbergraph_WBP_DebugMenuToggleEntry");

	UWBP_DebugMenuToggleEntry_C_ExecuteUbergraph_WBP_DebugMenuToggleEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnToggle__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuToggleEntry_C::OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C.OnToggle__DelegateSignature");

	UWBP_DebugMenuToggleEntry_C_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
