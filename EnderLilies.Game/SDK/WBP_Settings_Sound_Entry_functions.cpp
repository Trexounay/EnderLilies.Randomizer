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
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Sound_Entry_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnPressCancel");

	UWBP_Settings_Sound_Entry_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.Get_VolumeSlider_Value_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_Settings_Sound_Entry_C::Get_VolumeSlider_Value_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.Get_VolumeSlider_Value_1");

	UWBP_Settings_Sound_Entry_C_Get_VolumeSlider_Value_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Sound_Entry_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnFocusReceived");

	UWBP_Settings_Sound_Entry_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_Sound_Entry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.Construct");

	UWBP_Settings_Sound_Entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__Slider_45_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Sound_Entry_C::BndEvt__Slider_45_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__Slider_45_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UWBP_Settings_Sound_Entry_C_BndEvt__Slider_45_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Sound_Entry_C::BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature");

	UWBP_Settings_Sound_Entry_C_BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Sound_Entry_C::BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature");

	UWBP_Settings_Sound_Entry_C_BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.SetVolume
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewVolume                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Sound_Entry_C::SetVolume(float NewVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.SetVolume");

	UWBP_Settings_Sound_Entry_C_SetVolume_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.PlayTestLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Sound_Entry_C::PlayTestLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.PlayTestLoop");

	UWBP_Settings_Sound_Entry_C_PlayTestLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.StopTestLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Sound_Entry_C::StopTestLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.StopTestLoop");

	UWBP_Settings_Sound_Entry_C_StopTestLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnAddedToFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Settings_Sound_Entry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnAddedToFocusPath");

	UWBP_Settings_Sound_Entry_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Settings_Sound_Entry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.OnRemovedFromFocusPath");

	UWBP_Settings_Sound_Entry_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Sound_Entry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.PreConstruct");

	UWBP_Settings_Sound_Entry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.RefreshDisplay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Sound_Entry_C::RefreshDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.RefreshDisplay");

	UWBP_Settings_Sound_Entry_C_RefreshDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.ExecuteUbergraph_WBP_Settings_Sound_Entry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Sound_Entry_C::ExecuteUbergraph_WBP_Settings_Sound_Entry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C.ExecuteUbergraph_WBP_Settings_Sound_Entry");

	UWBP_Settings_Sound_Entry_C_ExecuteUbergraph_WBP_Settings_Sound_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
