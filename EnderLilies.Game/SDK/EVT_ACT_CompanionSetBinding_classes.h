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

// BlueprintGeneratedClass EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C
// 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
class UEVT_ACT_CompanionSetBinding_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      SoftCompanionClass[0x28];                                  // 0x0048(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FName                                       BindingName;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LocalOffset;                                               // 0x0078(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveTime;                                                  // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowSpine;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FaceRight;                                                 // 0x0089(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OK8W[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IdleAnimationOverride;                                     // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSpineAnimationDefinition>           Animations;                                                // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C");
		return ptr;
	}



	void PlayAnimations(class UObject* Object);
	void SetIdleAnimationOverride(class UObject* Object);
	void BindCompanionActor(class AZenithCompanionCharacter* CompanionActor);
	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_CompanionSetBinding(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
