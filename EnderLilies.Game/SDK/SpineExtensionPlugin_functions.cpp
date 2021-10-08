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
//		Offset -> 0x007D5140
//		Name   -> Function SpineExtensionPlugin.BaseBoneComponent.GetBoneTransformByName
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     BoneName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFollowRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UBaseBoneComponent::GetBoneTransformByName(const struct FString& BoneName, bool bFollowRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.BaseBoneComponent.GetBoneTransformByName");

	UBaseBoneComponent_GetBoneTransformByName_Params params;
	params.BoneName = BoneName;
	params.bFollowRotation = bFollowRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007D5030
//		Name   -> Function SpineExtensionPlugin.BaseBoneComponent.GetBoneTransform
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SpineExtensionPlugin_ESpineBone                    Bone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFollowRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UBaseBoneComponent::GetBoneTransform(SpineExtensionPlugin_ESpineBone Bone, bool bFollowRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.BaseBoneComponent.GetBoneTransform");

	UBaseBoneComponent_GetBoneTransform_Params params;
	params.Bone = Bone;
	params.bFollowRotation = bFollowRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007D4F30
//		Name   -> Function SpineExtensionPlugin.BaseBoneComponent.GetAttachComponentByName
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     BoneName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFollowRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UBaseBoneComponent::GetAttachComponentByName(const struct FString& BoneName, bool bFollowRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.BaseBoneComponent.GetAttachComponentByName");

	UBaseBoneComponent_GetAttachComponentByName_Params params;
	params.BoneName = BoneName;
	params.bFollowRotation = bFollowRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007D4E50
//		Name   -> Function SpineExtensionPlugin.BaseBoneComponent.GetAttachComponent
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SpineExtensionPlugin_ESpineBone                    Bone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFollowRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UBaseBoneComponent::GetAttachComponent(SpineExtensionPlugin_ESpineBone Bone, bool bFollowRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.BaseBoneComponent.GetAttachComponent");

	UBaseBoneComponent_GetAttachComponent_Params params;
	params.Bone = Bone;
	params.bFollowRotation = bFollowRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007D5920
//		Name   -> Function SpineExtensionPlugin.BaseFXComponent.StopAllRunningFXs
//		Flags  -> (Native, Public, BlueprintCallable)
void UBaseFXComponent::StopAllRunningFXs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.BaseFXComponent.StopAllRunningFXs");

	UBaseFXComponent_StopAllRunningFXs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007D5610
//		Name   -> Function SpineExtensionPlugin.BaseFXComponent.SpawnFX
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UParticleSystem*                             ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SpineExtensionPlugin_ESpineBone                    Bone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       CustomBone                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Offset                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bAttach                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bFollowBoneRotation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TranslucencySortPriority                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EPSCPoolMethod                              PoolMethod                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRegisterAsRunningFX                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UParticleSystemComponent*                    ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UParticleSystemComponent* UBaseFXComponent::SpawnFX(class UParticleSystem* ParticleSystem, SpineExtensionPlugin_ESpineBone Bone, const struct FName& CustomBone, const struct FTransform& Offset, bool bAttach, bool bFollowBoneRotation, int TranslucencySortPriority, Engine_EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.BaseFXComponent.SpawnFX");

	UBaseFXComponent_SpawnFX_Params params;
	params.ParticleSystem = ParticleSystem;
	params.Bone = Bone;
	params.CustomBone = CustomBone;
	params.Offset = Offset;
	params.bAttach = bAttach;
	params.bFollowBoneRotation = bFollowBoneRotation;
	params.TranslucencySortPriority = TranslucencySortPriority;
	params.PoolMethod = PoolMethod;
	params.bRegisterAsRunningFX = bRegisterAsRunningFX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007D5270
//		Name   -> Function SpineExtensionPlugin.BaseFXComponent.GetDefaultFXBone
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		SpineExtensionPlugin_ESpineBone                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SpineExtensionPlugin_ESpineBone UBaseFXComponent::GetDefaultFXBone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.BaseFXComponent.GetDefaultFXBone");

	UBaseFXComponent_GetDefaultFXBone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyTick
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class USpineSkeletonAnimationComponent*            SpineComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FrameDeltaTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineAnimNotifyState::Received_SpineNotifyTick(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation, float FrameDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyTick");

	USpineAnimNotifyState_Received_SpineNotifyTick_Params params;
	params.SpineComp = SpineComp;
	params.Animation = Animation;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyEnd
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class USpineSkeletonAnimationComponent*            SpineComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineAnimNotifyState::Received_SpineNotifyEnd(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyEnd");

	USpineAnimNotifyState_Received_SpineNotifyEnd_Params params;
	params.SpineComp = SpineComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyBegin
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class USpineSkeletonAnimationComponent*            SpineComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TotalDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineAnimNotifyState::Received_SpineNotifyBegin(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation, float TotalDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyBegin");

	USpineAnimNotifyState_Received_SpineNotifyBegin_Params params;
	params.SpineComp = SpineComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007D52E0
//		Name   -> Function SpineExtensionPlugin.SpineAnimNotifyState.GetExecutionTime
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineAnimNotifyState::GetExecutionTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineAnimNotifyState.GetExecutionTime");

	USpineAnimNotifyState_GetExecutionTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007D52A0
//		Name   -> Function SpineExtensionPlugin.SpineAnimNotifyState.GetExecutionRatio
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineAnimNotifyState::GetExecutionRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineAnimNotifyState.GetExecutionRatio");

	USpineAnimNotifyState_GetExecutionRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function SpineExtensionPlugin.SpineAnimNotify.Received_SpineNotify
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class USpineSkeletonAnimationComponent*            SpineComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineAnimNotify::Received_SpineNotify(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineAnimNotify.Received_SpineNotify");

	USpineAnimNotify_Received_SpineNotify_Params params;
	params.SpineComp = SpineComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function SpineExtensionPlugin.SpineAnimNotify_PlayParticleEffect.CustomizeParticleEffect
//		Flags  -> (Event, Protected, BlueprintEvent, Const)
// Parameters:
//		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineAnimNotify_PlayParticleEffect::CustomizeParticleEffect(class UParticleSystemComponent* ParticleSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineAnimNotify_PlayParticleEffect.CustomizeParticleEffect");

	USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function SpineExtensionPlugin.SpineAnimNotifyState_TimedParticleEffect.CustomizeParticleEffect
//		Flags  -> (Event, Protected, BlueprintEvent, Const)
// Parameters:
//		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineAnimNotifyState_TimedParticleEffect::CustomizeParticleEffect(class UParticleSystemComponent* ParticleSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineAnimNotifyState_TimedParticleEffect.CustomizeParticleEffect");

	USpineAnimNotifyState_TimedParticleEffect_CustomizeParticleEffect_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007D5390
//		Name   -> Function SpineExtensionPlugin.SpineFXComponent.OnFXSystemEnd
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineFXComponent::OnFXSystemEnd(class UParticleSystemComponent* ParticleSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineFXComponent.OnFXSystemEnd");

	USpineFXComponent_OnFXSystemEnd_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007D5530
//		Name   -> Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.SetPlaybackTimeIgnoreTimescale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InPlaybackTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCallDelegates                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonAnimationExComponent::SetPlaybackTimeIgnoreTimescale(float InPlaybackTime, bool bCallDelegates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.SetPlaybackTimeIgnoreTimescale");

	USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Params params;
	params.InPlaybackTime = InPlaybackTime;
	params.bCallDelegates = bCallDelegates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007D5420
//		Name   -> Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.ReplaceSpineData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USpineAtlasAsset*                            NewAtlas                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USpineSkeletonDataAsset*                     NewSkeletonData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USpineNotifyAsset*                           NewNotifyAsset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonAnimationExComponent::ReplaceSpineData(class USpineAtlasAsset* NewAtlas, class USpineSkeletonDataAsset* NewSkeletonData, class USpineNotifyAsset* NewNotifyAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.ReplaceSpineData");

	USpineSkeletonAnimationExComponent_ReplaceSpineData_Params params;
	params.NewAtlas = NewAtlas;
	params.NewSkeletonData = NewSkeletonData;
	params.NewNotifyAsset = NewNotifyAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007D5300
//		Name   -> Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.OnAnimationStart
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UTrackEntry*                                 Entry                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonAnimationExComponent::OnAnimationStart(class UTrackEntry* Entry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.OnAnimationStart");

	USpineSkeletonAnimationExComponent_OnAnimationStart_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
