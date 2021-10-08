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
// Classes
//---------------------------------------------------------------------------

// Class SpineExtensionPlugin.BaseBoneComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UBaseBoneComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.BaseBoneComponent");
		return ptr;
	}



	struct FTransform GetBoneTransformByName(const struct FString& BoneName, bool bFollowRotation);
	struct FTransform GetBoneTransform(SpineExtensionPlugin_ESpineBone Bone, bool bFollowRotation);
	class USceneComponent* GetAttachComponentByName(const struct FString& BoneName, bool bFollowRotation);
	class USceneComponent* GetAttachComponent(SpineExtensionPlugin_ESpineBone Bone, bool bFollowRotation);
};

// Class SpineExtensionPlugin.BaseFXComponent
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UBaseFXComponent : public UActorComponent
{
public:
	SpineExtensionPlugin_ESpineBone                    DefaultFXBone;                                             // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F3FR[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.BaseFXComponent");
		return ptr;
	}



	void StopAllRunningFXs();
	class UParticleSystemComponent* SpawnFX(class UParticleSystem* ParticleSystem, SpineExtensionPlugin_ESpineBone Bone, const struct FName& CustomBone, const struct FTransform& Offset, bool bAttach, bool bFollowBoneRotation, int TranslucencySortPriority, Engine_EPSCPoolMethod PoolMethod, bool bRegisterAsRunningFX);
	SpineExtensionPlugin_ESpineBone GetDefaultFXBone();
};

// Class SpineExtensionPlugin.SpineAnimInstance
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class USpineAnimInstance : public UObject
{
public:
	unsigned char                                      UnknownData_WJP4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpineSkeletonAnimationComponent*            SpineAnimationComponent;                                   // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpineAnimSequence*                          SourceSequence;                                            // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimNotifyQueue                            NotifyQueue;                                               // 0x0040(0x0070) (Transient, NativeAccessSpecifierPublic)
	TArray<struct FAnimNotifyEvent>                    ActiveAnimNotifyState;                                     // 0x00B0(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineAnimInstance");
		return ptr;
	}



};

// Class SpineExtensionPlugin.SpineAnimNotifyState
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USpineAnimNotifyState : public UAnimNotifyState
{
public:
	float                                              ExecutionTime;                                             // 0x0030(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Duration;                                                  // 0x0034(0x0004) (BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineAnimNotifyState");
		return ptr;
	}



	bool Received_SpineNotifyTick(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_SpineNotifyEnd(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation);
	bool Received_SpineNotifyBegin(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation, float TotalDuration);
	float GetExecutionTime();
	float GetExecutionRatio();
};

// Class SpineExtensionPlugin.SpineAnimNotify
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class USpineAnimNotify : public UAnimNotify
{
public:
	class USpineSkeletonAnimationComponent*            SpineContext;                                              // 0x0038(0x0008) (ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineAnimNotify");
		return ptr;
	}



	bool Received_SpineNotify(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation);
};

// Class SpineExtensionPlugin.SpineAnimNotify_PlayParticleEffect
// 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
class USpineAnimNotify_PlayParticleEffect : public USpineAnimNotify
{
public:
	class UParticleSystem*                             PSTemplate;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationOffset;                                            // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0060(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SpineExtensionPlugin_ESpineBone                    Bone;                                                      // 0x006C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4IEJ[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomBone;                                                // 0x0070(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttachToBone;                                             // 0x0078(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowBoneRotation;                                       // 0x0079(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRegisterAsRunningFX;                                      // 0x007A(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S8TS[0x15];                                    // 0x007B(0x0015) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineAnimNotify_PlayParticleEffect");
		return ptr;
	}



	void CustomizeParticleEffect(class UParticleSystemComponent* ParticleSystem);
};

// Class SpineExtensionPlugin.SpineAnimNotify_PlaySound
// 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
class USpineAnimNotify_PlaySound : public USpineAnimNotify
{
public:
	class USoundBase*                                  Sound;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VolumeMultiplier;                                          // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchMultiplier;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFollow : 1;                                               // 0x0050(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8QCG[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineAnimNotify_PlaySound");
		return ptr;
	}



};

// Class SpineExtensionPlugin.SpineAnimNotifyState_TimedParticleEffect
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class USpineAnimNotifyState_TimedParticleEffect : public USpineAnimNotifyState
{
public:
	class UParticleSystem*                             PSTemplate;                                                // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationOffset;                                            // 0x0040(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x004C(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x0058(0x000C) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SpineExtensionPlugin_ESpineBone                    Bone;                                                      // 0x0064(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STEN[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomBone;                                                // 0x0068(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttachToBone;                                             // 0x0070(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDetachOnDeactivate;                                       // 0x0071(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowBoneRotation;                                       // 0x0072(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroyAtEnd;                                             // 0x0073(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PMM8[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    CurrentParticleComponent;                                  // 0x0078(0x0008) (ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineAnimNotifyState_TimedParticleEffect");
		return ptr;
	}



	void CustomizeParticleEffect(class UParticleSystemComponent* ParticleSystem);
};

// Class SpineExtensionPlugin.SpineAnimSequence
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class USpineAnimSequence : public UAnimSequenceBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineAnimSequence");
		return ptr;
	}



};

// Class SpineExtensionPlugin.SpineBoneComponent
// 0x0108 (FullSize[0x01B8] - InheritedSize[0x00B0])
class USpineBoneComponent : public UBaseBoneComponent
{
public:
	TMap<SpineExtensionPlugin_ESpineBone, class USceneComponent*> BoneFollowers;                                             // 0x00B0(0x0050) (ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<SpineExtensionPlugin_ESpineBone, class USceneComponent*> RotatedBoneFollowers;                                      // 0x0100(0x0050) (ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class USpineSkeletonAnimationComponent*            SpineAnimComponent;                                        // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavMovementComponent*                       NavMovementComponent;                                      // 0x0158(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                             SceneFeetComponent;                                        // 0x0160(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<SpineExtensionPlugin_ESpineBone, struct FString> BoneNames;                                                 // 0x0168(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineBoneComponent");
		return ptr;
	}



};

// Class SpineExtensionPlugin.SpineFXComponent
// 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
class USpineFXComponent : public UBaseFXComponent
{
public:
	class USpineSkeletonRendererComponent*             RendererComponent;                                         // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBaseBoneComponent*                          BoneComponent;                                             // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNavMovementComponent*                       NavComponent;                                              // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class UParticleSystemComponent>> RunningFXs;                                                // 0x00D0(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineFXComponent");
		return ptr;
	}



	void OnFXSystemEnd(class UParticleSystemComponent* ParticleSystem);
};

// Class SpineExtensionPlugin.SpineNotifyAsset
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class USpineNotifyAsset : public UObject
{
public:
	TMap<struct FString, class USpineAnimSequence*>    AnimSequencePerAnims;                                      // 0x0028(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineNotifyAsset");
		return ptr;
	}



};

// Class SpineExtensionPlugin.SpineSkeletonAnimationExComponent
// 0x0068 (FullSize[0x0300] - InheritedSize[0x0298])
class USpineSkeletonAnimationExComponent : public USpineSkeletonAnimationComponent
{
public:
	TArray<class USpineAnimInstance*>                  LastAnimInstances;                                         // 0x0298(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FString, class USpineAnimInstance*>    AnimInstanceForAnimations;                                 // 0x02A8(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	class USpineNotifyAsset*                           NotifyData;                                                // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpineExtensionPlugin.SpineSkeletonAnimationExComponent");
		return ptr;
	}



	void SetPlaybackTimeIgnoreTimescale(float InPlaybackTime, bool bCallDelegates);
	void ReplaceSpineData(class USpineAtlasAsset* NewAtlas, class USpineSkeletonDataAsset* NewSkeletonData, class USpineNotifyAsset* NewNotifyAsset);
	void OnAnimationStart(class UTrackEntry* Entry);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
