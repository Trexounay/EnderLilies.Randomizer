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

// BlueprintGeneratedClass BP_SpiritCharacterBase.BP_SpiritCharacterBase_C
// 0x0082 (FullSize[0x0652] - InheritedSize[0x05D0])
class ABP_SpiritCharacterBase_C : public AZenithSpirit
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULightEmulatorComponent*                     LightEmulator;                                             // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UProceduralRenderMeshProxyComponent*         LightEmulatorMask;                                         // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_MovementPropertyComponent_C*             BP_GravityComponent;                                       // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBP_FXComponent_C*                           BP_FXComponent;                                            // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineBoneComponent*                         SpineBone;                                                 // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineSkeletonRendererComponent*             SpineSkeletonRenderer;                                     // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineAnimationComponent*                    SpineAnimation;                                            // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineSkeletonAnimationExComponent*          SpineSkeletonAnimationEx;                                  // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FadeIn_FadeIn_1558C10C4A4B1C42E1B369AC76D27802;            // 0x0620(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeIn__Direction_1558C10C4A4B1C42E1B369AC76D27802;        // 0x0624(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JUYI[0x3];                                     // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeIn;                                                    // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOut_NewTrack_0_C4DEA0594E660D1E03E45F88F5EB0B84;       // 0x0630(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeOut__Direction_C4DEA0594E660D1E03E45F88F5EB0B84;       // 0x0634(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BUOA[0x3];                                     // 0x0635(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeOut;                                                   // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             AppearFX;                                                  // 0x0640(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             DisappearFX;                                               // 0x0648(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ETranslucencyLayer                          TranslucencySortPriority;                                  // 0x0650(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Appeared;                                                  // 0x0651(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpiritCharacterBase.BP_SpiritCharacterBase_C");
		return ptr;
	}



	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void OnSoftDisappear();
	void ReceiveBeginPlay();
	void OnAppear();
	void OnCommandAdded();
	void OnDisappear();
	void ExecuteUbergraph_BP_SpiritCharacterBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
