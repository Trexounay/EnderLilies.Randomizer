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
//		Name   -> Function WBP_Pause.WBP_Pause_C.SequenceEvent__ENTRYPOINTWBP_Pause_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::SequenceEvent__ENTRYPOINTWBP_Pause_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.SequenceEvent__ENTRYPOINTWBP_Pause_1");

	UWBP_Pause_C_SequenceEvent__ENTRYPOINTWBP_Pause_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.SetAudioSnapshotEnable
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Pause_C::SetAudioSnapshotEnable(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.SetAudioSnapshotEnable");

	UWBP_Pause_C_SetAudioSnapshotEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.SetBackToRestPointButtonState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Pause_C::SetBackToRestPointButtonState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.SetBackToRestPointButtonState");

	UWBP_Pause_C_SetBackToRestPointButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.SetAchievementsButtonText
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Pause_C::SetAchievementsButtonText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.SetAchievementsButtonText");

	UWBP_Pause_C_SetAchievementsButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.UnlockNavigation
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::UnlockNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.UnlockNavigation");

	UWBP_Pause_C_UnlockNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.LockNavigation
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Pause_C::LockNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.LockNavigation");

	UWBP_Pause_C_LockNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Pause_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnPreviewKeyDown");

	UWBP_Pause_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.ToggleUIVisibility
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Pause_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.ToggleUIVisibility");

	UWBP_Pause_C_ToggleUIVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnPressContext
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Pause_C::OnPressContext(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnPressContext");

	UWBP_Pause_C_OnPressContext_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Pause_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnKeyDown");

	UWBP_Pause_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Pause_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnPressCancel");

	UWBP_Pause_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Pause_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFocusReceived");

	UWBP_Pause_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F56BD7AC1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_066E292E42E788874C41348F56BD7AC1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F56BD7AC1");

	UWBP_Pause_C_OnFinish_066E292E42E788874C41348F56BD7AC1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479CE7113EE2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_2071A4134BF576284BB5479CE7113EE2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479CE7113EE2");

	UWBP_Pause_C_OnFinish_2071A4134BF576284BB5479CE7113EE2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F03CA60C1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_066E292E42E788874C41348F03CA60C1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F03CA60C1");

	UWBP_Pause_C_OnFinish_066E292E42E788874C41348F03CA60C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479CB26624E2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_2071A4134BF576284BB5479CB26624E2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479CB26624E2");

	UWBP_Pause_C_OnFinish_2071A4134BF576284BB5479CB26624E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F1FD48603
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_066E292E42E788874C41348F1FD48603()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F1FD48603");

	UWBP_Pause_C_OnFinish_066E292E42E788874C41348F1FD48603_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479CAE78C220
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_2071A4134BF576284BB5479CAE78C220()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479CAE78C220");

	UWBP_Pause_C_OnFinish_2071A4134BF576284BB5479CAE78C220_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348FBDDC33EB
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_066E292E42E788874C41348FBDDC33EB()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348FBDDC33EB");

	UWBP_Pause_C_OnFinish_066E292E42E788874C41348FBDDC33EB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479C0C7077C8
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_2071A4134BF576284BB5479C0C7077C8()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479C0C7077C8");

	UWBP_Pause_C_OnFinish_2071A4134BF576284BB5479C0C7077C8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F43230270
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_066E292E42E788874C41348F43230270()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F43230270");

	UWBP_Pause_C_OnFinish_066E292E42E788874C41348F43230270_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479CF28F4653
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_2071A4134BF576284BB5479CF28F4653()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479CF28F4653");

	UWBP_Pause_C_OnFinish_2071A4134BF576284BB5479CF28F4653_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479C93B89820
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_2071A4134BF576284BB5479C93B89820()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_2071A4134BF576284BB5479C93B89820");

	UWBP_Pause_C_OnFinish_2071A4134BF576284BB5479C93B89820_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F2214DC03
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFinish_066E292E42E788874C41348F2214DC03()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFinish_066E292E42E788874C41348F2214DC03");

	UWBP_Pause_C_OnFinish_066E292E42E788874C41348F2214DC03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnHideAllUIAnimEvaluate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnHideAllUIAnimEvaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnHideAllUIAnimEvaluate");

	UWBP_Pause_C_OnHideAllUIAnimEvaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.BndEvt__ReturnToTitle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Pause_C::BndEvt__ReturnToTitle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.BndEvt__ReturnToTitle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_Pause_C_BndEvt__ReturnToTitle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Pause_C::BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_Pause_C_BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.BndEvt__GraphicSettings_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Pause_C::BndEvt__GraphicSettings_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.BndEvt__GraphicSettings_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_Pause_C_BndEvt__GraphicSettings_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnSettingsClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnSettingsClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnSettingsClose");

	UWBP_Pause_C_OnSettingsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnQuitGameClickYES
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnQuitGameClickYES()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnQuitGameClickYES");

	UWBP_Pause_C_OnQuitGameClickYES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnQuitGameClickNO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnQuitGameClickNO()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnQuitGameClickNO");

	UWBP_Pause_C_OnQuitGameClickNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnReturnTitleClickYES
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnReturnTitleClickYES()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnReturnTitleClickYES");

	UWBP_Pause_C_OnReturnTitleClickYES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnReturnTitleClickNO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnReturnTitleClickNO()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnReturnTitleClickNO");

	UWBP_Pause_C_OnReturnTitleClickNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Pause_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.Construct");

	UWBP_Pause_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.ResumeGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::ResumeGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.ResumeGame");

	UWBP_Pause_C_ResumeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.ForceClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::ForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.ForceClose");

	UWBP_Pause_C_ForceClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.BndEvt__Continue_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Pause_C::BndEvt__Continue_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.BndEvt__Continue_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWBP_Pause_C_BndEvt__Continue_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.BndEvt__Achievements_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Pause_C::BndEvt__Achievements_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.BndEvt__Achievements_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWBP_Pause_C_BndEvt__Achievements_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnAchievementsClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnAchievementsClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnAchievementsClose");

	UWBP_Pause_C_OnAchievementsClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.WidgetAnimationEvt_HideAllUI_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UWBP_Pause_C::WidgetAnimationEvt_HideAllUI_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.WidgetAnimationEvt_HideAllUI_K2Node_WidgetAnimationEvent_1");

	UWBP_Pause_C_WidgetAnimationEvt_HideAllUI_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.BndEvt__BackToRestpoint_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Pause_C::BndEvt__BackToRestpoint_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.BndEvt__BackToRestpoint_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWBP_Pause_C_BndEvt__BackToRestpoint_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnBackToRestpointYES
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnBackToRestpointYES()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnBackToRestpointYES");

	UWBP_Pause_C_OnBackToRestpointYES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnBackToRestpointNO
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnBackToRestpointNO()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnBackToRestpointNO");

	UWBP_Pause_C_OnBackToRestpointNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Pause_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.Destruct");

	UWBP_Pause_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Pause_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnRemovedFromFocusPath");

	UWBP_Pause_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnFadeFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnFadeFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnFadeFinished");

	UWBP_Pause_C_OnFadeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.ExecuteUbergraph_WBP_Pause
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Pause_C::ExecuteUbergraph_WBP_Pause(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.ExecuteUbergraph_WBP_Pause");

	UWBP_Pause_C_ExecuteUbergraph_WBP_Pause_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Pause.WBP_Pause_C.OnResumeGame__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Pause_C::OnResumeGame__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Pause.WBP_Pause_C.OnResumeGame__DelegateSignature");

	UWBP_Pause_C_OnResumeGame__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
