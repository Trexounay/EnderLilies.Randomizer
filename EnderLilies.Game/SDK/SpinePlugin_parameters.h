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

// Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
struct USpineSkeletonComponent_UpdateWorldTransform_Params
{
};

// Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
struct USpineSkeletonComponent_SetToSetupPose_Params
{
};

// Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
struct USpineSkeletonComponent_SetSlotsToSetupPose_Params
{
};

// Function SpinePlugin.SpineSkeletonComponent.SetSkins
struct USpineSkeletonComponent_SetSkins_Params
{
	TArray<struct FString>                             SkinNames;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.SetSkinCollection
struct USpineSkeletonComponent_SetSkinCollection_Params
{
	struct FName                                       SkinCollectionName;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.SetSkin
struct USpineSkeletonComponent_SetSkin_Params
{
	struct FString                                     SkinName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.SetScaleY
struct USpineSkeletonComponent_SetScaleY_Params
{
	float                                              ScaleY;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.SetScaleX
struct USpineSkeletonComponent_SetScaleX_Params
{
	float                                              ScaleX;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
struct USpineSkeletonComponent_SetBoneWorldPosition_Params
{
	struct FString                                     BoneName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
struct USpineSkeletonComponent_SetBonesToSetupPose_Params
{
};

// Function SpinePlugin.SpineSkeletonComponent.SetAttachment
struct USpineSkeletonComponent_SetAttachment_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     attachmentName;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.HasUpdatedThisFrame
struct USpineSkeletonComponent_HasUpdatedThisFrame_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.HasSlot
struct USpineSkeletonComponent_HasSlot_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.HasSkin
struct USpineSkeletonComponent_HasSkin_Params
{
	struct FString                                     SkinName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.HasBone
struct USpineSkeletonComponent_HasBone_Params
{
	struct FString                                     BoneName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.HasAnimation
struct USpineSkeletonComponent_HasAnimation_Params
{
	struct FString                                     AnimationName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.GetSlots
struct USpineSkeletonComponent_GetSlots_Params
{
	TArray<struct FString>                             Slots;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.GetSkins
struct USpineSkeletonComponent_GetSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.GetScaleY
struct USpineSkeletonComponent_GetScaleY_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.GetScaleX
struct USpineSkeletonComponent_GetScaleX_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
struct USpineSkeletonComponent_GetBoneWorldTransform_Params
{
	struct FString                                     BoneName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.GetBones
struct USpineSkeletonComponent_GetBones_Params
{
	TArray<struct FString>                             Bones;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.GetAnimations
struct USpineSkeletonComponent_GetAnimations_Params
{
	TArray<struct FString>                             Animations;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonComponent.GetAnimationDuration
struct USpineSkeletonComponent_GetAnimationDuration_Params
{
	struct FString                                     AnimationName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
struct USpineSkeletonAnimationComponent_SetTimeScale_Params
{
	float                                              TimeScale;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
struct USpineSkeletonAnimationComponent_SetPlaybackTime_Params
{
	float                                              InPlaybackTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCallDelegates;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
struct USpineSkeletonAnimationComponent_SetEmptyAnimation_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              mixDuration;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
struct USpineSkeletonAnimationComponent_SetAutoPlay_Params
{
	bool                                               bInAutoPlays;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
struct USpineSkeletonAnimationComponent_SetAnimation_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimationName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
struct USpineSkeletonAnimationComponent_GetTimeScale_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
struct USpineSkeletonAnimationComponent_GetCurrent_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.ForceTick
struct USpineSkeletonAnimationComponent_ForceTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
struct USpineSkeletonAnimationComponent_ClearTracks_Params
{
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
struct USpineSkeletonAnimationComponent_ClearTrack_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
struct USpineSkeletonAnimationComponent_AddEmptyAnimation_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              mixDuration;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
struct USpineSkeletonAnimationComponent_AddAnimation_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimationName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
struct USpineBoneDriverComponent_BeforeUpdateWorldTransform_Params
{
	class USpineSkeletonComponent*                     Skeleton;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetTrackTime
struct UTrackEntry_SetTrackTime_Params
{
	float                                              trackTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetTrackEnd
struct UTrackEntry_SetTrackEnd_Params
{
	float                                              trackEnd;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetTimeScale
struct UTrackEntry_SetTimeScale_Params
{
	float                                              TimeScale;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetMixTime
struct UTrackEntry_SetMixTime_Params
{
	float                                              mixTime;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetMixDuration
struct UTrackEntry_SetMixDuration_Params
{
	float                                              mixDuration;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetLoop
struct UTrackEntry_SetLoop_Params
{
	bool                                               Loop;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetHold
struct UTrackEntry_SetHold_Params
{
	bool                                               bHold;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetEventThreshold
struct UTrackEntry_SetEventThreshold_Params
{
	float                                              eventThreshold;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
struct UTrackEntry_SetDrawOrderThreshold_Params
{
	float                                              drawOrderThreshold;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetDelay
struct UTrackEntry_SetDelay_Params
{
	float                                              Delay;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetAttachmentThreshold
struct UTrackEntry_SetAttachmentThreshold_Params
{
	float                                              attachmentThreshold;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetAnimationStart
struct UTrackEntry_SetAnimationStart_Params
{
	float                                              AnimationStart;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetAnimationLast
struct UTrackEntry_SetAnimationLast_Params
{
	float                                              animationLast;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetAnimationEnd
struct UTrackEntry_SetAnimationEnd_Params
{
	float                                              AnimationEnd;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.SetAlpha
struct UTrackEntry_SetAlpha_Params
{
	float                                              Alpha;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.isValidAnimation
struct UTrackEntry_isValidAnimation_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.IsComplete
struct UTrackEntry_IsComplete_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetTrackTime
struct UTrackEntry_GetTrackTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetTrackIndex
struct UTrackEntry_GetTrackIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetTrackEnd
struct UTrackEntry_GetTrackEnd_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetTimeScale
struct UTrackEntry_GetTimeScale_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetMixTime
struct UTrackEntry_GetMixTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetMixDuration
struct UTrackEntry_GetMixDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetLoop
struct UTrackEntry_GetLoop_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetEventThreshold
struct UTrackEntry_GetEventThreshold_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
struct UTrackEntry_GetDrawOrderThreshold_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetDelay
struct UTrackEntry_GetDelay_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetAttachmentThreshold
struct UTrackEntry_GetAttachmentThreshold_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetAnimationStart
struct UTrackEntry_GetAnimationStart_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.getAnimationName
struct UTrackEntry_getAnimationName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetAnimationLast
struct UTrackEntry_GetAnimationLast_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetAnimationEnd
struct UTrackEntry_GetAnimationEnd_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetAnimationDuration
struct UTrackEntry_GetAnimationDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.TrackEntry.GetAlpha
struct UTrackEntry_GetAlpha_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonDataAsset.GetAllAnimationNames
struct USpineSkeletonDataAsset_GetAllAnimationNames_Params
{
	class USpineAtlasAsset*                            AtlasAsset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonRendererComponent.SetVectorParameterValue
struct USpineSkeletonRendererComponent_SetVectorParameterValue_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Value;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonRendererComponent.SetTextureParameterValue
struct USpineSkeletonRendererComponent_SetTextureParameterValue_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                                    Value;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonRendererComponent.SetScalarParameterValue
struct USpineSkeletonRendererComponent_SetScalarParameterValue_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineSkeletonRendererComponent.ForceTick
struct USpineSkeletonRendererComponent_ForceTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.UpdateWorldTransform
struct USpineWidget_UpdateWorldTransform_Params
{
};

// Function SpinePlugin.SpineWidget.Tick
struct USpineWidget_Tick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CallDelegates;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetToSetupPose
struct USpineWidget_SetToSetupPose_Params
{
};

// Function SpinePlugin.SpineWidget.SetTimeScale
struct USpineWidget_SetTimeScale_Params
{
	float                                              TimeScale;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
struct USpineWidget_SetSlotsToSetupPose_Params
{
};

// Function SpinePlugin.SpineWidget.SetSkin
struct USpineWidget_SetSkin_Params
{
	struct FString                                     SkinName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetScaleY
struct USpineWidget_SetScaleY_Params
{
	float                                              ScaleY;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetScaleX
struct USpineWidget_SetScaleX_Params
{
	float                                              ScaleX;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetPlaybackTime
struct USpineWidget_SetPlaybackTime_Params
{
	float                                              InPlaybackTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCallDelegates;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetEmptyAnimation
struct USpineWidget_SetEmptyAnimation_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              mixDuration;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetBonesToSetupPose
struct USpineWidget_SetBonesToSetupPose_Params
{
};

// Function SpinePlugin.SpineWidget.SetAutoPlay
struct USpineWidget_SetAutoPlay_Params
{
	bool                                               bInAutoPlays;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetAttachment
struct USpineWidget_SetAttachment_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     attachmentName;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.SetAnimation
struct USpineWidget_SetAnimation_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimationName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.HasSlot
struct USpineWidget_HasSlot_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.HasSkin
struct USpineWidget_HasSkin_Params
{
	struct FString                                     SkinName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.HasBone
struct USpineWidget_HasBone_Params
{
	struct FString                                     BoneName;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.HasAnimation
struct USpineWidget_HasAnimation_Params
{
	struct FString                                     AnimationName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetTimeScale
struct USpineWidget_GetTimeScale_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetSlots
struct USpineWidget_GetSlots_Params
{
	TArray<struct FString>                             Slots;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetSkins
struct USpineWidget_GetSkins_Params
{
	TArray<struct FString>                             Skins;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetScaleY
struct USpineWidget_GetScaleY_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetScaleX
struct USpineWidget_GetScaleX_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetCurrent
struct USpineWidget_GetCurrent_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetBones
struct USpineWidget_GetBones_Params
{
	TArray<struct FString>                             Bones;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetAnimations
struct USpineWidget_GetAnimations_Params
{
	TArray<struct FString>                             Animations;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.GetAnimationDuration
struct USpineWidget_GetAnimationDuration_Params
{
	struct FString                                     AnimationName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.ClearTracks
struct USpineWidget_ClearTracks_Params
{
};

// Function SpinePlugin.SpineWidget.ClearTrack
struct USpineWidget_ClearTrack_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.AddEmptyAnimation
struct USpineWidget_AddEmptyAnimation_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              mixDuration;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function SpinePlugin.SpineWidget.AddAnimation
struct USpineWidget_AddAnimation_Params
{
	int                                                TrackIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimationName;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Loop;                                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delay;                                                     // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTrackEntry*                                 ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
