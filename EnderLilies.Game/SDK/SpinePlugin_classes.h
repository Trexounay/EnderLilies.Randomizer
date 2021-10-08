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

// Class SpinePlugin.SpineSkeletonComponent
// 0x00B0 (FullSize[0x0160] - InheritedSize[0x00B0])
class USpineSkeletonComponent : public UActorComponent
{
public:
	class USpineAtlasAsset*                            Atlas;                                                     // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpineSkeletonDataAsset*                     SkeletonData;                                              // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                 // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5NMX[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpineAtlasAsset*                            lastAtlas;                                                 // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XFC5[0x60];                                    // 0x00F0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpineSkeletonDataAsset*                     lastData;                                                  // 0x0150(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EX9Z[0x8];                                     // 0x0158(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.SpineSkeletonComponent");
		return ptr;
	}



	void UpdateWorldTransform();
	void SetToSetupPose();
	void SetSlotsToSetupPose();
	bool SetSkins(TArray<struct FString> SkinNames);
	bool SetSkinCollection(const struct FName& SkinCollectionName);
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetBoneWorldPosition(const struct FString& BoneName, const struct FVector& Position);
	void SetBonesToSetupPose();
	bool SetAttachment(const struct FString& SlotName, const struct FString& attachmentName);
	bool HasUpdatedThisFrame();
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	struct FTransform GetBoneWorldTransform(const struct FString& BoneName);
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float GetAnimationDuration(const struct FString& AnimationName);
};

// Class SpinePlugin.SpineSkeletonAnimationComponent
// 0x0138 (FullSize[0x0298] - InheritedSize[0x0160])
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{
public:
	struct FScriptMulticastDelegate                    AnimationStart;                                            // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                        // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationEvent;                                            // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationComplete;                                         // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationEnd;                                              // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationDispose;                                          // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FString                                     PreviewAnimation;                                          // 0x01C0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreviewSkin;                                               // 0x01D0(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RootMotionDelta;                                           // 0x01E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastAppliedDeltaTime;                                      // 0x01E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_812Q[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Skins;                                                     // 0x01F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bLowFrequencyWhenOffScreen;                                // 0x0200(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IXWL[0xF];                                     // 0x0201(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      trackEntries[0x50];                                        // 0x0201(0x0050) UNKNOWN PROPERTY: SetProperty
	bool                                               bAutoPlaying;                                              // 0x0260(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_62OI[0x37];                                    // 0x0261(0x0037) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.SpineSkeletonAnimationComponent");
		return ptr;
	}



	void SetTimeScale(float TimeScale);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetAutoPlay(bool bInAutoPlays);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	float GetTimeScale();
	class UTrackEntry* GetCurrent(int TrackIndex);
	void ForceTick(float DeltaTime);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};

// Class SpinePlugin.SpineAtlasAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class USpineAtlasAsset : public UObject
{
public:
	TArray<class UTexture2D*>                          atlasPages;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                          atlasEmissivePages;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7TT3[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rawData;                                                   // 0x0050(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       atlasFileName;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.SpineAtlasAsset");
		return ptr;
	}



};

// Class SpinePlugin.SpineBoneDriverComponent
// 0x0028 (FullSize[0x0220] - InheritedSize[0x01F8])
class USpineBoneDriverComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                    // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BoneName;                                                  // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseComponentTransform;                                     // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsePosition;                                               // 0x0211(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseRotation;                                               // 0x0212(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseScale;                                                  // 0x0213(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6KS[0xC];                                     // 0x0214(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.SpineBoneDriverComponent");
		return ptr;
	}



	void BeforeUpdateWorldTransform(class USpineSkeletonComponent* Skeleton);
};

// Class SpinePlugin.SpineBoneFollowerComponent
// 0x0028 (FullSize[0x0220] - InheritedSize[0x01F8])
class USpineBoneFollowerComponent : public USceneComponent
{
public:
	class AActor*                                      Target;                                                    // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BoneName;                                                  // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseComponentTransform;                                     // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UsePosition;                                               // 0x0211(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseRotation;                                               // 0x0212(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseScale;                                                  // 0x0213(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5LYJ[0xC];                                     // 0x0214(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.SpineBoneFollowerComponent");
		return ptr;
	}



};

// Class SpinePlugin.TrackEntry
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UTrackEntry : public UObject
{
public:
	struct FScriptMulticastDelegate                    AnimationStart;                                            // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationEvent;                                            // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationComplete;                                         // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationEnd;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationDispose;                                          // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NC69[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.TrackEntry");
		return ptr;
	}



	void SetTrackTime(float trackTime);
	void SetTrackEnd(float trackEnd);
	void SetTimeScale(float TimeScale);
	void SetMixTime(float mixTime);
	void SetMixDuration(float mixDuration);
	void SetLoop(bool Loop);
	void SetHold(bool bHold);
	void SetEventThreshold(float eventThreshold);
	void SetDrawOrderThreshold(float drawOrderThreshold);
	void SetDelay(float Delay);
	void SetAttachmentThreshold(float attachmentThreshold);
	void SetAnimationStart(float AnimationStart);
	void SetAnimationLast(float animationLast);
	void SetAnimationEnd(float AnimationEnd);
	void SetAlpha(float Alpha);
	float isValidAnimation();
	bool IsComplete();
	float GetTrackTime();
	int GetTrackIndex();
	float GetTrackEnd();
	float GetTimeScale();
	float GetMixTime();
	float GetMixDuration();
	bool GetLoop();
	float GetEventThreshold();
	float GetDrawOrderThreshold();
	float GetDelay();
	float GetAttachmentThreshold();
	float GetAnimationStart();
	struct FString getAnimationName();
	float GetAnimationLast();
	float GetAnimationEnd();
	float GetAnimationDuration();
	float GetAlpha();
};

// Class SpinePlugin.SpineSkeletonDataAsset
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class USpineSkeletonDataAsset : public UObject
{
public:
	float                                              DefaultMix;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DefaultScale;                                              // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             DefaultSkins;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSpineSkinCollection>                SkinCollections;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationStateMixData>         MixData;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Bones;                                                     // 0x0060(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Slots;                                                     // 0x0070(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Skins;                                                     // 0x0080(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Animations;                                                // 0x0090(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Events;                                                    // 0x00A0(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              rawData;                                                   // 0x00B0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FName                                       skeletonDataFileName;                                      // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IQHS[0x18];                                    // 0x00C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.SpineSkeletonDataAsset");
		return ptr;
	}



	TArray<struct FString> GetAllAnimationNames(class USpineAtlasAsset* AtlasAsset);
};

// Class SpinePlugin.SpineSkeletonRendererComponent
// 0x0390 (FullSize[0x0880] - InheritedSize[0x04F0])
class USpineSkeletonRendererComponent : public UProceduralRenderMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnMaterialsUpdated;                                        // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          NormalBlendMaterial;                                       // 0x0500(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          AdditiveBlendMaterial;                                     // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MultiplyBlendMaterial;                                     // 0x0510(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          ScreenBlendMaterial;                                       // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                 // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_95Z7[0x50];                                    // 0x0530(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                               // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TLK3[0x50];                                    // 0x0590(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                               // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FR5L[0x50];                                    // 0x05F0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                 // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EKX0[0x50];                                    // 0x0650(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DepthOffset;                                               // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TextureParameterName;                                      // 0x06A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TextureEmissiveParameterName;                              // 0x06AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x06B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ScreenColorFactor;                                         // 0x06C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateCollision;                                          // 0x06D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRenderWhenOffScreen;                                      // 0x06D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5EET[0xAA];                                    // 0x06D6(0x00AA) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, float>                          MaterialParamScalars;                                      // 0x0780(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FLinearColor>            MaterialParamVectors;                                      // 0x07D0(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<struct FName, class UTexture*>                MaterialParamTextures;                                     // 0x0820(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1J24[0x10];                                    // 0x0870(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.SpineSkeletonRendererComponent");
		return ptr;
	}



	void SetVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	void SetTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	void SetScalarParameterValue(const struct FName& ParameterName, float Value);
	void ForceTick(float DeltaTime);
};

// Class SpinePlugin.SpineWidget
// 0x06B0 (FullSize[0x07B8] - InheritedSize[0x0108])
class USpineWidget : public UWidget
{
public:
	float                                              Scale;                                                     // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TAE2[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpineAtlasAsset*                            Atlas;                                                     // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpineSkeletonDataAsset*                     SkeletonData;                                              // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          NormalBlendMaterial;                                       // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          AdditiveBlendMaterial;                                     // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MultiplyBlendMaterial;                                     // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          ScreenBlendMaterial;                                       // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TextureParameterName;                                      // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DepthOffset;                                               // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x014C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VHZD[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Brush;                                                     // 0x0160(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    BeforeUpdateWorldTransform;                                // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AfterUpdateWorldTransform;                                 // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationStart;                                            // 0x0208(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationInterrupt;                                        // 0x0218(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationEvent;                                            // 0x0228(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationComplete;                                         // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationEnd;                                              // 0x0248(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    AnimationDispose;                                          // 0x0258(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L6GS[0x38];                                    // 0x0268(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            atlasNormalBlendMaterials;                                 // 0x02A0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_61UM[0x50];                                    // 0x02B0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            atlasAdditiveBlendMaterials;                               // 0x0300(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2AXU[0x50];                                    // 0x0310(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            atlasMultiplyBlendMaterials;                               // 0x0360(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4P5Y[0x50];                                    // 0x0370(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            atlasScreenBlendMaterials;                                 // 0x03C0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QK0K[0x390];                                   // 0x03D0(0x0390) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      trackEntries[0x50];                                        // 0x03D0(0x0050) UNKNOWN PROPERTY: SetProperty
	bool                                               bAutoPlaying;                                              // 0x07B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RMSU[0x7];                                     // 0x07B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SpinePlugin.SpineWidget");
		return ptr;
	}



	void UpdateWorldTransform();
	void Tick(float DeltaTime, bool CallDelegates);
	void SetToSetupPose();
	void SetTimeScale(float TimeScale);
	void SetSlotsToSetupPose();
	bool SetSkin(const struct FString& SkinName);
	void SetScaleY(float ScaleY);
	void SetScaleX(float ScaleX);
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates);
	class UTrackEntry* SetEmptyAnimation(int TrackIndex, float mixDuration);
	void SetBonesToSetupPose();
	void SetAutoPlay(bool bInAutoPlays);
	bool SetAttachment(const struct FString& SlotName, const struct FString& attachmentName);
	class UTrackEntry* SetAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop);
	bool HasSlot(const struct FString& SlotName);
	bool HasSkin(const struct FString& SkinName);
	bool HasBone(const struct FString& BoneName);
	bool HasAnimation(const struct FString& AnimationName);
	float GetTimeScale();
	void GetSlots(TArray<struct FString>* Slots);
	void GetSkins(TArray<struct FString>* Skins);
	float GetScaleY();
	float GetScaleX();
	class UTrackEntry* GetCurrent(int TrackIndex);
	void GetBones(TArray<struct FString>* Bones);
	void GetAnimations(TArray<struct FString>* Animations);
	float GetAnimationDuration(const struct FString& AnimationName);
	void ClearTracks();
	void ClearTrack(int TrackIndex);
	class UTrackEntry* AddEmptyAnimation(int TrackIndex, float mixDuration, float Delay);
	class UTrackEntry* AddAnimation(int TrackIndex, const struct FString& AnimationName, bool Loop, float Delay);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
