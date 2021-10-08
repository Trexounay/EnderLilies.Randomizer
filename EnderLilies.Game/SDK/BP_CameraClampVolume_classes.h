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

// BlueprintGeneratedClass BP_CameraClampVolume.BP_CameraClampVolume_C
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class ABP_CameraClampVolume_C : public ACameraClampVolume
{
public:
	bool                                               BlockerVolume_Up;                                          // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BlockerVolume_Down;                                        // 0x0279(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BlockerVolume_Left;                                        // 0x027A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BlockerVolume_Right;                                       // 0x027B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BlockerSize;                                               // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraClampVolume.BP_CameraClampVolume_C");
		return ptr;
	}



	void RefreshBlockerVolumes();
	void SetupBlockerVolume(bool Activate, class UBoxComponent* Box, const struct FVector& B1, const struct FVector& B2, bool Invert);
	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
