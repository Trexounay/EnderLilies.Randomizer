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
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_EventUI_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnFocusReceived");

	UWBP_EventUI_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_EventUI_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnKeyDown");

	UWBP_EventUI_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.ShowSkipMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::ShowSkipMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.ShowSkipMenu");

	UWBP_EventUI_C_ShowSkipMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnResumeGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::OnResumeGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnResumeGame");

	UWBP_EventUI_C_OnResumeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.RequestRemove
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventUI_C::RequestRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.RequestRemove");

	UWBP_EventUI_C_RequestRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnConfirmSkip
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::OnConfirmSkip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnConfirmSkip");

	UWBP_EventUI_C_OnConfirmSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnCancelSkip
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::OnCancelSkip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnCancelSkip");

	UWBP_EventUI_C_OnCancelSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnFadeFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::OnFadeFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnFadeFinished");

	UWBP_EventUI_C_OnFadeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnFadeInFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::OnFadeInFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnFadeInFinished");

	UWBP_EventUI_C_OnFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.ShowPauseMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::ShowPauseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.ShowPauseMenu");

	UWBP_EventUI_C_ShowPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnPressPause
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::OnPressPause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnPressPause");

	UWBP_EventUI_C_OnPressPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnStartNewAction
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_EventUI_C::OnStartNewAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnStartNewAction");

	UWBP_EventUI_C_OnStartNewAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_EventUI_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.Destruct");

	UWBP_EventUI_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnControllerDisconnect
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::OnControllerDisconnect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnControllerDisconnect");

	UWBP_EventUI_C_OnControllerDisconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnApplicationDeactivated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_EventUI_C::OnApplicationDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnApplicationDeactivated");

	UWBP_EventUI_C_OnApplicationDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_EventUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.Construct");

	UWBP_EventUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.OnFocusLost
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_EventUI_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.OnFocusLost");

	UWBP_EventUI_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EventUI.WBP_EventUI_C.ExecuteUbergraph_WBP_EventUI
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EventUI_C::ExecuteUbergraph_WBP_EventUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EventUI.WBP_EventUI_C.ExecuteUbergraph_WBP_EventUI");

	UWBP_EventUI_C_ExecuteUbergraph_WBP_EventUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
