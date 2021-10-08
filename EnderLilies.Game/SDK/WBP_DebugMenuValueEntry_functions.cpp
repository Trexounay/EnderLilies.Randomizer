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
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.On_ArrowRight_MouseButtonDown
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenuValueEntry_C::On_ArrowRight_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.On_ArrowRight_MouseButtonDown");

	UWBP_DebugMenuValueEntry_C_On_ArrowRight_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.On_ArrowLeft_MouseButtonDown
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenuValueEntry_C::On_ArrowLeft_MouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.On_ArrowLeft_MouseButtonDown");

	UWBP_DebugMenuValueEntry_C_On_ArrowLeft_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.RefreshStatusText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuValueEntry_C::RefreshStatusText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.RefreshStatusText");

	UWBP_DebugMenuValueEntry_C_RefreshStatusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenuValueEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.OnKeyDown");

	UWBP_DebugMenuValueEntry_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugMenuValueEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.PreConstruct");

	UWBP_DebugMenuValueEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenuValueEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Tick");

	UWBP_DebugMenuValueEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Increment
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuValueEntry_C::Increment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Increment");

	UWBP_DebugMenuValueEntry_C_Increment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Decrement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuValueEntry_C::Decrement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Decrement");

	UWBP_DebugMenuValueEntry_C_Decrement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.SetValue
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenuValueEntry_C::SetValue(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.SetValue");

	UWBP_DebugMenuValueEntry_C_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.ExecuteUbergraph_WBP_DebugMenuValueEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenuValueEntry_C::ExecuteUbergraph_WBP_DebugMenuValueEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.ExecuteUbergraph_WBP_DebugMenuValueEntry");

	UWBP_DebugMenuValueEntry_C_ExecuteUbergraph_WBP_DebugMenuValueEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.OnValueChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenuValueEntry_C::OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.OnValueChanged__DelegateSignature");

	UWBP_DebugMenuValueEntry_C_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
