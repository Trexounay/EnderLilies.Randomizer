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

// Function SpineExtensionPlugin.BaseBoneComponent.GetBoneTransformByName
struct UBaseBoneComponent_GetBoneTransformByName_Params
{
	struct FString                                     BoneName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowRotation;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0020(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.BaseBoneComponent.GetBoneTransform
struct UBaseBoneComponent_GetBoneTransform_Params
{
	SpineExtensionPlugin_ESpineBone                    Bone;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowRotation;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.BaseBoneComponent.GetAttachComponentByName
struct UBaseBoneComponent_GetAttachComponentByName_Params
{
	struct FString                                     BoneName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowRotation;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             ReturnValue;                                               // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.BaseBoneComponent.GetAttachComponent
struct UBaseBoneComponent_GetAttachComponent_Params
{
	SpineExtensionPlugin_ESpineBone                    Bone;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowRotation;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.BaseFXComponent.StopAllRunningFXs
struct UBaseFXComponent_StopAllRunningFXs_Params
{
};

// Function SpineExtensionPlugin.BaseFXComponent.SpawnFX
struct UBaseFXComponent_SpawnFX_Params
{
	class UParticleSystem*                             ParticleSystem;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SpineExtensionPlugin_ESpineBone                    Bone;                                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CustomBone;                                                // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Offset;                                                    // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAttach;                                                   // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowBoneRotation;                                       // 0x0051(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TranslucencySortPriority;                                  // 0x0054(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EPSCPoolMethod                              PoolMethod;                                                // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRegisterAsRunningFX;                                      // 0x0059(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // 0x0060(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.BaseFXComponent.GetDefaultFXBone
struct UBaseFXComponent_GetDefaultFXBone_Params
{
	SpineExtensionPlugin_ESpineBone                    ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyTick
struct USpineAnimNotifyState_Received_SpineNotifyTick_Params
{
	class USpineSkeletonAnimationComponent*            SpineComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameDeltaTime;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyEnd
struct USpineAnimNotifyState_Received_SpineNotifyEnd_Params
{
	class USpineSkeletonAnimationComponent*            SpineComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineAnimNotifyState.Received_SpineNotifyBegin
struct USpineAnimNotifyState_Received_SpineNotifyBegin_Params
{
	class USpineSkeletonAnimationComponent*            SpineComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalDuration;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineAnimNotifyState.GetExecutionTime
struct USpineAnimNotifyState_GetExecutionTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineAnimNotifyState.GetExecutionRatio
struct USpineAnimNotifyState_GetExecutionRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineAnimNotify.Received_SpineNotify
struct USpineAnimNotify_Received_SpineNotify_Params
{
	class USpineSkeletonAnimationComponent*            SpineComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineAnimNotify_PlayParticleEffect.CustomizeParticleEffect
struct USpineAnimNotify_PlayParticleEffect_CustomizeParticleEffect_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineAnimNotifyState_TimedParticleEffect.CustomizeParticleEffect
struct USpineAnimNotifyState_TimedParticleEffect_CustomizeParticleEffect_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineFXComponent.OnFXSystemEnd
struct USpineFXComponent_OnFXSystemEnd_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.SetPlaybackTimeIgnoreTimescale
struct USpineSkeletonAnimationExComponent_SetPlaybackTimeIgnoreTimescale_Params
{
	float                                              InPlaybackTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCallDelegates;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.ReplaceSpineData
struct USpineSkeletonAnimationExComponent_ReplaceSpineData_Params
{
	class USpineAtlasAsset*                            NewAtlas;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpineSkeletonDataAsset*                     NewSkeletonData;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpineNotifyAsset*                           NewNotifyAsset;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpineExtensionPlugin.SpineSkeletonAnimationExComponent.OnAnimationStart
struct USpineSkeletonAnimationExComponent_OnAnimationStart_Params
{
	class UTrackEntry*                                 Entry;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
