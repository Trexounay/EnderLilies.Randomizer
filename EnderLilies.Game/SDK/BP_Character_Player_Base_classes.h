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

// BlueprintGeneratedClass BP_Character_Player_Base.BP_Character_Player_Base_C
// 0x0104 (FullSize[0x08FC] - InheritedSize[0x07F8])
class ABP_Character_Player_Base_C : public ABP_Character_SpineBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpineBoneDriverComponent*                   SpineBoneDriver___RightArm;                                // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_IKBones_C*                               BP_IKBones;                                                // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USummonSetHoldComponent*                     SummonSetHold;                                             // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HookComponent_C*                         BP_HookComponent;                                          // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WallGrabComponent_C*                     BP_WallGrabComponent;                                      // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USummonerComponent*                          Summoner;                                                  // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TargetComponent_C*                       BP_TargetComponent;                                        // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAutoClimbComponent*                         AutoClimb;                                                 // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractComponent*                          Interact;                                                  // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAutoCollectComponent*                       AutoCollect;                                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                DamageColorCurve_Color_899AC2694465CC6281559880FBA7924D;   // 0x0850(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             DamageColorCurve__Direction_899AC2694465CC6281559880FBA7924D; // 0x0860(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XY9R[0x7];                                     // 0x0861(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          DamageColorCurve;                                          // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      LaunchKnockbackRecoveryCommand;                            // 0x0870(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UClass*>                              LaunchKnockbackStates;                                     // 0x0878(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              PostLaunchKnockbackStateDuration;                          // 0x0888(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LaunchKnockbackStatesSet;                                  // 0x088C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_A6ZV[0x3];                                     // 0x088D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      LedgeClimbLowActionClass;                                  // 0x0890(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      LedgeClimbMiddleActionClass;                               // 0x0898(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      LedgeClimbHighActionClass;                                 // 0x08A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                                  SpineDataDatatable;                                        // 0x08A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  AudioEventSubmerged;                                       // 0x08B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxZVelocityForSubmergedAudioEvent;                        // 0x08B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0W9J[0x4];                                     // 0x08BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  ContactDamageSoundEvent;                                   // 0x08C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AutoDiveCommand;                                           // 0x08C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UClass*>                              PostDamageInvincibilityStates;                             // 0x08D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              PostDamageInvisibilityStatesDuration;                      // 0x08E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BDCB[0x4];                                     // 0x08E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              PostEventStates;                                           // 0x08E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              PostEventStatesDuration;                                   // 0x08F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_Player_Base.BP_Character_Player_Base_C");
		return ptr;
	}



	bool IsPlayerAptitudeUnlocked(Zenith_EAptitudeType Aptitude);
	bool ShouldTriggerAutoDive();
	void GetContactDamage(class ABP_Character_Enemy_Base_C* EnemyCharacter, int* ContactDamage);
	void SetSpineData(const struct FFSpineDataGroup& FSpineDataGroup);
	void FindSpineDataForLevel(bool* Result, struct FFSpineDataGroup* SpindDataGroup);
	void RefreshSpineData(bool* Changed);
	void DamageColorCurve__FinishedFunc();
	void DamageColorCurve__UpdateFunc();
	void OnFinish_9EDCDC9446133E62BE79C0B3D03533F1();
	void BndEvt__Knockback_K2Node_ComponentBoundEvent_2_KnockbackEvent__DelegateSignature(const struct FKnockbackRuntimeData& KnockbackRuntimeData);
	void BndEvt__Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature(const struct FKnockbackRuntimeData& KnockbackRuntimeData);
	void BndEvt__AutoClimb_K2Node_ComponentBoundEvent_3_AutoClimbEvent__DelegateSignature(Zenith_EAutoClimbType ClimbType, bool DirectlyAbove, const struct FVector& TargetLocation);
	void OnSubmerged();
	void BndEvt__Collision_K2Node_ComponentBoundEvent_5_CollisionEvent__DelegateSignature(class AActor* OverlapActor);
	void ReceiveBeginPlay();
	void BndEvt__HPComponent_K2Node_ComponentBoundEvent_1_HPDamageEvent__DelegateSignature(class AActor* From, int Damage);
	void K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void OnJustGuard(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker);
	void OnEventStop();
	void ExecuteUbergraph_BP_Character_Player_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
