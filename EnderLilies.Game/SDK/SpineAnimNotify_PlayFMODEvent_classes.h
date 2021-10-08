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

// BlueprintGeneratedClass SpineAnimNotify_PlayFMODEvent.SpineAnimNotify_PlayFMODEvent_C
// 0x000A (FullSize[0x004A] - InheritedSize[0x0040])
class USpineAnimNotify_PlayFMODEvent_C : public USpineAnimNotify
{
public:
	class UFMODEvent*                                  SoundEvent;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Attach;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               StopOnActionCancel;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SpineAnimNotify_PlayFMODEvent.SpineAnimNotify_PlayFMODEvent_C");
		return ptr;
	}



	struct FString GetNotifyName();
	bool Received_SpineNotify(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
