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

// BlueprintGeneratedClass SpineAnimNotify_PlayCameraShake.SpineAnimNotify_PlayCameraShake_C
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class USpineAnimNotify_PlayCameraShake_C : public USpineAnimNotify
{
public:
	class UClass*                                      CameraShake;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SpineAnimNotify_PlayCameraShake.SpineAnimNotify_PlayCameraShake_C");
		return ptr;
	}



	bool Received_SpineNotify(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
