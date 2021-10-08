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

// Class AnimationSharing.AnimSharingStateInstance
// 0x0028 (FullSize[0x02E0] - InheritedSize[0x02B8])
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	class UAnimSequence*                               AnimationToPlay;                                           // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PermutationTimeOffset;                                     // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlayRate;                                                  // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStateBool;                                                // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FJAL[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimSharingInstance*                        Instance;                                                  // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D6Y7[0x8];                                     // 0x02D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		return ptr;
	}



	void GetInstancedActors(TArray<class AActor*>* Actors);
};

// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       FromComponent;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USkeletalMeshComponent>       ToComponent;                                               // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              BlendTime;                                                 // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBlendBool;                                                // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_HSOI[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0018 (FullSize[0x02D0] - InheritedSize[0x02B8])
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>       BaseComponent;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAnimSequence>                AdditiveAnimation;                                         // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Alpha;                                                     // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStateBool;                                                // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NOKE[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimSharingInstance
// 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                              RegisteredActors;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C7TP[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimationSharingStateProcessor*             StateProcessor;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V4UR[0x38];                                    // 0x0090(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                    // 0x00C8(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IJV2[0x10];                                    // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEnum*                                       StateEnum;                                                 // 0x00E8(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SharingActor;                                              // 0x00F0(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQTT[0x20];                                    // 0x00F8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}



};

// Class AnimationSharing.AnimationSharingManager
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UAnimationSharingManager : public UObject
{
public:
	TArray<class USkeleton*>                           Skeletons;                                                 // 0x0028(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YB18[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}



	void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);
	class UAnimationSharingManager* STATIC_GetAnimationSharingManager(class UObject* WorldContextObject);
	bool STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);
	bool STATIC_AnimationSharingEnabled();
};

// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup>   SkeletonSetups;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FAnimationSharingScalability                ScalabilitySettings;                                       // 0x0038(0x0010) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}



};

// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      AnimationStateEnum[0x28];                                  // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}



	void ProcessActorState(int* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess);
	class UEnum* GetAnimationStateEnum();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
