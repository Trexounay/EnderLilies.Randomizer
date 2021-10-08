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

// BlueprintGeneratedClass BP_Character_Base.BP_Character_Base_C
// 0x0100 (FullSize[0x07C0] - InheritedSize[0x06C0])
class ABP_Character_Base_C : public AZenithCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             FloatingTextOrigin;                                        // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WaterInteractionComponent_C*             BP_WaterInteractionComponent;                              // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SoundComponent_C*                        BP_SoundComponent;                                         // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundDataComponent*                         SoundData;                                                 // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsVolumeDetectorComponent*             PhysicsVolumeDetector;                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             VisualPivot;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UShakeComponent*                             Shake;                                                     // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHitStopComponent*                           HitStop;                                                   // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCollisionComponent*                         Collision;                                                 // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UColorComponent*                             ColorComponent;                                            // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FXComponent_C*                           BP_FXComponent;                                            // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UIComponent_C*                           BP_3DUIComponent;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            UIWidget;                                                  // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKnockbackComponent*                         Knockback;                                                 // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAbilityComponent*                           Ability;                                                   // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MovementPropertyComponent_C*             BP_GravityComponent;                                       // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              ResetVisualPivotTimeline_Alpha_FA1C9E794CE8FBE5BA10DCA9C0F7F3A7; // 0x0748(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ResetVisualPivotTimeline__Direction_FA1C9E794CE8FBE5BA10DCA9C0F7F3A7; // 0x074C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NKDP[0x3];                                     // 0x074D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ResetVisualPivotTimeline;                                  // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FKnockbackData                              JustGuardedKnockbackData;                                  // 0x0758(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MaxZVelocityForLanding;                                    // 0x07B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     VisualPivotBlendStartLocation;                             // 0x07B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_Base.BP_Character_Base_C");
		return ptr;
	}



	void SimulateLanding(float Size, float Strength);
	bool CanPlayLandingEvents();
	void CanBePossessed(bool* CanBePossessed);
	void ResetVisualPivotTimeline__FinishedFunc();
	void ResetVisualPivotTimeline__UpdateFunc();
	void OnJustGuard(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker);
	void OnLanded(const struct FHitResult& Hit);
	void ResetVisualPivotLocation(float BlendTime);
	void BndEvt__BP_Character_Base_Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature(const struct FKnockbackRuntimeData& KnockbackRuntimeData);
	void ReceiveUnpossessed(class AController* OldController);
	void K2_OnMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	void OnGotJustGuarded(class AAbility* Ability, class AActor* Target);
	void ExecuteUbergraph_BP_Character_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
