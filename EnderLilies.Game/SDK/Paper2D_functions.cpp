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
//		Offset -> 0x007C32B0
//		Name   -> Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbook::IsValidKeyFrameIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	UPaperFlipbook_IsValidKeyFrameIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C31F0
//		Name   -> Function Paper2D.PaperFlipbook.GetTotalDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbook::GetTotalDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	UPaperFlipbook_GetTotalDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2950
//		Name   -> Function Paper2D.PaperFlipbook.GetSpriteAtTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bClampToEnds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPaperSprite*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperSprite* UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	UPaperFlipbook_GetSpriteAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C28B0
//		Name   -> Function Paper2D.PaperFlipbook.GetSpriteAtFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                FrameIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPaperSprite*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperSprite* UPaperFlipbook::GetSpriteAtFrame(int FrameIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	UPaperFlipbook_GetSpriteAtFrame_Params params;
	params.FrameIndex = FrameIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2800
//		Name   -> Function Paper2D.PaperFlipbook.GetNumKeyFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbook::GetNumKeyFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	UPaperFlipbook_GetNumKeyFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C27D0
//		Name   -> Function Paper2D.PaperFlipbook.GetNumFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbook::GetNumFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	UPaperFlipbook_GetNumFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2520
//		Name   -> Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bClampToEnds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	UPaperFlipbook_GetKeyFrameIndexAtTime_Params params;
	params.Time = Time;
	params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C45D0
//		Name   -> Function Paper2D.PaperFlipbookComponent.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPaperFlipbookComponent::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	UPaperFlipbookComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C4180
//		Name   -> Function Paper2D.PaperFlipbookComponent.SetSpriteColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	UPaperFlipbookComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3F50
//		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlayRate
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewRate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::SetPlayRate(float NewRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	UPaperFlipbookComponent_SetPlayRate_Params params;
	params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C40B0
//		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewFramePosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFireEvents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int NewFramePosition, bool bFireEvents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params params;
	params.NewFramePosition = NewFramePosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3FD0
//		Name   -> Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewPosition                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFireEvents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	UPaperFlipbookComponent_SetPlaybackPosition_Params params;
	params.NewPosition = NewPosition;
	params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3ED0
//		Name   -> Function Paper2D.PaperFlipbookComponent.SetNewTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::SetNewTime(float NewTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	UPaperFlipbookComponent_SetNewTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3E40
//		Name   -> Function Paper2D.PaperFlipbookComponent.SetLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bNewLooping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::SetLooping(bool bNewLooping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	UPaperFlipbookComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3A90
//		Name   -> Function Paper2D.PaperFlipbookComponent.SetFlipbook
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UPaperFlipbook*                              NewFlipbook                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbookComponent::SetFlipbook(class UPaperFlipbook* NewFlipbook)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	UPaperFlipbookComponent_SetFlipbook_Params params;
	params.NewFlipbook = NewFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C3990
//		Name   -> Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPaperFlipbookComponent::ReverseFromEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	UPaperFlipbookComponent_ReverseFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3970
//		Name   -> Function Paper2D.PaperFlipbookComponent.Reverse
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPaperFlipbookComponent::Reverse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	UPaperFlipbookComponent_Reverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C37C0
//		Name   -> Function Paper2D.PaperFlipbookComponent.PlayFromStart
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPaperFlipbookComponent::PlayFromStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	UPaperFlipbookComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C37A0
//		Name   -> Function Paper2D.PaperFlipbookComponent.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPaperFlipbookComponent::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	UPaperFlipbookComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C36E0
//		Name   -> Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class UPaperFlipbook*                              OldFlipbook                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperFlipbookComponent::OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	UPaperFlipbookComponent_OnRep_SourceFlipbook_Params params;
	params.OldFlipbook = OldFlipbook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3280
//		Name   -> Function Paper2D.PaperFlipbookComponent.IsReversing
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbookComponent::IsReversing()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	UPaperFlipbookComponent_IsReversing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C3250
//		Name   -> Function Paper2D.PaperFlipbookComponent.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbookComponent::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	UPaperFlipbookComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C3220
//		Name   -> Function Paper2D.PaperFlipbookComponent.IsLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperFlipbookComponent::IsLooping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	UPaperFlipbookComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2A30
//		Name   -> Function Paper2D.PaperFlipbookComponent.GetSpriteColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPaperFlipbookComponent::GetSpriteColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetSpriteColor");

	UPaperFlipbookComponent_GetSpriteColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2820
//		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlayRate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbookComponent::GetPlayRate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	UPaperFlipbookComponent_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2880
//		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbookComponent::GetPlaybackPositionInFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2850
//		Name   -> Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbookComponent::GetPlaybackPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	UPaperFlipbookComponent_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2360
//		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperFlipbookComponent::GetFlipbookLengthInFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2330
//		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbookComponent::GetFlipbookLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	UPaperFlipbookComponent_GetFlipbookLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2300
//		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UPaperFlipbookComponent::GetFlipbookFramerate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	UPaperFlipbookComponent_GetFlipbookFramerate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C22D0
//		Name   -> Function Paper2D.PaperFlipbookComponent.GetFlipbook
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UPaperFlipbook*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperFlipbook* UPaperFlipbookComponent::GetFlipbook()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	UPaperFlipbookComponent_GetFlipbook_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C4710
//		Name   -> Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		int                                                InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  NewInstanceTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceTransform = NewInstanceTransform;
	params.bWorldSpace = bWorldSpace;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C45F0
//		Name   -> Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		int                                                InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                NewInstanceColor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int InstanceIndex, const struct FLinearColor& NewInstanceColor, bool bMarkRenderStateDirty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	UPaperGroupedSpriteComponent_UpdateInstanceColor_Params params;
	params.InstanceIndex = InstanceIndex;
	params.NewInstanceColor = NewInstanceColor;
	params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C4540
//		Name   -> Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     WorldSpaceSortAxis                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(const struct FVector& WorldSpaceSortAxis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params params;
	params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3800
//		Name   -> Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperGroupedSpriteComponent::RemoveInstance(int InstanceIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	UPaperGroupedSpriteComponent_RemoveInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C23C0
//		Name   -> Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  OutInstanceTransform                                       (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperGroupedSpriteComponent::GetInstanceTransform(int InstanceIndex, struct FTransform* OutInstanceTransform, bool bWorldSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	UPaperGroupedSpriteComponent_GetInstanceTransform_Params params;
	params.InstanceIndex = InstanceIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInstanceTransform != nullptr)
		*OutInstanceTransform = params.OutInstanceTransform;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2390
//		Name   -> Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperGroupedSpriteComponent::GetInstanceCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	UPaperGroupedSpriteComponent_GetInstanceCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C20E0
//		Name   -> Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
//		Flags  -> (Native, Public, BlueprintCallable)
void UPaperGroupedSpriteComponent::ClearInstances()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	UPaperGroupedSpriteComponent_ClearInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C1CB0
//		Name   -> Function Paper2D.PaperGroupedSpriteComponent.AddInstance
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UPaperSprite*                                Sprite                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPaperGroupedSpriteComponent::AddInstance(const struct FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	UPaperGroupedSpriteComponent_AddInstance_Params params;
	params.Transform = Transform;
	params.Sprite = Sprite;
	params.bWorldSpace = bWorldSpace;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C3350
//		Name   -> Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UPaperSprite*                                Sprite                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UPaperSpriteBlueprintLibrary::STATIC_MakeBrushFromSprite(class UPaperSprite* Sprite, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite");

	UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params params;
	params.Sprite = Sprite;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C4210
//		Name   -> Function Paper2D.PaperSpriteComponent.SetSpriteColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperSpriteComponent::SetSpriteColor(const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	UPaperSpriteComponent_SetSpriteColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3A90
//		Name   -> Function Paper2D.PaperSpriteComponent.SetSprite
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UPaperSprite*                                NewSprite                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperSpriteComponent::SetSprite(class UPaperSprite* NewSprite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	UPaperSpriteComponent_SetSprite_Params params;
	params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C22D0
//		Name   -> Function Paper2D.PaperSpriteComponent.GetSprite
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UPaperSprite*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperSprite* UPaperSpriteComponent::GetSprite()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	UPaperSpriteComponent_GetSprite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C42A0
//		Name   -> Function Paper2D.PaperTerrainComponent.SetTerrainColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTerrainComponent::SetTerrainColor(const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	UPaperTerrainComponent_SetTerrainColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C44B0
//		Name   -> Function Paper2D.PaperTileMapComponent.SetTileMapColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::SetTileMapColor(const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	UPaperTileMapComponent_SetTileMapColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3A90
//		Name   -> Function Paper2D.PaperTileMapComponent.SetTileMap
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UPaperTileMap*                               NewTileMap                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperTileMapComponent::SetTileMap(class UPaperTileMap* NewTileMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	UPaperTileMapComponent_SetTileMap_Params params;
	params.NewTileMap = NewTileMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C4330
//		Name   -> Function Paper2D.PaperTileMapComponent.SetTile
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPaperTileInfo                              NewValue                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::SetTile(int X, int Y, int Layer, const struct FPaperTileInfo& NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	UPaperTileMapComponent_SetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3D70
//		Name   -> Function Paper2D.PaperTileMapComponent.SetLayerColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                NewColor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::SetLayerColor(const struct FLinearColor& NewColor, int Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	UPaperTileMapComponent_SetLayerColor_Params params;
	params.NewColor = NewColor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3B30
//		Name   -> Function Paper2D.PaperTileMapComponent.SetLayerCollision
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHasCollision                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOverrideThickness                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              CustomThickness                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bOverrideOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              CustomOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRebuildCollision                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::SetLayerCollision(int Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	UPaperTileMapComponent_SetLayerCollision_Params params;
	params.Layer = Layer;
	params.bHasCollision = bHasCollision;
	params.bOverrideThickness = bOverrideThickness;
	params.CustomThickness = CustomThickness;
	params.bOverrideOffset = bOverrideOffset;
	params.CustomOffset = CustomOffset;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C39B0
//		Name   -> Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRebuildCollision                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	UPaperTileMapComponent_SetDefaultCollisionThickness_Params params;
	params.Thickness = Thickness;
	params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C38A0
//		Name   -> Function Paper2D.PaperTileMapComponent.ResizeMap
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                NewWidthInTiles                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NewHeightInTiles                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::ResizeMap(int NewWidthInTiles, int NewHeightInTiles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	UPaperTileMapComponent_ResizeMap_Params params;
	params.NewWidthInTiles = NewWidthInTiles;
	params.NewHeightInTiles = NewHeightInTiles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C37E0
//		Name   -> Function Paper2D.PaperTileMapComponent.RebuildCollision
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPaperTileMapComponent::RebuildCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	UPaperTileMapComponent_RebuildCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C3770
//		Name   -> Function Paper2D.PaperTileMapComponent.OwnsTileMap
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPaperTileMapComponent::OwnsTileMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	UPaperTileMapComponent_OwnsTileMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C36C0
//		Name   -> Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UPaperTileMapComponent::MakeTileMapEditable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	UPaperTileMapComponent_MakeTileMapEditable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C2EA0
//		Name   -> Function Paper2D.PaperTileMapComponent.GetTilePolygon
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Points                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		int                                                LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::GetTilePolygon(int TileX, int TileY, TArray<struct FVector>* Points, int LayerIndex, bool bWorldSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	UPaperTileMapComponent_GetTilePolygon_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Points != nullptr)
		*Points = params.Points;

}


// Function:
//		Offset -> 0x007C2E60
//		Name   -> Function Paper2D.PaperTileMapComponent.GetTileMapColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPaperTileMapComponent::GetTileMapColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	UPaperTileMapComponent_GetTileMapColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2CF0
//		Name   -> Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UPaperTileMapComponent::GetTileCornerPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	UPaperTileMapComponent_GetTileCornerPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2B80
//		Name   -> Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                TileX                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TileY                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LayerIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UPaperTileMapComponent::GetTileCenterPosition(int TileX, int TileY, int LayerIndex, bool bWorldSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	UPaperTileMapComponent_GetTileCenterPosition_Params params;
	params.TileX = TileX;
	params.TileY = TileY;
	params.LayerIndex = LayerIndex;
	params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2A60
//		Name   -> Function Paper2D.PaperTileMapComponent.GetTile
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPaperTileInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FPaperTileInfo UPaperTileMapComponent::GetTile(int X, int Y, int Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	UPaperTileMapComponent_GetTile_Params params;
	params.X = X;
	params.Y = Y;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2690
//		Name   -> Function Paper2D.PaperTileMapComponent.GetMapSize
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                MapWidth                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MapHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumLayers                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::GetMapSize(int* MapWidth, int* MapHeight, int* NumLayers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	UPaperTileMapComponent_GetMapSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapWidth != nullptr)
		*MapWidth = params.MapWidth;
	if (MapHeight != nullptr)
		*MapHeight = params.MapHeight;
	if (NumLayers != nullptr)
		*NumLayers = params.NumLayers;

}


// Function:
//		Offset -> 0x007C25F0
//		Name   -> Function Paper2D.PaperTileMapComponent.GetLayerColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                Layer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UPaperTileMapComponent::GetLayerColor(int Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	UPaperTileMapComponent_GetLayerColor_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C2100
//		Name   -> Function Paper2D.PaperTileMapComponent.CreateNewTileMap
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MapWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MapHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TileWidth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TileHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PixelsPerUnrealUnit                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCreateLayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UPaperTileMapComponent::CreateNewTileMap(int MapWidth, int MapHeight, int TileWidth, int TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	UPaperTileMapComponent_CreateNewTileMap_Params params;
	params.MapWidth = MapWidth;
	params.MapHeight = MapHeight;
	params.TileWidth = TileWidth;
	params.TileHeight = TileHeight;
	params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	params.bCreateLayer = bCreateLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007C1E80
//		Name   -> Function Paper2D.PaperTileMapComponent.AddNewLayer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPaperTileLayer*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPaperTileLayer* UPaperTileMapComponent::AddNewLayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	UPaperTileMapComponent_AddNewLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C34F0
//		Name   -> Function Paper2D.TileMapBlueprintLibrary.MakeTile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                TileIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPaperTileSet*                               TileSet                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFlipH                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFlipV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFlipD                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FPaperTileInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FPaperTileInfo UTileMapBlueprintLibrary::STATIC_MakeTile(int TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.MakeTile");

	UTileMapBlueprintLibrary_MakeTile_Params params;
	params.TileIndex = TileIndex;
	params.TileSet = TileSet;
	params.bFlipH = bFlipH;
	params.bFlipV = bFlipV;
	params.bFlipD = bFlipD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C3150
//		Name   -> Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UTileMapBlueprintLibrary::STATIC_GetTileUserData(const struct FPaperTileInfo& Tile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData");

	UTileMapBlueprintLibrary_GetTileUserData_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C3070
//		Name   -> Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UTileMapBlueprintLibrary::STATIC_GetTileTransform(const struct FPaperTileInfo& Tile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform");

	UTileMapBlueprintLibrary_GetTileTransform_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007C1EB0
//		Name   -> Function Paper2D.TileMapBlueprintLibrary.BreakTile
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FPaperTileInfo                              Tile                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                TileIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPaperTileSet*                               TileSet                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFlipH                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFlipV                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFlipD                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTileMapBlueprintLibrary::STATIC_BreakTile(const struct FPaperTileInfo& Tile, int* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.BreakTile");

	UTileMapBlueprintLibrary_BreakTile_Params params;
	params.Tile = Tile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TileIndex != nullptr)
		*TileIndex = params.TileIndex;
	if (TileSet != nullptr)
		*TileSet = params.TileSet;
	if (bFlipH != nullptr)
		*bFlipH = params.bFlipH;
	if (bFlipV != nullptr)
		*bFlipV = params.bFlipV;
	if (bFlipD != nullptr)
		*bFlipD = params.bFlipD;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
