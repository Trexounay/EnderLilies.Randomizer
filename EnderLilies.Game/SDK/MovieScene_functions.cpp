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
//		Offset -> 0x01F1D0F0
//		Name   -> Function MovieScene.MovieSceneSection.SetRowIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewRowIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetRowIndex(int NewRowIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetRowIndex");

	UMovieSceneSection_SetRowIndex_Params params;
	params.NewRowIndex = NewRowIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1D060
//		Name   -> Function MovieScene.MovieSceneSection.SetPreRollFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InPreRollFrames                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetPreRollFrames(int InPreRollFrames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPreRollFrames");

	UMovieSceneSection_SetPreRollFrames_Params params;
	params.InPreRollFrames = InPreRollFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CFD0
//		Name   -> Function MovieScene.MovieSceneSection.SetPostRollFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InPostRollFrames                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetPostRollFrames(int InPostRollFrames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetPostRollFrames");

	UMovieSceneSection_SetPostRollFrames_Params params;
	params.InPostRollFrames = InPostRollFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CDE0
//		Name   -> Function MovieScene.MovieSceneSection.SetOverlapPriority
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetOverlapPriority(int NewPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetOverlapPriority");

	UMovieSceneSection_SetOverlapPriority_Params params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CD50
//		Name   -> Function MovieScene.MovieSceneSection.SetIsLocked
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInIsLocked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsLocked");

	UMovieSceneSection_SetIsLocked_Params params;
	params.bInIsLocked = bInIsLocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CCC0
//		Name   -> Function MovieScene.MovieSceneSection.SetIsActive
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInIsActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetIsActive(bool bInIsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetIsActive");

	UMovieSceneSection_SetIsActive_Params params;
	params.bInIsActive = bInIsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CA10
//		Name   -> Function MovieScene.MovieSceneSection.SetCompletionMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		MovieScene_EMovieSceneCompletionMode               InCompletionMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetCompletionMode(MovieScene_EMovieSceneCompletionMode InCompletionMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetCompletionMode");

	UMovieSceneSection_SetCompletionMode_Params params;
	params.InCompletionMode = InCompletionMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C990
//		Name   -> Function MovieScene.MovieSceneSection.SetBlendType
//		Flags  -> (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
//		MovieScene_EMovieSceneBlendType                    InBlendType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSection::SetBlendType(MovieScene_EMovieSceneBlendType InBlendType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.SetBlendType");

	UMovieSceneSection_SetBlendType_Params params;
	params.InBlendType = InBlendType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1BE10
//		Name   -> Function MovieScene.MovieSceneSection.IsLocked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSection::IsLocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsLocked");

	UMovieSceneSection_IsLocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BDE0
//		Name   -> Function MovieScene.MovieSceneSection.IsActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSection::IsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.IsActive");

	UMovieSceneSection_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C729A0
//		Name   -> Function MovieScene.MovieSceneSection.GetRowIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetRowIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetRowIndex");

	UMovieSceneSection_GetRowIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BD50
//		Name   -> Function MovieScene.MovieSceneSection.GetPreRollFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetPreRollFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPreRollFrames");

	UMovieSceneSection_GetPreRollFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BD30
//		Name   -> Function MovieScene.MovieSceneSection.GetPostRollFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetPostRollFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetPostRollFrames");

	UMovieSceneSection_GetPostRollFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BCE0
//		Name   -> Function MovieScene.MovieSceneSection.GetOverlapPriority
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSection::GetOverlapPriority()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetOverlapPriority");

	UMovieSceneSection_GetOverlapPriority_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BA80
//		Name   -> Function MovieScene.MovieSceneSection.GetCompletionMode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		MovieScene_EMovieSceneCompletionMode               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MovieScene_EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetCompletionMode");

	UMovieSceneSection_GetCompletionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1B940
//		Name   -> Function MovieScene.MovieSceneSection.GetBlendType
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FOptionalMovieSceneBlendType                ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSection.GetBlendType");

	UMovieSceneSection_GetBlendType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1B860
//		Name   -> Function MovieScene.MovieSceneSequence.FindBindingsByTag
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       InBindingName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FMovieSceneObjectBindingID>          ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(const struct FName& InBindingName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingsByTag");

	UMovieSceneSequence_FindBindingsByTag_Params params;
	params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1B7B0
//		Name   -> Function MovieScene.MovieSceneSequence.FindBindingByTag
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       InBindingName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMovieSceneObjectBindingID                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(const struct FName& InBindingName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequence.FindBindingByTag");

	UMovieSceneSequence_FindBindingByTag_Params params;
	params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1D270
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::StopAtCurrentTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime");

	UMovieSceneSequencePlayer_StopAtCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1D250
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	UMovieSceneSequencePlayer_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1D180
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              StartTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetTimeRange");

	UMovieSceneSequencePlayer_SetTimeRange_Params params;
	params.StartTime = StartTime;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CE70
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	UMovieSceneSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CEF0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMovieSceneSequencePlaybackParams           PlaybackParams                                             (Parm, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	UMovieSceneSequencePlayer_SetPlaybackPosition_Params params;
	params.PlaybackParams = PlaybackParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CC30
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FFrameRate                                  FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRate");

	UMovieSceneSequencePlayer_SetFrameRate_Params params;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CB20
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                StartFrame                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              SubFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetFrameRange(int StartFrame, int Duration, float SubFrames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetFrameRange");

	UMovieSceneSequencePlayer_SetFrameRange_Params params;
	params.StartFrame = StartFrame;
	params.Duration = Duration;
	params.SubFrames = SubFrames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1CA90
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInDisableCameraCuts                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts");

	UMovieSceneSequencePlayer_SetDisableCameraCuts_Params params;
	params.bInDisableCameraCuts = bInDisableCameraCuts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C8E0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds");

	UMovieSceneSequencePlayer_ScrubToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C7D0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const struct FString& InLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame");

	UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1C720
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame");

	UMovieSceneSequencePlayer_ScrubToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C700
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Scrub
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Scrub()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Scrub");

	UMovieSceneSequencePlayer_Scrub_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C660
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		struct FFrameTime                                  StoppedTime                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::RPC_OnStopEvent(const struct FFrameTime& StoppedTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent");

	UMovieSceneSequencePlayer_RPC_OnStopEvent_Params params;
	params.StoppedTime = StoppedTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C580
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		MovieScene_EUpdatePositionMethod                   Method                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFrameTime                                  RelevantTime                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(MovieScene_EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent");

	UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params params;
	params.Method = Method;
	params.RelevantTime = RelevantTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C4D0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds");

	UMovieSceneSequencePlayer_PlayToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C3C0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const struct FString& InLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame");

	UMovieSceneSequencePlayer_PlayToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1C310
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayToFrame");

	UMovieSceneSequencePlayer_PlayToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C230
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayTo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMovieSceneSequencePlaybackParams           PlaybackParams                                             (Parm, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayTo");

	UMovieSceneSequencePlayer_PlayTo_Params params;
	params.PlaybackParams = PlaybackParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C210
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayReverse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::PlayReverse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	UMovieSceneSequencePlayer_PlayReverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C180
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.PlayLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NumLoops                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	UMovieSceneSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C160
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	UMovieSceneSequencePlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C140
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.Pause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	UMovieSceneSequencePlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1C090
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeInSeconds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds");

	UMovieSceneSequencePlayer_JumpToSeconds_Params params;
	params.TimeInSeconds = TimeInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1BF80
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InLabel                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const struct FString& InLabel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame");

	UMovieSceneSequencePlayer_JumpToMarkedFrame_Params params;
	params.InLabel = InLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BED0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FFrameTime                                  NewPosition                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.JumpToFrame");

	UMovieSceneSequencePlayer_JumpToFrame_Params params;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1BEA0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsReversed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsReversed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsReversed");

	UMovieSceneSequencePlayer_IsReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BE70
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	UMovieSceneSequencePlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BE40
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.IsPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::IsPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPaused");

	UMovieSceneSequencePlayer_IsPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BDC0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop");

	UMovieSceneSequencePlayer_GoToEndAndStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1BD70
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetStartTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FQualifiedFrameTime                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetStartTime");

	UMovieSceneSequencePlayer_GetStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BD00
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneSequencePlayer::GetPlayRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	UMovieSceneSequencePlayer_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BC00
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FMovieSceneObjectBindingID>          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(class UObject* InObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings");

	UMovieSceneSequencePlayer_GetObjectBindings_Params params;
	params.InObject = InObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BBE0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FFrameRate                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameRate");

	UMovieSceneSequencePlayer_GetFrameRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BBB0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMovieSceneSequencePlayer::GetFrameDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration");

	UMovieSceneSequencePlayer_GetFrameDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BB50
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetEndTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FQualifiedFrameTime                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetEndTime");

	UMovieSceneSequencePlayer_GetEndTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BB10
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FQualifiedFrameTime                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDuration");

	UMovieSceneSequencePlayer_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BAE0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts");

	UMovieSceneSequencePlayer_GetDisableCameraCuts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1BAA0
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FQualifiedFrameTime                         ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime");

	UMovieSceneSequencePlayer_GetCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1B970
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FMovieSceneObjectBindingID                  ObjectBinding                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UObject*>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects");

	UMovieSceneSequencePlayer_GetBoundObjects_Params params;
	params.ObjectBinding = ObjectBinding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F1B790
//		Name   -> Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1FE10
//		Name   -> Function MovieScene.MovieSceneSubSection.SetSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMovieSceneSequence*                         Sequence                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.SetSequence");

	UMovieSceneSubSection_SetSequence_Params params;
	params.Sequence = Sequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F1FDE0
//		Name   -> Function MovieScene.MovieSceneSubSection.GetSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UMovieSceneSequence*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMovieSceneSequence* UMovieSceneSubSection::GetSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSubSection.GetSequence");

	UMovieSceneSubSection_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01F12460
//		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnTick
//		Flags  -> (Native, Public)
// Parameters:
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnTick");

	UMovieSceneCustomClockSource_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.InPlayRate = InPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F123B0
//		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FQualifiedFrameTime                         InStopTime                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCustomClockSource::OnStopPlaying(const struct FQualifiedFrameTime& InStopTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying");

	UMovieSceneCustomClockSource_OnStopPlaying_Params params;
	params.InStopTime = InStopTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F12300
//		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FQualifiedFrameTime                         InStartTime                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMovieSceneCustomClockSource::OnStartPlaying(const struct FQualifiedFrameTime& InStartTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying");

	UMovieSceneCustomClockSource_OnStartPlaying_Params params;
	params.InStartTime = InStartTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01F12200
//		Name   -> Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FQualifiedFrameTime                         InCurrentTime                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFrameTime                                  ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FFrameTime UMovieSceneCustomClockSource::OnRequestCurrentTime(const struct FQualifiedFrameTime& InCurrentTime, float InPlayRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime");

	UMovieSceneCustomClockSource_OnRequestCurrentTime_Params params;
	params.InCurrentTime = InCurrentTime;
	params.InPlayRate = InPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function MovieScene.MovieSceneEasingFunction.OnEvaluate
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              Interp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UMovieSceneEasingFunction::OnEvaluate(float Interp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneEasingFunction.OnEvaluate");

	UMovieSceneEasingFunction_OnEvaluate_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
