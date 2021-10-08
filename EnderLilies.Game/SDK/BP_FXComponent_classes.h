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

// BlueprintGeneratedClass BP_FXComponent.BP_FXComponent_C
// 0x0040 (FullSize[0x0120] - InheritedSize[0x00E0])
class UBP_FXComponent_C : public USpineFXComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                             FindEnemyFX;                                               // 0x00E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             JustGuardFX;                                               // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             LandingFX;                                                 // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ContactDamageFX;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             DefaultBreathFX;                                           // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             OverrideBreathFX;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystemComponent*                    BreathFXInstance;                                          // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FXComponent.BP_FXComponent_C");
		return ptr;
	}



	void GetBreathFX(class UParticleSystem** OverrideBreathFX);
	void StopBreathFX();
	void PlayBreathFX();
	void ClearOverrideBreathFX();
	void SetOverrideBreathFX(class UParticleSystem* OverrideBreathFX);
	void TriggerFindEnemyFX();
	void TriggerJustGuardFX();
	void TriggerLandingFX(const struct FHitResult& FloorHit);
	void TriggerContactDamageFX();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FXComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
