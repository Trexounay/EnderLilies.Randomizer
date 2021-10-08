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
//		Offset -> 0x00824210
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineSkeletonComponent::UpdateWorldTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform");

	USpineSkeletonComponent_UpdateWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823F00
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineSkeletonComponent::SetToSetupPose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose");

	USpineSkeletonComponent_SetToSetupPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823C60
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineSkeletonComponent::SetSlotsToSetupPose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose");

	USpineSkeletonComponent_SetSlotsToSetupPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823B80
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetSkins
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             SkinNames                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::SetSkins(TArray<struct FString> SkinNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetSkins");

	USpineSkeletonComponent_SetSkins_Params params;
	params.SkinNames = SkinNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00823AE0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetSkinCollection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       SkinCollectionName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::SetSkinCollection(const struct FName& SkinCollectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetSkinCollection");

	USpineSkeletonComponent_SetSkinCollection_Params params;
	params.SkinCollectionName = SkinCollectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008238E0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetSkin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SkinName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::SetSkin(const struct FString& SkinName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetSkin");

	USpineSkeletonComponent_SetSkin_Params params;
	params.SkinName = SkinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008237E0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetScaleY
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ScaleY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonComponent::SetScaleY(float ScaleY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetScaleY");

	USpineSkeletonComponent_SetScaleY_Params params;
	params.ScaleY = ScaleY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008236E0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetScaleX
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ScaleX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonComponent::SetScaleX(float ScaleX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetScaleX");

	USpineSkeletonComponent_SetScaleX_Params params;
	params.ScaleX = ScaleX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822D90
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     BoneName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonComponent::SetBoneWorldPosition(const struct FString& BoneName, const struct FVector& Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition");

	USpineSkeletonComponent_SetBoneWorldPosition_Params params;
	params.BoneName = BoneName;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822E80
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineSkeletonComponent::SetBonesToSetupPose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose");

	USpineSkeletonComponent_SetBonesToSetupPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008228E0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.SetAttachment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SlotName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     attachmentName                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::SetAttachment(const struct FString& SlotName, const struct FString& attachmentName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.SetAttachment");

	USpineSkeletonComponent_SetAttachment_Params params;
	params.SlotName = SlotName;
	params.attachmentName = attachmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00822320
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.HasUpdatedThisFrame
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::HasUpdatedThisFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasUpdatedThisFrame");

	USpineSkeletonComponent_HasUpdatedThisFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00822120
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.HasSlot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SlotName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::HasSlot(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasSlot");

	USpineSkeletonComponent_HasSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821D20
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.HasSkin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SkinName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::HasSkin(const struct FString& SkinName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasSkin");

	USpineSkeletonComponent_HasSkin_Params params;
	params.SkinName = SkinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821F20
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.HasBone
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     BoneName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::HasBone(const struct FString& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasBone");

	USpineSkeletonComponent_HasBone_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821D20
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.HasAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineSkeletonComponent::HasAnimation(const struct FString& AnimationName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.HasAnimation");

	USpineSkeletonComponent_HasAnimation_Params params;
	params.AnimationName = AnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008219E0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.GetSlots
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Slots                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USpineSkeletonComponent::GetSlots(TArray<struct FString>* Slots)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetSlots");

	USpineSkeletonComponent_GetSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function:
//		Offset -> 0x00821840
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.GetSkins
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Skins                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USpineSkeletonComponent::GetSkins(TArray<struct FString>* Skins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetSkins");

	USpineSkeletonComponent_GetSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;

}


// Function:
//		Offset -> 0x008217E0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.GetScaleY
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineSkeletonComponent::GetScaleY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetScaleY");

	USpineSkeletonComponent_GetScaleY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821780
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.GetScaleX
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineSkeletonComponent::GetScaleX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetScaleX");

	USpineSkeletonComponent_GetScaleX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008211F0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     BoneName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform USpineSkeletonComponent::GetBoneWorldTransform(const struct FString& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform");

	USpineSkeletonComponent_GetBoneWorldTransform_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008212C0
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.GetBones
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Bones                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USpineSkeletonComponent::GetBones(TArray<struct FString>* Bones)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetBones");

	USpineSkeletonComponent_GetBones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bones != nullptr)
		*Bones = params.Bones;

}


// Function:
//		Offset -> 0x00821000
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.GetAnimations
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Animations                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USpineSkeletonComponent::GetAnimations(TArray<struct FString>* Animations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetAnimations");

	USpineSkeletonComponent_GetAnimations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animations != nullptr)
		*Animations = params.Animations;

}


// Function:
//		Offset -> 0x00820D10
//		Name   -> Function SpinePlugin.SpineSkeletonComponent.GetAnimationDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineSkeletonComponent::GetAnimationDuration(const struct FString& AnimationName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonComponent.GetAnimationDuration");

	USpineSkeletonComponent_GetAnimationDuration_Params params;
	params.AnimationName = AnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00823D70
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonAnimationComponent::SetTimeScale(float TimeScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale");

	USpineSkeletonAnimationComponent_SetTimeScale_Params params;
	params.TimeScale = TimeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823450
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InPlaybackTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCallDelegates                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonAnimationComponent::SetPlaybackTime(float InPlaybackTime, bool bCallDelegates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime");

	USpineSkeletonAnimationComponent_SetPlaybackTime_Params params;
	params.InPlaybackTime = InPlaybackTime;
	params.bCallDelegates = bCallDelegates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822FE0
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              mixDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineSkeletonAnimationComponent::SetEmptyAnimation(int TrackIndex, float mixDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation");

	USpineSkeletonAnimationComponent_SetEmptyAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.mixDuration = mixDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00822C70
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInAutoPlays                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonAnimationComponent::SetAutoPlay(bool bInAutoPlays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay");

	USpineSkeletonAnimationComponent_SetAutoPlay_Params params;
	params.bInAutoPlays = bInAutoPlays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822430
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Loop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineSkeletonAnimationComponent::SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation");

	USpineSkeletonAnimationComponent_SetAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.AnimationName = AnimationName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821B80
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineSkeletonAnimationComponent::GetTimeScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale");

	USpineSkeletonAnimationComponent_GetTimeScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821460
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineSkeletonAnimationComponent::GetCurrent(int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent");

	USpineSkeletonAnimationComponent_GetCurrent_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00820AA0
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.ForceTick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonAnimationComponent::ForceTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.ForceTick");

	USpineSkeletonAnimationComponent_ForceTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00820A60
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineSkeletonAnimationComponent::ClearTracks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks");

	USpineSkeletonAnimationComponent_ClearTracks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00820940
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonAnimationComponent::ClearTrack(int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack");

	USpineSkeletonAnimationComponent_ClearTrack_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00820690
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              mixDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineSkeletonAnimationComponent::AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation");

	USpineSkeletonAnimationComponent_AddEmptyAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.mixDuration = mixDuration;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00820330
//		Name   -> Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Loop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineSkeletonAnimationComponent::AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation");

	USpineSkeletonAnimationComponent_AddAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.AnimationName = AnimationName;
	params.Loop = Loop;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008208B0
//		Name   -> Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		class USpineSkeletonComponent*                     Skeleton                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineBoneDriverComponent::BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform");

	USpineBoneDriverComponent_BeforeUpdateWorldTransform_Params params;
	params.Skeleton = Skeleton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823FD0
//		Name   -> Function SpinePlugin.TrackEntry.SetTrackTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              trackTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetTrackTime(float trackTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetTrackTime");

	UTrackEntry_SetTrackTime_Params params;
	params.trackTime = trackTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823F40
//		Name   -> Function SpinePlugin.TrackEntry.SetTrackEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              trackEnd                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetTrackEnd(float trackEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetTrackEnd");

	UTrackEntry_SetTrackEnd_Params params;
	params.trackEnd = trackEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823E70
//		Name   -> Function SpinePlugin.TrackEntry.SetTimeScale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetTimeScale(float TimeScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetTimeScale");

	UTrackEntry_SetTimeScale_Params params;
	params.TimeScale = TimeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008233C0
//		Name   -> Function SpinePlugin.TrackEntry.SetMixTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              mixTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetMixTime(float mixTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetMixTime");

	UTrackEntry_SetMixTime_Params params;
	params.mixTime = mixTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823330
//		Name   -> Function SpinePlugin.TrackEntry.SetMixDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              mixDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetMixDuration(float mixDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetMixDuration");

	UTrackEntry_SetMixDuration_Params params;
	params.mixDuration = mixDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008232A0
//		Name   -> Function SpinePlugin.TrackEntry.SetLoop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Loop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetLoop(bool Loop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetLoop");

	UTrackEntry_SetLoop_Params params;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823210
//		Name   -> Function SpinePlugin.TrackEntry.SetHold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bHold                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetHold(bool bHold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetHold");

	UTrackEntry_SetHold_Params params;
	params.bHold = bHold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823180
//		Name   -> Function SpinePlugin.TrackEntry.SetEventThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              eventThreshold                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetEventThreshold(float eventThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetEventThreshold");

	UTrackEntry_SetEventThreshold_Params params;
	params.eventThreshold = eventThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822F50
//		Name   -> Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              drawOrderThreshold                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetDrawOrderThreshold(float drawOrderThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetDrawOrderThreshold");

	UTrackEntry_SetDrawOrderThreshold_Params params;
	params.drawOrderThreshold = drawOrderThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822EC0
//		Name   -> Function SpinePlugin.TrackEntry.SetDelay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetDelay(float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetDelay");

	UTrackEntry_SetDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822BE0
//		Name   -> Function SpinePlugin.TrackEntry.SetAttachmentThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              attachmentThreshold                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetAttachmentThreshold(float attachmentThreshold)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAttachmentThreshold");

	UTrackEntry_SetAttachmentThreshold_Params params;
	params.attachmentThreshold = attachmentThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822850
//		Name   -> Function SpinePlugin.TrackEntry.SetAnimationStart
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              AnimationStart                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetAnimationStart(float AnimationStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAnimationStart");

	UTrackEntry_SetAnimationStart_Params params;
	params.AnimationStart = AnimationStart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008227C0
//		Name   -> Function SpinePlugin.TrackEntry.SetAnimationLast
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              animationLast                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetAnimationLast(float animationLast)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAnimationLast");

	UTrackEntry_SetAnimationLast_Params params;
	params.animationLast = animationLast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822730
//		Name   -> Function SpinePlugin.TrackEntry.SetAnimationEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              AnimationEnd                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetAnimationEnd(float AnimationEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAnimationEnd");

	UTrackEntry_SetAnimationEnd_Params params;
	params.AnimationEnd = AnimationEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008223A0
//		Name   -> Function SpinePlugin.TrackEntry.SetAlpha
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTrackEntry::SetAlpha(float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.SetAlpha");

	UTrackEntry_SetAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008243F0
//		Name   -> Function SpinePlugin.TrackEntry.isValidAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::isValidAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.isValidAnimation");

	UTrackEntry_isValidAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00822350
//		Name   -> Function SpinePlugin.TrackEntry.IsComplete
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTrackEntry::IsComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.IsComplete");

	UTrackEntry_IsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821CD0
//		Name   -> Function SpinePlugin.TrackEntry.GetTrackTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetTrackTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetTrackTime");

	UTrackEntry_GetTrackTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821C80
//		Name   -> Function SpinePlugin.TrackEntry.GetTrackIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UTrackEntry::GetTrackIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetTrackIndex");

	UTrackEntry_GetTrackIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821C30
//		Name   -> Function SpinePlugin.TrackEntry.GetTrackEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetTrackEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetTrackEnd");

	UTrackEntry_GetTrackEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821BE0
//		Name   -> Function SpinePlugin.TrackEntry.GetTimeScale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetTimeScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetTimeScale");

	UTrackEntry_GetTimeScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821730
//		Name   -> Function SpinePlugin.TrackEntry.GetMixTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetMixTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetMixTime");

	UTrackEntry_GetMixTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008216E0
//		Name   -> Function SpinePlugin.TrackEntry.GetMixDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetMixDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetMixDuration");

	UTrackEntry_GetMixDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821690
//		Name   -> Function SpinePlugin.TrackEntry.GetLoop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UTrackEntry::GetLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetLoop");

	UTrackEntry_GetLoop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821640
//		Name   -> Function SpinePlugin.TrackEntry.GetEventThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetEventThreshold()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetEventThreshold");

	UTrackEntry_GetEventThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008215F0
//		Name   -> Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetDrawOrderThreshold()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetDrawOrderThreshold");

	UTrackEntry_GetDrawOrderThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008215A0
//		Name   -> Function SpinePlugin.TrackEntry.GetDelay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetDelay");

	UTrackEntry_GetDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008211A0
//		Name   -> Function SpinePlugin.TrackEntry.GetAttachmentThreshold
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetAttachmentThreshold()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAttachmentThreshold");

	UTrackEntry_GetAttachmentThreshold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00820FB0
//		Name   -> Function SpinePlugin.TrackEntry.GetAnimationStart
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetAnimationStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAnimationStart");

	UTrackEntry_GetAnimationStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008242A0
//		Name   -> Function SpinePlugin.TrackEntry.getAnimationName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTrackEntry::getAnimationName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.getAnimationName");

	UTrackEntry_getAnimationName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00820F60
//		Name   -> Function SpinePlugin.TrackEntry.GetAnimationLast
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetAnimationLast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAnimationLast");

	UTrackEntry_GetAnimationLast_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00820F10
//		Name   -> Function SpinePlugin.TrackEntry.GetAnimationEnd
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetAnimationEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAnimationEnd");

	UTrackEntry_GetAnimationEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00824250
//		Name   -> Function SpinePlugin.TrackEntry.GetAnimationDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetAnimationDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAnimationDuration");

	UTrackEntry_GetAnimationDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00820CC0
//		Name   -> Function SpinePlugin.TrackEntry.GetAlpha
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTrackEntry::GetAlpha()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.TrackEntry.GetAlpha");

	UTrackEntry_GetAlpha_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00820BA0
//		Name   -> Function SpinePlugin.SpineSkeletonDataAsset.GetAllAnimationNames
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USpineAtlasAsset*                            AtlasAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> USpineSkeletonDataAsset::GetAllAnimationNames(class USpineAtlasAsset* AtlasAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonDataAsset.GetAllAnimationNames");

	USpineSkeletonDataAsset_GetAllAnimationNames_Params params;
	params.AtlasAsset = AtlasAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00824060
//		Name   -> Function SpinePlugin.SpineSkeletonRendererComponent.SetVectorParameterValue
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonRendererComponent::SetVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonRendererComponent.SetVectorParameterValue");

	USpineSkeletonRendererComponent_SetVectorParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823CA0
//		Name   -> Function SpinePlugin.SpineSkeletonRendererComponent.SetTextureParameterValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonRendererComponent::SetTextureParameterValue(const struct FName& ParameterName, class UTexture* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonRendererComponent.SetTextureParameterValue");

	USpineSkeletonRendererComponent_SetTextureParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823610
//		Name   -> Function SpinePlugin.SpineSkeletonRendererComponent.SetScalarParameterValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonRendererComponent::SetScalarParameterValue(const struct FName& ParameterName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonRendererComponent.SetScalarParameterValue");

	USpineSkeletonRendererComponent_SetScalarParameterValue_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00820B20
//		Name   -> Function SpinePlugin.SpineSkeletonRendererComponent.ForceTick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineSkeletonRendererComponent::ForceTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineSkeletonRendererComponent.ForceTick");

	USpineSkeletonRendererComponent_ForceTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00824230
//		Name   -> Function SpinePlugin.SpineWidget.UpdateWorldTransform
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineWidget::UpdateWorldTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.UpdateWorldTransform");

	USpineWidget_UpdateWorldTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00824130
//		Name   -> Function SpinePlugin.SpineWidget.Tick
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               CallDelegates                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineWidget::Tick(float DeltaTime, bool CallDelegates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.Tick");

	USpineWidget_Tick_Params params;
	params.DeltaTime = DeltaTime;
	params.CallDelegates = CallDelegates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823F20
//		Name   -> Function SpinePlugin.SpineWidget.SetToSetupPose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineWidget::SetToSetupPose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetToSetupPose");

	USpineWidget_SetToSetupPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823DF0
//		Name   -> Function SpinePlugin.SpineWidget.SetTimeScale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineWidget::SetTimeScale(float TimeScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetTimeScale");

	USpineWidget_SetTimeScale_Params params;
	params.TimeScale = TimeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823C80
//		Name   -> Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineWidget::SetSlotsToSetupPose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetSlotsToSetupPose");

	USpineWidget_SetSlotsToSetupPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008239E0
//		Name   -> Function SpinePlugin.SpineWidget.SetSkin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SkinName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineWidget::SetSkin(const struct FString& SkinName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetSkin");

	USpineWidget_SetSkin_Params params;
	params.SkinName = SkinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00823860
//		Name   -> Function SpinePlugin.SpineWidget.SetScaleY
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ScaleY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineWidget::SetScaleY(float ScaleY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetScaleY");

	USpineWidget_SetScaleY_Params params;
	params.ScaleY = ScaleY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823760
//		Name   -> Function SpinePlugin.SpineWidget.SetScaleX
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ScaleX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineWidget::SetScaleX(float ScaleX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetScaleX");

	USpineWidget_SetScaleX_Params params;
	params.ScaleX = ScaleX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00823530
//		Name   -> Function SpinePlugin.SpineWidget.SetPlaybackTime
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InPlaybackTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCallDelegates                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineWidget::SetPlaybackTime(float InPlaybackTime, bool bCallDelegates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetPlaybackTime");

	USpineWidget_SetPlaybackTime_Params params;
	params.InPlaybackTime = InPlaybackTime;
	params.bCallDelegates = bCallDelegates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008230B0
//		Name   -> Function SpinePlugin.SpineWidget.SetEmptyAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              mixDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineWidget::SetEmptyAnimation(int TrackIndex, float mixDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetEmptyAnimation");

	USpineWidget_SetEmptyAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.mixDuration = mixDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00822EA0
//		Name   -> Function SpinePlugin.SpineWidget.SetBonesToSetupPose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineWidget::SetBonesToSetupPose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetBonesToSetupPose");

	USpineWidget_SetBonesToSetupPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822D00
//		Name   -> Function SpinePlugin.SpineWidget.SetAutoPlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bInAutoPlays                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineWidget::SetAutoPlay(bool bInAutoPlays)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetAutoPlay");

	USpineWidget_SetAutoPlay_Params params;
	params.bInAutoPlays = bInAutoPlays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00822A60
//		Name   -> Function SpinePlugin.SpineWidget.SetAttachment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SlotName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     attachmentName                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineWidget::SetAttachment(const struct FString& SlotName, const struct FString& attachmentName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetAttachment");

	USpineWidget_SetAttachment_Params params;
	params.SlotName = SlotName;
	params.attachmentName = attachmentName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008225B0
//		Name   -> Function SpinePlugin.SpineWidget.SetAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Loop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineWidget::SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.SetAnimation");

	USpineWidget_SetAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.AnimationName = AnimationName;
	params.Loop = Loop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00822220
//		Name   -> Function SpinePlugin.SpineWidget.HasSlot
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SlotName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineWidget::HasSlot(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.HasSlot");

	USpineWidget_HasSlot_Params params;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821E20
//		Name   -> Function SpinePlugin.SpineWidget.HasSkin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SkinName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineWidget::HasSkin(const struct FString& SkinName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.HasSkin");

	USpineWidget_HasSkin_Params params;
	params.SkinName = SkinName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00822020
//		Name   -> Function SpinePlugin.SpineWidget.HasBone
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     BoneName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineWidget::HasBone(const struct FString& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.HasBone");

	USpineWidget_HasBone_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821E20
//		Name   -> Function SpinePlugin.SpineWidget.HasAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpineWidget::HasAnimation(const struct FString& AnimationName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.HasAnimation");

	USpineWidget_HasAnimation_Params params;
	params.AnimationName = AnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821BB0
//		Name   -> Function SpinePlugin.SpineWidget.GetTimeScale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineWidget::GetTimeScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetTimeScale");

	USpineWidget_GetTimeScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821AB0
//		Name   -> Function SpinePlugin.SpineWidget.GetSlots
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Slots                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USpineWidget::GetSlots(TArray<struct FString>* Slots)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetSlots");

	USpineWidget_GetSlots_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slots != nullptr)
		*Slots = params.Slots;

}


// Function:
//		Offset -> 0x00821910
//		Name   -> Function SpinePlugin.SpineWidget.GetSkins
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Skins                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USpineWidget::GetSkins(TArray<struct FString>* Skins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetSkins");

	USpineWidget_GetSkins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;

}


// Function:
//		Offset -> 0x00821810
//		Name   -> Function SpinePlugin.SpineWidget.GetScaleY
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineWidget::GetScaleY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetScaleY");

	USpineWidget_GetScaleY_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008217B0
//		Name   -> Function SpinePlugin.SpineWidget.GetScaleX
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineWidget::GetScaleX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetScaleX");

	USpineWidget_GetScaleX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821500
//		Name   -> Function SpinePlugin.SpineWidget.GetCurrent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineWidget::GetCurrent(int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetCurrent");

	USpineWidget_GetCurrent_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00821390
//		Name   -> Function SpinePlugin.SpineWidget.GetBones
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Bones                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USpineWidget::GetBones(TArray<struct FString>* Bones)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetBones");

	USpineWidget_GetBones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bones != nullptr)
		*Bones = params.Bones;

}


// Function:
//		Offset -> 0x008210D0
//		Name   -> Function SpinePlugin.SpineWidget.GetAnimations
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<struct FString>                             Animations                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void USpineWidget::GetAnimations(TArray<struct FString>* Animations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetAnimations");

	USpineWidget_GetAnimations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Animations != nullptr)
		*Animations = params.Animations;

}


// Function:
//		Offset -> 0x00820E10
//		Name   -> Function SpinePlugin.SpineWidget.GetAnimationDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpineWidget::GetAnimationDuration(const struct FString& AnimationName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.GetAnimationDuration");

	USpineWidget_GetAnimationDuration_Params params;
	params.AnimationName = AnimationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00820A80
//		Name   -> Function SpinePlugin.SpineWidget.ClearTracks
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void USpineWidget::ClearTracks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.ClearTracks");

	USpineWidget_ClearTracks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008209D0
//		Name   -> Function SpinePlugin.SpineWidget.ClearTrack
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpineWidget::ClearTrack(int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.ClearTrack");

	USpineWidget_ClearTrack_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x008207A0
//		Name   -> Function SpinePlugin.SpineWidget.AddEmptyAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              mixDuration                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineWidget::AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.AddEmptyAnimation");

	USpineWidget_AddEmptyAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.mixDuration = mixDuration;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x008204E0
//		Name   -> Function SpinePlugin.SpineWidget.AddAnimation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AnimationName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Loop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTrackEntry*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTrackEntry* USpineWidget::AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpinePlugin.SpineWidget.AddAnimation");

	USpineWidget_AddAnimation_Params params;
	params.TrackIndex = TrackIndex;
	params.AnimationName = AnimationName;
	params.Loop = Loop;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
