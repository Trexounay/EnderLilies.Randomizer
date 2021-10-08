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

// BlueprintGeneratedClass CA_UseHeal.CA_UseHeal_C
// 0x0060 (FullSize[0x0348] - InheritedSize[0x02E8])
class UCA_UseHeal_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimeBeforeHeal;                                            // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EB7H[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ExecuteHealFX;                                             // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             HealChargeFX;                                              // 0x0300(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSpineAnimationDefinition>           GroundedAnimations;                                        // 0x0308(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	TArray<struct FSpineAnimationDefinition>           SwimmingAnimations;                                        // 0x0318(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	TArray<struct FSpineAnimationDefinition>           DivingAnimations;                                          // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	bool                                               ExecutedHeal;                                              // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_57Z9[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    HealChargeFXInstance;                                      // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_UseHeal.CA_UseHeal_C");
		return ptr;
	}



	TArray<struct FSpineAnimationDefinition> GetAnimations();
	void ConsumeHeal();
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void GetHealComponent(class UHealComponent** HealComponent);
	bool CanStartCommandAction();
	void OnStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void ExecuteUbergraph_CA_UseHeal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
