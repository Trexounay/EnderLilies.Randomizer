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

// Class Zenith.ReusableActor
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AReusableActor : public AActor
{
public:
	unsigned char                                      UnknownData_UNQN[0x1];                                     // 0x0220(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bDeactivateOnBeginPlay;                                    // 0x0221(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCollisionOnActivate;                                // 0x0222(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D1YM[0x5];                                     // 0x0223(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ReusableActor");
		return ptr;
	}



	void OnDeactivate();
	void OnActivate();
	bool IsActive();
	void Deactivate();
	void Activate();
};

// Class Zenith.Ability
// 0x00A0 (FullSize[0x02C8] - InheritedSize[0x0228])
class AAbility : public AReusableActor
{
public:
	unsigned char                                      UnknownData_KC1M[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              IgnoreIfTargetHasAnyState;                                 // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              MaxExecutionTime;                                          // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWarnLongExecutionTime;                                    // 0x0244(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeJustGuarded;                                         // 0x0245(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeJustDodged;                                          // 0x0246(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeParried;                                             // 0x0247(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ExecuteGotJustGuardedEvents;                               // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExecuteGotJustGuardedEvents;                              // 0x0249(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExecuteGotJustDodgedEvents;                               // 0x024A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExecuteGotParriedEvents;                                  // 0x024B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerParryAbility;                                      // 0x024C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQSZ[0x33];                                    // 0x024D(0x0033) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Invoker;                                                   // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Zenith_EAbilityType                                AbilityType;                                               // 0x0288(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OL5Z[0x3F];                                    // 0x0289(0x003F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Ability");
		return ptr;
	}



	void Tick(float DeltaTime);
	void Stop(Zenith_EAbilityStopReason AbilityStopReason);
	void OnTick(float DeltaTime);
	void OnStop(Zenith_EAbilityStopReason AbilityStopReason);
	void OnLaunch();
	void OnInitialize();
	void Launch(class AActor* Invoker);
	bool IsLaunched();
	void Initialize();
	float GetMaxExecutionTime();
	class AActor* GetInvoker();
	float GetExecutionTime();
	Zenith_EAbilityType GetAbilityType();
	bool ExecuteAbilityEffectsOnTarget(class AActor* Target, const struct FHitInfos& HitInfos);
	bool CanTargetActor(class AActor* TargetActor, Zenith_EFaction FactionFilter, Zenith_EAbilityTargetTypes TargetType);
	bool CanLaunch();
};

// Class Zenith.AbilityComponent
// 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
class UAbilityComponent : public UActorComponent
{
public:
	TArray<class AAbility*>                            RunningAbilities;                                          // 0x00B0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AAbility>>             RunningFireAndForgetAbilities;                             // 0x00C0(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class UClass*, struct FObjectArray>           AvailableAbilities;                                        // 0x00D0(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1XJL[0x8];                                     // 0x0120(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AbilityComponent");
		return ptr;
	}



	void StopAllAbilities(Zenith_EAbilityStopReason AbilityStopReason, bool bStopFireAndForgetAbilities);
	void StopAbility(class AAbility* Ability, Zenith_EAbilityStopReason AbilityStopReason);
	void OnGameMapSwitch();
	void OnDisposeAbility(class AAbility* Ability);
	class AAbility* LaunchAbilityFromDescription(const struct FAbilityDescription& AbilityDescription, const struct FTransform& Offset);
	class AAbility* LaunchAbilityAbsolute(class UClass* AbilityClass, const struct FAbilityParams& AbilityParameters, const struct FTransform& AbilityTransform, bool bFireAndForget);
	class AAbility* LaunchAbility(class UClass* AbilityClass, const struct FAbilityParams& AbilityParameters, const struct FTransform& Offset, SpineExtensionPlugin_ESpineBone SpawnBone, const struct FName& CustomSpawnBone, bool bFollowSpawnBoneRotation, SpineExtensionPlugin_ESpineBone AttachBone, const struct FName& CustomAttachBone, bool bFollowAttachBoneRotation, bool bFireAndForget);
};

// Class Zenith.AbilityContainer
// 0x0078 (FullSize[0x0340] - InheritedSize[0x02C8])
class AAbilityContainer : public AAbility
{
public:
	unsigned char                                      UnknownData_N9CS[0x8];                                     // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAbilityTimeline                            AbilityTimeline;                                           // 0x02D0(0x0060) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bAutoStop;                                                 // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LMQP[0xF];                                     // 0x0331(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AbilityContainer");
		return ptr;
	}



};

// Class Zenith.AbilityEffectComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class UAbilityEffectComponent : public UActorComponent
{
public:
	bool                                               bActive;                                                   // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Zenith_EAbilityEffectQueue                         AbilityEffectQueue;                                        // 0x00B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnlyApplyIfTargetAlive;                                   // 0x00B2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bOnlyApplyOnPawn;                                          // 0x00B3(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6UK8[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              IgnoreIfTargetHasAnyState;                                 // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                               bIgnoreIfTargetGuard;                                      // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIgnoreIfTargetJustGuard;                                  // 0x00C9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIgnoreIfTargetParry;                                      // 0x00CA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Zenith_EAbilityTargetTypes                         TargetType;                                                // 0x00CB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Zenith_EFaction                                    FactionFilter;                                             // 0x00CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_P752[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ApplicationProbability;                                    // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZD34[0x2C];                                    // 0x00D4(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AbilityEffectComponent");
		return ptr;
	}



	void OnFinalizeEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos);
	void OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos);
	void OnAbilityLaunched();
	bool IsEffectActive();
	bool IsComplete(float TotalExecutionTime, float* out_OverTime);
};

// Class Zenith.AbilityEffectDamageComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAbilityEffectDamageComponent : public UAbilityEffectComponent
{
public:
	Zenith_EDamageAttribute                            DamageAttribute;                                           // 0x0100(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2TA2[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AbilityEffectDamageComponent");
		return ptr;
	}



};

// Class Zenith.AbilityEffectTimedComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAbilityEffectTimedComponent : public UAbilityEffectComponent
{
public:
	float                                              AbilityEffectDuration;                                     // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NS2V[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AbilityEffectTimedComponent");
		return ptr;
	}



	float GetAbilityEffectDuration();
};

// Class Zenith.AbilityHitbox
// 0x00B8 (FullSize[0x0380] - InheritedSize[0x02C8])
class AAbilityHitbox : public AAbility
{
public:
	bool                                               bCanHitHitboxes;                                           // 0x02C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanBeHitByHitboxes;                                       // 0x02C9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R2OP[0x6];                                     // 0x02CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AActor*>                              HadContactActors;                                          // 0x02D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class AActor*>                              InContactActors;                                           // 0x02E0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                               bCollideInvoker;                                           // 0x02F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bCollideInvokerFaction;                                    // 0x02F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStopOnPawnCollision;                                      // 0x02F2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStopOnHitboxCollision;                                    // 0x02F3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bStopOnNonPawnCollision;                                   // 0x02F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RZF2[0x3];                                     // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Engine_ECollisionChannel>>      BlockingCollisionChannels;                                 // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                               bIgnoreReentry;                                            // 0x0308(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NP2G[0x3];                                     // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RetriggerContactAfter;                                     // 0x030C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              SkipCollisionIfTargetHasAnyStates;                         // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<class AActor*, struct FHitInfos>              HitInfosForActors;                                         // 0x0320(0x0050) (Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R3GY[0x8];                                     // 0x0370(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             RootSceneComponent;                                        // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AbilityHitbox");
		return ptr;
	}



	void SetCollisionEnabled(bool bEnableCollision);
	void ProcessActorExit(class AActor* ExitActor);
	void ProcessActorEnter(class AActor* EnterActor, const struct FHitInfos& HitInfos);
	void OnPawnExit(class AActor* ExitActor);
	void OnPawnEnter(class AActor* EnterActor);
	void OnNonPawnEnter();
	void OnActorOverlapEnd(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnActorOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Zenith.ZenithBaseSubsystem
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UZenithBaseSubsystem : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithBaseSubsystem");
		return ptr;
	}



};

// Class Zenith.AchievementsSubsystem
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UAchievementsSubsystem : public UZenithBaseSubsystem
{
public:
	unsigned char                                      UnknownData_OV8Y[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AchievementsSubsystem");
		return ptr;
	}



	void UnlockAchievement(Zenith_EZenithAchievement Achievement);
	bool ResetAchievements();
	void OnMainProfileChanged();
	void OnGameDataLoaded();
	void NotifyActionPileLv3();
	void NotifyActionDashLv3();
	bool IsAchievementUnlocked(Zenith_EZenithAchievement Achievement);
	float GetAchievementProgress(Zenith_EZenithAchievement Achievement);
	struct FName GetAchievementID(Zenith_EZenithAchievement Achievement);
	class UDataTable* GetAchievementDataTable();
	bool GetAchievementData(Zenith_EZenithAchievement Achievement, struct FAchievementData* out_AchievementData);
};

// Class Zenith.ActorBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActorBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ActorBPFLibrary");
		return ptr;
	}



	bool STATIC_SetActorLocationToGround(class AActor* Actor, float OffsetFromGround);
	bool STATIC_IsPlayer(class AActor* Actor);
	class USceneComponent* STATIC_GetHomingTargetOfActor(class AActor* Actor);
	class AActor* STATIC_GetDefaultActorFromClass(class UClass* Class);
	struct FVector STATIC_GetActorTopLocation(class AActor* Actor);
	struct FVector STATIC_GetActorLocationForFeetLocation(class AActor* Actor, const struct FVector& FeetLocation);
	float STATIC_GetActorHalfHeight(class AActor* Actor);
	struct FVector STATIC_GetActorFeetLocation(class AActor* Actor);
	void STATIC_FlushPressedKeys(class APlayerController* PlayerController);
	void STATIC_ClampActorToBoxYZ(class AActor* Actor, class UBoxComponent* Box, bool bSweep);
	class UActorComponent* STATIC_AddComponent(class AActor* Actor, class UClass* ComponentType);
};

// Class Zenith.AE_CameraShakeComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAE_CameraShakeComponent : public UAbilityEffectComponent
{
public:
	class UClass*                                      Shake;                                                     // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_CameraShakeComponent");
		return ptr;
	}



};

// Class Zenith.AE_DamageAbsoluteComponent
// 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
class UAE_DamageAbsoluteComponent : public UAbilityEffectDamageComponent
{
public:
	int                                                Damage;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2WOG[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_DamageAbsoluteComponent");
		return ptr;
	}



};

// Class Zenith.AE_DamageComponent
// 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
class UAE_DamageComponent : public UAbilityEffectDamageComponent
{
public:
	Zenith_EDamageEffectType                           DamageEffectType;                                          // 0x0108(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1ENM[0x3];                                     // 0x0108(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                AbsoluteDamage;                                            // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TargetPercentageDamage;                                    // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J3T4[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_DamageComponent");
		return ptr;
	}



};

// Class Zenith.AE_ForceFeedbackComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAE_ForceFeedbackComponent : public UAbilityEffectComponent
{
public:
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                       // 0x0100(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_ForceFeedbackComponent");
		return ptr;
	}



};

// Class Zenith.AE_HealAbsoluteComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAE_HealAbsoluteComponent : public UAbilityEffectComponent
{
public:
	int                                                Heal;                                                      // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ETL5[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_HealAbsoluteComponent");
		return ptr;
	}



};

// Class Zenith.AE_HitStopComponent
// 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
class UAE_HitStopComponent : public UAbilityEffectTimedComponent
{
public:
	bool                                               ExecuteOnInvoker;                                          // 0x0108(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               ExecuteOnTarget;                                           // 0x0109(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_090V[0x6];                                     // 0x010A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_HitStopComponent");
		return ptr;
	}



};

// Class Zenith.AE_KnockbackComponent
// 0x0060 (FullSize[0x0160] - InheritedSize[0x0100])
class UAE_KnockbackComponent : public UAbilityEffectComponent
{
public:
	bool                                               bBypassStaminaCheck;                                       // 0x0100(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GVMI[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKnockbackData                              KnockbackData;                                             // 0x0108(0x0058) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_KnockbackComponent");
		return ptr;
	}



	struct FKnockbackData GetKnockbackData();
};

// Class Zenith.AE_RestoreMPToInvokerComponent
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAE_RestoreMPToInvokerComponent : public UAbilityEffectComponent
{
public:
	int                                                MpToRestore;                                               // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HQUL[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_RestoreMPToInvokerComponent");
		return ptr;
	}



};

// Class Zenith.AE_ShakeTargetComponent
// 0x0060 (FullSize[0x0160] - InheritedSize[0x0100])
class UAE_ShakeTargetComponent : public UAbilityEffectComponent
{
public:
	struct FShakeData                                  GroundShakeData;                                           // 0x0100(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FShakeData                                  AirShakeData;                                              // 0x0130(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_ShakeTargetComponent");
		return ptr;
	}



};

// Class Zenith.AE_StaminaDamageAbsolute
// 0x0110 (FullSize[0x0210] - InheritedSize[0x0100])
class UAE_StaminaDamageAbsolute : public UAbilityEffectComponent
{
public:
	Zenith_EStaminaDamageEffectType                    DamageEffectType;                                          // 0x0100(0x0001) ELEMENT_SIZE_MISMATCH (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EH66[0x3];                                     // 0x0100(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Damage;                                                    // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              TargetPercentDamage;                                       // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9Y2E[0x104];                                   // 0x010C(0x0104) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_StaminaDamageAbsolute");
		return ptr;
	}



};

// Class Zenith.AE_StunDamageAbsolute
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAE_StunDamageAbsolute : public UAbilityEffectComponent
{
public:
	int                                                Damage;                                                    // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MGDS[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AE_StunDamageAbsolute");
		return ptr;
	}



};

// Class Zenith.AITask_CustomMoveTo
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class UAITask_CustomMoveTo : public UAITask_MoveTo
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AITask_CustomMoveTo");
		return ptr;
	}



	class UAITask_MoveTo* STATIC_CustomAIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
};

// Class Zenith.AnimBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAnimBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AnimBPFLibrary");
		return ptr;
	}



	void STATIC_GetAnimData(class AZenithCharacter* Character, bool* out_bRunning, float* out_XYVelocityRatio);
};

// Class Zenith.AutoClimbComponent
// 0x00A8 (FullSize[0x0158] - InheritedSize[0x00B0])
class UAutoClimbComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnAutoClimb;                                               // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              AllowedMaxZVelocity;                                       // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAngleForClimb;                                          // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   BoxExtentsXY;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ForwardOffset;                                             // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TraceSphereRadius;                                         // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinHeightForAutoClimbHigh;                                 // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxHeightForAutoClimbHigh;                                 // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinHeightForAutoClimbMiddle;                               // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxHeightForAutoClimbMiddle;                               // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinHeightForAutoClimbLow;                                  // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxHeightForAutoClimbLow;                                  // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DistanceAboveHeadToCheck;                                  // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5W9B[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              IgnoreAutoClimbStates;                                     // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FVXZ[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               BoxComponent;                                              // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AZenithCharacter*                            CharacterOwner;                                            // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P4YD[0x30];                                    // 0x0128(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AutoClimbComponent");
		return ptr;
	}



	void OnStartCommand(class UCommandAction* CommandAction);
	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void IgnoreActorUntilNextCommand(class AActor* Actor);
	struct FVector GetLastTargetLocation();
	float GetForwardOffset();
};

// Class Zenith.AutoCollectComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UAutoCollectComponent : public UActorComponent
{
public:
	float                                              Radius;                                                    // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G3RI[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            SphereComponent;                                           // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AutoCollectComponent");
		return ptr;
	}



	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Zenith.AutoMoveComponent
// 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
class UAutoMoveComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData_I36D[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     InitialVelocity;                                           // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     Acceleration;                                              // 0x0104(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSpeed;                                                  // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRotationFollowsVelocity;                                  // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G6X0[0x3];                                     // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GravityFactor;                                             // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0P5E[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AutoMoveComponent");
		return ptr;
	}



	void SetVelocity(const struct FVector& NewVelocity);
};

// Class Zenith.AutoRotateComponent
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UAutoRotateComponent : public UActorComponent
{
public:
	struct FRotator                                    RotationSpeed;                                             // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q4AS[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.AutoRotateComponent");
		return ptr;
	}



};

// Class Zenith.BaseInventory
// 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
class UBaseInventory : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnTryAddItem;                                              // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemAdded;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnItemRemoved;                                             // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                ItemLimit;                                                 // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAllowDuplicates;                                          // 0x005C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4XU5[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FInventoryBaseItemData>              Items;                                                     // 0x0060(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AB76[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, class UGetItemTrigger*>        InstanceForTriggerClasses;                                 // 0x0080(0x0050) (Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BaseInventory");
		return ptr;
	}



	void RemoveItemByRowName(const struct FName& ItemRowName);
	void RemoveItem(const struct FDataTableRowHandle& ItemData);
	bool IsFull();
	bool HasItemByRowName(const struct FName& ItemRowName);
	bool HasItem(const struct FDataTableRowHandle& ItemData);
	class UDataTable* GetValidDataTable();
	int GetItemLimit();
	bool GetItemHandleAtIndex(int Index, struct FDataTableRowHandle* out_ItemHandle);
	int GetItemCount();
	bool GetItemAtIndex(int Index, struct FInventoryBaseItemData* out_Item);
	TArray<struct FInventoryBaseItemData> GetAllItems();
	void Clear();
	bool AllowDuplicate();
	bool AddItem(const struct FDataTableRowHandle& ItemData);
};

// Class Zenith.BattleColorComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UBattleColorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_O2W4[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 LoopCurve;                                                 // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 FadeInCurve;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCurveFloat*                                 FadeOutCurve;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       MaterialParameterName;                                     // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DREY[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BattleColorComponent");
		return ptr;
	}



	void SetBattleColorEnabled(bool bEnable);
	void SetAlpha(float NewAlpha);
};

// Class Zenith.BitshiftBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBitshiftBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BitshiftBPFLibrary");
		return ptr;
	}



	int STATIC_BitshiftRight(int Value, int bitshift);
	int STATIC_BitshiftLeft(int Value, int bitshift);
};

// Class Zenith.BlackboardBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBlackboardBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BlackboardBPFLibrary");
		return ptr;
	}



	struct FVector STATIC_GetLocationFromBlackboardKey(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};

// Class Zenith.BossRushComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UBossRushComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_TOB1[0x28];                                    // 0x00B0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BossRushComponent");
		return ptr;
	}



	void UnbindEvents();
	int TryAddNewRecord(const struct FBossRushRecordData& NewRecordData);
	void StartBossRush();
	void ResetRecords();
	void OnStartBossRush();
	void OnPlayerRespawn();
	void OnMapSwitch();
	void OnEndBossRush();
	void OnClearBossRush();
	bool IsBossRushActive();
	struct FBossRushRecordData GetRecordData(int RecordIndex);
	float GetBossRushTime();
	void EndBossRush();
	void ClearBossRush();
	bool CanUpdateTime();
	void BindEvents();
};

// Class Zenith.Box2DBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBox2DBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Box2DBPFLibrary");
		return ptr;
	}



	bool STATIC_IsPointInside(const struct FBox2D& Box, const struct FVector2D& PointToCheck);
	bool STATIC_IsBoxInside(const struct FBox2D& Box, const struct FVector2D& BoxToCheck);
	struct FVector STATIC_GetClosestPointOnSurfaceYZ(class UBoxComponent* Box, const struct FVector& Point, Zenith_EBoxSide* BoxSide);
	struct FVector2D STATIC_GetClosestPointOnSurface(const struct FBox2D& Box, const struct FVector2D& Point, Zenith_EBoxSide* BoxSide);
	struct FVector2D STATIC_ClampPointInside(const struct FBox2D& Box, const struct FVector2D& Point);
};

// Class Zenith.Breakable
// 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
class ABreakable : public AActor
{
public:
	class USceneComponent*                             SceneRootComponent;                                        // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHPComponent*                                HPComponent;                                               // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClearableComponent*                         ClearableComponent;                                        // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bMarkClearedOnDeath;                                       // 0x0238(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IHMY[0x7];                                     // 0x0239(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Breakable");
		return ptr;
	}



	void OnDeath(class AActor* From);
	void OnBreak();
};

// Class Zenith.BTDecorator_HasState
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UBTDecorator_HasState : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      TargetActor;                                               // 0x0068(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      State;                                                     // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BTDecorator_HasState");
		return ptr;
	}



};

// Class Zenith.BTDecorator_SetStates
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_SetStates : public UBTDecorator
{
public:
	TArray<class UClass*>                              States;                                                    // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BTDecorator_SetStates");
		return ptr;
	}



};

// Class Zenith.BTDecorator_TimeLimitRandom
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTDecorator_TimeLimitRandom : public UBTDecorator_TimeLimit
{
public:
	float                                              TimeLimitMin;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OM9[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BTDecorator_TimeLimitRandom");
		return ptr;
	}



};

// Class Zenith.BTDecorator_UnsetStates
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UBTDecorator_UnsetStates : public UBTDecorator
{
public:
	TArray<class UClass*>                              States;                                                    // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bCheckIfPresentBeforeUnset;                                // 0x0078(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JBD9[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.BTDecorator_UnsetStates");
		return ptr;
	}



};

// Class Zenith.CameraClampVolume
// 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
class ACameraClampVolume : public AActor
{
public:
	bool                                               bActive;                                                   // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EFLV[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneRootComponent;                                        // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                               ActivationBoxComponent;                                    // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                               ClampComponent;                                            // 0x0238(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                               Blocker_Up;                                                // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                               Blocker_Down;                                              // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                               Blocker_Left;                                              // 0x0250(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBoxComponent*                               Blocker_Right;                                             // 0x0258(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                Priority;                                                  // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1BUC[0x14];                                    // 0x0264(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CameraClampVolume");
		return ptr;
	}



	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	int GetPriority();
	struct FVector GetMinBorder();
	struct FVector GetMaxBorder();
};

// Class Zenith.ChallengeSettings
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UChallengeSettings : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPlayerCantHealChanged;                                   // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMaxPlayerLevelChanged;                                   // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5RK4[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FChallengeSettingsData                      ChallengeSettingsData;                                     // 0x0060(0x0018) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ChallengeSettings");
		return ptr;
	}



	bool SetPlayerOneShot(bool bNewPlayerOneShot);
	bool SetPlayerCantHeal(bool bPlayerCantHeal);
	int SetMaxSpiritLevel(int NewMaxSpiritLevel);
	int SetMaxPlayerLevel(int NewMaxPlayerLevel);
	float SetEnemyMaxHPFactor(float NewMaxHPFactor);
	float SetEnemyAttackFactor(float NewAttackFactor);
	float SetContactDamageFactor(float NewContactDamageFactor);
	void Reset();
	bool IsUnlocked(class UObject* WorldContextObj);
	bool HasAnyCustomSettings();
	bool GetPlayerOneShot();
	bool GetPlayerCantHeal();
	int GetMaxSpiritLevel();
	int GetMaxPlayerLevel();
	float GetEnemyMaxHPFactor();
	float GetEnemyAttackFactor();
	bool GetDefaultPlayerOneShot();
	bool GetDefaultPlayerCantHeal();
	int GetDefaultMaxSpiritLevel();
	int GetDefaultMaxPlayerLevel();
	float GetDefaultEnemyMaxHPFactor();
	float GetDefaultEnemyAttackFactor();
	float GetDefaultContactDamageFactor();
	float GetContactDamageFactor();
};

// Class Zenith.ClearableComponent
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UClearableComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnClearedStatusChecked;                                    // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bIsUnique;                                                 // 0x00C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCheckPreviousRuns;                                        // 0x00C1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIsUsedForMapCompletion;                                   // 0x00C2(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bClearStatusChecked;                                       // 0x00C3(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCleared;                                                  // 0x00C4(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B4WD[0x13];                                    // 0x00C5(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ClearableComponent");
		return ptr;
	}



	void UnsetUniqueFlag();
	void UnsetMapCompletionFlag();
	void OnGameMapReady();
	void OnClearedObjectManagerReady();
	void MarkCleared();
	bool IsUsedForMapCompletion();
	bool IsUnique();
	bool IsClearStatusChecked();
	bool IsCleared();
	bool CheckPreviousRuns();
};

// Class Zenith.ClearedObjectManagerComponent
// 0x0208 (FullSize[0x02B8] - InheritedSize[0x00B0])
class UClearedObjectManagerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBecameReady;                                             // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameMapCompletionUpdated;                                // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FNameSet>                ClearedActors;                                             // 0x00D0(0x0050) (Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FNameSet>                ClearedSavedActors;                                        // 0x0120(0x0050) (Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FNameTransformMap>       GenericSavedTransforms;                                    // 0x0170(0x0050) (Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FNameSet>                MapCompletionActors;                                       // 0x01C0(0x0050) (Edit, EditConst, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FNameSet>                PreviousRunsClearedSavedActors;                            // 0x0210(0x0050) (Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FNameTransformMap>       PreviousRunsGenericSavedTransforms;                        // 0x0260(0x0050) (Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RY64[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ClearedObjectManagerComponent");
		return ptr;
	}



	void ResetClearedObjects();
	bool IsReady();
	float GetGameMapCompletionPercentage(const struct FName& GameMapID, const struct FGameMapData& GameMapData);
	float GetGameMapCompletionActorCount(const struct FName& GameMapID);
};

// Class Zenith.Collectable
// 0x0018 (FullSize[0x0240] - InheritedSize[0x0228])
class ACollectable : public AReusableActor
{
public:
	bool                                               bAutoCollectOnActivate;                                    // 0x0228(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FU5R[0x17];                                    // 0x0229(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Collectable");
		return ptr;
	}



	void OnGrantDrop();
	void OnGameMapSwitch();
	void OnCollect(class APlayerController* PlayerController);
	bool IsDropGranted();
	void GrantDrop();
	int GetExperienceValue();
	class APlayerController* GetCollectingPlayerController();
	void Collect(class APlayerController* PlayerController);
};

// Class Zenith.CollisionComponent
// 0x0108 (FullSize[0x01B8] - InheritedSize[0x00B0])
class UCollisionComponent : public UActorComponent
{
public:
	TArray<struct FComponentReference>                 HurtboxReferences;                                         // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FComponentReference>                 HitboxReferences;                                          // 0x00C0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                               bShouldProcessOverlapContacts;                             // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9VRL[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ContactDamageSkipStates;                                   // 0x00D8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                               bIgnoreOneWayPlatform;                                     // 0x00E8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIgnoreWorldDynamic;                                       // 0x00E9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCanBeJustGuarded;                                         // 0x00EA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bExecuteGotJustGuardedEvents;                              // 0x00EB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCanBeParried;                                             // 0x00EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bExecuteParriedEvents;                                     // 0x00ED(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_27XX[0x2];                                     // 0x00EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPrimitiveComponent*>                 Hurtboxes;                                                 // 0x00F0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UPrimitiveComponent*>                 Hitboxes;                                                  // 0x0100(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                         RootPrimitiveComponent;                                    // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCharacterMovementComponent*                 CharacterMovementComponent;                                // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFactionComponent*                           FactionComponent;                                          // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class AZenithCharacter*, int>                 OverlappingCharacters2;                                    // 0x0130(0x0050) (Transient, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnOverlapEnemyPawn;                                        // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnContactDamage;                                           // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1CR2[0x18];                                    // 0x01A0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CollisionComponent");
		return ptr;
	}



	void SetCollisionResponseToPawnChannels(TEnumAsByte<Engine_ECollisionResponse> CollisionResponse, bool bAsDefault);
	void SetCollisionResponseToChannels(TEnumAsByte<Engine_ECollisionResponse> CollisionResponseToAllChannels, TEnumAsByte<Engine_ECollisionResponse> CollisionResponseToWorldStaticChannel, bool bAsDefault);
	void SetCollisionProfile(const struct FName& NewCollisionProfileName);
	void RevertCollisionResponseToPawnChannels();
	void OnStateRemoved();
	void OnStateAdded();
	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Zenith.ColorComponent
// 0x0070 (FullSize[0x0120] - InheritedSize[0x00B0])
class UColorComponent : public UActorComponent
{
public:
	TArray<class UMeshComponent*>                      MeshComponents;                                            // 0x00B0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                          // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class USpineSkeletonRendererComponent*             SpineRenderer;                                             // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y6ML[0x48];                                    // 0x00D8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ColorComponent");
		return ptr;
	}



	void SetDefaultColor(const struct FLinearColor& Color);
	void SetColor(const struct FLinearColor& Color, float LerpTime);
	struct FLinearColor GetCurrentColor();
	void ClearColor(float LerpTime);
};

// Class Zenith.Command
// 0x0080 (FullSize[0x00A8] - InheritedSize[0x0028])
class UCommand : public UObject
{
public:
	int                                                CommandID;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandResult                              CurrentResult;                                             // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVAC[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TTL;                                                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveIfNotStartable;                                     // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7YQ8[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              NecessaryStates;                                           // 0x0038(0x0010) (ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ForbiddenStates;                                           // 0x0048(0x0010) (ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<Zenith_EAptitudeType>                       NecessaryAptitudes;                                        // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<Zenith_EAptitudeType>                       ForbiddenAptitudes;                                        // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_EMovementMode>>          ValidMovementModes;                                        // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JVOI[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCommandAction*                              CommandAction;                                             // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GroupID;                                                   // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FrameID;                                                   // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ADKV[0x8];                                     // 0x00A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Command");
		return ptr;
	}



};

// Class Zenith.CommandAction
// 0x01E0 (FullSize[0x0208] - InheritedSize[0x0028])
class UCommandAction : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnCommandActionStart;                                      // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCommandActionEnd;                                        // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCommandActionUseCountRestored;                           // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FStateTimeline                              StateTimeline;                                             // 0x0058(0x0020) (Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5E3A[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAbilityTimeline                            AbilityTimeline;                                           // 0x0080(0x0060) (Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FMoveTimeline                               MoveTimeline;                                              // 0x00E0(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FFXTimeline                                 FXTimeline;                                                // 0x0120(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FSoundTimeline                              SoundTimeline;                                             // 0x0148(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GAAZ[0x2C];                                    // 0x0168(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AllowOverrideFromCommands;                                 // 0x0194(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bConsumeMP;                                                // 0x0198(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8IC0[0x3];                                     // 0x0199(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RecastTime;                                                // 0x019C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAllowRecastTimeCut;                                       // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Q0B8[0x3];                                     // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxAirborneExecutionCount;                                 // 0x01A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                              ResetAirborneExecutionCountActions;                        // 0x01A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class APawn*                                       Pawn;                                                      // 0x01B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     CachedWorldObjectContext;                                  // 0x01C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UHitStopComponent*                           CachedHitStopComponent;                                    // 0x01C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMPComponent*                                CachedMPComponent;                                         // 0x01D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             CachedStateComponent;                                      // 0x01D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineAnimationComponent*                    CachedAnimComponent;                                       // 0x01E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCharacterMovementComponent*                 CachedMovementComponent;                                   // 0x01E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZB6U[0x18];                                    // 0x01F0(0x0018) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandAction");
		return ptr;
	}



	void SubRecastTimeCutPercentage(float RecastTimeCutPercentageToSub);
	void SubMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToSub);
	void StopMovementTimeline();
	void StopActionAnimation(bool bOverrideBlend, float Blend);
	void StartCommandAction();
	void SetPawn(class APawn* NewPawnSubject);
	void SetMovementMode(TEnumAsByte<Engine_EMovementMode> MovementMode);
	void SetInvokedByInputTypes(Zenith_EDirectionInputTypes DirectionInputType, Zenith_ECommandInputTypes CommandInputType);
	void SetInputSnapshot(const struct FInputSnapshot& NewInputSnapshot);
	void SetAbilityTimelineGlobalOffset(const struct FTransform& NewGlobalOffset);
	Zenith_ECommandResult SampleCommandAction(float DeltaTime);
	void RestoreUseCountByRatio(float RestoreValue);
	void RestoreCooldownByRatio(float RestoreValue);
	void ResetAirborneExecutionCount();
	void Reset();
	void RequestEnd(bool bEndAsFailure);
	void PlayActionAnimations(TArray<struct FSpineAnimationDefinition> Animations);
	void PlayActionAnimation(const struct FSpineAnimationDefinition& Animation);
	void OverrideByCommandAction(class UCommandAction* CommandAction);
	void OnWallgrabStarted();
	void OnWallgrabStart();
	void OnStartCommandAction();
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnRemovedFromBuffer();
	void OnOverrideByCommandAction(class UCommandAction* CommandAction);
	void OnMovementModeUpdated(TEnumAsByte<Engine_EMovementMode> NewMovementMode, TEnumAsByte<Engine_EMovementMode> PrevMovementMode);
	void OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<Engine_EMovementMode> PreMovementMode, unsigned char PreviousCustomMode);
	void OnLanded();
	void OnInitialize();
	void OnHookStarted();
	void OnHookStart();
	void OnFall();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void OnCommandActionStarted(class UCommandAction* CommandAction);
	void OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject);
	void OnChangeInvokedByInputType();
	bool IsSwimming();
	bool IsPlayingActionAnimation();
	bool IsOverridenByActionType(Zenith_ECommandInputTypes commandType);
	bool IsInputTypePressed(Zenith_ECommandInputTypes InputType);
	bool IsGrounded();
	bool IsFalling();
	bool IsAbilityTimelineCompleted(bool bCheckAbilities);
	void Initialize(class UObject* WorldObjectContext);
	class UStateComponent* GetStateComponent();
	float GetRecastTime();
	class APawn* GetPawn();
	int GetMPCost();
	class UMPComponent* GetMPComponent();
	TEnumAsByte<Engine_EMovementMode> GetMovementMode();
	struct FVector GetMoveInput();
	Zenith_ECommandInputTypes GetInvokedByInputType();
	Zenith_EDirectionInputTypes GetInvokedByDirectionInputType();
	struct FVector2D GetInputVector();
	struct FInputSnapshot GetInputSnapshot();
	class UHitStopComponent* GetHitStopComponent();
	float GetExecutionTime();
	Zenith_EDirectionInputTypes GetDirectionInputType();
	float GetCooldownTime();
	class UCharacterMovementComponent* GetCharacterMovementComponent();
	class USpineAnimationComponent* GetAnimationComponent();
	void FullyRestore();
	void EndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	bool ContainsConsumeMPCommand();
	bool CanUseCommandInput(Zenith_ECommandInputTypes CommandInputType);
	bool CanStartCommandAction();
	bool CanMove();
	bool AllowRecastTimeCut();
	void AddRecastTimeCutPercentage(float RecastTimeCutPercentageToAdd);
	void AddMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToAdd);
};

// Class Zenith.CommandActionGameplay
// 0x00D8 (FullSize[0x02E0] - InheritedSize[0x0208])
class UCommandActionGameplay : public UCommandAction
{
public:
	TArray<struct FSpineAnimationDefinition>           Animations;                                                // 0x0208(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bOverrideStopAnimationBlend;                               // 0x0218(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BXE3[0x3];                                     // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StopAnimationBlend;                                        // 0x021C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveInputToForceEnd;                                       // 0x0220(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinInputForFacing;                                         // 0x0224(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetVelocity;                                            // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanWalkOffLedges;                                         // 0x0229(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6HJF[0x6];                                     // 0x022A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<Engine_ECollisionChannel>, TEnumAsByte<Engine_ECollisionResponse>> CollisionResponseOverrides;                                // 0x0230(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91CJ[0x60];                                    // 0x0280(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionGameplay");
		return ptr;
	}



};

// Class Zenith.CommandActionComboEntry
// 0x0020 (FullSize[0x0300] - InheritedSize[0x02E0])
class UCommandActionComboEntry : public UCommandActionGameplay
{
public:
	TArray<struct FNextComboAction>                    NextCombos;                                                // 0x02E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	class UCommandActionCombo*                         OwnerCommandActionCombo;                                   // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YAED[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionComboEntry");
		return ptr;
	}



	TArray<class UClass*> GetSubCommands();
	class UCommandActionCombo* GetOwnerCommandActionCombo();
};

// Class Zenith.CommandActionProxy
// 0x0008 (FullSize[0x0210] - InheritedSize[0x0208])
class UCommandActionProxy : public UCommandAction
{
public:
	class UCommandAction*                              CurrentCommandAction;                                      // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionProxy");
		return ptr;
	}



};

// Class Zenith.CommandActionCombo
// 0x0090 (FullSize[0x02A0] - InheritedSize[0x0210])
class UCommandActionCombo : public UCommandActionProxy
{
public:
	TArray<struct FNextComboAction>                    NextCombos;                                                // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                ResetComboOnInputs;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4QYI[0x4];                                     // 0x0224(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, class UCommandActionComboEntry*> CommandActionInstances;                                    // 0x0228(0x0050) (Transient, Protected, NativeAccessSpecifierProtected)
	class UCommandActionComboEntry*                    CurrDefinition;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommandActionComboEntry*                    NextDefinition;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommandActionComboEntry*                    OverrideNextDefinition;                                    // 0x0288(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UNV6[0x10];                                    // 0x0290(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionCombo");
		return ptr;
	}



	void SetNextComboEntry(class UClass* NextComboEntry, bool bExecuteAutomatically);
	void ResetCombo();
	void OnResetCombo();
	void OnPawnStartCommand(class UCommandAction* Command);
	void OnPawnKnockback(const struct FKnockbackRuntimeData& KnockbackRuntimeData);
	void OnPawnEndCommand(class UCommandAction* Command, Zenith_ECommandRemoveTypes RemoveType);
};

// Class Zenith.CommandActionComboSummonEntry
// 0x0040 (FullSize[0x0340] - InheritedSize[0x0300])
class UCommandActionComboSummonEntry : public UCommandActionComboEntry
{
public:
	struct FConditionedCommandList                     SpiritCommandList;                                         // 0x0300(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FCommandActionSettingsSummon                SummonSettings;                                            // 0x0310(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	bool                                               bAttachSpiritToSummoner;                                   // 0x0328(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LP30[0x17];                                    // 0x0329(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionComboSummonEntry");
		return ptr;
	}



};

// Class Zenith.CommandActionComboSummon
// 0x0060 (FullSize[0x0300] - InheritedSize[0x02A0])
class UCommandActionComboSummon : public UCommandActionCombo
{
public:
	unsigned char                                      UnknownData_COZD[0x8];                                     // 0x02A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SpiritClass;                                               // 0x02A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCommandActionSettingsSummonCastLimit       SettingsSummonCastLimit;                                   // 0x02B0(0x0048) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FSCT[0x8];                                     // 0x02F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionComboSummon");
		return ptr;
	}



};

// Class Zenith.CommandActionSpirit
// 0x0040 (FullSize[0x0320] - InheritedSize[0x02E0])
class UCommandActionSpirit : public UCommandActionGameplay
{
public:
	Zenith_ESpiritDirectionStyle                       SpiritDirectionStyle;                                      // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ULJF[0x3];                                     // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DirectionDashSpeed;                                        // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              DashDistance;                                              // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableCollision;                                          // 0x02EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Engine_ECollisionResponse>             EnemyPawnCollisionResponse;                                // 0x02ED(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_70SP[0x2];                                     // 0x02EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpineAnimationDefinition>           DirectionDashAnimations;                                   // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2ZET[0x20];                                    // 0x0300(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionSpirit");
		return ptr;
	}



};

// Class Zenith.CommandActionSummon
// 0x00A0 (FullSize[0x0380] - InheritedSize[0x02E0])
class UCommandActionSummon : public UCommandActionGameplay
{
public:
	unsigned char                                      UnknownData_CMQF[0x18];                                    // 0x02E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SpiritClass;                                               // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FConditionedCommandList                     SpiritCommandList;                                         // 0x0300(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                               bAttachSpiritToSummoner;                                   // 0x0310(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OCGF[0x3];                                     // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCommandActionSettingsSummon                SettingsSummon;                                            // 0x0314(0x0018) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GLMZ[0x4];                                     // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCommandActionSettingsSummonCastLimit       SettingsSummonCastLimit;                                   // 0x0330(0x0048) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_59KO[0x8];                                     // 0x0378(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionSummon");
		return ptr;
	}



	class AZenithSpirit* GetSpirit();
};

// Class Zenith.CommandActionSummonInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommandActionSummonInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionSummonInterface");
		return ptr;
	}



	class UClass* GetSpiritClass();
};

// Class Zenith.CommandActionSummonSettingsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommandActionSummonSettingsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionSummonSettingsInterface");
		return ptr;
	}



};

// Class Zenith.CommandActionSummonSettingsCastLimitInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCommandActionSummonSettingsCastLimitInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandActionSummonSettingsCastLimitInterface");
		return ptr;
	}



	bool ReachedCastLimit();
	float GetRemainingCastValue();
	Zenith_ECommandSummonLimitType GetCastLimitType();
	void BindOnCastLimitReached(const struct FScriptDelegate& OnCastLimitReached);
	void BindOnCastLimitChanged(const struct FScriptDelegate& OnCastLimitChanged);
};

// Class Zenith.CommandQueueComponent
// 0x0130 (FullSize[0x01E0] - InheritedSize[0x00B0])
class UCommandQueueComponent : public UActorComponent
{
public:
	class APawn*                                       Pawn;                                                      // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UClass*, class UCommandAction*>         CommandsForClasses;                                        // 0x00B8(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TArray<class UCommand*>                            AvailableCommands;                                         // 0x0108(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)
	TArray<class UCommand*>                            CommandQueue;                                              // 0x0118(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCharacterMovementComponent*                 MovementComponent;                                         // 0x0130(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UAUY[0x18];                                    // 0x0138(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInputSnapshot                              CurrentInputSnapshot;                                      // 0x0150(0x0028) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputSnapshot                              LastInputSnapshot;                                         // 0x0178(0x0028) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStartCommand;                                            // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndCommand;                                              // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnClearCommands;                                           // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPostUpdateCommands;                                      // 0x01D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandQueueComponent");
		return ptr;
	}



	void UpdateCommands(float DeltaTime);
	int TryAddCommandsFromSettings(const struct FInputSnapshot& InputSnapshot, const struct FCommandSettings& CommandSettings, int FrameID);
	int TryAddCommandsForInputs(Zenith_EDirectionInputTypes DirectionInputType, Zenith_ECommandInputTypes CommandInputType, class UCommandSet* CommandSet);
	int TryAddCommands(const struct FInputSnapshot& InputSnapshot, class UCommandSet* CommandSet);
	int TryAddCommandForInputsFromSettings(Zenith_EDirectionInputTypes DirectionInputType, Zenith_ECommandInputTypes CommandInputType, const struct FCommandSettings& CommandSettings, int FrameID);
	int TryAddCommandForInputs(Zenith_EDirectionInputTypes DirectionInputType, Zenith_ECommandInputTypes CommandInputType, class UCommandSet* CommandSet);
	void SubRecastTimeCutPercentage(float RecastTimeCutPercentageToSub);
	void SubMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToSub);
	void RestoreUseCountByRatio(float RestoreValue);
	void RestoreCooldownByRatio(float RestoreValue);
	void PreloadCommandAction(class UClass* CommandActionType);
	bool IsCommandSettingsStartable(const struct FCommandSettings& CommandSettings, Zenith_EDirectionInputTypes DirectionInputType, Zenith_ECommandInputTypes CommandInputType);
	bool HasCommandOfType(class UClass* CommandActionClass);
	bool HasCommandForCommandID(int CommandID);
	bool HasCommand();
	class UCommandAction* GetOrCreateCommandAction(class UClass* CommandActionType);
	int GetNextFrameID();
	Zenith_ECommandResult GetCurrentResultForCommandID(int CommandID);
	class UCommand* GetCurrentCommand();
	void FullyRestore();
	void ClearQueuedCommandBuffer();
	void ClearCommandBuffer();
	void AddRecastTimeCutPercentage(float RecastTimeCutPercentageToAdd);
	int AddNewImmediateCommand(Zenith_EDirectionInputTypes DirectionInputType, Zenith_ECommandInputTypes CommandInputType, class UClass* CommandActionClass);
	void AddNewCommandGroup(Zenith_EDirectionInputTypes DirectionInputType, Zenith_ECommandInputTypes CommandInputType, TArray<class UClass*> CommandActionClasses, float BufferTTL);
	int AddNewCommand(Zenith_EDirectionInputTypes DirectionInputType, Zenith_ECommandInputTypes CommandInputType, const struct FCommandSettings& CommandSettings, int FrameID, bool AddToFront);
	void AddMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToAdd);
};

// Class Zenith.CommandSettingsData
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UCommandSettingsData : public UDataAsset
{
public:
	struct FCommandSettings                            CommandSettings;                                           // 0x0030(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandSettingsData");
		return ptr;
	}



};

// Class Zenith.CommandSet
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UCommandSet : public UDataAsset
{
public:
	TArray<class UCommandSettingsData*>                CommandDataList;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FCommandSettings>                    Commands;                                                  // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WZQG[0x18];                                    // 0x0050(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CommandSet");
		return ptr;
	}



	void RemoveCommand(int RuntimeID);
	int RemoveAllCommandsForInputType(Zenith_ECommandInputTypes InputType);
	int AddCommand(const struct FCommandSettings& CommandSettings);
};

// Class Zenith.ComparisonCondition
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UComparisonCondition : public UBTDecorator
{
public:
	Zenith_EConditionType                              ConditionType;                                             // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LP34[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ComparisonCondition");
		return ptr;
	}



	float GetValueToCompare(class AAIController* AIController, class APawn* Pawn);
	float GetComparingValue();
};

// Class Zenith.ConstantForceComponent
// 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
class UConstantForceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4HTR[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FComponentReference                         TargetComponentReference;                                  // 0x00B8(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector                                     ConstantForce;                                             // 0x00E0(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0DXY[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ConstantForceComponent");
		return ptr;
	}



	struct FVector GetConstantForce();
};

// Class Zenith.ConversationAsset
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UConversationAsset : public UDataAsset
{
public:
	TArray<struct FConditionedConversationData>        Conversations;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ConversationAsset");
		return ptr;
	}



};

// Class Zenith.CounterAttackComponent
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class UCounterAttackComponent : public UActorComponent
{
public:
	class UClass*                                      CounterUIClass;                                            // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanUseCounterAttack;                                      // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDTE[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeDilatationTarget;                                      // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeDilatationDuration;                                    // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0VHK[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStateComponent*                             StateComponent;                                            // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommandQueueComponent*                      CommandComponent;                                          // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CTBM[0x30];                                    // 0x00D8(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CounterAttackComponent");
		return ptr;
	}



	void OnJustGuard(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker);
	void OnExecuteCommandWhileCounter(class UCommandAction* CommandAction);
};

// Class Zenith.CustomPhysicsVolume
// 0x0020 (FullSize[0x0240] - InheritedSize[0x0220])
class ACustomPhysicsVolume : public AActor
{
public:
	TEnumAsByte<Engine_EMovementMode>                  MovementMode;                                              // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Zenith_ECustomMovementMode                         CustomMovementMode;                                        // 0x0221(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_5RKJ[0x6];                                     // 0x0222(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneRootComponent;                                        // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               BoxComponent;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Priority;                                                  // 0x0238(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bPhysicsVolumeEnabled;                                     // 0x023C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OHH1[0x3];                                     // 0x023D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CustomPhysicsVolume");
		return ptr;
	}



	bool IsPhysicsVolumeEnabled();
	int GetPriority();
};

// Class Zenith.CustomPhysicsVolumeWater
// 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
class ACustomPhysicsVolumeWater : public ACustomPhysicsVolume
{
public:
	class UFluidMeshComponent*                         FluidMeshComponent;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              FluidFriction;                                             // 0x0248(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GUJB[0x4];                                     // 0x024C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CustomPhysicsVolumeWater");
		return ptr;
	}



	bool IsSimulatingWaterLine();
	float GetHeightAtLocation(const struct FVector& Location);
	float GetFluidFriction();
};

// Class Zenith.CustomScrollBox
// 0x0000 (FullSize[0x0880] - InheritedSize[0x0880])
class UCustomScrollBox : public UScrollBox
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CustomScrollBox");
		return ptr;
	}



	void ScrollWidgetHostIntoView(class UNativeWidgetHost* NativeWidgetHost, bool InAnimateScroll, Slate_EDescendantScrollDestination InDestination, float InScrollPadding);
};

// Class Zenith.CVarsBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCVarsBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.CVarsBPFLibrary");
		return ptr;
	}



	bool STATIC_GetUIHide();
	bool STATIC_GetDebugIgnoreTouchDamage();
	bool STATIC_GetDebugDrawJumpCurves();
	bool STATIC_GetActionAllowInfiniteJumps();
};

// Class Zenith.DataTableBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDataTableBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.DataTableBPFLibrary");
		return ptr;
	}



	bool STATIC_IsValid(const struct FDataTableRowHandle& Handle);
	bool STATIC_GetTutorialDialogData(const struct FDataTableRowHandle& Handle, struct FTutorialDialogData* out_TutorialDialogDataData);
	bool STATIC_GetSpiritDataInfos(class AZenithPlayerController* ZPlayerController, const struct FDataTableRowHandle& ItemSpiritDataHandle, bool bIgnoreLevelOverride, Zenith_EItemSpiritType* out_ItemSpiritType, Zenith_ECommandSummonLimitType* out_CastLimitType, int* out_CastCount, float* out_RecastTime, bool* out_bUnderwater);
	bool STATIC_GetRecollectionItemData(const struct FDataTableRowHandle& Handle, Zenith_ERecollectionItemType RecollectionItemType, struct FRecollectionItemData* out_RecollectionItemData);
	bool STATIC_GetItemTipData(const struct FDataTableRowHandle& Handle, struct FItemTipData* out_ItemTipData);
	bool STATIC_GetItemSpiritData(const struct FDataTableRowHandle& Handle, struct FItemSpiritData* out_ItemData);
	bool STATIC_GetItemPassiveData(const struct FDataTableRowHandle& Handle, struct FItemPassiveData* out_ItemPassiveData);
	bool STATIC_GetGameMapData(const struct FDataTableRowHandle& Handle, struct FGameMapData* out_GameMapData);
	bool STATIC_GetBaseItemData(const struct FDataTableRowHandle& Handle, struct FBaseItemData* out_ItemData);
	bool STATIC_GetAchievementData(const struct FDataTableRowHandle& Handle, struct FAchievementData* out_AchievementData);
};

// Class Zenith.DeathComponent
// 0x0200 (FullSize[0x02B0] - InheritedSize[0x00B0])
class UDeathComponent : public UActorComponent
{
public:
	Zenith_EDeathStyle                                 DeathStyle;                                                // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDestroyActorOnDeath;                                      // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZMSH[0xE];                                     // 0x00B2(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKnockbackDeathSettings                     KnockbackDeathSettings;                                    // 0x00C0(0x00A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlayerDeathSettings                        PlayerDeathSettings;                                       // 0x0160(0x0060) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FDissolveDeathSettings                      DissolveDeathSettings;                                     // 0x01C0(0x00B0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeathProcessStart;                                       // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeathProcessEnd;                                         // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HXO4[0x20];                                    // 0x0290(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.DeathComponent");
		return ptr;
	}



	void ResetDeathProcess();
	void OnStartDeathProcess();
	void OnReceiveDeadEvent(class AActor* From);
	void OnPlayerDeathTimerComplete();
	void OnKnockbackTimerComplete();
	void OnFinishDeathProcess();
	void OnDeathAnimationComplete();
	void NotifyManualDeathCompleted();
	void NotifyDissolveDeathCompleted();
	bool IsDead();
	bool IsAlive();
	void ForceDeath();
};

// Class Zenith.DebugMenuSubsystem
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UDebugMenuSubsystem : public UGameInstanceSubsystem
{
public:
	class UUserWidgetMenu*                             DebugMenuInstance;                                         // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3WY1[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.DebugMenuSubsystem");
		return ptr;
	}



	void ShowDebugMenu(class UClass* DebugMenuClass, class APlayerController* PlayerController);
	bool IsDebugMenuShown();
	void HideDebugMenu();
	float GetTimeSinceLastClose();
	bool CanShowDebugMenu();
};

// Class Zenith.DelayFrameCountAsyncAction
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UDelayFrameCountAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_EOBG[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.DelayFrameCountAsyncAction");
		return ptr;
	}



	class UDelayFrameCountAsyncAction* STATIC_DelayFrameCount(class UObject* WorldContextObject, int DelayInFrames);
};

// Class Zenith.DisableAudioSnapshotOnGameMapReadyAsyncAction
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UDisableAudioSnapshotOnGameMapReadyAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_TYCX[0x30];                                    // 0x0030(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.DisableAudioSnapshotOnGameMapReadyAsyncAction");
		return ptr;
	}



	void OnGameMapReady();
	class UDisableAudioSnapshotOnGameMapReadyAsyncAction* STATIC_DisableAudioSnapshotOnGameMapReady(class UObject* WorldContextObject, bool bConsiderFadeAsLoading, const struct FName& AudioSnapshotTag);
	void CheckGameMapReady();
};

// Class Zenith.DropComponent
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UDropComponent : public UActorComponent
{
public:
	bool                                               bAutomaticallyRegisterOnDeath;                             // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1MGJ[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CollectableClass;                                          // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ExperienceDrop;                                            // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ExperienceCountPerCollectable;                             // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxExperienceCollectableCount;                             // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_COEH[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         DropDataHandle;                                            // 0x00D0(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NARA[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.DropComponent");
		return ptr;
	}



	void SetDropDataHandle(const struct FDataTableRowHandle& NewDropDataHandle);
	void OnDeath(class AActor* From);
	void LaunchDropProcess();
};

// Class Zenith.EffectBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEffectBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EffectBPFLibrary");
		return ptr;
	}



	void STATIC_StopAllDeactivatingParticleSystems();
	class UParticleSystem* STATIC_GetStepEffectForSurfaceType(class UObject* WorldContextObj, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType);
	class UParticleSystem* STATIC_GetLandingEffectForSurfaceType(class UObject* WorldContextObj, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType);
};

// Class Zenith.EffectMatrixData
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UEffectMatrixData : public UDataAsset
{
public:
	TMap<TEnumAsByte<PhysicsCore_EPhysicalSurface>, class UParticleSystem*> StepEffects;                                               // 0x0030(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<TEnumAsByte<PhysicsCore_EPhysicalSurface>, class UParticleSystem*> LandingEffects;                                            // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EffectMatrixData");
		return ptr;
	}



};

// Class Zenith.ElevatorMovementComponent
// 0x0120 (FullSize[0x0210] - InheritedSize[0x00F0])
class UElevatorMovementComponent : public UMovementComponent
{
public:
	struct FScriptMulticastDelegate                    OnStartedMovement;                                         // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinishedMovement;                                        // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FComponentReference                         ElevatorComponentRef;                                      // 0x0110(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FComponentReference                         DestinationComponentRef;                                   // 0x0138(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	float                                              Speed;                                                     // 0x0160(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZKOE[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          MovementCurve;                                             // 0x0168(0x0088) (Edit, NativeAccessSpecifierPrivate)
	bool                                               bSweep;                                                    // 0x01F0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Engine_ETeleportType                               TeleportType;                                              // 0x01F1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PZ6Y[0x1E];                                    // 0x01F2(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ElevatorMovementComponent");
		return ptr;
	}



	void TeleportToOrigin();
	void TeleportToDestination();
	void SetSpeedFactor(float NewSpeedFactor);
	bool IsMoving();
	bool IsDirectionSetToDestination();
	void GoToOrigin();
	void GoToDestination();
	float GetSpeedFactor();
};

// Class Zenith.EmulatedFog
// 0x0038 (FullSize[0x0258] - InheritedSize[0x0220])
class AEmulatedFog : public AActor
{
public:
	class USceneComponent*                             SceneRootComponent;                                        // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               BoxComponent;                                              // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bInfiniteBounds;                                           // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LJOH[0x1F];                                    // 0x0231(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bActive;                                                   // 0x0250(0x0001) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_D7OW[0x7];                                     // 0x0251(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EmulatedFog");
		return ptr;
	}



	void SetFogActive(bool bNewActive);
	void OnDeactivateFog();
	void OnActivateFog();
	bool IsInfiniteBounds();
	void DeactivateFog(bool bForce);
	void ActivateFog(bool bForce);
};

// Class Zenith.EmulatedLight
// 0x0000 (FullSize[0x0230] - InheritedSize[0x0230])
class AEmulatedLight : public ALight
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EmulatedLight");
		return ptr;
	}



};

// Class Zenith.EmulatedPointLight
// 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
class AEmulatedPointLight : public AEmulatedLight
{
public:
	class UPointLightComponent*                        PointLightComponent;                                       // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActorAffectRadiusOffset;                                   // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_17K6[0x4];                                     // 0x023C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EmulatedPointLight");
		return ptr;
	}



};

// Class Zenith.EmulatedSpotLight
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class AEmulatedSpotLight : public AEmulatedLight
{
public:
	class USpotLightComponent*                         SpotLightComponent;                                        // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EmulatedSpotLight");
		return ptr;
	}



};

// Class Zenith.EmulatedRectLight
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class AEmulatedRectLight : public AEmulatedLight
{
public:
	class URectLightComponent*                         RectLightComponent;                                        // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EmulatedRectLight");
		return ptr;
	}



};

// Class Zenith.EmulatedLightDetector
// 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
class UEmulatedLightDetector : public UActorComponent
{
public:
	unsigned char                                      UnknownData_E65I[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EmulatedLightDetector");
		return ptr;
	}



	void RefreshEmulatedLights();
};

// Class Zenith.EnemySpawnPoint
// 0x01C8 (FullSize[0x03E8] - InheritedSize[0x0220])
class AEnemySpawnPoint : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnEnemySpawnDelegate;                                      // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnemyActivateDelegate;                                   // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnemyDeathStartDelegate;                                 // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnemyDeathDelegate;                                      // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UClearableComponent*                         ClearableComponent;                                        // 0x0260(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      CharacterToSpawn;                                          // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      ControllerOverride;                                        // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bShouldActivateByDefault;                                  // 0x0278(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Zenith_EEnemySpawnPointClearTiming                 MarkClearTiming;                                           // 0x0279(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0XKJ[0x6];                                     // 0x027A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LockDifficultyLevelOfAreasOnClear;                         // 0x0280(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                               bAddDifficultyLevelOnClear;                                // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y3LV[0x7];                                     // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, bool>                           BlackboardOverride_Bool;                                   // 0x0298(0x0050) (Edit, NativeAccessSpecifierPrivate)
	TMap<struct FName, float>                          BlackboardOverride_Float;                                  // 0x02E8(0x0050) (Edit, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FVector>                 BlackboardOverride_Vector;                                 // 0x0338(0x0050) (Edit, NativeAccessSpecifierPrivate)
	TMap<struct FName, class AActor*>                  BlackboardOverride_Actor;                                  // 0x0388(0x0050) (Edit, NativeAccessSpecifierPrivate)
	bool                                               bHOOK_ConsiderAsBossSpawn;                                 // 0x03D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PNIO[0xF];                                     // 0x03D9(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.EnemySpawnPoint");
		return ptr;
	}



	void OverrideEnemySpawned(class AZenithCharacter* NewEnemy);
	void OnUnregisterEnemy();
	void OnSpawnPointAlreadyCleared(bool bHasPreviousDeathTransform, const struct FTransform& PreviousDeathTransform);
	void OnRegisterEnemy();
	void OnOverrideEnemySpawned();
	void OnEnemySpawn();
	void OnEnemyRespawn();
	void OnEnemyDeathStart();
	void OnEnemyDeathProcessStart();
	void OnEnemyDeathProcessEnd();
	void OnEnemyDeath();
	void OnEnemyActivate();
	void OnClearedStatusChecked(bool bCleared);
	void OnApplyBlackboardOverride();
	bool IsEnemySpawned();
	bool IsEnemyActivated();
	class AController* GetEnemyController();
	class AZenithCharacter* GetEnemy();
	void ActivateEnemy();
};

// Class Zenith.ErrorSubsystem
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UErrorSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_MVJS[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ErrorWidgetClass;                                          // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ErrorSubsystem");
		return ptr;
	}



	void ReportError(Zenith_EZenithError Error);
};

// Class Zenith.ExecuteActionAsync
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UExecuteActionAsync : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_CX5I[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ExecuteActionAsync");
		return ptr;
	}



	void Update();
	void Finish();
	class UExecuteActionAsync* STATIC_ExecuteActionAsync(class UObject* WorldContextObject, class UCommandQueueComponent* CommandQueueComponent, class UClass* CommandActionClass);
};

// Class Zenith.ExecuteTutorialHookAsyncAction
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UExecuteTutorialHookAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_KLMB[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ExecuteTutorialHookAsyncAction");
		return ptr;
	}



	void Finish();
	class UExecuteTutorialHookAsyncAction* STATIC_ExecuteTutorialHook(class UObject* WorldContextObject, class AZenithPlayerController* PlayerController, Zenith_ETutorialHook TutorialHook);
};

// Class Zenith.FactionComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UFactionComponent : public UActorComponent
{
public:
	Zenith_EFaction                                    Faction;                                                   // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GKON[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFactionChange;                                           // 0x00B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FactionComponent");
		return ptr;
	}



	void SetFaction(Zenith_EFaction NewFaction);
	bool IsSameFaction(Zenith_EFaction OtherFaction);
	bool IsPlayerFaction();
};

// Class Zenith.Fader
// 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
class AFader : public AActor
{
public:
	TMap<class ULevelSequence*, class ULevelSequencePlayer*> LevelSequencePlayers;                                      // 0x0220(0x0050) (NativeAccessSpecifierPrivate)
	class ULevelSequence*                              FadeInSequence;                                            // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                              FadeOutSequence;                                           // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFadeStart;                                               // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFadeEnd;                                                 // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Fader");
		return ptr;
	}



	void PrepareFadeIn();
	void OnLevelSequencePlay();
	void OnLevelSequenceFinished();
	void LaunchFadeOut();
	void LaunchFadeIn();
};

// Class Zenith.FadeSubsystem
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UFadeSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_4O5T[0xC];                                     // 0x0030(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class UFadeUserWidget>              FadeWidget;                                                // 0x003C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6TLA[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, TWeakObjectPtr<class UFadeUserWidget>> InstanceForFadeClasses;                                    // 0x0048(0x0050) (ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             OnFadeFinishedDelegate;                                    // 0x0098(0x0010) (ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FadeSubsystem");
		return ptr;
	}



	void PrepareFadeInAtZOrder(class UClass* FadeClass, int ZOrder);
	void PrepareFadeIn(class UClass* FadeClass);
	void OnFadeFinished(bool bWasFadeIn);
	void LaunchFadeOut(class UClass* FadeClass, const struct FScriptDelegate& OnFadeFinished);
	void LaunchFadeIn(class UClass* FadeClass, const struct FScriptDelegate& OnFadeFinished);
	void LaunchFadeAtZOrder(bool bFadeIn, class UClass* FadeClass, const struct FScriptDelegate& OnFadeFinished, int ZOrder);
	void LaunchFade(bool bFadeIn, class UClass* FadeClass, const struct FScriptDelegate& OnFadeFinished);
	bool IsFading();
	Zenith_EFadeTypes GetLastFadeType();
};

// Class Zenith.FadeUserWidget
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UFadeUserWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnFadeFinish;                                              // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FadeUserWidget");
		return ptr;
	}



	void PrepareFadeIn();
	void NotifyFinish(bool bWasFadeIn);
	void LaunchFadeOut();
	void LaunchFadeIn();
};

// Class Zenith.FindClosestEnemy
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UFindClosestEnemy : public UBTService
{
public:
	struct FBlackboardKeySelector                      KeyResult;                                                 // 0x0070(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckFront;                                               // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckLineOfSight;                                         // 0x00A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R5XB[0x6];                                     // 0x00A2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FindClosestEnemy");
		return ptr;
	}



};

// Class Zenith.FluidMeshComponent
// 0x00B0 (FullSize[0x05A0] - InheritedSize[0x04F0])
class UFluidMeshComponent : public UProceduralRenderMeshComponent
{
public:
	struct FScriptMulticastDelegate                    OnActorInteract;                                           // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bEnableActorInteraction;                                   // 0x0500(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_19T4[0x3];                                     // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     MeshExtents;                                               // 0x0504(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              CellSize;                                                  // 0x0510(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              ActorHeightRange;                                          // 0x0514(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     VelocityEnterFactor;                                       // 0x0518(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     VelocityTickFactor;                                        // 0x0524(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SizeY;                                                     // 0x0530(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SizeZ;                                                     // 0x0534(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      Owner;                                                     // 0x0538(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UShapeComponent*                             ShapeComponent;                                            // 0x0540(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                              OverlappedActors;                                          // 0x0548(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                             Vertices;                                                  // 0x0558(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                             Normals;                                                   // 0x0568(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColor>                              VertexColors;                                              // 0x0578(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                           UVs;                                                       // 0x0588(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RMYG[0x8];                                     // 0x0598(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FluidMeshComponent");
		return ptr;
	}



	void OnComponentEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsActorInteractionEnabled();
	TArray<class AActor*> GetInteractingActors();
	float GetHeightAtLocation(const struct FVector& Location);
};

// Class Zenith.FluidSurfaceMeshComponent
// 0x0050 (FullSize[0x0540] - InheritedSize[0x04F0])
class UFluidSurfaceMeshComponent : public UProceduralRenderMeshComponent
{
public:
	int                                                Subdivisions;                                              // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SubdivisionsX;                                             // 0x04F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SubdivisionsY;                                             // 0x04F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6OR6[0x4];                                     // 0x04FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             Vertices;                                                  // 0x0500(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                             Normals;                                                   // 0x0510(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColor>                              VertexColors;                                              // 0x0520(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                           UVs;                                                       // 0x0530(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FluidSurfaceMeshComponent");
		return ptr;
	}



};

// Class Zenith.FluidVolumeMeshComponent
// 0x0050 (FullSize[0x0540] - InheritedSize[0x04F0])
class UFluidVolumeMeshComponent : public UProceduralRenderMeshComponent
{
public:
	int                                                Subdivisions;                                              // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3IW8[0x4];                                     // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             Vertices;                                                  // 0x04F8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector>                             Normals;                                                   // 0x0508(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FColor>                              VertexColors;                                              // 0x0518(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FVector2D>                           UVs;                                                       // 0x0528(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PYP8[0x8];                                     // 0x0538(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FluidVolumeMeshComponent");
		return ptr;
	}



};

// Class Zenith.FollowCameraComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UFollowCameraComponent : public UActorComponent
{
public:
	float                                              DistanceFromCamera;                                        // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BSQQ[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Owner;                                                     // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DZVI[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FollowCameraComponent");
		return ptr;
	}



};

// Class Zenith.FollowSplineComponent
// 0x0080 (FullSize[0x0170] - InheritedSize[0x00F0])
class UFollowSplineComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData_JLKN[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USplineComponent*                            SplineComponent;                                           // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_022F[0x18];                                    // 0x0100(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMoveStart;                                               // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                            // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FComponentReference                         TargetComponentReference;                                  // 0x0138(0x0028) (Edit, NativeAccessSpecifierPublic)
	bool                                               bAutoStart;                                                // 0x0160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStartForward;                                             // 0x0161(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EFollowSplineType                           PlayType;                                                  // 0x0162(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QT92[0x1];                                     // 0x0163(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayBetweenMove;                                          // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SGFP[0x4];                                     // 0x016C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FollowSplineComponent");
		return ptr;
	}



	void Launch(bool bForward);
};

// Class Zenith.FollowTargetComponent
// 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
class UFollowTargetComponent : public UActorComponent
{
public:
	bool                                               bUpdateOwnerLocation;                                      // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7XHU[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendSpeed;                                                // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OscillationScale;                                          // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVOscillator                                LocOscillation;                                            // 0x00BC(0x0024) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocalSpaceOffset;                                          // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Owner;                                                     // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1WH5[0x38];                                    // 0x0100(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FollowTargetComponent");
		return ptr;
	}



	void TeleportToTarget();
	void SetFollowTarget(class USceneComponent* NewFollowTarget, bool bSnapToTarget);
	struct FVector GetTargetLocation();
	struct FVector GetFollowTargetLocation();
	struct FVector GetFollowTargetForward();
	struct FVector GetFollowTargetDeltaLocation();
	class USceneComponent* GetFollowTarget();
	void ClearFollowTarget();
};

// Class Zenith.FooterUserWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UFooterUserWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.FooterUserWidget");
		return ptr;
	}



};

// Class Zenith.GameBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameBPFLibrary");
		return ptr;
	}



	void STATIC_SetPreviewLanguage(const struct FString& CultureName);
	void STATIC_PrintStringWarning(const struct FString& Message);
	void STATIC_PrintStringError(const struct FString& Message);
	bool STATIC_IsXboxOne();
	bool STATIC_IsXboxFamilyBuild();
	bool STATIC_IsSwitchBuild();
	bool STATIC_IsSteamBuild();
	bool STATIC_IsShippingBuild();
	bool STATIC_IsPSFamilyBuild();
	bool STATIC_IsPS5Build();
	bool STATIC_IsPS4Build();
	bool STATIC_IsPCBuild();
	bool STATIC_IsEditor();
	bool STATIC_IsEarlyAccessBuild(class UObject* WorldContextObject);
	struct FString STATIC_GetVersion();
	struct FString STATIC_GetRHIInfo();
	struct FString STATIC_GetPreviewLanguage();
	struct FIntPoint STATIC_GetGameResolution();
	struct FIntPoint STATIC_GetDesktopResolution();
	int STATIC_GetBuildNumber();
	bool STATIC_DoesGameVersionMatchesPakVersion();
};

// Class Zenith.GameEngineZenithBase
// 0x0008 (FullSize[0x0E38] - InheritedSize[0x0E30])
class UGameEngineZenithBase : public UGameEngine
{
public:
	unsigned char                                      UnknownData_K153[0x8];                                     // 0x0E30(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameEngineZenithBase");
		return ptr;
	}



};

// Class Zenith.GameInstanceZenithBase
// 0x0068 (FullSize[0x0210] - InheritedSize[0x01A8])
class UGameInstanceZenithBase : public UGameInstance
{
public:
	Zenith_ELaunchGameIntent                           LaunchGameIntent;                                          // 0x01A8(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSimulateEarlyAccess;                                      // 0x01A9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_021T[0x6];                                     // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundMatrixData*                            SoundEffectMatrixData;                                     // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFMODVCA*                                    VCA_BGM;                                                   // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFMODVCA*                                    VCA_SE;                                                    // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFMODVCA*                                    VCA_Ambience;                                              // 0x01C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      PersistentGameWorld[0x28];                                 // 0x01D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UDataTable*                                  AchievementTable;                                          // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDataTable*                                  ErrorTable;                                                // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      ErrorWidgetClass;                                          // 0x0208(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameInstanceZenithBase");
		return ptr;
	}



	void SetLaunchGameIntent(Zenith_ELaunchGameIntent Intent);
	bool IsSimulatingEarlyAccess();
	class UFMODVCA* GetSoundVCA(Zenith_ESoundFamily SoundFamily);
	class USoundMatrixData* GetSoundEffectMatrixData();
	void GetPersistentGameWorld();
	Zenith_ELaunchGameIntent GetLaunchGameIntent();
	class UGameInstanceZenithBase* STATIC_GetGameInstanceZenith(class UObject* WorldContextObject);
	class UClass* GetErrorUserWidget();
	class UDataTable* GetErrorDataTable();
	class UDataTable* GetAchievementDataTable();
};

// Class Zenith.GameLogicBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameLogicBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameLogicBPFLibrary");
		return ptr;
	}



	void STATIC_StopAllForceFeedbacks(class APlayerController* PlayerController);
	void STATIC_LaunchForceFeedback(class APlayerController* PlayerController, class UForceFeedbackEffect* ForceFeedbackEffect, const struct FName& Tag);
	void STATIC_LaunchCameraShake(class UObject* WorldContextObject, class UClass* Shake, const struct FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
	bool STATIC_IsSameVerticalDirection(Zenith_EDirectionInputTypes DirectionA, Zenith_EDirectionInputTypes DirectionB, bool bConsiderNeutralAsSame);
	bool STATIC_IsSameHorizontalDirection(Zenith_EDirectionInputTypes DirectionA, Zenith_EDirectionInputTypes DirectionB, bool bConsiderNeutralAsSame);
	bool STATIC_IsPureVerticalDirection(Zenith_EDirectionInputTypes Direction, bool bConsiderNeutralAsVertical);
	bool STATIC_IsPureHorizontalDirection(Zenith_EDirectionInputTypes Direction, bool bConsiderNeutralAsHorizontal);
	int STATIC_GetSpecialAttackMPCost();
	struct FName STATIC_GetRestPlayerPointStartTag();
	class AActor* STATIC_GetClosestEnemyOfActor(class AActor* Actor, float MinDistance, float Range, bool bNeedLineOfSight, bool bFrontCheck);
	struct FVector STATIC_ComputeLaunchVelocityToDestination(const struct FVector& Origin, const struct FVector& DestinationLocation, float GravityFactor, float Duration);
	bool STATIC_CanUseStrengthenOnAnySpirit(class APlayerController* PlayerController);
};

// Class Zenith.GameMapSwitchDelegateOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameMapSwitchDelegateOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameMapSwitchDelegateOwnerInterface");
		return ptr;
	}



};

// Class Zenith.GameModeZenithBase
// 0x01F0 (FullSize[0x04B0] - InheritedSize[0x02C0])
class AGameModeZenithBase : public AGameModeBase
{
public:
	class UEmulatedLightDetector*                      EmulatedLightDetector;                                     // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameMapSwitchDelegate;                                   // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDifficultyLevelChanged;                                  // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTutorialHookFinished;                                    // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerRespawnDelegate;                                   // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UClearedObjectManagerComponent*              ClearedObjectManager;                                      // 0x0308(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameStatsComponent*                         GameStats;                                                 // 0x0310(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBossRushComponent*                          BossRushComponent;                                         // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  GameMapTable;                                              // 0x0320(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ItemGenericTable;                                          // 0x0328(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ItemParameterTable;                                        // 0x0330(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ItemAptitudeTable;                                         // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ItemSpiritTable;                                           // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ItemPassiveTable;                                          // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ItemTipTable;                                              // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  ParameterLevelTable;                                       // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  HealCountLevelTable;                                       // 0x0360(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  HealPowerLevelTable;                                       // 0x0368(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  InitialCommonSpiritLevel;                                  // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  InitialBossSpiritLevel;                                    // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                                  TutorialTable;                                             // 0x0380(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEffectMatrixData*                           EffectMatrixData;                                          // 0x0388(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                DifficultyLevel;                                           // 0x0390(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_70AL[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, int>                            DifficultyForAreas;                                        // 0x0398(0x0050) (Edit, EditConst, NativeAccessSpecifierPrivate)
	int                                                MaxDifficultyLevel;                                        // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_67VX[0x4];                                     // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Zenith_EGameEndingType, int>                  ReachedGameEndings;                                        // 0x03F0(0x0050) (Edit, EditConst, NativeAccessSpecifierPrivate)
	int                                                NewGamePlusGeneration;                                     // 0x0440(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6ALO[0x4];                                     // 0x0444(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Zenith_EGameEndingType, int>                  PreviousRunsReachedGameEndings;                            // 0x0448(0x0050) (Edit, EditConst, NativeAccessSpecifierPrivate)
	bool                                               bGameDataReady;                                            // 0x0498(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5XQK[0x7];                                     // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChallengeSettings*                          ChallengeSettings;                                         // 0x04A0(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_WWRY[0x8];                                     // 0x04A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameModeZenithBase");
		return ptr;
	}



	int SetNewGamePlusGeneration(int NewNewGamePlusGeneration);
	int SetDifficultyLevel(int NewDifficultyLevel);
	void RespawnPlayerPawn(class APlayerController* Player, class UClass* FadeOutClass, class UClass* FadeInClass);
	void RegisterBossRushComponent(class UBossRushComponent* NewBossRushComponent);
	void OnGameMapSwitch();
	void OnGameDataLoaded();
	void NotifyTutorialsFinished();
	void NotifyGameEndingReached(Zenith_EGameEndingType GameEndingType);
	bool LoadGameData(class UClass* FadeOutClass, class UClass* FadeInClass);
	void LaunchTutorials(class AZenithPlayerController* PlayerController, TArray<struct FTutorialKeyDataPair> Tutorials);
	bool IsGameCleared();
	class UDataTable* GetParameterLevelTable();
	int GetNewGamePlusGeneration();
	int GetMaxDifficultyLevel();
	class UDataTable* GetItemTipTable();
	class UDataTable* GetItemSpiritTable();
	class UDataTable* GetItemPassiveTable();
	class UDataTable* GetItemParameterTable();
	class UDataTable* GetItemGenericTable();
	class UDataTable* GetItemAptitudeTable();
	class UDataTable* GetInitialCommonSpiritLevelTable();
	class UDataTable* GetInitialBossSpiritLevelTable();
	class UDataTable* GetHealPowerLevelTable();
	class UDataTable* GetHealCountLevelTable();
	class AGameModeZenithBase* STATIC_GetGameModeZenith(class UObject* WorldContextObject);
	class UDataTable* GetGameMapTable();
	int GetGameEndingCountReached();
	int GetGameClearCount();
	class UEffectMatrixData* GetEffectMatrixData();
	int GetDifficultyLevelWithoutOverride();
	int GetDifficultyLevel();
	int GetChapterDisplay();
	class UChallengeSettings* STATIC_GetChallengeSettings(class UObject* WorldContextObject);
	bool DidReachGameEnding(Zenith_EGameEndingType GameEndingType, bool bCheckPreviousGameGeneration);
	int AddDifficultyLevel();
};

// Class Zenith.StateComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class UStateComponent : public UActorComponent
{
public:
	TArray<class UClass*>                              DefaultStates;                                             // 0x00B0(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStateAdded;                                              // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnStateRemoved;                                            // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ActiveStates;                                              // 0x00E0(0x0010) (Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FTimedStateData>                     TimeStates;                                                // 0x00F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateComponent");
		return ptr;
	}



	void RemoveStates(TArray<class UClass*> States);
	void RemoveState(class UClass* State);
	void RemoveAllStates();
	bool HasState(class UClass* State);
	bool HasAnyState(TArray<class UClass*> States);
	bool HasAllStates(TArray<class UClass*> States);
	bool CanUseCommandInput(Zenith_ECommandInputTypes CommandInput);
	void AddStatesForDuration(TArray<class UClass*> States, float Duration);
	void AddStates(TArray<class UClass*> States);
	void AddState(class UClass* State);
};

// Class Zenith.State
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UState : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.State");
		return ptr;
	}



};

// Class Zenith.StateIgnoreGravity
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateIgnoreGravity : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateIgnoreGravity");
		return ptr;
	}



};

// Class Zenith.StateIgnoreBrakingDecelerationFall
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateIgnoreBrakingDecelerationFall : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateIgnoreBrakingDecelerationFall");
		return ptr;
	}



};

// Class Zenith.StateLockMove
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateLockMove : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateLockMove");
		return ptr;
	}



};

// Class Zenith.StateLockInput
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UStateLockInput : public UState
{
public:
	int                                                Inputs;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DYU3[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateLockInput");
		return ptr;
	}



};

// Class Zenith.StateLockInput_All
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStateLockInput_All : public UStateLockInput
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateLockInput_All");
		return ptr;
	}



};

// Class Zenith.StateIgnoreFacing
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateIgnoreFacing : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateIgnoreFacing");
		return ptr;
	}



};

// Class Zenith.StateInvincible
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateInvincible : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateInvincible");
		return ptr;
	}



};

// Class Zenith.StateNullifyDamages
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateNullifyDamages : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateNullifyDamages");
		return ptr;
	}



};

// Class Zenith.StateDeactivateContactHitboxes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateDeactivateContactHitboxes : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateDeactivateContactHitboxes");
		return ptr;
	}



};

// Class Zenith.StateIgnoreEnemyContacts
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateIgnoreEnemyContacts : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateIgnoreEnemyContacts");
		return ptr;
	}



};

// Class Zenith.StateIgnoreDamageArea
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateIgnoreDamageArea : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateIgnoreDamageArea");
		return ptr;
	}



};

// Class Zenith.StateHidden
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateHidden : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateHidden");
		return ptr;
	}



};

// Class Zenith.StateBusy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateBusy : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateBusy");
		return ptr;
	}



};

// Class Zenith.StateDead
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateDead : public UStateBusy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateDead");
		return ptr;
	}



};

// Class Zenith.StateKnockback
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateKnockback : public UStateBusy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateKnockback");
		return ptr;
	}



};

// Class Zenith.StateStun
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateStun : public UStateBusy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateStun");
		return ptr;
	}



};

// Class Zenith.StateLockBackToRestpoint
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateLockBackToRestpoint : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateLockBackToRestpoint");
		return ptr;
	}



};

// Class Zenith.StateEvent
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateEvent : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateEvent");
		return ptr;
	}



};

// Class Zenith.StateKnockbackLaunch
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateKnockbackLaunch : public UStateKnockback
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateKnockbackLaunch");
		return ptr;
	}



};

// Class Zenith.StateKnockbackRecovery
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateKnockbackRecovery : public UStateKnockback
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateKnockbackRecovery");
		return ptr;
	}



};

// Class Zenith.StateHitStop
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateHitStop : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateHitStop");
		return ptr;
	}



};

// Class Zenith.StateResistKnockback
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateResistKnockback : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateResistKnockback");
		return ptr;
	}



};

// Class Zenith.StateResistStaminaBreak
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateResistStaminaBreak : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateResistStaminaBreak");
		return ptr;
	}



};

// Class Zenith.StateResistStunBreak
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateResistStunBreak : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateResistStunBreak");
		return ptr;
	}



};

// Class Zenith.StateJustGuard
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateJustGuard : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateJustGuard");
		return ptr;
	}



};

// Class Zenith.StateGuard
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateGuard : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateGuard");
		return ptr;
	}



};

// Class Zenith.StateJustGuardFront
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateJustGuardFront : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateJustGuardFront");
		return ptr;
	}



};

// Class Zenith.StateGuardFront
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateGuardFront : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateGuardFront");
		return ptr;
	}



};

// Class Zenith.StateParry
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateParry : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateParry");
		return ptr;
	}



};

// Class Zenith.StateJustDodge
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateJustDodge : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateJustDodge");
		return ptr;
	}



};

// Class Zenith.StateDodge
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateDodge : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateDodge");
		return ptr;
	}



};

// Class Zenith.StateCounter
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateCounter : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateCounter");
		return ptr;
	}



};

// Class Zenith.StateAllowDash
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateAllowDash : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateAllowDash");
		return ptr;
	}



};

// Class Zenith.StateDash
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateDash : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateDash");
		return ptr;
	}



};

// Class Zenith.StateDashLv1
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateDashLv1 : public UStateDash
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateDashLv1");
		return ptr;
	}



};

// Class Zenith.StateDashLv2
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateDashLv2 : public UStateDash
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateDashLv2");
		return ptr;
	}



};

// Class Zenith.StateDashLv3
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateDashLv3 : public UStateDash
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateDashLv3");
		return ptr;
	}



};

// Class Zenith.StatePile
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatePile : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StatePile");
		return ptr;
	}



};

// Class Zenith.StatePileLv1
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatePileLv1 : public UStatePile
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StatePileLv1");
		return ptr;
	}



};

// Class Zenith.StatePileLv2
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatePileLv2 : public UStatePile
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StatePileLv2");
		return ptr;
	}



};

// Class Zenith.StatePileLv3
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatePileLv3 : public UStatePile
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StatePileLv3");
		return ptr;
	}



};

// Class Zenith.StateWallGrab
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateWallGrab : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateWallGrab");
		return ptr;
	}



};

// Class Zenith.StateDive
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateDive : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateDive");
		return ptr;
	}



};

// Class Zenith.StateAutoClimb
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateAutoClimb : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateAutoClimb");
		return ptr;
	}



};

// Class Zenith.StateRemain1HP
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateRemain1HP : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateRemain1HP");
		return ptr;
	}



};

// Class Zenith.StateInteractionAllowed
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateInteractionAllowed : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateInteractionAllowed");
		return ptr;
	}



};

// Class Zenith.StateInteractionInput
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateInteractionInput : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateInteractionInput");
		return ptr;
	}



};

// Class Zenith.StateIgnoreAutoClimb
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStateIgnoreAutoClimb : public UState
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateIgnoreAutoClimb");
		return ptr;
	}



};

// Class Zenith.StateAbilityFilter
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UStateAbilityFilter : public UState
{
public:
	Zenith_EAbilityType                                AbilityType;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CPYQ[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateAbilityFilter");
		return ptr;
	}



};

// Class Zenith.StateAbilityFilter_DashAttack
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStateAbilityFilter_DashAttack : public UStateAbilityFilter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateAbilityFilter_DashAttack");
		return ptr;
	}



};

// Class Zenith.StateAbilityFilter_PileAttack
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStateAbilityFilter_PileAttack : public UStateAbilityFilter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StateAbilityFilter_PileAttack");
		return ptr;
	}



};

// Class Zenith.StreamingVolume
// 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
class AStreamingVolume : public AActor
{
public:
	unsigned char                                      PrimaryLevels[0x10];                                       // 0x0220(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      SecondaryLevels[0x10];                                     // 0x0230(0x0010) UNKNOWN PROPERTY: ArrayProperty
	float                                              DelayBeforeUnload;                                         // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlockOnLoad;                                              // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CRYY[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneRootComponent;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HJ32[0x10];                                    // 0x0250(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StreamingVolume");
		return ptr;
	}



	void OnLevelLoaded();
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Zenith.StringBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStringBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StringBPFLibrary");
		return ptr;
	}



	TArray<struct FString> STATIC_Sort(TArray<struct FString>* Array);
	struct FString STATIC_ConvertTimeToString(float TimeInSeconds);
};

// Class Zenith.RegenerativeParamComponent
// 0x0098 (FullSize[0x0148] - InheritedSize[0x00B0])
class URegenerativeParamComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnValueChangeDelegate;                                     // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMaxValueChangeDelegate;                                  // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBreakDelegate;                                           // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              RegenerationBlockingStates;                                // 0x00E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              BreakRecoveryBlockingStates;                               // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int                                                MaxValue;                                                  // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DelayBeforeRecovery;                                       // 0x0104(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RecoveryPerSecond;                                         // 0x0108(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BrokenDuration;                                            // 0x010C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bInvincible;                                               // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6L19[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  AudioEventOnBreak;                                         // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             CachedStateComponent;                                      // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDeathComponent*                             CachedDeathComponent;                                      // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DQCW[0x18];                                    // 0x0130(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.RegenerativeParamComponent");
		return ptr;
	}



	void Subtract(int ValueToSub);
	void SetMaxValue(float NewMaxValue);
	void OnBreak();
	bool IsInvincible();
	bool IsBroken();
	int GetMaxValue();
	int GetCurrValue();
	float GetCurrRatio();
	void FullyRestore();
	void Add(int ValueToSub);
};

// Class Zenith.StunComponent
// 0x0070 (FullSize[0x01B8] - InheritedSize[0x0148])
class UStunComponent : public URegenerativeParamComponent
{
public:
	struct FKnockbackData                              StunKnockbackData;                                         // 0x0148(0x0058) (Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	bool                                               bGenerateAirLaunchVector;                                  // 0x01A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NCSI[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCommandQueueComponent*                      CommandComponent;                                          // 0x01A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UKnockbackComponent*                         KnockbackComponent;                                        // 0x01B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StunComponent");
		return ptr;
	}



};

// Class Zenith.SummonerComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class USummonerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_MGVI[0x60];                                    // 0x00B0(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SummonerComponent");
		return ptr;
	}



	void OnUnpossessed();
	void OnUnequipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData);
	void OnSwitchSummonSet(Zenith_ESummonSet PrevSummonSet, Zenith_ESummonSet NewSummonSet);
	void OnPossessed();
	void OnEquipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData);
};

// Class Zenith.SummonSetHoldComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class USummonSetHoldComponent : public UActorComponent
{
public:
	class UClass*                                      SummonSetSwitchCommandAction;                              // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QSJD[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SummonSetHoldComponent");
		return ptr;
	}



	void OnSettingsSaved();
};

// Class Zenith.TargetComponent
// 0x0030 (FullSize[0x00E0] - InheritedSize[0x00B0])
class UTargetComponent : public UActorComponent
{
public:
	float                                              SphereRadius;                                              // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedLineOfSight;                                          // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V40G[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            SphereComponent;                                           // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UZenithInputComponent*                       InputComponent;                                            // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                              Targets;                                                   // 0x00C8(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class AActor*                                      CurrentTarget;                                             // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.TargetComponent");
		return ptr;
	}



	void OnTargetChanged();
	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	class AActor* GetCurrentTarget();
};

// Class Zenith.Trigger
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class ATrigger : public AActor
{
public:
	class UClearableComponent*                         ClearableComponent;                                        // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PDJB[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsRepeatable;                                             // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K0JI[0x3];                                     // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDelayBetweenRepeat;                                     // 0x0234(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Trigger");
		return ptr;
	}



	void OnTriggerAlreadyCleared();
	void OnClearedStatusChecked(bool bCleared);
	void MarkAsTriggered();
	bool CanTrigger();
};

// Class Zenith.TriggerCondition
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTriggerCondition : public UObject
{
public:
	class UObject*                                     WorldContext;                                              // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.TriggerCondition");
		return ptr;
	}



	bool CheckCondition(class APlayerController* PlayerController);
};

// Class Zenith.MGBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMGBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.MGBPFLibrary");
		return ptr;
	}



	void STATIC_SetupVerticalWrapNavigation(class UPanelWidget* PanelWidget, int ColumnCount);
	void STATIC_SetBrushFromSprite(class UImage* Target, class UPaperSprite* Sprite, bool bMatchSize);
	void STATIC_SetBrushFromSoftSprite(class UImage* Target, bool bMatchSize);
	void STATIC_InvalidateAllWidgets();
	struct FLinearColor STATIC_GetScrollboxStartShadowColor(class UScrollBox* ScrollBox);
	struct FLinearColor STATIC_GetScrollboxEndShadowColor(class UScrollBox* ScrollBox);
	SlateCore_EFocusCause STATIC_GetFocusCause(const struct FFocusEvent& FocusEvent);
	TArray<class UUserWidget*> STATIC_GetAllTopLevelWidgets(class UObject* WorldContextObject);
	void STATIC_FlushUMGAnimations(class UObject* WorldContextObject);
};

// Class Zenith.UMGSubsystem
// 0x01C8 (FullSize[0x01F8] - InheritedSize[0x0030])
class UUMGSubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnUIInputChange;                                           // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FKW6[0x1B8];                                   // 0x0040(0x01B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.UMGSubsystem");
		return ptr;
	}



	void SetFocusedWidget(class UUserWidget* NewFocusedWidget);
	void SetCurrentFooterWidget(class UFooterUserWidget* NewFooterWidget);
	void RestoreDefaultBindings();
	void OverrideUIInput(Zenith_EUIInputTypes UIInputType, const struct FKey& Key);
	bool IsNavigationEnabled();
	bool IsKeyUIInputType(Zenith_EUIInputTypes UIInputType, const struct FKey& Key);
	bool IsFocusingAnyWidget();
	class UUserWidget* GetLastFocusedWidget();
	TArray<struct FKey> GetKeysForUIInput(Zenith_EUIInputTypes UIInputType);
	struct FKey GetKeyForUIInput(Zenith_EUIInputTypes UIInputType, bool bGamepad);
	class UFooterUserWidget* GetCurrentFooterWidget();
	void EnableNavigationAndResetLocks(bool bExecuteImmediately);
	void EnableNavigation(bool bExecuteImmediately);
	void DisableNavigation(class UClass* InputBlockerWidgetClass);
};

// Class Zenith.UndilatedDelayAsyncAction
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UUndilatedDelayAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_ZGK7[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.UndilatedDelayAsyncAction");
		return ptr;
	}



	class UUndilatedDelayAsyncAction* STATIC_UndilatedDelay(class UObject* WorldContextObject, float DelayInSeconds);
	void Tick();
};

// Class Zenith.UserWidgetNavigable
// 0x0088 (FullSize[0x02E8] - InheritedSize[0x0260])
class UUserWidgetNavigable : public UUserWidget
{
public:
	bool                                               bAcceptRepeatKeysInKeyDownEvent;                           // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptRepeatKeysInPressUpDown;                            // 0x0261(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptRepeatKeysInPressLeftRight;                         // 0x0262(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSaveAsFocusedWidget;                                      // 0x0263(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               TriggerDescendantFocusedEvents;                            // 0x0264(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VHDY[0x3];                                     // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  SoundEvent_OnNavigate;                                     // 0x0268(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFMODEvent*                                  SoundEvent_OnConfirm;                                      // 0x0270(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFMODEvent*                                  SoundEvent_OnCancel;                                       // 0x0278(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFMODEvent*                                  SoundEvent_OnContext;                                      // 0x0280(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O2X4[0x58];                                    // 0x0288(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNativeWidgetHost*                           WidgetHost;                                                // 0x02E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.UserWidgetNavigable");
		return ptr;
	}



	void RefreshDesign(bool bFocused);
	void PlayNavigateSoundEvent();
	void PlayConfirmSoundEvent();
	void PlayCancelSoundEvent();
	struct FEventReply OnPressUp(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressRight(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressPrevPage(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressNextPage(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressLeft(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressDown(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressConfirm(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	void OnDescendantFocused(class UNativeWidgetHost* FocusedWidget, SlateCore_EFocusCause FocusCause);
	bool IsOnFocusPath();
};

// Class Zenith.UserWidgetError
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UUserWidgetError : public UUserWidgetNavigable
{
public:
	unsigned char                                      UnknownData_AZ7O[0x8];                                     // 0x02E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.UserWidgetError");
		return ptr;
	}



	bool ShouldReturnToTitle();
	void SetErrorMessage(const struct FText& Title, const struct FText& Message);
};

// Class Zenith.UserWidgetFloatingText
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UUserWidgetFloatingText : public UUserWidget
{
public:
	unsigned char                                      UnknownData_04GY[0x30];                                    // 0x0260(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.UserWidgetFloatingText");
		return ptr;
	}



	void DetachFromComponent();
	void AttachToComponent(class USceneComponent* SceneComponent, const struct FVector& InWorldLocationOffset, const struct FVector2D& InPositionOffset);
};

// Class Zenith.UserWidgetMenu
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UUserWidgetMenu : public UUserWidget
{
public:
	unsigned char                                      UnknownData_1GIN[0x10];                                    // 0x0260(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.UserWidgetMenu");
		return ptr;
	}



	void OpenMenu();
	void OnOpenMenu();
	void OnCloseMenu();
	bool IsOpen();
	void CloseMenu();
};

// Class Zenith.WaitFadeInAsyncAction
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UWaitFadeInAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_SN2M[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFadedInFinished;                                         // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.WaitFadeInAsyncAction");
		return ptr;
	}



	class UWaitFadeInAsyncAction* STATIC_WaitFadeIn(class UObject* WorldContextObject);
};

// Class Zenith.WaitGameDataReadyAsyncAction
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UWaitGameDataReadyAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_871G[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnLoaded;                                                  // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.WaitGameDataReadyAsyncAction");
		return ptr;
	}



	class UWaitGameDataReadyAsyncAction* STATIC_WaitGameDataReady(class UObject* WorldContextObject);
	void Tick();
};

// Class Zenith.WaitGameMapReadyAsyncAction
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UWaitGameMapReadyAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_1SON[0x28];                                    // 0x0030(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnReady;                                                   // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.WaitGameMapReadyAsyncAction");
		return ptr;
	}



	class UWaitGameMapReadyAsyncAction* STATIC_WaitGameMapReady(class UObject* WorldContextObject, bool bConsiderFadeAsLoading);
	void OnGameMapReady();
	void CheckGameMapReady();
};

// Class Zenith.WaitGameUnpausedAsyncAction
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UWaitGameUnpausedAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_4EYF[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnGameUnpaused;                                            // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.WaitGameUnpausedAsyncAction");
		return ptr;
	}



	class UWaitGameUnpausedAsyncAction* STATIC_WaitGameUnpaused(class UObject* WorldContextObject);
};

// Class Zenith.WaitUMGNavigationAsyncAction
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UWaitUMGNavigationAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_HTU9[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnNavigationEnabled;                                       // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.WaitUMGNavigationAsyncAction");
		return ptr;
	}



	class UWaitUMGNavigationAsyncAction* STATIC_WaitUMGNavigation(class UObject* WorldContextObject);
};

// Class Zenith.WallGrabComponent
// 0x0080 (FullSize[0x0130] - InheritedSize[0x00B0])
class UWallGrabComponent : public UActorComponent
{
public:
	float                                              MinVerticalityForWallGrab;                                 // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DistanceToWallGrabOffset;                                  // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxZVelocityForGrab;                                       // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Zenith_EAptitudeType                               NecessaryAptitude;                                         // 0x00BC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TKJ6[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ActivationBoxExtents;                                      // 0x00C0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     ActivationBoxLocalSpaceOffset;                             // 0x00CC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     LocalSpaceWallGrabLocationOffset;                          // 0x00D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_T1MK[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      WallGrabCommandActionClass;                                // 0x00E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UClass*>                              NoWallGrabStates;                                          // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	class ACharacter*                                  CharacterOwner;                                            // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                               BoxComponent;                                              // 0x0108(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommandQueueComponent*                      CommandQueueComponent;                                     // 0x0110(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZenithInputComponent*                       InputComponent;                                            // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_81XH[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.WallGrabComponent");
		return ptr;
	}



	void OnWallGrab();
	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsGrabingWall();
};

// Class Zenith.WorldLoaderSubsystem
// 0x0398 (FullSize[0x03C8] - InheritedSize[0x0030])
class UWorldLoaderSubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_MN7U[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LevelToLoad;                                               // 0x0070(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bLoadLevelAsync;                                           // 0x0080(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_59V1[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       PlayerStartTag;                                            // 0x0084(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bProcessingLoad;                                           // 0x008C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bWaitingFade;                                              // 0x008D(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRequestPersistentGameMapLoad;                             // 0x008E(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8SQJ[0x9];                                     // 0x008F(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SaveFadeClass;                                             // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       SaveGameMapIDToLoad;                                       // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameMapData                                SavedGameMapDataToLoad;                                    // 0x00A8(0x0130) (Transient, NativeAccessSpecifierPrivate)
	struct FName                                       CurrentGameMapID;                                          // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameMapData                                CurrentGameMapData;                                        // 0x01E0(0x0130) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQMA[0x8];                                     // 0x0310(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ULevelStreamingDynamic*>              CurrentGameLevels;                                         // 0x0318(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TMap<class APlayerController*, bool>               InputSoftLockStates;                                       // 0x0328(0x0050) (Edit, EditConst, NativeAccessSpecifierPrivate)
	TMap<class APlayerController*, TWeakObjectPtr<class AZenithCharacter>> InputSoftLockedCharacters;                                 // 0x0378(0x0050) (Edit, EditConst, UObjectWrapper, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.WorldLoaderSubsystem");
		return ptr;
	}



	void UnpossessAllPlayers();
	void SwitchGameMap_UnloadAndLoad();
	void SwitchGameMap_RestoreGame();
	void SwitchGameMap_PostFadeOut();
	void SwitchGameMap_PostFadeIn();
	void SwitchGameMap_Finalize();
	void SwitchGameMap(const struct FDataTableRowHandle& GameMapHandle, class UClass* FadeOutClass, class UClass* FadeInClass, const struct FName& NextPlayerStartTag);
	void ProcessLevelTravel(const struct FString& WorldToLoad, bool bAsync);
	void OpenLevelInternal(const struct FString& WorldToLoad, class UClass* FadeClass, bool bAsync, const struct FName& NextPlayerStartTag);
	void OpenLevelAsync(const struct FString& WorldToLoad, class UClass* FadeClass, const struct FName& NextPlayerStartTag);
	void OpenLevelAssetAsync(class UClass* FadeClass, const struct FName& NextPlayerStartTag);
	void OpenLevelAsset(class UClass* FadeClass, const struct FName& NextPlayerStartTag);
	void OpenLevel(const struct FString& WorldToLoad, class UClass* FadeClass, const struct FName& NextPlayerStartTag);
	void OpenGameMap(const struct FDataTableRowHandle& GameMapHandle, class UClass* FadeOutClass, class UClass* FadeInClass, const struct FName& NextPlayerStartTag);
	void OnPostWorldCleanup(class UWorld* World, bool bSessionEnded, bool bCleanupResources);
	void OnLevelStreamingDynamicLoaded();
	void OnFadeFinished();
	bool IsLoading(bool bConsiderFadeAsLoading);
	bool IsGameMapReady(bool bConsiderFadeAsLoading);
	struct FName GetPlayerStartTag();
	struct FName GetCurrentGameMapID();
	struct FGameMapData GetCurrentGameMapData();
};

// Class Zenith.ZenithAIBaseController
// 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
class AZenithAIBaseController : public AAIController
{
public:
	class UBehaviorTree*                               BehaviourTree;                                             // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithAIBaseController");
		return ptr;
	}



	void StopAllLogic();
	void ResumeLogic();
	void RestartLogic();
	void PauseLogic();
};

// Class Zenith.ZenithAICompanionController
// 0x0068 (FullSize[0x03A0] - InheritedSize[0x0338])
class AZenithAICompanionController : public AZenithAIBaseController
{
public:
	struct FVector                                     TargetAreaExtents;                                         // 0x0338(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KYZ3[0x4];                                     // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ForbidIdleStates;                                          // 0x0348(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8ZNX[0x48];                                    // 0x0358(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithAICompanionController");
		return ptr;
	}



	void SetLeaderController(class AController* NewLeaderController);
	void ResetStateAndLocation();
	void OnLeaderPawnChange();
	class APawn* GetLeaderPawn();
};

// Class Zenith.ZenithAIController
// 0x0028 (FullSize[0x0360] - InheritedSize[0x0338])
class AZenithAIController : public AZenithAIBaseController
{
public:
	class UParameterEnemyComponent*                    ParameterEnemyComponent;                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoActivate;                                             // 0x0340(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EFaction                                    Faction;                                                   // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7297[0xE];                                     // 0x0342(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTree*                               BehaviourTree_NGPlus;                                      // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C2KI[0x8];                                     // 0x0358(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithAIController");
		return ptr;
	}



	void OnPawnDeathEvent();
	void OnPawnDeath();
	void OnChangeTarget(class AActor* NewTarget);
	void OnActivate();
	bool IsActive();
	struct FName GetSpawnLocationBlackboardKey();
	class AZenithCharacter* GetControlledCharacter();
	void Activate();
};

// Class Zenith.ZenithCableComponent
// 0x0000 (FullSize[0x0500] - InheritedSize[0x0500])
class UZenithCableComponent : public UCableComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithCableComponent");
		return ptr;
	}



};

// Class Zenith.ZenithCharacter
// 0x0208 (FullSize[0x06C0] - InheritedSize[0x04B8])
class AZenithCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_6BNF[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	class UZenithCharacterMovementComponent*           ZenithCharacterMovement;                                   // 0x04C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActorComponent*>                     TickPrerequisiteControllerComponents;                      // 0x04C8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct FCharacterInfosData                         CharacterInfosData;                                        // 0x04D8(0x0020) (Transient, NativeAccessSpecifierPrivate)
	class AEnemySpawnPoint*                            SourceSpawnPoint;                                          // 0x04F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7D5N[0x8];                                     // 0x0500(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastAttackerDirection;                                     // 0x0508(0x000C) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GIBH[0x4];                                     // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         CharacterInfos;                                            // 0x0518(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UCommandQueueComponent*                      CommandQueueComponent;                                     // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStateComponent*                             StateComponent;                                            // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFactionComponent*                           FactionComponent;                                          // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UZenithInputComponent*                       ZenithInputComponent;                                      // 0x0540(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDeathComponent*                             DeathComponent;                                            // 0x0548(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHPComponent*                                HPComponent;                                               // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMPComponent*                                MPComponent;                                               // 0x0558(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaminaComponent*                           StaminaComponent;                                          // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStunComponent*                              StunComponent;                                             // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocomotionComponent*                        LocomotionComponent;                                       // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJustGuardDelegate;                                       // 0x0578(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGotJustGuardedDelegate;                                  // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnJustDodgeDelegate;                                       // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGotJustDodgedDelegate;                                   // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnParryDelegate;                                           // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGotParriedDelegate;                                      // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDamagedEnemyDelegate;                                    // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKilledEnemyDelegate;                                     // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRespawnDelegate;                                         // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommandSet*                                 CommandSet;                                                // 0x0608(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommandSet*                                 RuntimeCommandSet;                                         // 0x0610(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLanding;                                                 // 0x0618(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHookStarted;                                             // 0x0628(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWallgrabStarted;                                         // 0x0638(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBreakWaterSurfaceDelegate;                               // 0x0648(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPossessed;                                               // 0x0658(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnpossessed;                                             // 0x0668(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameMapSwitchDelegate;                                   // 0x0678(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAptitudeUnlocked;                                        // 0x0688(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEventStartDelegate;                                      // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEventStopDelegate;                                       // 0x06A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RDHM[0x8];                                     // 0x06B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithCharacter");
		return ptr;
	}



	void UnlockInput();
	void TriggerHookStart();
	void SetPhysicsVolume(class APhysicsVolume* NewVolume);
	void SetLastAttackerDirection(const struct FVector& NewAttackerDirection);
	void SetClampedInCamera(bool bClamped);
	void Sample(float DeltaTime);
	void Respawn();
	void OnWallGrab();
	void OnSubmerged();
	void OnRespawn();
	void OnParry(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker, bool bTriggerParryAbility);
	void OnJustGuard(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker);
	void OnJustDodge(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker);
	void OnGotParried(class AAbility* Ability, class AActor* Target);
	void OnGotJustGuarded(class AAbility* Ability, class AActor* Target);
	void OnGotJustDodged(class AAbility* Ability, class AActor* Target);
	void OnEventStop();
	void OnEventStart();
	void OnDeactivate();
	void OnBreakWaterSurface();
	void OnActivate();
	void LockInput();
	bool IsInputLocked();
	bool IsClampedInCamera();
	bool IsActivated();
	class UZenithCharacterMovementComponent* GetZenithCharacterMovement();
	class AEnemySpawnPoint* GetSourceSpawnPoint();
	class UCommandSet* GetRuntimeCommandSet();
	class UParameterComponent* GetParameterComponent();
	struct FVector GetLastAttackerDirection(bool bIgnoreZ);
	class USceneComponent* GetHomingTarget();
	struct FCharacterInfosData GetCharacterInfosData();
	class USceneComponent* GetCameraFocusTarget();
	void Deactivate(bool bForce);
	void ClearPhysicsVolume();
	void Activate();
};

// Class Zenith.ZenithCharacterEvent
// 0x0018 (FullSize[0x04D0] - InheritedSize[0x04B8])
class AZenithCharacterEvent : public ACharacter
{
public:
	class UZenithInputComponent*                       ZenithInputComponent;                                      // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULocomotionComponent*                        LocomotionComponent;                                       // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7S7H[0x8];                                     // 0x04C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithCharacterEvent");
		return ptr;
	}



};

// Class Zenith.ZenithCharacterMovementComponent
// 0x00A0 (FullSize[0x0BA0] - InheritedSize[0x0B00])
class UZenithCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	bool                                               bClampInWater;                                             // 0x0B00(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JOPX[0x7];                                     // 0x0B01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZenithCharacter*                            ZenithCharacter;                                           // 0x0B08(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x0B10(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocomotionComponent*                        LocomotionComponent;                                       // 0x0B18(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CJZ9[0x58];                                    // 0x0B20(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxRunSpeed;                                               // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDashSpeed;                                              // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DashAcceleration;                                          // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImmersionDepthForOutOfWater;                               // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxZVelocityForStickingToWaterSurface;                     // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinImmersionDepthForStickingToWaterSurface;                // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxImmersionDepthForStickingToWaterSurface;                // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOffsetForStickingToWaterSurface;                     // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSlideAlongUnderwaterSurfaces;                             // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YTMK[0x7];                                     // 0x0B99(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithCharacterMovementComponent");
		return ptr;
	}



	void TraceJump(const struct FVector& Input, const struct FLinearColor& Color, float LifeTime);
	void SetWalkMode(Zenith_EWalkMode NewWalkMode);
	void SetCustomPhysicsVolume(class ACustomPhysicsVolume* NewCustomPhysicsVolume);
	void SetClampedInCamera(bool bClamped);
	void SetClampedInArea(bool bClamped);
	void SetClampArea(const struct FVector& NewClampAreaMin, const struct FVector& NewClampAreaMax);
	void OnStateRemoved();
	void OnStateAdded();
	void OnGameMapSwitch();
	void OnEventStop();
	void OnEventStart();
	bool IsClampedInCamera();
	bool IsClampedInArea();
	float GetWaterImmersionDepth(bool bForceRecompute);
	Zenith_EWalkMode GetWalkMode();
	float GetTimeSinceLastWallGrab();
	float GetTimeSinceLastGround();
	struct FVector GetLastNonFallingLocation();
	bool GetJumpTimeForZTarget(float ZTarget, float* out_ResultA, float* out_ResultB);
	class ACustomPhysicsVolume* GetCustomPhysicsVolume();
	struct FVector ComputeLaunchVelocityToDestination(const struct FVector& DestinationLocation, float Duration);
	void ClearCustomPhysicsVolume();
	bool CanReachTargetByJump(const struct FVector& TargetLocation, bool bDrawDebug);
};

// Class Zenith.ZenithCharacterPreview
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AZenithCharacterPreview : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithCharacterPreview");
		return ptr;
	}



	void Show();
	void Hide();
};

// Class Zenith.ZenithCompanionCharacter
// 0x01F8 (FullSize[0x06B0] - InheritedSize[0x04B8])
class AZenithCompanionCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_164M[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	class USceneComponent*                             FXHolder;                                                  // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineSkeletonRendererComponent*             SkeletonComponent;                                         // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineSkeletonAnimationComponent*            SkeletonAnimComponent;                                     // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineAnimationComponent*                    SpineAnimationComponent;                                   // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DefaultMoveSpeed;                                          // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RotationSpeed;                                             // 0x04E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RangeForSpeedBonus;                                        // 0x04E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     IdleLocationOffset;                                        // 0x04EC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_07KO[0x198];                                   // 0x04F8(0x0198) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnEventStartDelegate;                                      // 0x0690(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnEventStopDelegate;                                       // 0x06A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithCompanionCharacter");
		return ptr;
	}



	void SetMoveTargetWithTime(class AActor* Target, const struct FVector& Offset, float TimeToReachTarget, bool bShowSpineOnArrival, bool bSpineFacingRight);
	void SetMoveTarget(class AActor* Target, const struct FVector& Offset, bool bShowSpineOnArrival, bool bSpineFacingRight);
	void SetMoveSpeed(float NewMoveSpeed);
	void SetActive(bool bActive);
	void ResetMoveSpeed();
	void OnShowSpine();
	void OnSetTranslucencyPriority(int Priority);
	void OnSetMeshComponentsHiddenInGame(bool bHiddenInGame);
	void OnSetAssociatedSpiritData();
	void OnSetAlpha(float Alpha);
	void OnLeaderPawnChanged(class APawn* NewLeaderPawn);
	void OnHideSpine();
	void OnEventStop();
	void OnEventStart();
	void OnDeactivate();
	void OnArrivedAtTarget();
	void OnActivate();
	void NotifySpineVisible();
	void NotifySpineHidden();
	bool IsActive();
	void HideSpine();
	Zenith_ECompanionState GetCurrentState();
	void GetAssociatedSpiritData(Zenith_ECommandInputTypes* CommandInputType, class UCommandSettingsData** CommandSettingsData, struct FItemSpiritData* ItemSpiritData);
};

// Class Zenith.ZenithInputComponent
// 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
class UZenithInputComponent : public UActorComponent
{
public:
	class APawn*                                       PawnOwner;                                                 // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FInputSnapshot                              NextInputSnapshot;                                         // 0x00B8(0x0028) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FInputSnapshot                              InputSnapshot;                                             // 0x00E0(0x0028) (Transient, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OIYL[0x4];                                     // 0x0108(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinInputForDirectionType;                                  // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_56ZR[0x8];                                     // 0x0110(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithInputComponent");
		return ptr;
	}



	struct FInputSnapshot GetInputSnapshot();
};

// Class Zenith.ZenithLevelSequenceActor
// 0x0000 (FullSize[0x02A0] - InheritedSize[0x02A0])
class AZenithLevelSequenceActor : public ALevelSequenceActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithLevelSequenceActor");
		return ptr;
	}



	void SetOrigin(const struct FTransform& Origin);
	class UZenithLevelSequencePlayer* GetZenithSequencePlayer();
};

// Class Zenith.ZenithLevelSequencePlayer
// 0x0038 (FullSize[0x07D0] - InheritedSize[0x0798])
class UZenithLevelSequencePlayer : public ULevelSequencePlayer
{
public:
	class AActor*                                      CurrCameraActor;                                           // 0x0798(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LY5K[0x30];                                    // 0x07A0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithLevelSequencePlayer");
		return ptr;
	}



	class UZenithLevelSequencePlayer* STATIC_CreateZenithLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* InLevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class AZenithLevelSequenceActor** OutActor, const struct FViewTargetTransitionParams& BlendInParams, const struct FViewTargetTransitionParams& BlendOutParams);
};

// Class Zenith.ZenithPathFollowingComponent
// 0x0040 (FullSize[0x0290] - InheritedSize[0x0250])
class UZenithPathFollowingComponent : public UPathFollowingComponent
{
public:
	bool                                               bUseQuadraticBezier;                                       // 0x0250(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GW01[0x3];                                     // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BezierControlPointDistance;                                // 0x0254(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BezierMinHeightBetweenPoints;                              // 0x0258(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IGI0[0x4];                                     // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZenithCharacter*                            ZenithCharacter;                                           // 0x0260(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J8DB[0x28];                                    // 0x0268(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithPathFollowingComponent");
		return ptr;
	}



};

// Class Zenith.ZenithPlayerController
// 0x01D0 (FullSize[0x0740] - InheritedSize[0x0570])
class AZenithPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData_CAGS[0x18];                                    // 0x0570(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInventoryComponent*                         InventoryComponent;                                        // 0x0588(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParameterPlayerComponent*                   ParameterPlayerComponent;                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpiritEquipComponent*                       SpiritEquipComponent;                                      // 0x0598(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpiritCompanionComponent*                   SpiritCompanionComponent;                                  // 0x05A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHealComponent*                              HealComponent;                                             // 0x05A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPassiveEquipComponent*                      PassiveEquipComponent;                                     // 0x05B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeath;                                                   // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPawnChangedDelegate;                                     // 0x05C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnGameMapSwitchDelegate;                                   // 0x05D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOpenNewWorldDelegate;                                    // 0x05E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOpenNewAreaDelegate;                                     // 0x05F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSimulatedInputChanged;                                   // 0x0608(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAptitudeUnlockedDelegate;                                // 0x0618(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AZenithCharacter*                            ZenithCharacter;                                           // 0x0628(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      DefaultViewTarget;                                         // 0x0630(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                         DefaultGameMap;                                            // 0x0638(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	struct FName                                       DefaultPlayerStartTag;                                     // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRespawnPointData                           RespawnPointData;                                          // 0x0650(0x0010) manually found
	unsigned char                                      UnknownData_AEUG[0x8];                                     // 0x0660(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Zenith_EAptitudeType>                       UnlockedAptitudes;                                         // 0x0668(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               OpenedWorlds;                                              // 0x0678(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               OpenedAreas;                                               // 0x0688(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnEventStartDelegate;                                      // 0x0698(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnEventStopDelegate;                                       // 0x06A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	bool                                               bInEvent;                                                  // 0x06B8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_XNAH[0x7];                                     // 0x06B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               PlayedEvents;                                              // 0x06C0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               PreviousRunsPlayedEvents;                                  // 0x06D0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               SeenTutorials;                                             // 0x06E0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               RecollectionCheckedIDs;                                    // 0x06F0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)
	int                                                MinimapUISizeIndex;                                        // 0x0700(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_97C6[0x4];                                     // 0x0704(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         FastTravel_GameMapHandle;                                  // 0x0708(0x0010) (Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate)
	struct FName                                       FastTravel_PlayerStartTag;                                 // 0x0718(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                LockInputCount;                                            // 0x0720(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                LockPauseCount;                                            // 0x0724(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2YEM[0x8];                                     // 0x0728(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USlowMotionAsyncAction*>              RunningSlowMotionActions;                                  // 0x0730(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithPlayerController");
		return ptr;
	}



	void UnlockAllAptitudes();
	void SetSimulatedInput(const struct FVector2D& SimulatedInput);
	void SetRespawnPointData(class APlayerStart* RespawnPoint);
	void SetNextFastTravelDestination(const struct FDataTableRowHandle& GameMapID);
	void SetMinimapUISizeIndex(int NewMinimapUISizeIndex);
	void SetDefaultViewTarget(class AActor* DefaultViewTarget);
	void OnUnlockAptitude(Zenith_EAptitudeType AptitudeType);
	void OnSwitchGameMapStart();
	void OnPawnRespawn();
	void OnPawnDeathEvent();
	void OnPawnChanged();
	void OnOpenNewWorld(const struct FGameMapData& GameMapData);
	void OnOpenNewArea(const struct FAreaData& AreaData);
	void OnNoClampVolumeWarning();
	void OnGameMapSwitch();
	void OnGameMapReadyPostFade();
	void OnGameMapReady();
	void OnGameDataLoaded();
	void OnEventStopped(class UEventAsset* EventAsset);
	void OnEventStarted(class UEventAsset* EventAsset);
	void OnControllerDisconnected();
	void OnControllerConnected();
	void OnAptitudeItemRemoved(const struct FInventoryBaseItemData& InventoryAptitudeItem);
	void OnAptitudeItemAdded(const struct FInventoryBaseItemData& InventoryAptitudeItem);
	void OnApplicationWillDeactivate(bool bApplicationWillBeSuspended);
	void OnAchievementUnlocked(Zenith_EZenithAchievement Achievement);
	void MarkTutorialAsSeen(const struct FName& TutorialID);
	void MarkRecollectionItemAsChecked(const struct FName& RecollectionItemID);
	void MarkGameMapAsOpen(const struct FName& GameMapID, const struct FGameMapData& GameMapData);
	bool IsTutorialAlreadySeen(const struct FName& TutorialID);
	bool IsSoftEventAssetAlreadyPlayed();
	bool IsRecollectionItemAlreadyChecked(const struct FName& RecollectionItemID);
	bool IsNextFastTravelDestinationSet();
	bool IsInputLocked();
	bool IsInEvent();
	bool IsGameMapOpen(const struct FName& GameMapID);
	bool IsFastTravelOpen();
	bool IsEventAlreadyPlayed(const struct FName& EventName, bool bCheckPreviousGameGeneration);
	bool IsAptitudeUnlocked(Zenith_EAptitudeType Aptitude);
	class AZenithPlayerController* STATIC_GetZenithPlayerController(class UObject* WorldContextObject, int PlayerIndex);
	struct FVector2D GetSimulatedInput();
	struct FRespawnPointData GetRespawnPointData();
	TArray<struct FName> GetOpenedGameMaps();
	int GetMinimapUISizeIndex();
	class APawn* GetLastPawn();
	class AActor* GetDefaultViewTarget();
	void FullyRestore(class APawn* PawnToRestore);
	void ExecuteFastTravel(class UClass* FadeOutClass, class UClass* FadeInClass);
	void ClearSimulatedInput();
	void ClearFastTravelDestination();
	bool CanPlayerUseBackToRestPoint();
};

// Class Zenith.ZenithPlayerStart
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class AZenithPlayerStart : public APlayerStart
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithPlayerStart");
		return ptr;
	}



	void OnPlayerRespawn(class APlayerController* PlayerController, class APawn* Pawn);
};

// Class Zenith.ZenithSpirit
// 0x0118 (FullSize[0x05D0] - InheritedSize[0x04B8])
class AZenithSpirit : public ACharacter
{
public:
	class UCommandQueueComponent*                      CommandQueueComponent;                                     // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStateComponent*                             StateComponent;                                            // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFactionComponent*                           FactionComponent;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityComponent*                           AbilityComponent;                                          // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitStopComponent*                           HitStopComponent;                                          // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UZenithInputComponent*                       ZenithInputComponent;                                      // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocomotionComponent*                        LocomotionComponent;                                       // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSpiritAppearDelegate;                                    // 0x04F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSpiritDisappearDelegate;                                 // 0x0500(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bUnsummonOnMapSwitch;                                      // 0x0510(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUnsummonOnSpiritSwim;                                     // 0x0511(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUnsummonOnSummonerSwim;                                   // 0x0512(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HKH3[0x5];                                     // 0x0513(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCharacterMovementComponent*                 MovementComponent;                                         // 0x0518(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_J3EG[0xB0];                                    // 0x0520(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ZenithSpirit");
		return ptr;
	}



	void StopCurrentCommand();
	void ResetLocation();
	void OnSummonerMovementModeChanged(class ACharacter* Character, TEnumAsByte<Engine_EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void OnSummonerCommandsCleared();
	void OnStartCommand(class UCommandAction* CommandAction);
	void OnSourceCommandReachedCastLimit();
	void OnSoftDisappear();
	void OnResetLocation();
	void OnEndCommand(class UCommandAction* CommandAction, Zenith_ECommandRemoveTypes RemoveType);
	void OnDisappear();
	void OnCommandAdded();
	void OnAppear();
	bool IsActive();
	class APawn* GetSummoner();
	float GetAttackFactor();
	void ForceDisappear();
	void Disappear(bool bForce);
	bool CanStartCommandAction(class APawn* ActionSummoner);
	void Appear();
	void AddAttackToken();
};

// Class Zenith.GameplayCamera
// 0x0260 (FullSize[0x0A00] - InheritedSize[0x07A0])
class AGameplayCamera : public ACameraActor
{
public:
	float                                              InputMoveLerpSpeed;                                        // 0x07A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              InputMoveRadius;                                           // 0x07A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VKTU[0x78];                                    // 0x07A8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TWeakObjectPtr<class AController>>          PlayerControllerTargets;                                   // 0x0820(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AController>>          AllyAIControllerTargets;                                   // 0x0830(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AController>>          EnemyControllerTargets;                                    // 0x0840(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AActor>>               OtherTargets;                                              // 0x0850(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class APlayerCameraManagerZenithBase*              CameraManager;                                             // 0x0860(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ME00[0x70];                                    // 0x0868(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayCameraSettings                     CurrentSettings;                                           // 0x08D8(0x0078) (BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCameraSettings                     DefaultSettings;                                           // 0x0950(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CIXP[0x4];                                     // 0x09C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayCameraOverrideSettings             DefaultOverrideSettings;                                   // 0x09CC(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J7MM[0x4];                                     // 0x09D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayCameraOverrideSettings>     OverrideSettingsList;                                      // 0x09D8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FGameplayCameraOverrideSettings             BlendStartOverrideSettings;                                // 0x09E8(0x0008) (Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayCameraOverrideSettings             CurrOverrideSettings;                                      // 0x09F0(0x0008) (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7316[0x8];                                     // 0x09F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameplayCamera");
		return ptr;
	}



	void UnregisterEnemyControllers(TArray<class AController*> EnemyControllersToRemove);
	void UnregisterEnemyController(class AController* EnemyControllerToRemove);
	void UnregisterAllyController(class AController* AllyControllerToRemove);
	void SetSettings(const struct FGameplayCameraSettings& NewSettings);
	void SetBlendSpeedFactor(float NewBlendSpeedFactor);
	void ResetCameraLocation();
	void RemoveOverrideSettings(int OverrideSettingsID, float BlendTime);
	void RegisterEnemyControllers(TArray<class AController*> EnemyControllersToAdd);
	void RegisterEnemyController(class AController* EnemyControllerToAdd);
	void RegisterAllyController(class AController* AllyControllerToAdd);
	void OnViewportResized();
	struct FVector GetOffsetFromPlayerFeet();
	float GetFOV();
	struct FVector GetCurrentMin();
	struct FVector GetCurrentMax();
	struct FVector GetCurrentCenter();
	void GetBorderLocationsAtDist(float DistFromCamera, struct FVector* LeftBorderLocation, struct FVector* RightBorderLocation);
	void GetBorderLocationsAtAbsoluteX(float AbsoluteX, struct FVector* LeftBorderLocation, struct FVector* RightBorderLocation);
	float GetBlendSpeedFactor();
	void ClearSettings();
	int AddOverrideSettings(const struct FGameplayCameraOverrideSettings& NewOverrideSettings, float BlendTime);
};

// Class Zenith.GameSettingsSubsystem
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UGameSettingsSubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnGameSettingsSaved;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDisplayPlayerUIChanged;                                  // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDisplayEnemyFloatingGaugesChanged;                       // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEnableDamageAreaPostProcessChanged;                      // 0x0060(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CVL2[0x28];                                    // 0x0070(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameSettingsSubsystem");
		return ptr;
	}



	bool SetUseForceFeedback(bool bUseForceFeedback);
	bool SetUseCameraShake(bool bUseCameraShake);
	float SetResolutionScale(float NewResolutionScale);
	bool SetNoAutoClimbWhilePressingDown(bool bNoAutoClimbWhilePressingDown);
	bool SetHoldForSummonSetSwitch(bool bSetHoldForSummonSetSwitch);
	float SetGammaPercentage(float GammaPercentage);
	float SetGamma(float NewGamma);
	void SetGameEndingReached(Zenith_EGameEndingType GameEndingType);
	bool SetEnableDamageAreaPostProcess(bool bEnableDamageAreaPostProcess);
	bool SetDisplayPlayerUI(bool bDisplayPlayerUI);
	bool SetDisplayInternalAchievementNotifications(bool bDisplayNotifications);
	bool SetDisplayHealValues(bool bDisplayHealValues);
	bool SetDisplayEnemyFloatingGauges(bool bDisplayEnemyFloatingGauges);
	bool SetDisplayDamageValues(bool bDisplayDamageValues);
	void ResetVideoSettingsToDefault();
	void ResetGameSettingsToDefault();
	bool GetUseForceFeedback();
	bool GetUseCameraShake();
	float GetResolutionScale();
	bool GetNoAutoClimbWhilePressingDown();
	bool GetHoldForSummonSetSwitch();
	float GetGammaPercentage();
	float GetGamma();
	bool GetEnableDamageAreaPostProcess();
	bool GetDisplayPlayerUI();
	bool GetDisplayInternalAchievementNotifications();
	bool GetDisplayHealValues();
	bool GetDisplayEnemyFloatingGauges();
	bool GetDisplayDamageValues();
	bool DidReachGameEnding(Zenith_EGameEndingType GameEndingType);
};

// Class Zenith.GameStateZenithBase
// 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
class AGameStateZenithBase : public AGameStateBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameStateZenithBase");
		return ptr;
	}



};

// Class Zenith.GameStatsComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UGameStatsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_JLDQ[0x20];                                    // 0x00B0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameStatsComponent");
		return ptr;
	}



	struct FString GetPlayTimeAsString();
	float GetPlayTime();
};

// Class Zenith.GameViewportZenithBase
// 0x0140 (FullSize[0x04A0] - InheritedSize[0x0360])
class UGameViewportZenithBase : public UGameViewportClient
{
public:
	struct FScriptMulticastDelegate                    OnLockActiveControllerID;                                  // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnlockActiveControllerID;                                // 0x0370(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInputDeviceChangedDelegate;                              // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerIDChangedDelegate;                             // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerControllerConnected;                               // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPlayerControllerDisconnected;                            // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerConnectionChanged;                             // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnApplicationDeactivatedDelegate;                          // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnApplicationReactivatedDelegate;                          // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKeyDownDelegate;                                         // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOverlayRenderOpacityChanged;                             // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FELO[0x90];                                    // 0x0410(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GameViewportZenithBase");
		return ptr;
	}



	void UnlockActiveController(bool bResetLockCount);
	void SetViewportOverlayWidgetVisible(bool bVisible);
	void SetViewportOverlayRenderOpacity(float Opacity);
	void OnReceivedFocus();
	void OnMouseMoveBP(const struct FPointerEvent& MouseEvent);
	void OnMouseDownBP(const struct FPointerEvent& MouseEvent);
	void OnKeyDownBP(const struct FKeyEvent& InKeyEvent);
	void OnInputDeviceChanged();
	void OnControllerIDChanged(int OldControllerID, int NewControllerID);
	void OnControllerDisconnected(int ControllerId);
	void OnControllerConnected(int ControllerId);
	void OnApplicationReactivated();
	void OnApplicationDeactivated();
	void LockActiveController();
	bool IsUsingGamepad();
	bool IsGamepadAttached();
	bool IsActiveControllerLocked();
	bool IsActiveControllerIDSet();
	bool IsActiveControllerConnected();
	class UGameViewportZenithBase* STATIC_GetGameViewportZenith();
	int GetActiveControllerID();
	void DelayedSetFocusToHighestWidget();
};

// Class Zenith.GetItemTrigger
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGetItemTrigger : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.GetItemTrigger");
		return ptr;
	}



	void OnGetItem(class AController* Controller, const struct FDataTableRowHandle& Item);
};

// Class Zenith.HealComponent
// 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
class UHealComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnUseHealDelegate;                                         // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnRestoreHealDelegate;                                     // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFullyRestoreHealsDelegate;                               // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHealCountLevelChangedDelegate;                           // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHealCountChangedDelegate;                                // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHealPowerLevelChangedDelegate;                           // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                MaxHealCountLevel;                                         // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxHealPowerLevel;                                         // 0x0114(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                HealCountBonus;                                            // 0x0118(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HealPowerPercentageBonus;                                  // 0x011C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_USZ5[0x30];                                    // 0x0120(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.HealComponent");
		return ptr;
	}



	void UseHeal();
	float SubHealPowerPercentageBonus(float HealPercentBonusToSub);
	int SubHealCountBonus(int HealCountBonusToSub);
	int SetHealPowerLevel(int NewHealPowerLevel);
	int SetHealCountLevel(int NewHealCountLevel);
	bool RestoreHeal();
	void PlayerCantHealChanged();
	bool IsHealCountMax();
	int GetRemainingHealCount();
	int GetMaxHealPowerLevel();
	int GetMaxHealCount();
	int GetHealValue();
	int GetHealPowerLevel();
	int GetHealCountLevel();
	bool FullyRestoreHeals();
	float AddHealPowerPercentageBonus(float HealPercentBonusToAdd);
	void AddHealPowerLevel();
	void AddHealCountLevel();
	int AddHealCountBonus(int HealCountBonusToAdd);
};

// Class Zenith.HitStopComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UHitStopComponent : public UActorComponent
{
public:
	float                                              HitStopFactor;                                             // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_X6SW[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              AdditionalHitStopStates;                                   // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JBW7[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpineSkeletonAnimationComponent*            SpineAnimComponent;                                        // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovementComponent*                          MovementComponent;                                         // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnHitStopStart;                                            // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHitStopEnd;                                              // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.HitStopComponent");
		return ptr;
	}



	void LaunchHitStop(float HitStopDuration);
	bool IsInHitStop();
	float GetHitStopFactor();
};

// Class Zenith.HomingComponent
// 0x0070 (FullSize[0x0160] - InheritedSize[0x00F0])
class UHomingComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData_SWLH[0x34];                                    // 0x00F0(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialSpeed;                                              // 0x0124(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              Acceleration;                                              // 0x0128(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxSpeed;                                                  // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              InitialAngularSpeed;                                       // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AngularAcceleration;                                       // 0x0134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxAngularSpeed;                                           // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AngularSpeedForStraightToTarget;                           // 0x013C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRotationFollowVelocity;                                   // 0x0140(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E37H[0x3];                                     // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InitialForwardDeviation;                                   // 0x0144(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              AutoStopHomingDelay;                                       // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RangeForTargetReach;                                       // 0x014C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnTargetReached;                                           // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.HomingComponent");
		return ptr;
	}



	void SetTarget(class USceneComponent* SceneComponent);
	class USceneComponent* GetTarget();
	bool DidReachTarget();
};

// Class Zenith.HookComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class UHookComponent : public UActorComponent
{
public:
	class USphereComponent*                            SphereComponent;                                           // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SphereRadius;                                              // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MinHookDistance;                                           // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bIgnoreHookPointBelowActor;                                // 0x00C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7IUT[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HookPointBelowActorDistanceWeightMultiplier;               // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Zenith_EAptitudeType                               NecessaryAptitude;                                         // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_INNK[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacter*                                  CharacterOwner;                                            // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZenithInputComponent*                       InputComponent;                                            // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class AHookPoint>>           HookPoints;                                                // 0x00E0(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class AHookPoint>                   CurrentHookPoint;                                          // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CS73[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.HookComponent");
		return ptr;
	}



	void UnlockHook();
	void OnUnlockHook(class AHookPoint* HookPoint);
	void OnUnlockAptitude();
	void OnLockHook(class AHookPoint* HookPoint);
	void OnHookChanged();
	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void LockCurrentHook();
	class AHookPoint* GetCurrentHookPoint();
};

// Class Zenith.HookPoint
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class AHookPoint : public AActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                        // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USphereComponent*                            SphereComponent;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.HookPoint");
		return ptr;
	}



	void OnHookPointUsed(class AZenithCharacter* UsingCharacter);
	void NotifyHookPointUsed(class AZenithCharacter* UsingCharacter);
	struct FTransform GetHookTransform();
	struct FVector GetHookLocation();
	class USceneComponent* GetHookAttachComponent();
};

// Class Zenith.HPComponent
// 0x0078 (FullSize[0x0128] - InheritedSize[0x00B0])
class UHPComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnHPChanged;                                               // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeath;                                                   // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReceiveDamage;                                           // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReceiveHeal;                                             // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMaxHPChanged;                                            // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              DamageNullifyingStates;                                    // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	int                                                MaxHP;                                                     // 0x0110(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                CurrHP;                                                    // 0x0114(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x0118(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFactionComponent*                           FactionComponent;                                          // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.HPComponent");
		return ptr;
	}



	void SetMaxHP(int NewMaxHP);
	void OnHeal(class AActor* From, int Heal);
	void OnDamage(class AActor* From, int Damage);
	bool IsNullifyingDamage();
	bool IsAlive();
	int GetMaxHP();
	float GetCurrHPRatio();
	int GetCurrHP();
	void FullyRestore();
	void DoHeal(class AActor* From, int Heal);
	void DoDamage(class AActor* From, int Damage, bool bJustGuarding, bool bGuarding);
};

// Class Zenith.HPCondition
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UHPCondition : public UComparisonCondition
{
public:
	float                                              ComparingValue;                                            // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TLER[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.HPCondition");
		return ptr;
	}



};

// Class Zenith.InputBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInputBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.InputBPFLibrary");
		return ptr;
	}



	void STATIC_SetInputModeUIOnlyForAllPlayers(class UObject* WorldContextObject, class UWidget* FocusTarget, Engine_EMouseLockMode MouseLockMode);
	void STATIC_SetInputModeGameOnlyForAllPlayers(class UObject* WorldContextObject);
	void STATIC_SetInputModeGameAndUIForAllPlayers(class UObject* WorldContextObject, class UWidget* FocusTarget, Engine_EMouseLockMode MouseLockModer, bool bHideCursorDuringCapture);
	void STATIC_SetAllUserFocus(class UWidget* Widget, SlateCore_EFocusCause FocusCause);
	bool STATIC_IsUIValidationKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUIPauseKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUINavigationUpKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUINavigationRightKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUINavigationPrevPageKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUINavigationNextPageKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUINavigationLeftKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUINavigationDownKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUIMenuKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUIDebugKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUIContextKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsUICancelKey(class UObject* WorldContextObject, const struct FKey& Key);
	bool STATIC_IsRepeatKeyEvent(const struct FKeyEvent& KeyEvent);
	bool STATIC_IsRawInputTypeSet(const struct FInputSnapshot& InputSnapshot, Zenith_ECommandInputTypes CommandInputType);
	bool STATIC_IsCommandInputTypeSet(const struct FInputSnapshot& InputSnapshot, Zenith_ECommandInputTypes CommandInputType);
	struct FText STATIC_GetRichTextFromInputChord(const struct FInputChord& InputChord);
	struct FText STATIC_GetRichTextFromInputActionKeyMapping(const struct FInputActionKeyMapping& InputActionKeyMapping);
	struct FText STATIC_GetRichTextForUIKey(TArray<struct FKey> Keys, bool bRequestGamepad);
	struct FText STATIC_GetRichTextForAction(class UObject* WorldContextObject, const struct FName& ActionName, int PlayerIndex);
	struct FName STATIC_GetNameForCommandInputType(Zenith_ECommandInputTypes CommandInputType);
};

// Class Zenith.InputRichTextBlockImageDecorator
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UInputRichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	Zenith_ERichTextDecoratorMode                      DecoratorMode;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SATD[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Zenith_EInputStyle, class UDataTable*>        IconSets;                                                  // 0x0030(0x0050) (Edit, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.InputRichTextBlockImageDecorator");
		return ptr;
	}



};

// Class Zenith.ShakeComponent
// 0x0098 (FullSize[0x0148] - InheritedSize[0x00B0])
class UShakeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_4I5W[0x70];                                    // 0x00B0(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FComponentReference                         TargetComponent;                                           // 0x0120(0x0028) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ShakeComponent");
		return ptr;
	}



	void LaunchShake(const struct FShakeData& ShakeData);
};

// Class Zenith.ShieldComponent
// 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
class UShieldComponent : public URegenerativeParamComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ShieldComponent");
		return ptr;
	}



};

// Class Zenith.SlowMotionAsyncAction
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class USlowMotionAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_WJ9N[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SlowMotionAsyncAction");
		return ptr;
	}



	void Tick();
	class USlowMotionAsyncAction* STATIC_SlowMotion(class AZenithPlayerController* PlayerController, float TimeDilationTarget, float SlowMotionDurationInSec, float BlendInDuration, float BlendOutDuration);
};

// Class Zenith.SoundDataComponent
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class USoundDataComponent : public UActorComponent
{
public:
	Zenith_ESoundMaterial                              Material;                                                  // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CIKI[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SoundDataComponent");
		return ptr;
	}



	Zenith_ESoundMaterial GetMaterial();
};

// Class Zenith.InputSettingsSubsystem
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UInputSettingsSubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnInputStyleChanged;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnInputOverrideChanged;                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FActionBinding>          OverrideKeyBindingsForActions;                             // 0x0050(0x0050) (NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FAxisBinding>            OverrideKeyBindingsForAxises;                              // 0x00A0(0x0050) (NativeAccessSpecifierPrivate)
	Zenith_EInputStyle                                 InputStyle;                                                // 0x00F0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LH5P[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.InputSettingsSubsystem");
		return ptr;
	}



	void SetupOverride(class APlayerController* PlayerController);
	void SetInputStyle(Zenith_EInputStyle NewInputStyle);
	void SetAxisMappings(const struct FName& AxisName, TArray<struct FInputAxisKeyMapping> ActionMappings);
	void SetActionMappings(const struct FName& ActionName, TArray<struct FInputActionKeyMapping> ActionMappings);
	void RestoreDefaultBindings(Zenith_EBindingType BindingTypeToRestore);
	void RebuildKeymaps();
	void OverrideAxisMapping(const struct FName& AxisName, const struct FInputChord& InputChord, float AxisScale, bool bGamepad);
	void OverrideActionMapping(const struct FName& ActionName, const struct FInputChord& InputChord, bool bGamepad);
	bool IsKeyMappedForAction(const struct FName& ActionName, const struct FKey& Key);
	bool HasAnyMouseBindings();
	TArray<struct FInputAxisKeyMapping> GetKeyMappingForAxis(const struct FName& AxisName, float ScaleSign);
	TArray<struct FInputActionKeyMapping> GetKeyMappingForAction(const struct FName& ActionName);
	Zenith_EInputStyle GetInputStyle();
	TArray<struct FInputChord> GetInputChordsForAxis(const struct FName& AxisName, float ScaleSign);
	TArray<struct FInputChord> GetInputChordsForAction(const struct FName& ActionName);
	Zenith_EInputStyle GetDefaultInputStyle();
	void ActivateActionSet(Zenith_EInputActionSet ActionSet);
};

// Class Zenith.Interactable
// 0x0058 (FullSize[0x0278] - InheritedSize[0x0220])
class AInteractable : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnInteractDelegate;                                        // 0x0220(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMarkClearedDelegate;                                     // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UClearableComponent*                         ClearableComponent;                                        // 0x0240(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_W46O[0x4];                                     // 0x0248(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Zenith_EInteractableInputType                      InteractionInputType;                                      // 0x024C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Zenith_EInteractableFacingMode                     FacingMode;                                                // 0x024D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2OF4[0x2];                                     // 0x024E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       InteractionText;                                           // 0x0250(0x0018) (Edit, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_VXJI[0x10];                                    // 0x0268(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Interactable");
		return ptr;
	}



	bool TryMarkAsCleared();
	void SetFacingMode(Zenith_EInteractableFacingMode NewFacingMode);
	void OnTargetRemoveState();
	void OnTargetAddState();
	void OnReleaseInteract();
	void OnPressInteract();
	bool OnIsInteractable(class APlayerController* Controller);
	void OnInteractableAlreadyCleared();
	void OnInteract(class APlayerController* Controller);
	void OnInputOverrideChanged();
	void OnInputDeviceChanged();
	void OnDeactivateInteractable(class APlayerController* Controller);
	void OnClearedStatusChecked(bool bCleared);
	void OnActivateInteractable(class APlayerController* Controller);
	bool IsInteractableActive();
	bool IsInteractable(class APlayerController* Controller);
	struct FText GetInteractionText();
	class APlayerController* GetInteractingController();
	Zenith_EInteractableInputType GetInteractableInputType();
	void DeactivateInteractable(class APlayerController* Controller);
	bool CanBeMarkedAsCleared();
	void ActivateInteractable(class APlayerController* Controller);
};

// Class Zenith.InteractComponent
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class UInteractComponent : public UActorComponent
{
public:
	float                                              Radius;                                                    // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_O0CM[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              ForbiddenStates;                                           // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9O50[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            SphereComponent;                                           // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APawn*                                       PawnOwner;                                                 // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_S53Q[0x8];                                     // 0x0100(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.InteractComponent");
		return ptr;
	}



	void OnStartCommand(class UCommandAction* CommandAction);
	void OnEndCommand(class UCommandAction* CommandAction, Zenith_ECommandRemoveTypes RemoveType);
	void OnComponentOverlapEnd(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnComponentOverlapBegin(class UPrimitiveComponent* OverlapComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Zenith.InventoryComponent
// 0x00F0 (FullSize[0x01A0] - InheritedSize[0x00B0])
class UInventoryComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnAptitudeItemAddedDelegate;                               // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAptitudeItemRemovedDelegate;                             // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTipItemAddedDelegate;                                    // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCurrencyChanged;                                         // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCurrencyAdded;                                           // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCurrencySubtracted;                                      // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<Zenith_ECurrencyType, int>                    Currencies;                                                // 0x0110(0x0050) (Edit, EditConst, NativeAccessSpecifierPrivate)
	int                                                PassiveSlotCount;                                          // 0x0160(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PBBD[0xC];                                     // 0x0164(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UItemInventory*                              ItemGenericInventory;                                      // 0x0170(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UItemParameterInventory*                     ItemParameterInventory;                                    // 0x0178(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UItemSpiritInventory*                        ItemSpiritInventory;                                       // 0x0180(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UItemAptitudeInventory*                      ItemAptitudeInventory;                                     // 0x0188(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UItemPassiveInventory*                       ItemPassiveInventory;                                      // 0x0190(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UItemTipInventory*                           ItemTipInventory;                                          // 0x0198(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.InventoryComponent");
		return ptr;
	}



	int SpendCurrency(Zenith_ECurrencyType CurrencyType, int CurrencyToSpend);
	void OnTryAddSpiritItem(const struct FInventoryBaseItemData& ItemData);
	void OnTipItemAdded(const struct FInventoryBaseItemData& ItemData);
	void OnSpiritItemAdded(const struct FInventoryBaseItemData& ItemData);
	void OnPassiveItemAdded(const struct FInventoryBaseItemData& ItemData);
	void OnParameterItemAdded(const struct FInventoryBaseItemData& ItemData);
	void OnAptitudeItemRemoved(const struct FInventoryBaseItemData& ItemData);
	void OnAptitudeItemAdded(const struct FInventoryBaseItemData& ItemData);
	bool HasItem(const struct FDataTableRowHandle& ItemToAdd);
	class UItemTipInventory* GetItemTipInventory();
	class UItemSpiritInventory* GetItemSpiritInventory();
	class UItemPassiveInventory* GetItemPassiveInventory();
	class UItemParameterInventory* GetItemParameterInventory();
	class UItemInventory* GetItemGenericInventory();
	class UItemAptitudeInventory* GetItemAptitudeInventory();
	int GetCurrency(Zenith_ECurrencyType CurrencyType);
	bool AddItem(const struct FDataTableRowHandle& ItemToAdd);
	int AddCurrency(Zenith_ECurrencyType CurrencyType, int CurrencyToAdd);
};

// Class Zenith.ItemAptitudeInventory
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UItemAptitudeInventory : public UBaseInventory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ItemAptitudeInventory");
		return ptr;
	}



};

// Class Zenith.ItemInventory
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UItemInventory : public UBaseInventory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ItemInventory");
		return ptr;
	}



};

// Class Zenith.ItemParameterInventory
// 0x0000 (FullSize[0x00D0] - InheritedSize[0x00D0])
class UItemParameterInventory : public UBaseInventory
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ItemParameterInventory");
		return ptr;
	}



};

// Class Zenith.ItemPassiveInventory
// 0x0010 (FullSize[0x00E0] - InheritedSize[0x00D0])
class UItemPassiveInventory : public UBaseInventory
{
public:
	TArray<struct FName>                               PassiveCheckedList;                                        // 0x00D0(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ItemPassiveInventory");
		return ptr;
	}



	void MarkPassiveAsChecked(const struct FName& PassiveID);
	bool IsPassiveChecked(const struct FName& PassiveID);
	bool IsAllObtainedPassivesChecked();
};

// Class Zenith.ItemSpiritInventory
// 0x0070 (FullSize[0x0140] - InheritedSize[0x00D0])
class UItemSpiritInventory : public UBaseInventory
{
public:
	struct FScriptMulticastDelegate                    OnSpiritLevelChanged;                                      // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            SpiritLevels;                                              // 0x00E0(0x0050) (Edit, Transient, EditConst, NativeAccessSpecifierPrivate)
	TArray<struct FName>                               SpiritCheckedList;                                         // 0x0130(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ItemSpiritInventory");
		return ptr;
	}



	bool UnlockedAllSpirits();
	int SetSpiritLevel(const struct FName& SpiritID, int NewLevel);
	void MarkSpiritAsChecked(const struct FName& SpiritID);
	bool IsSpiritMaxLevel(const struct FName& SpiritID);
	bool IsSpiritChecked(const struct FName& SpiritID);
	bool IsAllObtainedSpiritsChecked();
	int GetSpiritMaxLevel();
	int GetSpiritLevel(const struct FName& SpiritID, bool bIgnoreLevelOverride);
	int GetSpiritCount(bool bCountBossSpirit);
	int GetCommonSpiritCount();
	int GetBossSpiritCount();
	int AddSpiritLevel(const struct FName& SpiritID);
};

// Class Zenith.ItemTipInventory
// 0x0050 (FullSize[0x0120] - InheritedSize[0x00D0])
class UItemTipInventory : public UBaseInventory
{
public:
	TMap<struct FName, bool>                           TipsReadStatus;                                            // 0x00D0(0x0050) (Edit, Transient, EditConst, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ItemTipInventory");
		return ptr;
	}



	bool MarkAsRead(const struct FName& TipID);
	bool IsAlreadyRead(const struct FName& TipID);
};

// Class Zenith.RefreshableRichTextBlock
// 0x0030 (FullSize[0x06A8] - InheritedSize[0x0678])
class URefreshableRichTextBlock : public URichTextBlock
{
public:
	struct FText                                       Format;                                                    // 0x0678(0x0018) (Edit, NativeAccessSpecifierPrivate)
	TArray<struct FRichTextFormatElement>              FormatElements;                                            // 0x0690(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FQLU[0x8];                                     // 0x06A0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.RefreshableRichTextBlock");
		return ptr;
	}



	void SetupAndRefresh(const struct FText& NewFormat, TArray<struct FRichTextFormatElement> NewFormatElements);
	void SetFormatElements(TArray<struct FRichTextFormatElement> NewFormatElements);
	void SetFormat(const struct FText& NewFormat);
	void Refresh();
	TArray<struct FRichTextFormatElement> GetFormatElements();
};

// Class Zenith.SaveData
// 0x0528 (FullSize[0x0550] - InheritedSize[0x0028])
class USaveData : public USaveGame
{
public:
	int                                                Version;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_58EH[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ValidGameVersion;                                          // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValidBuildVersion;                                         // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BackupIndex;                                               // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerSaveData                             Player;                                                    // 0x0048(0x0238) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameModeSaveData                           GameMode;                                                  // 0x0280(0x02C0) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FGameAchievementsData                       GameAchievements;                                          // 0x0540(0x0010) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SaveData");
		return ptr;
	}



};

// Class Zenith.SaveSettings
// 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
class USaveSettings : public USaveGame
{
public:
	struct FString                                     Language;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FActionBinding>          BindingsForActions;                                        // 0x0038(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FAxisBinding>            BindingsForAxises;                                         // 0x0088(0x0050) (NativeAccessSpecifierPublic)
	Zenith_EInputStyle                                 InputStyle;                                                // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEFB[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUIInputSettingsData                        UIInputSettingsData;                                       // 0x00E0(0x0058) (NativeAccessSpecifierPublic)
	struct FGameSettingsData                           GameSettings;                                              // 0x0138(0x0028) (NativeAccessSpecifierPublic)
	TMap<Zenith_ESoundFamily, float>                   VolumeForSoundFamilies;                                    // 0x0160(0x0050) (NativeAccessSpecifierPublic)
	bool                                               bInitializationCompleted;                                  // 0x01B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AJ0H[0x7];                                     // 0x01B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SaveSettings");
		return ptr;
	}



};

// Class Zenith.SaveAchievements
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USaveAchievements : public USaveGame
{
public:
	TArray<Zenith_EZenithAchievement>                  Achievements;                                              // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SaveAchievements");
		return ptr;
	}



};

// Class Zenith.ScreenBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UScreenBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ScreenBPFLibrary");
		return ptr;
	}



	bool STATIC_ProjectWorldToViewport(class UObject* WorldContextObject, const struct FVector& WorldLocation, struct FVector2D* out_ViewportLocation);
	bool STATIC_DeprojectViewportToWorldAtDepth(class UObject* WorldContextObject, const struct FVector2D& ViewportLocation, struct FVector* out_WorldLocation, float Depth);
};

// Class Zenith.SoundSubsystem
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class USoundSubsystem : public UGameInstanceSubsystem
{
public:
	TMap<Zenith_ESoundFamily, float>                   VolumeForSoundFamilies;                                    // 0x0030(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<struct FName, struct FFMODEventInstance>      SnapshotInstances;                                         // 0x0080(0x0050) (Transient, NativeAccessSpecifierPrivate)
	class UFMODEvent*                                  CurrentBGM;                                                // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFMODEventInstance                          CurrentBGMInstance;                                        // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class UFMODEvent*                                  CurrentAmbience;                                           // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFMODEventInstance                          CurrentAmbienceInstance;                                   // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AHUQ[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SoundSubsystem");
		return ptr;
	}



	void StopSoundEventInstance(const struct FFMODEventInstance& SoundInstance);
	void StopBGM();
	void StopAmbience();
	void StopAll();
	void SetVolume(Zenith_ESoundFamily SoundFamily, float NewVolume);
	void SetParameter(const struct FName& Parameter, float Value);
	void ResetVolumes();
	struct FFMODEventInstance PlaySoundEvent(class UFMODEvent* SoundEvent);
	void PlayBGM(class UFMODEvent* SoundEvent);
	void PlayAmbience(class UFMODEvent* SoundEvent);
	float GetVolume(Zenith_ESoundFamily SoundFamily);
	class UFMODEvent* GetStepSoundEffect(Zenith_ESoundHeavinessCategory Heaviness, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType);
	class UFMODEvent* GetLandingSoundEffect(Zenith_ESoundHeavinessCategory Heaviness, TEnumAsByte<PhysicsCore_EPhysicalSurface> SurfaceType);
	class UFMODEvent* GetHitSoundEffect(Zenith_ESoundMaterial From, Zenith_ESoundMaterial To, Zenith_ESoundAction Action);
	class UFMODEvent* GetCurrentBGM();
	class UFMODEvent* GetCurrentAmbience();
	void EnableSnapshot(class UFMODEvent* Snapshot, const struct FName& Tag);
	void DisableSnapshot(const struct FName& Tag);
	void DisableAllSnapshots();
};

// Class Zenith.KnockbackComponent
// 0x0188 (FullSize[0x0238] - InheritedSize[0x00B0])
class UKnockbackComponent : public UActorComponent
{
public:
	float                                              MovementFactor;                                            // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LaunchKnockbackFactor;                                     // 0x00B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAirborneKnockbackTriggerLaunch;                           // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q4UV[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKnockbackData                              AirborneLaunchKnockback;                                   // 0x00C8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              KnockbackStates;                                           // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              KnockbackLaunchStates;                                     // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AdditionalKnockbackRecoveryStates;                         // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               bAutoManageRecovery;                                       // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KT51[0x7];                                     // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnKnockbackStart;                                          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKnockbackEnd;                                            // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class ACharacter*                                  OwnerCharacter;                                            // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAbilityComponent*                           AbilityComponent;                                          // 0x0180(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineAnimationComponent*                    SpineAnimComponent;                                        // 0x0188(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x0190(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDeathComponent*                             DeathComponent;                                            // 0x0198(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PULY[0x8];                                     // 0x01A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKnockbackRuntimeData                       RunningKnockback;                                          // 0x01A8(0x0088) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7IW6[0x8];                                     // 0x0230(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.KnockbackComponent");
		return ptr;
	}



	void StopKnockback();
	void OnLanded(const struct FHitResult& HitResult);
	void OnGameMapSwitch();
	int LaunchKnockback(const struct FKnockbackData& KnockbackData, const struct FVector& KnockbackDirection);
	bool IsInKnockbackRecovery();
	bool IsInKnockback();
	struct FKnockbackRuntimeData GetRunningKnockback();
	bool CanLaunchKnockback();
	void CancelKnockback();
};

// Class Zenith.LanguageBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULanguageBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.LanguageBPFLibrary");
		return ptr;
	}



	bool STATIC_SetDefaultLanguageAsCurrent();
};

// Class Zenith.LightEmulatorComponent
// 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
class ULightEmulatorComponent : public UActorComponent
{
public:
	bool                                               bEnable;                                                   // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_20H7[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FComponentReference                         TargetMaskMeshComponentReference;                          // 0x00B8(0x0028) (Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                              MaxTopScale;                                               // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxLateralScale;                                           // 0x00E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinLightIntensityForMaxLightScale;                         // 0x00E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Zenith_ELightEmulatorMode                          LightEmulatorMode;                                         // 0x00EC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_4MFT[0x3];                                     // 0x00ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LightScaleCustomValues;                                    // 0x00F0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EIJ9[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            MaskMaterialInstances;                                     // 0x0100(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B0SS[0x28];                                    // 0x0110(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.LightEmulatorComponent");
		return ptr;
	}



	void SetLightEmulatorMode(Zenith_ELightEmulatorMode NewLightEmulatorMode);
	void SetCustomLightScaleValues(const struct FVector& NewLightScaleCustomValues);
	void RefreshTranslucencySortPriority();
	void OnSpineMaterialsUpdated();
};

// Class Zenith.LoadGameDataFromSlotIndexAsync
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class ULoadGameDataFromSlotIndexAsync : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_UK5M[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USaveGame*                                   LoadedSaveData;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0050(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.LoadGameDataFromSlotIndexAsync");
		return ptr;
	}



	class ULoadGameDataFromSlotIndexAsync* STATIC_LoadGameDataFromSlotIndexAsync(class UObject* WorldContextObject, int SlotIndex, bool bUseExclusiveMode);
};

// Class Zenith.LocomotionComponent
// 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
class ULocomotionComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnFacingChange;                                            // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                      Owner;                                                     // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APawn*                                       PawnOwner;                                                 // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x00D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZenithCharacterMovementComponent*           MovementComponent;                                         // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M87D[0xE];                                     // 0x00E0(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUseRootMotionLocomotion;                                  // 0x00EE(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_P1VQ[0x1];                                     // 0x00EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinXInputForMovement;                                      // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MinInputForRun;                                            // 0x00F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Zenith_EWalkMode                                   ForcedWalkMode;                                            // 0x00F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSetRotationFromFacing;                                    // 0x00F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bUseCheapMove;                                             // 0x00FA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JH1D[0x5];                                     // 0x00FB(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.LocomotionComponent");
		return ptr;
	}



	bool WasFacingRight();
	bool UseRootMotionLocomotion();
	bool UseCheapMove();
	void ToggleFacing();
	void SetForcedWalkMode(Zenith_EWalkMode NewForcedWalkMode);
	void SetFacingFromInputSnapshot(const struct FInputSnapshot& InputSnapshot);
	void SetFacingFromDirectionInputType(Zenith_EDirectionInputTypes DirectionInputType);
	void SetFacing(bool bFacingRight);
	void Sample(float DeltaTime, const struct FInputSnapshot& InputSnapshot, bool bApplyInputVector);
	bool IsFacingRight();
	bool IsDiving();
	float GetXYVelocityRatio();
	struct FVector GetInputVector();
	bool CanApplyMove();
};

// Class Zenith.MasterWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class UMasterWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.MasterWidget");
		return ptr;
	}



	void SetVisible(bool bVisible);
	void AddChild(class UWidget* Widget, int ZOrder);
};

// Class Zenith.MathBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMathBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.MathBPFLibrary");
		return ptr;
	}



	int STATIC_RoundToPowerOfTwo(float A);
	int STATIC_LoopAround_Int(int X, int Min, int Max);
	float STATIC_LoopAround_Float(float X, float Min, float Max);
	struct FVector STATIC_LerpVectorComponents(const struct FVector& A, const struct FVector& B, const struct FVector& Alpha);
	float STATIC_GetMinTime(const struct FRuntimeFloatCurve& Curve);
	float STATIC_GetMaxTime(const struct FRuntimeFloatCurve& Curve);
	int STATIC_FloorToPowerOfTwo(float A);
	float STATIC_Evaluate(const struct FRuntimeFloatCurve& Curve, float Time);
	struct FVector STATIC_Clamp(const struct FVector& Vector, const struct FVector& Min, const struct FVector& Max);
	int STATIC_CeilToPowerOfTwo(float A);
	float STATIC_AngleBetweenAsRad(const struct FVector& VectorA, const struct FVector& VectorB);
	float STATIC_AngleBetweenAsDegree(const struct FVector& VectorA, const struct FVector& VectorB);
};

// Class Zenith.MediaPlayerBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMediaPlayerBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.MediaPlayerBPFLibrary");
		return ptr;
	}



	bool STATIC_RewindOrReopen(class UMediaPlayer* MediaPlayer);
	bool STATIC_ParseSubtitleDataTable(class UDataTable* DataTable, TArray<struct FSubtitleData>* out_SubtitleData);
	bool STATIC_IsMediaPlayerProcessing(class UMediaPlayer* MediaPlayer, float DeltaTime, float* InOut_LastProcessedTime, float* InOut_InvalidTime);
	bool STATIC_GetSubtitleAtTime(TArray<struct FSubtitleData> SubtitleData, float VideoTime, struct FText* out_SubtitleText, float* out_Alpha);
	float STATIC_GetLastVideoProcessedTimeInSecond(class UMediaPlayer* MediaPlayer);
	float STATIC_GetLastProcessedTimeInSecond(class UMediaPlayer* MediaPlayer);
	float STATIC_GetLastAudioProcessedTimeInSecond(class UMediaPlayer* MediaPlayer);
	void STATIC_DisplayMediaPlayerData(class UMediaPlayer* MediaPlayer);
};

// Class Zenith.MenuInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMenuInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.MenuInterface");
		return ptr;
	}



	void OnOpenMenu();
	void OnCloseMenu();
};

// Class Zenith.MinimapCaptureBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMinimapCaptureBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.MinimapCaptureBPFLibrary");
		return ptr;
	}



};

// Class Zenith.MovePlayerPawnAsyncAction
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UMovePlayerPawnAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_7G85[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x0090(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.MovePlayerPawnAsyncAction");
		return ptr;
	}



	void Tick();
	void OnSimulatedInputChanged();
	class UMovePlayerPawnAsyncAction* STATIC_MovePlayerPawn(class AZenithPlayerController* PlayerController, const struct FVector& TargetLocation, float AcceptableRadius, bool bAllowVerticalMovement);
};

// Class Zenith.MPComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UMPComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnMaxMPChanged;                                            // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMPChanged;                                               // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMPAdded;                                                 // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMPSubtracted;                                            // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OC2[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxMP;                                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                CurrMP;                                                    // 0x00FC(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              BonusMPAddPercentage;                                      // 0x0100(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YODE[0xC];                                     // 0x0104(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.MPComponent");
		return ptr;
	}



	void Subtract(int MPToSub);
	void SetMaxMP(int NewMaxMP);
	void Reset();
	int GetMaxMP();
	float GetCurrMPRatio();
	int GetCurrMP();
	void Add(int MPToAdd);
};

// Class Zenith.NavArea_Jump
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavArea_Jump : public UNavArea
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.NavArea_Jump");
		return ptr;
	}



};

// Class Zenith.NoParallaxComponent
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UNoParallaxComponent : public UActorComponent
{
public:
	bool                                               bUseParentZOffset;                                         // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bUseMovementFactorOverride;                                // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9QEB[0x2];                                     // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MovementFactorOverride;                                    // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.NoParallaxComponent");
		return ptr;
	}



};

// Class Zenith.OscillatorComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UOscillatorComponent : public UActorComponent
{
public:
	float                                              OscillationScale;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVOscillator                                LocOscillation;                                            // 0x00B4(0x0024) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FComponentReference                         TargetComponent;                                           // 0x00D8(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WDWT[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.OscillatorComponent");
		return ptr;
	}



};

// Class Zenith.OverrideClampedInArea
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UOverrideClampedInArea : public UBTDecorator
{
public:
	bool                                               bSetClampedInArea;                                         // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKYR[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.OverrideClampedInArea");
		return ptr;
	}



};

// Class Zenith.ParameterComponent
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UParameterComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ParameterComponent");
		return ptr;
	}



	float GetStunDamageFactor();
	float GetStaminaDamageFactor();
	float GetPostDamageInvincibilityBonusTime();
	int GetMPRestoreBonusPercentage();
	float GetDamageCutPercentageForAttribute(Zenith_EDamageAttribute DamageAttribute);
	float GetDamageCutPercentage();
	int GetDamageAfterDamageCut(int RawDamage, Zenith_EDamageAttribute DamageAttribute);
	int GetAttackFromRate(float Rate, bool bIgnoreOverride);
	int GetAttack(bool bIgnoreOverride);
};

// Class Zenith.ParameterEnemyComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UParameterEnemyComponent : public UParameterComponent
{
public:
	class UDataTable*                                  LevelTable;                                                // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_373Q[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ParameterEnemyComponent");
		return ptr;
	}



	void OnDifficultyLevelChanged();
};

// Class Zenith.ParameterPlayerComponent
// 0x0140 (FullSize[0x01F0] - InheritedSize[0x00B0])
class UParameterPlayerComponent : public UParameterComponent
{
public:
	struct FScriptMulticastDelegate                    OnAddedExperiencePointsDelegate;                           // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnLevelChangedDelegate;                                    // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSkinLevelChangedDelegate;                                // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                DefaultHP;                                                 // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                DefaultMP;                                                 // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                Level;                                                     // 0x00E8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ExperiencePoints;                                          // 0x00EC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SkinLevel;                                                 // 0x00F0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SkinLevelOverride;                                         // 0x00F4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                FinalPassivePartCount;                                     // 0x00F8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxFinalPassivePartCount;                                  // 0x00FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1RCL[0x60];                                    // 0x0100(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHPBonusPercentage;                                      // 0x0160(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxMPBonusPercentage;                                      // 0x0164(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxStaminaBonusPercentage;                                 // 0x0168(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MPRestoreBonusPercentage;                                  // 0x016C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DamageCutPercentage;                                       // 0x0170(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JMU3[0x4];                                     // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Zenith_EDamageAttribute, float>               DamageCurPercentagePerAttribute;                           // 0x0178(0x0050) (Edit, EditConst, NativeAccessSpecifierPrivate)
	float                                              ExpBonusPercent;                                           // 0x01C8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              PostDamageInvincibilityBonusTime;                          // 0x01CC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DamagePercentBonus;                                        // 0x01D0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DamagePercentBonusOnMaxHP;                                 // 0x01D4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DamagePercentBonusWhenGrounded;                            // 0x01D8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DamagePercentBonusWhenAirborne;                            // 0x01DC(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DamagePercentBonusWhenSwimming;                            // 0x01E0(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StaminaDamagePercentBonus;                                 // 0x01E4(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              StunDamagePercentBonus;                                    // 0x01E8(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UOME[0x4];                                     // 0x01EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ParameterPlayerComponent");
		return ptr;
	}



	void SubStunDamagePercentBonus(float StunDamagePercentBonusToSub);
	void SubStaminaDamagePercentBonus(float StaminaDamagePercentBonusToSub);
	void SubPostDamageInvincibilityBonusTime(float BonusTimeToSub);
	void SubMPRestorePercentBonus(float MPPercentBonusToSub);
	void SubMaxStaminaBonusPercentage(float MaxStaminaBonusToSub);
	void SubMaxMPBonusPercentage(float MaxMPBonusToSub);
	void SubMaxHPBonusPercentage(float MaxHPBonusToSub);
	void SubExpPercentBonus(float ExpBonusToSub);
	void SubDamagePercentBonusWhenSwimming(float DamagePercentBonusToSub);
	void SubDamagePercentBonusWhenGrounded(float DamagePercentBonusToSub);
	void SubDamagePercentBonusWhenAirborne(float DamagePercentBonusToSub);
	void SubDamagePercentBonusOnMaxHP(float DamagePercentBonusToSub);
	void SubDamagePercentBonus(float DamagePercentBonusToSub);
	void SubDamageCutPercentageForAttribute(Zenith_EDamageAttribute DamageAttribute, float DamageCutToSub);
	void SubDamageCutPercentage(float DamageCutToSub);
	void SetSkinLevelOverride(int NewSkinLevelOverride, bool bForceOverride);
	int SetSkinLevel(int NewSkinLevel);
	int SetLevel(int NewLevel);
	int SetFinalPassivePartCount(int NewFinalPassivePartCount);
	void OnItemParameterAdded(const struct FInventoryBaseItemData& InventoryParameterData);
	void OnChallengeMaxPlayerLevelChanged();
	bool IsMaxLevel(bool bIgnoreOverride);
	bool HasSkinLevelOverride();
	int GetSkinLevel(bool bWithoutOverride);
	int GetNecessaryExpPointsForLevelUp();
	int GetMaxLevel();
	int GetLevel(bool bIgnoreOverride);
	int GetFinalPassivePartMaxCount();
	int GetFinalPassivePartCount();
	float GetExperienceRatio();
	int GetExperiencePoints();
	float GetExpBonusPercent();
	int GetBonusRateAdjustedExperiencePoints(int DefaultPoints);
	float GetAttackBonusPercentage();
	void ClearSkinLevelOverride();
	void AddStunDamagePercentBonus(float StunDamagePercentBonusToAdd);
	void AddStaminaDamagePercentBonus(float StaminaDamagePercentBonusToAdd);
	int AddSkinLevel();
	void AddPostDamageInvincibilityBonusTime(float BonusTimeToAdd);
	void AddMPRestorePercentBonus(float MPPercentBonusToAdd);
	void AddMaxStaminaBonusPercentage(float MaxStaminaBonusToAdd);
	void AddMaxMPBonusPercentage(float MaxMPBonusToAdd);
	void AddMaxHPBonusPercentage(float MaxHPBonusToAdd);
	int AddFinalPassivePartCount();
	void AddExpPercentBonus(float ExpBonusToAdd);
	void AddExperiencePoints(int PointsToAdd, bool bAppliedBonusExpRate);
	void AddDamagePercentBonusWhenSwimming(float DamagePercentBonusToAdd);
	void AddDamagePercentBonusWhenGrounded(float DamagePercentBonusToAdd);
	void AddDamagePercentBonusWhenAirborne(float DamagePercentBonusToAdd);
	void AddDamagePercentBonusOnMaxHP(float DamagePercentBonusToAdd);
	void AddDamagePercentBonus(float DamagePercentBonusToAdd);
	void AddDamageCutPercentageForAttribute(Zenith_EDamageAttribute DamageAttribute, float DamageCutToAdd);
	void AddDamageCutPercentage(float DamageCutToAdd);
};

// Class Zenith.Passive
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPassive : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.Passive");
		return ptr;
	}



	void OnUnequipPassive(class AController* Controller);
	void OnRemoveFromPawn(class APawn* Pawn, class AController* Controller);
	void OnEquipPassive(class AController* Controller);
	void OnApplyToPawn(class APawn* Pawn, class AController* Controller);
};

// Class Zenith.SoundMatrixData
// 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
class USoundMatrixData : public UDataAsset
{
public:
	TMap<Zenith_ESoundMaterial, struct FSoundActionMaterialMap> SoundMatrix;                                               // 0x0030(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Zenith_ESoundHeavinessCategory, struct FSurfaceToSoundMap> StepSounds;                                                // 0x0080(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<Zenith_ESoundHeavinessCategory, struct FSurfaceToSoundMap> LandingSounds;                                             // 0x00D0(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SoundMatrixData");
		return ptr;
	}



};

// Class Zenith.SpineAnimationRuntimeData
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class USpineAnimationRuntimeData : public UObject
{
public:
	unsigned char                                      UnknownData_MNZK[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTrackEntry*                                 TrackEntry;                                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationDefinition>           AnimDefinitions;                                           // 0x0038(0x0010) (ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UTrackEntry*>                         trackEntries;                                              // 0x0048(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                               bStarted;                                                  // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExecutedInterrupt;                                        // 0x0059(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExecutedComplete;                                         // 0x005A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExecutedEnd;                                              // 0x005B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PUHY[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SpineAnimationRuntimeData");
		return ptr;
	}



};

// Class Zenith.SpineAnimationComponent
// 0x03F8 (FullSize[0x04A8] - InheritedSize[0x00B0])
class USpineAnimationComponent : public UActorComponent
{
public:
	struct FSpineAnimationDefinition                   TurnSlowDefinition;                                        // 0x00B0(0x0048) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSpineAnimationDefinition                   TurnFastDefinition;                                        // 0x00F8(0x0048) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSpineAnimationDefinition                   FlyTurnDefinition;                                         // 0x0140(0x0048) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSpineAnimationDefinition                   SwimTurnDefinition;                                        // 0x0188(0x0048) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSpineAnimationDefinition                   DiveTurnDefinition;                                        // 0x01D0(0x0048) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineTransitionDefinition>          TransitionDefinitions;                                     // 0x0218(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimDamageSetDefinition>       DamageGroundDefinitions;                                   // 0x0228(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimDamageSetDefinition>       DamageAirDefinitions;                                      // 0x0238(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimDamageSetDefinition>       DamageSwimDefinitions;                                     // 0x0248(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationDefinition>           LandKnockbackDefinitions;                                  // 0x0258(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationDefinition>           SwimLandKnockbackDefinitions;                              // 0x0268(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationDefinition>           WakeUpDefinitions;                                         // 0x0278(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationDefinition>           SwimWakeUpDefinitions;                                     // 0x0288(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationDefinition>           DeathDefinitions;                                          // 0x0298(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationDefinition>           DeathBackSideDefinitions;                                  // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWakeUpEnd;                                               // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnWakeUpComplete;                                          // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeathEnd;                                                // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeathComplete;                                           // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSprintStart;                                             // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSprintEnd;                                               // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3LYS[0x8];                                     // 0x0318(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUpdateAnimationsInTick;                                   // 0x0320(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bForceUseGroundedLocomotion;                               // 0x0321(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bCheckTurnTransitionsInTick;                               // 0x0322(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSetEmptyIfNoAnim;                                         // 0x0323(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAllowVerticalLocomotionAnimation;                         // 0x0324(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bApplyRootMotionLocomotion;                                // 0x0325(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bRootMotionLocomotionIdleOnly;                             // 0x0326(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KQOE[0x1];                                     // 0x0327(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RootMotionFactor;                                          // 0x0328(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSyncLocomotionTimings;                                    // 0x032C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bAutoStopEventAnimations;                                  // 0x032D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Zenith_EDamageAdditiveType                         DamageAdditiveType;                                        // 0x032E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ESEB[0x51];                                    // 0x032F(0x0051) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpineSkeletonAnimationComponent*            AnimComponent;                                             // 0x0380(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineSkeletonRendererComponent*             RendererComponent;                                         // 0x0388(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ACharacter*                                  Character;                                                 // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AZenithCharacter*                            ZenithCharacter;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZenithCharacterMovementComponent*           MovementComponent;                                         // 0x03A0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocomotionComponent*                        LocomotionComponent;                                       // 0x03A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStateComponent*                             StateComponent;                                            // 0x03B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZenithInputComponent*                       InputComponent;                                            // 0x03B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class USpineAnimationRuntimeData*>          AnimationDataLayers;                                       // 0x03C0(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KXTW[0x50];                                    // 0x03D0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USpineAnimationRuntimeData*>          PastAnimationDataLayers;                                   // 0x0420(0x0010) (Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8SS6[0x20];                                    // 0x0430(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USpineAnimationRuntimeData*>          AvailableAnimDataPool;                                     // 0x0450(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class USpineAnimationRuntimeData*>          InUseAnimDataPool;                                         // 0x0460(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MRDH[0x38];                                    // 0x0470(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SpineAnimationComponent");
		return ptr;
	}



	void WakeUpEnd();
	void WakeUpComplete();
	void StopDamage(bool bPlayRecovery);
	void StopAnimation(Zenith_ESpineAnimationLayer Layer, bool bOverrideBlend, float Blend);
	void StopAllAnimations();
	void StopActionAnimation(bool bOverrideBlend, float Blend);
	void RequestRefreshPlayingAnimation();
	void PlayWakeUp();
	void PlayLaunchKnockback();
	void PlayKnockbackLanding();
	void PlayDeathBackSide();
	void PlayDeath();
	void PlayDamage(bool bForceRestart);
	void PlayAnimationWithEvents(const struct FString& AnimName, Zenith_ESpineAnimationLayer Layer, const struct FScriptDelegate& OnAnimEnd, const struct FScriptDelegate& OnAnimComplete, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion);
	void PlayAnimations(TArray<struct FSpineAnimationDefinition> Animations, Zenith_ESpineAnimationLayer Layer);
	void PlayAnimationDefinition(const struct FSpineAnimationDefinition& AnimationDefinition, Zenith_ESpineAnimationLayer Layer);
	void PlayAnimation(const struct FString& AnimName, Zenith_ESpineAnimationLayer Layer, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion);
	void PlayAdditiveDamage(float Time);
	void PlayActionAnimation(const struct FString& AnimName, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion);
	void OnTrackStarted(class UTrackEntry* TrackEntry);
	void OnMovementModeChanged(class ACharacter* InCharacter, TEnumAsByte<Engine_EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void OnLanded(const struct FHitResult& HitResult);
	void OnGameMapSwitch();
	void OnEventStop();
	void OnAnimationComplete(class UTrackEntry* TrackEntry);
	void OnAfterBoneTransformUpdate(class USpineSkeletonComponent* SpineSkeletonComponent);
	void OnAdditiveDamageTimerEnd();
	void KnockbackLandingEnd();
	bool IsReactionLayerActive(bool bConsiderLoopAsActive);
	bool IsPlayingSpecificAnimation(const struct FString& AnimName);
	bool IsPlayingAnimationAtLayer(Zenith_ESpineAnimationLayer Layer);
	bool IsPlayingActionAnimation();
	bool IsKnockbackLocked();
	struct FVector GetLastRootMotionMove();
	Zenith_ESpineAnimationLayer GetHighestActiveLayer();
	struct FString GetCurrentAnimationName();
	void DeathEnd();
	void DeathComplete();
};

// Class Zenith.SpineBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpineBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SpineBPFLibrary");
		return ptr;
	}



	bool STATIC_IsPlayingAnyAnimation(class USpineSkeletonAnimationComponent* AnimSkelComponent, int TrackIndex);
	bool STATIC_IsPlayingAnimation(class USpineSkeletonAnimationComponent* AnimSkelComponent, const struct FString& AnimName, int TrackIndex);
	int STATIC_GetTrackIndex(Zenith_ESpineTrackLayer TrackLayer);
	class USpineBoneFollowerComponent* STATIC_AddBoneFollowerComponent(class USpineSkeletonAnimationComponent* AnimSkelComponent, const struct FString& BoneName);
};

// Class Zenith.SpineRootMotionComponent
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class USpineRootMotionComponent : public UActorComponent
{
public:
	float                                              RootMotionFactor;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BE2V[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ACharacter*                                  CharacterOwner;                                            // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineSkeletonRendererComponent*             SpineRenderer;                                             // 0x00C0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineSkeletonAnimationComponent*            SpineAnimation;                                            // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SpineRootMotionComponent");
		return ptr;
	}



	void OnAfterBoneTransformUpdate(class USpineSkeletonComponent* SpineSkeletonComponent);
};

// Class Zenith.SpiritEquipComponent
// 0x00E0 (FullSize[0x0190] - InheritedSize[0x00B0])
class USpiritEquipComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnEquipSpiritDelegate;                                     // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnequipSpiritDelegate;                                   // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSwitchSummonSetDelegate;                                 // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AFIG[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, class AZenithSpirit*>          SpiritForSpiritClasses;                                    // 0x00E8(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TMap<Zenith_ESummonSet, struct FSummonSetData>     SummonSets;                                                // 0x0138(0x0050) (Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_N4L4[0x8];                                     // 0x0188(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SpiritEquipComponent");
		return ptr;
	}



	void UnequipSpiritFromCurrentSet(Zenith_ECommandInputTypes CommandInputType);
	void UnequipSpirit(Zenith_ESummonSet SummonSet, Zenith_ECommandInputTypes CommandInputType);
	void UnequipAllSpirits();
	void ToggleSummonSet();
	void SwitchSummonSet(Zenith_ESummonSet NewSet);
	void SetCanChangeEquipment(bool bNewCanChangeEquipment);
	void ReequipSpirits();
	void OnSpiritLevelChanged(const struct FName& SpiritID, int NewSpiritLevel);
	void OnGameMapSwitch();
	bool IsSpiritEquipped(Zenith_ESummonSet SummonSet, const struct FName& SpiritID);
	struct FSummonSetData GetSummonSetDataAsReadOnly(Zenith_ESummonSet SummonSet);
	Zenith_ESummonSet GetCurrentSummonSet();
	TMap<Zenith_ESummonSet, struct FSummonSetData> GetAllSummonSets();
	void ForceDisappearAllSpirits();
	void EquipSpiritToCurrentSet(const struct FName& SpiritID, Zenith_ECommandInputTypes CommandInputType);
	void EquipSpirit(Zenith_ESummonSet SummonSet, const struct FName& SpiritID, Zenith_ECommandInputTypes CommandInputType);
	bool CanChangeEquipment();
};

// Class Zenith.StaminaComponent
// 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
class UStaminaComponent : public URegenerativeParamComponent
{
public:
	class UKnockbackComponent*                         KnockbackComponent;                                        // 0x0148(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.StaminaComponent");
		return ptr;
	}



	void OnKnockbackEnd(const struct FKnockbackRuntimeData& KnockbackRuntimeData);
};

// Class Zenith.PassiveEquipComponent
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class UPassiveEquipComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPassiveEquipped;                                         // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPassiveUnequipped;                                       // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSlotCountChanged;                                        // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                MaxSlotCount;                                              // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxPassiveEquipCount;                                      // 0x00E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_W9TB[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPassiveEquipRuntimeData>            EquippedPassives;                                          // 0x00F8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PassiveEquipComponent");
		return ptr;
	}

	bool UnequipPassive(const struct FName& PassiveID);
	int SetSlotCount(int NewSlotCount);
	bool IsPassiveEquipped(const struct FName& PassiveID);
	int GetUsedSlotCount();
	int GetSlotCount();
	int GetMaxSlotCount();
	int GetMaxEquippablePassiveCount();
	TArray<struct FPassiveEquipRuntimeData> GetEquippedPassives();
	int GetAvailableSlotCount();
	Zenith_EPassiveEquipResult EquipPassive(const struct FName& PassiveID);
	Zenith_EPassiveEquipResult CanEquipPassive(const struct FItemPassiveData& ItemPassiveData);
	int AddSlotCount(int SlotToAdd);
	int AddSlot();
};

// Class Zenith.PawnActivationVolume
// 0x0030 (FullSize[0x0250] - InheritedSize[0x0220])
class APawnActivationVolume : public AActor
{
public:
	bool                                               bShouldLockCamera;                                         // 0x0220(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1FLZ[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             SceneRootComponent;                                        // 0x0228(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UShapeComponent*                             ActivationShape;                                           // 0x0230(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class APawn>>                PawnsToActivate;                                           // 0x0238(0x0010) (Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y2X2[0x8];                                     // 0x0248(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PawnActivationVolume");
		return ptr;
	}



	void OnPawnEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Class Zenith.PawnActivationVolumeBox
// 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
class APawnActivationVolumeBox : public APawnActivationVolume
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PawnActivationVolumeBox");
		return ptr;
	}



};

// Class Zenith.PawnBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPawnBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PawnBPFLibrary");
		return ptr;
	}



	void STATIC_SpawnCustomController(class APawn* Pawn, class UClass* AIControllerClass);
	void STATIC_ResetZVelocity(class APawn* Pawn);
	void STATIC_ResetVelocity(class APawn* Pawn);
	class AZenithPlayerController* STATIC_GetZenithPlayerController(class APawn* Pawn);
	void STATIC_AttributeFaction(class APawn* Pawn, Zenith_EFaction Faction);
};

// Class Zenith.PhysicsVolumeDetectorComponent
// 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
class UPhysicsVolumeDetectorComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBeginVolumeOverlap;                                      // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndVolumeOverlap;                                        // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnActivateVolume;                                          // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDeactivateVolume;                                        // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AActor*                                      Owner;                                                     // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UZenithCharacterMovementComponent*           MovementComponent;                                         // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class ACustomPhysicsVolume*>                PhysicsVolumes;                                            // 0x0100(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PhysicsVolumeDetectorComponent");
		return ptr;
	}



	void OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
};

// Class Zenith.PlayerCameraManagerZenithBase
// 0x0070 (FullSize[0x2820] - InheritedSize[0x27B0])
class APlayerCameraManagerZenithBase : public APlayerCameraManager
{
public:
	bool                                               bWarnIfNoClampVolume;                                      // 0x27B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LMOF[0x3];                                     // 0x27B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WarnIfNoClampVolumeAfterSeconds;                           // 0x27B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinTimeBetweenNoClampVolumeWarnings;                       // 0x27B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QBUG[0x4];                                     // 0x27BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnViewTargetChangedDelegate;                               // 0x27C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNoClampVolumeWarningDelegate;                            // 0x27D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPostUpdateCameraDelegate;                                // 0x27E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bExperimental_DisableAspectRatioConstraint;                // 0x27F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MJ95[0x17];                                    // 0x27F1(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AGameplayCamera>              RegisteredGameplayCamera;                                  // 0x2808(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class ACameraClampVolume>>   ClampVolumes;                                              // 0x2810(0x0010) (ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PlayerCameraManagerZenithBase");
		return ptr;
	}



	void UnregisterGameplayCamera(class AGameplayCamera* GameplayCamera);
	void RemoveClampVolume(class ACameraClampVolume* ClampVolume);
	void RegisterGameplayCamera(class AGameplayCamera* GameplayCamera);
	void OnPostUpdateCamera();
	void OnNoClampVolumeWarning();
	bool IsGameplayCameraRegistered();
	bool IsClamped();
	class AActor* GetViewTargetActor();
	class ACameraClampVolume* GetRootClampVolume();
	class AGameplayCamera* GetRegisteredGameplayCamera();
	class APlayerCameraManagerZenithBase* STATIC_GetPlayerCameraManagerZenith(class UObject* WorldContextObject, int PlayerControllerIndex);
	class AGameplayCamera* GetGameplayCamera();
	class UCameraComponent* GetCameraComponent();
	class ACameraActor* GetCamera();
	TEnumAsByte<Engine_EAspectRatioAxisConstraint> GetAspectRatioAxisConstraint();
	class ACameraClampVolume* GetActiveClampVolume();
	struct FVector ClampLocationInCameraView(const struct FVector& Location, float Size);
	void AddClampVolume(class ACameraClampVolume* ClampVolume);
};

// Class Zenith.PoolSubsystem
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UPoolSubsystem : public UGameInstanceSubsystem
{
public:
	class UPoolSystem*                                 PoolSystem;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PoolSubsystem");
		return ptr;
	}



	class UPoolSystem* GetPoolSystem();
};

// Class Zenith.PoolSystem
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UPoolSystem : public UObject
{
public:
	TMap<class UClass*, struct FObjectArray>           AvailableInstances;                                        // 0x0028(0x0050) (NativeAccessSpecifierPrivate)
	TArray<class UObject*>                             InUseInstances;                                            // 0x0078(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PoolSystem");
		return ptr;
	}



	void ReturnToPool(class UObject* ObjectInstance);
	class UObject* GetFromPool(class UClass* Class);
	void ClearPool();
};

// Class Zenith.PoolSystemBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPoolSystemBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PoolSystemBPFLibrary");
		return ptr;
	}



	class UPoolSystem* STATIC_GetPoolSystem(class UObject* WorldContextObject);
};

// Class Zenith.PostLoadVisibilityComponent
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UPostLoadVisibilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_QZKZ[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.PostLoadVisibilityComponent");
		return ptr;
	}



};

// Class Zenith.ProfileSubsystem
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UProfileSubsystem : public UZenithBaseSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnCurrentProfileChanged;                                   // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMainProfileChanged;                                      // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N3F0[0x68];                                    // 0x0050(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ProfileSubsystem");
		return ptr;
	}



	bool UseProfileSystem();
	void SaveCurrProfileAsMainProfile();
	void OpenProfileUIWithDelegate(int ControllerIndex, const struct FScriptDelegate& OnProfileUIClosed);
	void OpenProfileUI(int ControllerIndex);
	void OnPlayerControllerIDChanged(int OldControllerID, int NewControllerID);
	bool IsUsingMainProfile();
	bool IsMainProfileValid();
	int GetMainProfileUserIndex();
	struct FString GetMainProfileName();
	void ClearMainProfile();
};

// Class Zenith.RealTimeDelayAsyncAction
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class URealTimeDelayAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_7D4R[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.RealTimeDelayAsyncAction");
		return ptr;
	}



	class URealTimeDelayAsyncAction* STATIC_RealTimeDelay(class UObject* WorldContextObject, float DelayInSeconds);
};

// Class Zenith.RefreshPawnFromController
// 0x0050 (FullSize[0x00C0] - InheritedSize[0x0070])
class URefreshPawnFromController : public UBTService
{
public:
	struct FBlackboardKeySelector                      KeyController;                                             // 0x0070(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      KeyResult;                                                 // 0x0098(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.RefreshPawnFromController");
		return ptr;
	}



};

// Class Zenith.RenderBPFLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URenderBPFLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.RenderBPFLibrary");
		return ptr;
	}



	int STATIC_GetUMGZOrder(Zenith_EUMGZOrderLayer Layer);
	int STATIC_GetTranslucencySortPriority(Zenith_ETranslucencyLayer Layer);
};

// Class Zenith.ResettableComponentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UResettableComponentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.ResettableComponentInterface");
		return ptr;
	}



};

// Class Zenith.SaveIconUserWidget
// 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
class USaveIconUserWidget : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SaveIconUserWidget");
		return ptr;
	}



	void Show();
	void HideAndRemoveFromViewport();
};

// Class Zenith.SaveSubsystem
// 0x00B0 (FullSize[0x00E0] - InheritedSize[0x0030])
class USaveSubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnGameDataLoaded;                                          // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int                                                SaveSlotIndex;                                             // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_I3M4[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SaveSlotName;                                              // 0x0048(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                CurrentBackupIndex;                                        // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OG2A[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USaveData*                                   CurrentSaveData;                                           // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USaveSettings*                               CurrSaveSettings;                                          // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E96U[0x4];                                     // 0x0070(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             SaveFinishDelegateToCall;                                  // 0x0074(0x0010) (ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             LoadFinishDelegateToCall;                                  // 0x0084(0x0010) (ZeroConstructor, Transient, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_HVGZ[0x4C];                                    // 0x0094(0x004C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SaveSubsystem");
		return ptr;
	}



	void SetSaveSlotIndex(int SlotIndexToUse);
	void SaveSettings();
	void SaveGameAsync(class UClass* SaveIconWidgetClass, const struct FScriptDelegate& OnFinished);
	bool SaveGame();
	Zenith_ESaveExistsType ReloadSettings();
	void OnSaveFinished(const struct FString& SlotName, int UserIndex, bool bSuccess);
	void OnSaveBackupFinished(const struct FString& SlotName, int UserIndex, bool bSuccess);
	void OnLoadFinished(const struct FString& LoadedSlotName, int UserIndex, class USaveGame* SaveGame);
	void MarkInitializationSettingsCompleted();
	Zenith_ESaveExistsType LoadSettings();
	void LoadGameBackupAsync(int BackupIndex, class UClass* LoadIconWidgetClass, const struct FScriptDelegate& OnFinished);
	bool LoadGameBackup(int BackupIndex);
	void LoadGameAsync(class UClass* LoadIconWidgetClass, const struct FScriptDelegate& OnFinished);
	bool LoadGame();
	bool IsSettingsLoaded();
	bool IsSaving();
	bool IsLoading();
	bool IsInitializationSettingsCompleted();
	bool IsGameLoaded();
	Zenith_ESaveExistsType HasSaveDataInSlotIndexWithResult(int SlotIndex);
	bool HasSaveDataInSlotIndex(int SlotIndex);
	bool HasSaveData();
	struct FString GenerateSaveSlotName(int SlotIndex);
	void DeleteSettings();
	void DeleteSaveDataAtSlotIndex(int SlotIndex);
	void DeleteAllSaveData();
	bool CheckSaveDataVersionFromSaveData(class USaveData* SaveData, bool bReturnToTitleOnFail);
	bool CheckSaveDataVersion(bool bReturnToTitleOnFail);
};

// Class Zenith.SetBlackboardValue
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class USetBlackboardValue : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      KeyToChange;                                               // 0x0068(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SetBlackboardValue");
		return ptr;
	}



};

// Class Zenith.SetBlackboardBoolValue
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class USetBlackboardBoolValue : public USetBlackboardValue
{
public:
	bool                                               ValueToSet;                                                // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1XHX[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SetBlackboardBoolValue");
		return ptr;
	}



};

// Class Zenith.SetBlackboardIntValue
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class USetBlackboardIntValue : public USetBlackboardValue
{
public:
	int                                                ValueToSet;                                                // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3S4Z[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SetBlackboardIntValue");
		return ptr;
	}



};

// Class Zenith.SetBlackboardFloatValue
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class USetBlackboardFloatValue : public USetBlackboardValue
{
public:
	float                                              ValueToSet;                                                // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_073C[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SetBlackboardFloatValue");
		return ptr;
	}



};

// Class Zenith.SetBlackboardVectorValue
// 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
class USetBlackboardVectorValue : public USetBlackboardValue
{
public:
	struct FVector                                     ValueToSet;                                                // 0x0090(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2IY0[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SetBlackboardVectorValue");
		return ptr;
	}



};

// Class Zenith.SpiritCompanionComponent
// 0x00A0 (FullSize[0x0150] - InheritedSize[0x00B0])
class USpiritCompanionComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSpawnCompanion;                                          // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDestroyCompanion;                                        // 0x00C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_911M[0x8];                                     // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Zenith_ESummonSet, struct FSummonSetCompanions> CompanionsForSummonSet;                                    // 0x00D8(0x0050) (Transient, NativeAccessSpecifierPrivate)
	TArray<struct FCompanionData>                      ExtraCompanions;                                           // 0x0128(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B85R[0x18];                                    // 0x0138(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Zenith.SpiritCompanionComponent");
		return ptr;
	}



	void ResetCurrentSetStateAndLocation();
	class AZenithCompanionCharacter* RequestExtraCompanion();
	void OnUnequipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData);
	void OnSummonSetSwitch(Zenith_ESummonSet PrevSummonSet, Zenith_ESummonSet NewSummonSet);
	void OnSpiritDisappear(class AZenithSpirit* Spirit);
	void OnSpiritAppear(class AZenithSpirit* Spirit);
	void OnGameMapSwitch();
	void OnEquipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData);
	TArray<class AZenithCompanionCharacter*> GetOrderedCurrentCompanions();
	TArray<class AZenithCompanionCharacter*> GetExtraCompanions();
	void ClearAllExtraCompanions();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
