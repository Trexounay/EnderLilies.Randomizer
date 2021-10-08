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

// BlueprintGeneratedClass AE_FXOnTrigger.AE_FXOnTrigger_C
// 0x0053 (FullSize[0x0153] - InheritedSize[0x0100])
class UAE_FXOnTrigger_C : public UAbilityEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SpineExtensionPlugin_ESpineBone                    OverrideBone;                                              // 0x0110(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YOYI[0xF];                                     // 0x0111(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Offset;                                                    // 0x0120(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor)
	bool                                               Attach;                                                    // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	Zenith_ETranslucencyLayer                          TranslucencyLayer;                                         // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseRotationToTarget;                                       // 0x0152(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AE_FXOnTrigger.AE_FXOnTrigger_C");
		return ptr;
	}



	void GetBone(class UBaseFXComponent* FXComponent, SpineExtensionPlugin_ESpineBone* Bone);
	void ComputeOffset(class AActor* From, class AActor* To, struct FTransform* Offset);
	void OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos);
	void ExecuteUbergraph_AE_FXOnTrigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
