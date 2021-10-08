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
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.IsVideoSkippable
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_VideoPlayer_C::IsVideoSkippable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.IsVideoSkippable");

	UWBP_VideoPlayer_C_IsVideoSkippable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.SetWorldRenderEnable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_VideoPlayer_C::SetWorldRenderEnable(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.SetWorldRenderEnable");

	UWBP_VideoPlayer_C_SetWorldRenderEnable_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.RegisterMediaDelegates
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Register                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_VideoPlayer_C::RegisterMediaDelegates(bool Register)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.RegisterMediaDelegates");

	UWBP_VideoPlayer_C_RegisterMediaDelegates_Params params;
	params.Register = Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.IsVideoOpen
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_VideoPlayer_C::IsVideoOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.IsVideoOpen");

	UWBP_VideoPlayer_C_IsVideoOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_VideoPlayer_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFocusReceived");

	UWBP_VideoPlayer_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.On_BG_MouseButtonDown_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_VideoPlayer_C::On_BG_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.On_BG_MouseButtonDown_1");

	UWBP_VideoPlayer_C_On_BG_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.ClearSubtitle
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::ClearSubtitle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.ClearSubtitle");

	UWBP_VideoPlayer_C_ClearSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.DestroyMediaSound
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_VideoPlayer_C::DestroyMediaSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.DestroyMediaSound");

	UWBP_VideoPlayer_C_DestroyMediaSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.CreateMediaSound
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_VideoPlayer_C::CreateMediaSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.CreateMediaSound");

	UWBP_VideoPlayer_C_CreateMediaSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.Set Player Input Enabled
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               EnableInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_VideoPlayer_C::Set_Player_Input_Enabled(bool EnableInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.Set Player Input Enabled");

	UWBP_VideoPlayer_C_Set_Player_Input_Enabled_Params params;
	params.EnableInput = EnableInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_VideoPlayer_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnKeyDown");

	UWBP_VideoPlayer_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.ParseSubtitles
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_VideoPlayer_C::ParseSubtitles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.ParseSubtitles");

	UWBP_VideoPlayer_C_ParseSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFinish_7BB105B3486331884C40E8A6B7B13851
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::OnFinish_7BB105B3486331884C40E8A6B7B13851()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFinish_7BB105B3486331884C40E8A6B7B13851");

	UWBP_VideoPlayer_C_OnFinish_7BB105B3486331884C40E8A6B7B13851_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFinish_40EE472F4490DB7A32332BBA72FFF3A1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::OnFinish_40EE472F4490DB7A32332BBA72FFF3A1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFinish_40EE472F4490DB7A32332BBA72FFF3A1");

	UWBP_VideoPlayer_C_OnFinish_40EE472F4490DB7A32332BBA72FFF3A1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnMediaOpenedFailed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FailedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_VideoPlayer_C::OnMediaOpenedFailed(const struct FString& FailedUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnMediaOpenedFailed");

	UWBP_VideoPlayer_C_OnMediaOpenedFailed_Params params;
	params.FailedUrl = FailedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoPlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.Tick");

	UWBP_VideoPlayer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.Close
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.Close");

	UWBP_VideoPlayer_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.TickInvalidPlayState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::TickInvalidPlayState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.TickInvalidPlayState");

	UWBP_VideoPlayer_C_TickInvalidPlayState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnApplicationDeactivated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::OnApplicationDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnApplicationDeactivated");

	UWBP_VideoPlayer_C_OnApplicationDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_VideoPlayer_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.Destruct");

	UWBP_VideoPlayer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnMediaOpened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_VideoPlayer_C::OnMediaOpened(const struct FString& OpenedUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnMediaOpened");

	UWBP_VideoPlayer_C_OnMediaOpened_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnVideoFinish
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::OnVideoFinish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnVideoFinish");

	UWBP_VideoPlayer_C_OnVideoFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFocusLost
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_VideoPlayer_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFocusLost");

	UWBP_VideoPlayer_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.Pause
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.Pause");

	UWBP_VideoPlayer_C_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.Resume
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::Resume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.Resume");

	UWBP_VideoPlayer_C_Resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_VideoPlayer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.Construct");

	UWBP_VideoPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.ShowSkipMessage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::ShowSkipMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.ShowSkipMessage");

	UWBP_VideoPlayer_C_ShowSkipMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnSkipYes
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::OnSkipYes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnSkipYes");

	UWBP_VideoPlayer_C_OnSkipYes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnSkipNo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::OnSkipNo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnSkipNo");

	UWBP_VideoPlayer_C_OnSkipNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.ExecuteUbergraph_WBP_VideoPlayer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_VideoPlayer_C::ExecuteUbergraph_WBP_VideoPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.ExecuteUbergraph_WBP_VideoPlayer");

	UWBP_VideoPlayer_C_ExecuteUbergraph_WBP_VideoPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnVideoFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_VideoPlayer_C::OnVideoFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnVideoFinished__DelegateSignature");

	UWBP_VideoPlayer_C_OnVideoFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
