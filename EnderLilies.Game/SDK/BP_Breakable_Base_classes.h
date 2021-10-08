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

// BlueprintGeneratedClass BP_Breakable_Base.BP_Breakable_Base_C
// 0x0100 (FullSize[0x0340] - InheritedSize[0x0240])
class ABP_Breakable_Base_C : public ABreakable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAbilityComponent*                           Ability;                                                   // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPaperSpriteComponent*                       PaperSprite;                                               // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropComponent*                              Drop;                                                      // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundDataComponent*                         SoundData;                                                 // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_FakeWall_C*>                      FakeWalls;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	TArray<class AActor*>                              ActorsToDestroyOnDeath;                                    // 0x0280(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)
	float                                              DestroyDelay;                                              // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0WS4[0x4];                                     // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             BreakFX;                                                   // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  BreakSoundEvent;                                           // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LastAttacker;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FAbilityDescription                         AbilityDescription;                                        // 0x02B0(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FTransform                                  AbilityOffset;                                             // 0x0310(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Breakable_Base.BP_Breakable_Base_C");
		return ptr;
	}



	struct FRotator GetRotationFromLastAttacker();
	void TriggerPlayerOverlap();
	void TriggerDisableCollision();
	void TriggerAbility();
	void TriggerBreakFX();
	void TriggerBreakSE();
	void BndEvt__HPComponent_K2Node_ComponentBoundEvent_2_HPDamageEvent__DelegateSignature(class AActor* From, int Damage);
	void OnBreak();
	void PostBreakDestroy();
	void BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_1_ClearableEvent__DelegateSignature(bool bAlreadyCleared);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnPlayerOverlap();
	void ExecuteUbergraph_BP_Breakable_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
