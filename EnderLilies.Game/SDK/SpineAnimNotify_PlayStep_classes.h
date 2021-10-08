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

// BlueprintGeneratedClass SpineAnimNotify_PlayStep.SpineAnimNotify_PlayStep_C
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class USpineAnimNotify_PlayStep_C : public USpineAnimNotify
{
public:
	Zenith_ESoundHeavinessCategory                     Heaviness;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_EWalkMode                                   StepStyle;                                                 // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KC9T[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocalSpaceStepOffset;                                      // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SpineAnimNotify_PlayStep.SpineAnimNotify_PlayStep_C");
		return ptr;
	}



	void TriggerSEAndFXFromFloor(const struct FHitResult& Hit, const struct FVector& ActorLocation);
	bool Received_SpineNotify(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
