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

// BlueprintGeneratedClass BP_p0000_Lily.BP_p0000_Lily_C
// 0x0034 (FullSize[0x0930] - InheritedSize[0x08FC])
class ABP_p0000_Lily_C : public ABP_Character_Player_Base_C
{
public:
	unsigned char                                      UnknownData_WWMQ[0x4];                                     // 0x08FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0900(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           Hurtbox;                                                   // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        FakeLight;                                                 // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineBoneFollowerComponent*                 SpineBoneFollower;                                         // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             CameraFocusTarget;                                         // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              HurtboxCrouchHalfHeight;                                   // 0x0928(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HurtboxDefaultHalfHeight;                                  // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_p0000_Lily.BP_p0000_Lily_C");
		return ptr;
	}



	void SetSpineData(const struct FFSpineDataGroup& FSpineDataGroup);
	class USceneComponent* GetCameraFocusTarget();
	void ReceiveBeginPlay();
	void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	void ExecuteUbergraph_BP_p0000_Lily(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
