#pragma once

// Name: enderlilies, Version: 1.1.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.IsVideoSkippable
struct UWBP_VideoPlayer_C_IsVideoSkippable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.SetWorldRenderEnable
struct UWBP_VideoPlayer_C_SetWorldRenderEnable_Params
{
	bool                                               Enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.RegisterMediaDelegates
struct UWBP_VideoPlayer_C_RegisterMediaDelegates_Params
{
	bool                                               Register;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.IsVideoOpen
struct UWBP_VideoPlayer_C_IsVideoOpen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFocusReceived
struct UWBP_VideoPlayer_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.On_BG_MouseButtonDown_1
struct UWBP_VideoPlayer_C_On_BG_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.ClearSubtitle
struct UWBP_VideoPlayer_C_ClearSubtitle_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.DestroyMediaSound
struct UWBP_VideoPlayer_C_DestroyMediaSound_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.CreateMediaSound
struct UWBP_VideoPlayer_C_CreateMediaSound_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.Set Player Input Enabled
struct UWBP_VideoPlayer_C_Set_Player_Input_Enabled_Params
{
	bool                                               EnableInput;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnKeyDown
struct UWBP_VideoPlayer_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.ParseSubtitles
struct UWBP_VideoPlayer_C_ParseSubtitles_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFinish_7BB105B3486331884C40E8A6B7B13851
struct UWBP_VideoPlayer_C_OnFinish_7BB105B3486331884C40E8A6B7B13851_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFinish_40EE472F4490DB7A32332BBA72FFF3A1
struct UWBP_VideoPlayer_C_OnFinish_40EE472F4490DB7A32332BBA72FFF3A1_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnMediaOpenedFailed
struct UWBP_VideoPlayer_C_OnMediaOpenedFailed_Params
{
	struct FString                                     FailedUrl;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.Tick
struct UWBP_VideoPlayer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.Close
struct UWBP_VideoPlayer_C_Close_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.TickInvalidPlayState
struct UWBP_VideoPlayer_C_TickInvalidPlayState_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnApplicationDeactivated
struct UWBP_VideoPlayer_C_OnApplicationDeactivated_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.Destruct
struct UWBP_VideoPlayer_C_Destruct_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnMediaOpened
struct UWBP_VideoPlayer_C_OnMediaOpened_Params
{
	struct FString                                     OpenedUrl;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnVideoFinish
struct UWBP_VideoPlayer_C_OnVideoFinish_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnFocusLost
struct UWBP_VideoPlayer_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.Pause
struct UWBP_VideoPlayer_C_Pause_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.Resume
struct UWBP_VideoPlayer_C_Resume_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.Construct
struct UWBP_VideoPlayer_C_Construct_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.ShowSkipMessage
struct UWBP_VideoPlayer_C_ShowSkipMessage_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnSkipYes
struct UWBP_VideoPlayer_C_OnSkipYes_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnSkipNo
struct UWBP_VideoPlayer_C_OnSkipNo_Params
{
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.ExecuteUbergraph_WBP_VideoPlayer
struct UWBP_VideoPlayer_C_ExecuteUbergraph_WBP_VideoPlayer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_VideoPlayer.WBP_VideoPlayer_C.OnVideoFinished__DelegateSignature
struct UWBP_VideoPlayer_C_OnVideoFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
