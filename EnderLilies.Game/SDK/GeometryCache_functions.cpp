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
//		Offset -> 0x00B4F060
//		Name   -> Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UGeometryCacheComponent*                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");

	AGeometryCacheActor_GetGeometryCacheComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F5C0
//		Name   -> Function GeometryCache.GeometryCacheComponent.TickAtThisTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Time                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInIsRunning                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInBackwards                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInIsLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.TickAtThisTime");

	UGeometryCacheComponent_TickAtThisTime_Params params;
	params.Time = Time;
	params.bInIsRunning = bInIsRunning;
	params.bInBackwards = bInBackwards;
	params.bInIsLooping = bInIsLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F5A0
//		Name   -> Function GeometryCache.GeometryCacheComponent.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Stop");

	UGeometryCacheComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F520
//		Name   -> Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewStartTimeOffset                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset");

	UGeometryCacheComponent_SetStartTimeOffset_Params params;
	params.NewStartTimeOffset = NewStartTimeOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F4A0
//		Name   -> Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              NewPlaybackSpeed                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");

	UGeometryCacheComponent_SetPlaybackSpeed_Params params;
	params.NewPlaybackSpeed = NewPlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F320
//		Name   -> Function GeometryCache.GeometryCacheComponent.SetLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bNewLooping                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheComponent::SetLooping(bool bNewLooping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetLooping");

	UGeometryCacheComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F280
//		Name   -> Function GeometryCache.GeometryCacheComponent.SetGeometryCache
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGeometryCache*                              NewGeomCache                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetGeometryCache");

	UGeometryCacheComponent_SetGeometryCache_Params params;
	params.NewGeomCache = NewGeomCache;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F260
//		Name   -> Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::PlayReversedFromEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");

	UGeometryCacheComponent_PlayReversedFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F240
//		Name   -> Function GeometryCache.GeometryCacheComponent.PlayReversed
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::PlayReversed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversed");

	UGeometryCacheComponent_PlayReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F220
//		Name   -> Function GeometryCache.GeometryCacheComponent.PlayFromStart
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::PlayFromStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayFromStart");

	UGeometryCacheComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F200
//		Name   -> Function GeometryCache.GeometryCacheComponent.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Play");

	UGeometryCacheComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F1E0
//		Name   -> Function GeometryCache.GeometryCacheComponent.Pause
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGeometryCacheComponent::Pause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Pause");

	UGeometryCacheComponent_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F1B0
//		Name   -> Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsPlayingReversed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed");

	UGeometryCacheComponent_IsPlayingReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F180
//		Name   -> Function GeometryCache.GeometryCacheComponent.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlaying");

	UGeometryCacheComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F150
//		Name   -> Function GeometryCache.GeometryCacheComponent.IsLooping
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGeometryCacheComponent::IsLooping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsLooping");

	UGeometryCacheComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F120
//		Name   -> Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetStartTimeOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset");

	UGeometryCacheComponent_GetStartTimeOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F0F0
//		Name   -> Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetPlaybackSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");

	UGeometryCacheComponent_GetPlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F0C0
//		Name   -> Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetPlaybackDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection");

	UGeometryCacheComponent_GetPlaybackDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F090
//		Name   -> Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGeometryCacheComponent::GetNumberOfFrames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames");

	UGeometryCacheComponent_GetNumberOfFrames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F030
//		Name   -> Function GeometryCache.GeometryCacheComponent.GetDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetDuration");

	UGeometryCacheComponent_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4F000
//		Name   -> Function GeometryCache.GeometryCacheComponent.GetAnimationTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGeometryCacheComponent::GetAnimationTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetAnimationTime");

	UGeometryCacheComponent_GetAnimationTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B4EED0
//		Name   -> Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGeometryCacheMeshData                      MeshData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              SampleTime                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");

	UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params params;
	params.MeshData = MeshData;
	params.SampleTime = SampleTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F3B0
//		Name   -> Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGeometryCacheMeshData                      NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh");

	UGeometryCacheTrack_TransformAnimation_SetMesh_Params params;
	params.NewMeshData = NewMeshData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B4F3B0
//		Name   -> Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		struct FGeometryCacheMeshData                      NewMeshData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh");

	UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params params;
	params.NewMeshData = NewMeshData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
