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

// BlueprintGeneratedClass BP_Character_Enemy_Base.BP_Character_Enemy_Base_C
// 0x0158 (FullSize[0x0950] - InheritedSize[0x07F8])
class ABP_Character_Enemy_Base_C : public ABP_Character_SpineBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBattleColorComponent*                       BattleColor;                                               // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            TickTrigger;                                               // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropComponent*                              Drop;                                                      // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOut_DissolveValue_6EDF8CBA4AF4C7E8EB3E99B4EBDA7A80;    // 0x0818(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeOut__Direction_6EDF8CBA4AF4C7E8EB3E99B4EBDA7A80;       // 0x081C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8O02[0x3];                                     // 0x081D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeOut;                                                   // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFMODEvent*                                  FindEnemySoundEvent;                                       // 0x0828(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ETranslucencyLayer                          TranslucencyLayer;                                         // 0x0830(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0CX3[0x7];                                     // 0x0831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKnockbackData                              ContactDamage_Knockback;                                   // 0x0838(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              ContactDamage_DamageRate;                                  // 0x0890(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RequestMeatActionTrack;                                    // 0x0894(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2LE1[0x3];                                     // 0x0895(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MeatActionAnimationName;                                   // 0x0898(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FRuntimeFloatCurve                          FallDamageCurve;                                           // 0x08A8(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      NecessaryStateForFallDamage;                               // 0x0930(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanBePaused;                                               // 0x0938(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               paused;                                                    // 0x0939(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               KillOnSwim;                                                // 0x093A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TO5V[0x1];                                     // 0x093B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeatActionBlendOut;                                        // 0x093C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPlayingMeatAction;                                       // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               EnableBattleColorsOnSpawn;                                 // 0x0941(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C3S4[0x6];                                     // 0x0942(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      CurrentTarget;                                             // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_Enemy_Base.BP_Character_Enemy_Base_C");
		return ptr;
	}



	void IsStandingOnElevator(bool* Result);
	void GetCurrentTarget(class AActor** CurrentTarget);
	void StopMeatAction();
	void PlayMeatAction();
	void IsPaused(bool* paused);
	void SetPaused(bool paused);
	void GetContactDamage(int* ContactDamage);
	void ComputeSortPriority(int* SortPriority);
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void BndEvt__DeathComponent_K2Node_ComponentBoundEvent_3_DeathEvent__DelegateSignature();
	void OnLanded(const struct FHitResult& Hit);
	void OnChangeTarget(class AActor* NewTarget);
	void K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void OnMovementModeChanged_ToSwimming();
	void OnRespawn();
	void ExecuteUbergraph_BP_Character_Enemy_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
