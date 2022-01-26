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
// Parameters
//---------------------------------------------------------------------------

// Function Zenith.ReusableActor.OnDeactivate
struct AReusableActor_OnDeactivate_Params
{
};

// Function Zenith.ReusableActor.OnActivate
struct AReusableActor_OnActivate_Params
{
};

// Function Zenith.ReusableActor.IsActive
struct AReusableActor_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ReusableActor.Deactivate
struct AReusableActor_Deactivate_Params
{
};

// Function Zenith.ReusableActor.Activate
struct AReusableActor_Activate_Params
{
};

// Function Zenith.Ability.Tick
struct AAbility_Tick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.Stop
struct AAbility_Stop_Params
{
	Zenith_EAbilityStopReason                          AbilityStopReason;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.OnTick
struct AAbility_OnTick_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.OnStop
struct AAbility_OnStop_Params
{
	Zenith_EAbilityStopReason                          AbilityStopReason;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.OnLaunch
struct AAbility_OnLaunch_Params
{
};

// Function Zenith.Ability.OnInitialize
struct AAbility_OnInitialize_Params
{
};

// Function Zenith.Ability.Launch
struct AAbility_Launch_Params
{
	class AActor*                                      Invoker;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.IsLaunched
struct AAbility_IsLaunched_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.Initialize
struct AAbility_Initialize_Params
{
};

// Function Zenith.Ability.GetMaxExecutionTime
struct AAbility_GetMaxExecutionTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.GetInvoker
struct AAbility_GetInvoker_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.GetExecutionTime
struct AAbility_GetExecutionTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.GetAbilityType
struct AAbility_GetAbilityType_Params
{
	Zenith_EAbilityType                                ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.ExecuteAbilityEffectsOnTarget
struct AAbility_ExecuteAbilityEffectsOnTarget_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitInfos                                   HitInfos;                                                  // 0x0010(0x0120)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0130(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.CanTargetActor
struct AAbility_CanTargetActor_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EFaction                                    FactionFilter;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EAbilityTargetTypes                         TargetType;                                                // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Ability.CanLaunch
struct AAbility_CanLaunch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityComponent.StopAllAbilities
struct UAbilityComponent_StopAllAbilities_Params
{
	Zenith_EAbilityStopReason                          AbilityStopReason;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopFireAndForgetAbilities;                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityComponent.StopAbility
struct UAbilityComponent_StopAbility_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EAbilityStopReason                          AbilityStopReason;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityComponent.OnGameMapSwitch
struct UAbilityComponent_OnGameMapSwitch_Params
{
};

// Function Zenith.AbilityComponent.OnDisposeAbility
struct UAbilityComponent_OnDisposeAbility_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityComponent.LaunchAbilityFromDescription
struct UAbilityComponent_LaunchAbilityFromDescription_Params
{
	struct FAbilityDescription                         AbilityDescription;                                        // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Offset;                                                    // 0x0060(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AAbility*                                    ReturnValue;                                               // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityComponent.LaunchAbilityAbsolute
struct UAbilityComponent_LaunchAbilityAbsolute_Params
{
	class UClass*                                      AbilityClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAbilityParams                              AbilityParameters;                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  AbilityTransform;                                          // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFireAndForget;                                            // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAbility*                                    ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityComponent.LaunchAbility
struct UAbilityComponent_LaunchAbility_Params
{
	class UClass*                                      AbilityClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAbilityParams                              AbilityParameters;                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Offset;                                                    // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	SpineExtensionPlugin_ESpineBone                    SpawnBone;                                                 // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CustomSpawnBone;                                           // 0x0044(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowSpawnBoneRotation;                                  // 0x004C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SpineExtensionPlugin_ESpineBone                    AttachBone;                                                // 0x004D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       CustomAttachBone;                                          // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowAttachBoneRotation;                                 // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFireAndForget;                                            // 0x0059(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAbility*                                    ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityEffectComponent.OnFinalizeEffect
struct UAbilityEffectComponent_OnFinalizeEffect_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      To;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitInfos                                   HitInfos;                                                  // 0x0010(0x0120)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityEffectComponent.OnApplyEffect
struct UAbilityEffectComponent_OnApplyEffect_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      To;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitInfos                                   HitInfos;                                                  // 0x0010(0x0120)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityEffectComponent.OnAbilityLaunched
struct UAbilityEffectComponent_OnAbilityLaunched_Params
{
};

// Function Zenith.AbilityEffectComponent.IsEffectActive
struct UAbilityEffectComponent_IsEffectActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityEffectComponent.IsComplete
struct UAbilityEffectComponent_IsComplete_Params
{
	float                                              TotalExecutionTime;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              out_OverTime;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityEffectTimedComponent.GetAbilityEffectDuration
struct UAbilityEffectTimedComponent_GetAbilityEffectDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityHitbox.SetCollisionEnabled
struct AAbilityHitbox_SetCollisionEnabled_Params
{
	bool                                               bEnableCollision;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityHitbox.ProcessActorExit
struct AAbilityHitbox_ProcessActorExit_Params
{
	class AActor*                                      ExitActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityHitbox.ProcessActorEnter
struct AAbilityHitbox_ProcessActorEnter_Params
{
	class AActor*                                      EnterActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitInfos                                   HitInfos;                                                  // 0x0010(0x0120)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityHitbox.OnPawnExit
struct AAbilityHitbox_OnPawnExit_Params
{
	class AActor*                                      ExitActor;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityHitbox.OnPawnEnter
struct AAbilityHitbox_OnPawnEnter_Params
{
	class AActor*                                      EnterActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityHitbox.OnNonPawnEnter
struct AAbilityHitbox_OnNonPawnEnter_Params
{
};

// Function Zenith.AbilityHitbox.OnActorOverlapEnd
struct AAbilityHitbox_OnActorOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AbilityHitbox.OnActorOverlapBegin
struct AAbilityHitbox_OnActorOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.AchievementsSubsystem.UnlockAchievement
struct UAchievementsSubsystem_UnlockAchievement_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AchievementsSubsystem.ResetAchievements
struct UAchievementsSubsystem_ResetAchievements_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AchievementsSubsystem.OnMainProfileChanged
struct UAchievementsSubsystem_OnMainProfileChanged_Params
{
};

// Function Zenith.AchievementsSubsystem.OnGameDataLoaded
struct UAchievementsSubsystem_OnGameDataLoaded_Params
{
};

// Function Zenith.AchievementsSubsystem.NotifyActionPileLv3
struct UAchievementsSubsystem_NotifyActionPileLv3_Params
{
};

// Function Zenith.AchievementsSubsystem.NotifyActionDashLv3
struct UAchievementsSubsystem_NotifyActionDashLv3_Params
{
};

// Function Zenith.AchievementsSubsystem.IsAchievementUnlocked
struct UAchievementsSubsystem_IsAchievementUnlocked_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AchievementsSubsystem.GetAchievementProgress
struct UAchievementsSubsystem_GetAchievementProgress_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AchievementsSubsystem.GetAchievementID
struct UAchievementsSubsystem_GetAchievementID_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AchievementsSubsystem.GetAchievementDataTable
struct UAchievementsSubsystem_GetAchievementDataTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AchievementsSubsystem.GetAchievementData
struct UAchievementsSubsystem_GetAchievementData_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAchievementData                            out_AchievementData;                                       // 0x0008(0x0098)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.SetActorLocationToGround
struct UActorBPFLibrary_SetActorLocationToGround_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetFromGround;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.IsPlayer
struct UActorBPFLibrary_IsPlayer_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.GetHomingTargetOfActor
struct UActorBPFLibrary_GetHomingTargetOfActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.GetDefaultActorFromClass
struct UActorBPFLibrary_GetDefaultActorFromClass_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.GetActorTopLocation
struct UActorBPFLibrary_GetActorTopLocation_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.GetActorLocationForFeetLocation
struct UActorBPFLibrary_GetActorLocationForFeetLocation_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     FeetLocation;                                              // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.GetActorHalfHeight
struct UActorBPFLibrary_GetActorHalfHeight_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.GetActorFeetLocation
struct UActorBPFLibrary_GetActorFeetLocation_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.FlushPressedKeys
struct UActorBPFLibrary_FlushPressedKeys_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.ClampActorToBoxYZ
struct UActorBPFLibrary_ClampActorToBoxYZ_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                               Box;                                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSweep;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ActorBPFLibrary.AddComponent
struct UActorBPFLibrary_AddComponent_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ComponentType;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                             ReturnValue;                                               // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AE_KnockbackComponent.GetKnockbackData
struct UAE_KnockbackComponent_GetKnockbackData_Params
{
	struct FKnockbackData                              ReturnValue;                                               // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.AITask_CustomMoveTo.CustomAIMoveTo
struct UAITask_CustomMoveTo_CustomAIMoveTo_Params
{
	class AAIController*                               Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     GoalLocation;                                              // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      GoalActor;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AcceptanceRadius;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EAIOptionFlag>                StopOnOverlap;                                             // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EAIOptionFlag>                AcceptPartialPath;                                         // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsePathfinding;                                           // 0x0026(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockAILogic;                                              // 0x0027(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseContinuosGoalTracking;                                 // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAITask_MoveTo*                              ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AnimBPFLibrary.GetAnimData
struct UAnimBPFLibrary_GetAnimData_Params
{
	class AZenithCharacter*                            Character;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               out_bRunning;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              out_XYVelocityRatio;                                       // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AutoClimbComponent.OnStartCommand
struct UAutoClimbComponent_OnStartCommand_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AutoClimbComponent.OnComponentOverlapEnd
struct UAutoClimbComponent_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AutoClimbComponent.OnComponentOverlapBegin
struct UAutoClimbComponent_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.AutoClimbComponent.IgnoreActorUntilNextCommand
struct UAutoClimbComponent_IgnoreActorUntilNextCommand_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AutoClimbComponent.GetLastTargetLocation
struct UAutoClimbComponent_GetLastTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AutoClimbComponent.GetForwardOffset
struct UAutoClimbComponent_GetForwardOffset_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.AutoCollectComponent.OnComponentOverlapBegin
struct UAutoCollectComponent_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.AutoMoveComponent.SetVelocity
struct UAutoMoveComponent_SetVelocity_Params
{
	struct FVector                                     NewVelocity;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.RemoveItemByRowName
struct UBaseInventory_RemoveItemByRowName_Params
{
	struct FName                                       ItemRowName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.RemoveItem
struct UBaseInventory_RemoveItem_Params
{
	struct FDataTableRowHandle                         ItemData;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.IsFull
struct UBaseInventory_IsFull_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.HasItemByRowName
struct UBaseInventory_HasItemByRowName_Params
{
	struct FName                                       ItemRowName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.HasItem
struct UBaseInventory_HasItem_Params
{
	struct FDataTableRowHandle                         ItemData;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.GetValidDataTable
struct UBaseInventory_GetValidDataTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.GetItemLimit
struct UBaseInventory_GetItemLimit_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.GetItemHandleAtIndex
struct UBaseInventory_GetItemHandleAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         out_ItemHandle;                                            // 0x0008(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.GetItemCount
struct UBaseInventory_GetItemCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.GetItemAtIndex
struct UBaseInventory_GetItemAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInventoryBaseItemData                      out_Item;                                                  // 0x0004(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.GetAllItems
struct UBaseInventory_GetAllItems_Params
{
	TArray<struct FInventoryBaseItemData>              ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.Clear
struct UBaseInventory_Clear_Params
{
};

// Function Zenith.BaseInventory.AllowDuplicate
struct UBaseInventory_AllowDuplicate_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BaseInventory.AddItem
struct UBaseInventory_AddItem_Params
{
	struct FDataTableRowHandle                         ItemData;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BattleColorComponent.SetBattleColorEnabled
struct UBattleColorComponent_SetBattleColorEnabled_Params
{
	bool                                               bEnable;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BattleColorComponent.SetAlpha
struct UBattleColorComponent_SetAlpha_Params
{
	float                                              NewAlpha;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BitshiftBPFLibrary.BitshiftRight
struct UBitshiftBPFLibrary_BitshiftRight_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bitshift;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BitshiftBPFLibrary.BitshiftLeft
struct UBitshiftBPFLibrary_BitshiftLeft_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                bitshift;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BlackboardBPFLibrary.GetLocationFromBlackboardKey
struct UBlackboardBPFLibrary_GetLocationFromBlackboardKey_Params
{
	class UBTNode*                                     NodeOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Key;                                                       // 0x0008(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BossRushComponent.UnbindEvents
struct UBossRushComponent_UnbindEvents_Params
{
};

// Function Zenith.BossRushComponent.TryAddNewRecord
struct UBossRushComponent_TryAddNewRecord_Params
{
	struct FBossRushRecordData                         NewRecordData;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BossRushComponent.StartBossRush
struct UBossRushComponent_StartBossRush_Params
{
};

// Function Zenith.BossRushComponent.ResetRecords
struct UBossRushComponent_ResetRecords_Params
{
};

// Function Zenith.BossRushComponent.OnStartBossRush
struct UBossRushComponent_OnStartBossRush_Params
{
};

// Function Zenith.BossRushComponent.OnPlayerRespawn
struct UBossRushComponent_OnPlayerRespawn_Params
{
};

// Function Zenith.BossRushComponent.OnMapSwitch
struct UBossRushComponent_OnMapSwitch_Params
{
};

// Function Zenith.BossRushComponent.OnEndBossRush
struct UBossRushComponent_OnEndBossRush_Params
{
};

// Function Zenith.BossRushComponent.OnClearBossRush
struct UBossRushComponent_OnClearBossRush_Params
{
};

// Function Zenith.BossRushComponent.IsBossRushActive
struct UBossRushComponent_IsBossRushActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BossRushComponent.GetRecordData
struct UBossRushComponent_GetRecordData_Params
{
	int                                                RecordIndex;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBossRushRecordData                         ReturnValue;                                               // 0x0004(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.BossRushComponent.GetBossRushTime
struct UBossRushComponent_GetBossRushTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BossRushComponent.EndBossRush
struct UBossRushComponent_EndBossRush_Params
{
};

// Function Zenith.BossRushComponent.ClearBossRush
struct UBossRushComponent_ClearBossRush_Params
{
};

// Function Zenith.BossRushComponent.CanUpdateTime
struct UBossRushComponent_CanUpdateTime_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.BossRushComponent.BindEvents
struct UBossRushComponent_BindEvents_Params
{
};

// Function Zenith.Box2DBPFLibrary.IsPointInside
struct UBox2DBPFLibrary_IsPointInside_Params
{
	struct FBox2D                                      Box;                                                       // 0x0000(0x0014)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   PointToCheck;                                              // 0x0014(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Box2DBPFLibrary.IsBoxInside
struct UBox2DBPFLibrary_IsBoxInside_Params
{
	struct FBox2D                                      Box;                                                       // 0x0000(0x0014)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   BoxToCheck;                                                // 0x0014(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Box2DBPFLibrary.GetClosestPointOnSurfaceYZ
struct UBox2DBPFLibrary_GetClosestPointOnSurfaceYZ_Params
{
	class UBoxComponent*                               Box;                                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Point;                                                     // 0x0008(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EBoxSide                                    BoxSide;                                                   // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Box2DBPFLibrary.GetClosestPointOnSurface
struct UBox2DBPFLibrary_GetClosestPointOnSurface_Params
{
	struct FBox2D                                      Box;                                                       // 0x0000(0x0014)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Point;                                                     // 0x0014(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EBoxSide                                    BoxSide;                                                   // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Box2DBPFLibrary.ClampPointInside
struct UBox2DBPFLibrary_ClampPointInside_Params
{
	struct FBox2D                                      Box;                                                       // 0x0000(0x0014)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Point;                                                     // 0x0014(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ReturnValue;                                               // 0x001C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Breakable.OnDeath
struct ABreakable_OnDeath_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Breakable.OnBreak
struct ABreakable_OnBreak_Params
{
};

// Function Zenith.CameraClampVolume.OnComponentOverlapEnd
struct ACameraClampVolume_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CameraClampVolume.OnComponentOverlapBegin
struct ACameraClampVolume_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.CameraClampVolume.GetPriority
struct ACameraClampVolume_GetPriority_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CameraClampVolume.GetMinBorder
struct ACameraClampVolume_GetMinBorder_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CameraClampVolume.GetMaxBorder
struct ACameraClampVolume_GetMaxBorder_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.SetPlayerOneShot
struct UChallengeSettings_SetPlayerOneShot_Params
{
	bool                                               bNewPlayerOneShot;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.SetPlayerCantHeal
struct UChallengeSettings_SetPlayerCantHeal_Params
{
	bool                                               bPlayerCantHeal;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.SetMaxSpiritLevel
struct UChallengeSettings_SetMaxSpiritLevel_Params
{
	int                                                NewMaxSpiritLevel;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.SetMaxPlayerLevel
struct UChallengeSettings_SetMaxPlayerLevel_Params
{
	int                                                NewMaxPlayerLevel;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.SetEnemyMaxHPFactor
struct UChallengeSettings_SetEnemyMaxHPFactor_Params
{
	float                                              NewMaxHPFactor;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.SetEnemyAttackFactor
struct UChallengeSettings_SetEnemyAttackFactor_Params
{
	float                                              NewAttackFactor;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.SetContactDamageFactor
struct UChallengeSettings_SetContactDamageFactor_Params
{
	float                                              NewContactDamageFactor;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.Reset
struct UChallengeSettings_Reset_Params
{
};

// Function Zenith.ChallengeSettings.IsUnlocked
struct UChallengeSettings_IsUnlocked_Params
{
	class UObject*                                     WorldContextObj;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.HasAnyCustomSettings
struct UChallengeSettings_HasAnyCustomSettings_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetPlayerOneShot
struct UChallengeSettings_GetPlayerOneShot_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetPlayerCantHeal
struct UChallengeSettings_GetPlayerCantHeal_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetMaxSpiritLevel
struct UChallengeSettings_GetMaxSpiritLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetMaxPlayerLevel
struct UChallengeSettings_GetMaxPlayerLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetEnemyMaxHPFactor
struct UChallengeSettings_GetEnemyMaxHPFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetEnemyAttackFactor
struct UChallengeSettings_GetEnemyAttackFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetDefaultPlayerOneShot
struct UChallengeSettings_GetDefaultPlayerOneShot_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetDefaultPlayerCantHeal
struct UChallengeSettings_GetDefaultPlayerCantHeal_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetDefaultMaxSpiritLevel
struct UChallengeSettings_GetDefaultMaxSpiritLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetDefaultMaxPlayerLevel
struct UChallengeSettings_GetDefaultMaxPlayerLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetDefaultEnemyMaxHPFactor
struct UChallengeSettings_GetDefaultEnemyMaxHPFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetDefaultEnemyAttackFactor
struct UChallengeSettings_GetDefaultEnemyAttackFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetDefaultContactDamageFactor
struct UChallengeSettings_GetDefaultContactDamageFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ChallengeSettings.GetContactDamageFactor
struct UChallengeSettings_GetContactDamageFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ClearableComponent.UnsetUniqueFlag
struct UClearableComponent_UnsetUniqueFlag_Params
{
};

// Function Zenith.ClearableComponent.UnsetMapCompletionFlag
struct UClearableComponent_UnsetMapCompletionFlag_Params
{
};

// Function Zenith.ClearableComponent.OnGameMapReady
struct UClearableComponent_OnGameMapReady_Params
{
};

// Function Zenith.ClearableComponent.OnClearedObjectManagerReady
struct UClearableComponent_OnClearedObjectManagerReady_Params
{
};

// Function Zenith.ClearableComponent.MarkCleared
struct UClearableComponent_MarkCleared_Params
{
};

// Function Zenith.ClearableComponent.IsUsedForMapCompletion
struct UClearableComponent_IsUsedForMapCompletion_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ClearableComponent.IsUnique
struct UClearableComponent_IsUnique_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ClearableComponent.IsClearStatusChecked
struct UClearableComponent_IsClearStatusChecked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ClearableComponent.IsCleared
struct UClearableComponent_IsCleared_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ClearableComponent.CheckPreviousRuns
struct UClearableComponent_CheckPreviousRuns_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ClearedObjectManagerComponent.ResetClearedObjects
struct UClearedObjectManagerComponent_ResetClearedObjects_Params
{
};

// Function Zenith.ClearedObjectManagerComponent.IsReady
struct UClearedObjectManagerComponent_IsReady_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ClearedObjectManagerComponent.GetGameMapCompletionPercentage
struct UClearedObjectManagerComponent_GetGameMapCompletionPercentage_Params
{
	struct FName                                       GameMapID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameMapData                                GameMapData;                                               // 0x0008(0x0130)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0138(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ClearedObjectManagerComponent.GetGameMapCompletionActorCount
struct UClearedObjectManagerComponent_GetGameMapCompletionActorCount_Params
{
	struct FName                                       GameMapID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Collectable.OnGrantDrop
struct ACollectable_OnGrantDrop_Params
{
};

// Function Zenith.Collectable.OnGameMapSwitch
struct ACollectable_OnGameMapSwitch_Params
{
};

// Function Zenith.Collectable.OnCollect
struct ACollectable_OnCollect_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Collectable.IsDropGranted
struct ACollectable_IsDropGranted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Collectable.GrantDrop
struct ACollectable_GrantDrop_Params
{
};

// Function Zenith.Collectable.GetExperienceValue
struct ACollectable_GetExperienceValue_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Collectable.GetCollectingPlayerController
struct ACollectable_GetCollectingPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Collectable.Collect
struct ACollectable_Collect_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CollisionComponent.SetCollisionResponseToPawnChannels
struct UCollisionComponent_SetCollisionResponseToPawnChannels_Params
{
	TEnumAsByte<Engine_ECollisionResponse>             CollisionResponse;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAsDefault;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CollisionComponent.SetCollisionResponseToChannels
struct UCollisionComponent_SetCollisionResponseToChannels_Params
{
	TEnumAsByte<Engine_ECollisionResponse>             CollisionResponseToAllChannels;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionResponse>             CollisionResponseToWorldStaticChannel;                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAsDefault;                                                // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CollisionComponent.SetCollisionProfile
struct UCollisionComponent_SetCollisionProfile_Params
{
	struct FName                                       NewCollisionProfileName;                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CollisionComponent.RevertCollisionResponseToPawnChannels
struct UCollisionComponent_RevertCollisionResponseToPawnChannels_Params
{
};

// Function Zenith.CollisionComponent.OnStateRemoved
struct UCollisionComponent_OnStateRemoved_Params
{
};

// Function Zenith.CollisionComponent.OnStateAdded
struct UCollisionComponent_OnStateAdded_Params
{
};

// Function Zenith.CollisionComponent.OnComponentOverlapEnd
struct UCollisionComponent_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CollisionComponent.OnComponentOverlapBegin
struct UCollisionComponent_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.ColorComponent.SetDefaultColor
struct UColorComponent_SetDefaultColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ColorComponent.SetColor
struct UColorComponent_SetColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LerpTime;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ColorComponent.GetCurrentColor
struct UColorComponent_GetCurrentColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ColorComponent.ClearColor
struct UColorComponent_ClearColor_Params
{
	float                                              LerpTime;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.SubRecastTimeCutPercentage
struct UCommandAction_SubRecastTimeCutPercentage_Params
{
	float                                              RecastTimeCutPercentageToSub;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.SubMaxExecutionPercentageBonus
struct UCommandAction_SubMaxExecutionPercentageBonus_Params
{
	float                                              MaxExecutionPercentageBonusToSub;                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.StopMovementTimeline
struct UCommandAction_StopMovementTimeline_Params
{
};

// Function Zenith.CommandAction.StopActionAnimation
struct UCommandAction_StopActionAnimation_Params
{
	bool                                               bOverrideBlend;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Blend;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.StartCommandAction
struct UCommandAction_StartCommandAction_Params
{
};

// Function Zenith.CommandAction.SetPawn
struct UCommandAction_SetPawn_Params
{
	class APawn*                                       NewPawnSubject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.SetMovementMode
struct UCommandAction_SetMovementMode_Params
{
	TEnumAsByte<Engine_EMovementMode>                  MovementMode;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.SetInvokedByInputTypes
struct UCommandAction_SetInvokedByInputTypes_Params
{
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.SetInputSnapshot
struct UCommandAction_SetInputSnapshot_Params
{
	struct FInputSnapshot                              NewInputSnapshot;                                          // 0x0000(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.SetAbilityTimelineGlobalOffset
struct UCommandAction_SetAbilityTimelineGlobalOffset_Params
{
	struct FTransform                                  NewGlobalOffset;                                           // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.SampleCommandAction
struct UCommandAction_SampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.RestoreUseCountByRatio
struct UCommandAction_RestoreUseCountByRatio_Params
{
	float                                              RestoreValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.RestoreCooldownByRatio
struct UCommandAction_RestoreCooldownByRatio_Params
{
	float                                              RestoreValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.ResetAirborneExecutionCount
struct UCommandAction_ResetAirborneExecutionCount_Params
{
};

// Function Zenith.CommandAction.Reset
struct UCommandAction_Reset_Params
{
};

// Function Zenith.CommandAction.RequestEnd
struct UCommandAction_RequestEnd_Params
{
	bool                                               bEndAsFailure;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.PlayActionAnimations
struct UCommandAction_PlayActionAnimations_Params
{
	TArray<struct FSpineAnimationDefinition>           Animations;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.PlayActionAnimation
struct UCommandAction_PlayActionAnimation_Params
{
	struct FSpineAnimationDefinition                   Animation;                                                 // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OverrideByCommandAction
struct UCommandAction_OverrideByCommandAction_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OnWallgrabStarted
struct UCommandAction_OnWallgrabStarted_Params
{
};

// Function Zenith.CommandAction.OnWallgrabStart
struct UCommandAction_OnWallgrabStart_Params
{
};

// Function Zenith.CommandAction.OnStartCommandAction
struct UCommandAction_OnStartCommandAction_Params
{
};

// Function Zenith.CommandAction.OnSampleCommandAction
struct UCommandAction_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OnRemovedFromBuffer
struct UCommandAction_OnRemovedFromBuffer_Params
{
};

// Function Zenith.CommandAction.OnOverrideByCommandAction
struct UCommandAction_OnOverrideByCommandAction_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OnMovementModeUpdated
struct UCommandAction_OnMovementModeUpdated_Params
{
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OnMovementModeChanged
struct UCommandAction_OnMovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  PreMovementMode;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviousCustomMode;                                        // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OnLanded
struct UCommandAction_OnLanded_Params
{
};

// Function Zenith.CommandAction.OnInitialize
struct UCommandAction_OnInitialize_Params
{
};

// Function Zenith.CommandAction.OnHookStarted
struct UCommandAction_OnHookStarted_Params
{
};

// Function Zenith.CommandAction.OnHookStart
struct UCommandAction_OnHookStart_Params
{
};

// Function Zenith.CommandAction.OnFall
struct UCommandAction_OnFall_Params
{
};

// Function Zenith.CommandAction.OnEndCommandAction
struct UCommandAction_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OnCommandActionStarted
struct UCommandAction_OnCommandActionStarted_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OnChangePawn
struct UCommandAction_OnChangePawn_Params
{
	class APawn*                                       OldPawnSubject;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       NewPawnSubject;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.OnChangeInvokedByInputType
struct UCommandAction_OnChangeInvokedByInputType_Params
{
};

// Function Zenith.CommandAction.IsSwimming
struct UCommandAction_IsSwimming_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.IsPlayingActionAnimation
struct UCommandAction_IsPlayingActionAnimation_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.IsOverridenByActionType
struct UCommandAction_IsOverridenByActionType_Params
{
	Zenith_ECommandInputTypes                          commandType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.IsInputTypePressed
struct UCommandAction_IsInputTypePressed_Params
{
	Zenith_ECommandInputTypes                          InputType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.IsGrounded
struct UCommandAction_IsGrounded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.IsFalling
struct UCommandAction_IsFalling_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.IsAbilityTimelineCompleted
struct UCommandAction_IsAbilityTimelineCompleted_Params
{
	bool                                               bCheckAbilities;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.Initialize
struct UCommandAction_Initialize_Params
{
	class UObject*                                     WorldObjectContext;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetStateComponent
struct UCommandAction_GetStateComponent_Params
{
	class UStateComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetRecastTime
struct UCommandAction_GetRecastTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetPawn
struct UCommandAction_GetPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetMPCost
struct UCommandAction_GetMPCost_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetMPComponent
struct UCommandAction_GetMPComponent_Params
{
	class UMPComponent*                                ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetMovementMode
struct UCommandAction_GetMovementMode_Params
{
	TEnumAsByte<Engine_EMovementMode>                  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetMoveInput
struct UCommandAction_GetMoveInput_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetInvokedByInputType
struct UCommandAction_GetInvokedByInputType_Params
{
	Zenith_ECommandInputTypes                          ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetInvokedByDirectionInputType
struct UCommandAction_GetInvokedByDirectionInputType_Params
{
	Zenith_EDirectionInputTypes                        ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetInputVector
struct UCommandAction_GetInputVector_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetInputSnapshot
struct UCommandAction_GetInputSnapshot_Params
{
	struct FInputSnapshot                              ReturnValue;                                               // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetHitStopComponent
struct UCommandAction_GetHitStopComponent_Params
{
	class UHitStopComponent*                           ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetExecutionTime
struct UCommandAction_GetExecutionTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetDirectionInputType
struct UCommandAction_GetDirectionInputType_Params
{
	Zenith_EDirectionInputTypes                        ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetCooldownTime
struct UCommandAction_GetCooldownTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetCharacterMovementComponent
struct UCommandAction_GetCharacterMovementComponent_Params
{
	class UCharacterMovementComponent*                 ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.GetAnimationComponent
struct UCommandAction_GetAnimationComponent_Params
{
	class USpineAnimationComponent*                    ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.FullyRestore
struct UCommandAction_FullyRestore_Params
{
};

// Function Zenith.CommandAction.EndCommandAction
struct UCommandAction_EndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.ContainsConsumeMPCommand
struct UCommandAction_ContainsConsumeMPCommand_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.CanUseCommandInput
struct UCommandAction_CanUseCommandInput_Params
{
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.CanStartCommandAction
struct UCommandAction_CanStartCommandAction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.CanMove
struct UCommandAction_CanMove_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.AllowRecastTimeCut
struct UCommandAction_AllowRecastTimeCut_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.AddRecastTimeCutPercentage
struct UCommandAction_AddRecastTimeCutPercentage_Params
{
	float                                              RecastTimeCutPercentageToAdd;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandAction.AddMaxExecutionPercentageBonus
struct UCommandAction_AddMaxExecutionPercentageBonus_Params
{
	float                                              MaxExecutionPercentageBonusToAdd;                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionComboEntry.GetSubCommands
struct UCommandActionComboEntry_GetSubCommands_Params
{
	TArray<class UClass*>                              ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionComboEntry.GetOwnerCommandActionCombo
struct UCommandActionComboEntry_GetOwnerCommandActionCombo_Params
{
	class UCommandActionCombo*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionCombo.SetNextComboEntry
struct UCommandActionCombo_SetNextComboEntry_Params
{
	class UClass*                                      NextComboEntry;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExecuteAutomatically;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionCombo.ResetCombo
struct UCommandActionCombo_ResetCombo_Params
{
};

// Function Zenith.CommandActionCombo.OnResetCombo
struct UCommandActionCombo_OnResetCombo_Params
{
};

// Function Zenith.CommandActionCombo.OnPawnStartCommand
struct UCommandActionCombo_OnPawnStartCommand_Params
{
	class UCommandAction*                              Command;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionCombo.OnPawnKnockback
struct UCommandActionCombo_OnPawnKnockback_Params
{
	struct FKnockbackRuntimeData                       KnockbackRuntimeData;                                      // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionCombo.OnPawnEndCommand
struct UCommandActionCombo_OnPawnEndCommand_Params
{
	class UCommandAction*                              Command;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionSummon.GetSpirit
struct UCommandActionSummon_GetSpirit_Params
{
	class AZenithSpirit*                               ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionSummonInterface.GetSpiritClass
struct UCommandActionSummonInterface_GetSpiritClass_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionSummonSettingsCastLimitInterface.ReachedCastLimit
struct UCommandActionSummonSettingsCastLimitInterface_ReachedCastLimit_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionSummonSettingsCastLimitInterface.GetRemainingCastValue
struct UCommandActionSummonSettingsCastLimitInterface_GetRemainingCastValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionSummonSettingsCastLimitInterface.GetCastLimitType
struct UCommandActionSummonSettingsCastLimitInterface_GetCastLimitType_Params
{
	Zenith_ECommandSummonLimitType                     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionSummonSettingsCastLimitInterface.BindOnCastLimitReached
struct UCommandActionSummonSettingsCastLimitInterface_BindOnCastLimitReached_Params
{
	struct FScriptDelegate                             OnCastLimitReached;                                        // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandActionSummonSettingsCastLimitInterface.BindOnCastLimitChanged
struct UCommandActionSummonSettingsCastLimitInterface_BindOnCastLimitChanged_Params
{
	struct FScriptDelegate                             OnCastLimitChanged;                                        // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.UpdateCommands
struct UCommandQueueComponent_UpdateCommands_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.TryAddCommandsFromSettings
struct UCommandQueueComponent_TryAddCommandsFromSettings_Params
{
	struct FInputSnapshot                              InputSnapshot;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommandSettings                            CommandSettings;                                           // 0x0028(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                FrameID;                                                   // 0x00B0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x00B4(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.TryAddCommandsForInputs
struct UCommandQueueComponent_TryAddCommandsForInputs_Params
{
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommandSet*                                 CommandSet;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.TryAddCommands
struct UCommandQueueComponent_TryAddCommands_Params
{
	struct FInputSnapshot                              InputSnapshot;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UCommandSet*                                 CommandSet;                                                // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.TryAddCommandForInputsFromSettings
struct UCommandQueueComponent_TryAddCommandForInputsFromSettings_Params
{
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCommandSettings                            CommandSettings;                                           // 0x0008(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                FrameID;                                                   // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0094(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.TryAddCommandForInputs
struct UCommandQueueComponent_TryAddCommandForInputs_Params
{
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommandSet*                                 CommandSet;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.SubRecastTimeCutPercentage
struct UCommandQueueComponent_SubRecastTimeCutPercentage_Params
{
	float                                              RecastTimeCutPercentageToSub;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.SubMaxExecutionPercentageBonus
struct UCommandQueueComponent_SubMaxExecutionPercentageBonus_Params
{
	float                                              MaxExecutionPercentageBonusToSub;                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.RestoreUseCountByRatio
struct UCommandQueueComponent_RestoreUseCountByRatio_Params
{
	float                                              RestoreValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.RestoreCooldownByRatio
struct UCommandQueueComponent_RestoreCooldownByRatio_Params
{
	float                                              RestoreValue;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.PreloadCommandAction
struct UCommandQueueComponent_PreloadCommandAction_Params
{
	class UClass*                                      CommandActionType;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.IsCommandSettingsStartable
struct UCommandQueueComponent_IsCommandSettingsStartable_Params
{
	struct FCommandSettings                            CommandSettings;                                           // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0089(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x008A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.HasCommandOfType
struct UCommandQueueComponent_HasCommandOfType_Params
{
	class UClass*                                      CommandActionClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.HasCommandForCommandID
struct UCommandQueueComponent_HasCommandForCommandID_Params
{
	int                                                CommandID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.HasCommand
struct UCommandQueueComponent_HasCommand_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.GetOrCreateCommandAction
struct UCommandQueueComponent_GetOrCreateCommandAction_Params
{
	class UClass*                                      CommandActionType;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommandAction*                              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.GetNextFrameID
struct UCommandQueueComponent_GetNextFrameID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.GetCurrentResultForCommandID
struct UCommandQueueComponent_GetCurrentResultForCommandID_Params
{
	int                                                CommandID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.GetCurrentCommand
struct UCommandQueueComponent_GetCurrentCommand_Params
{
	class UCommand*                                    ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.FullyRestore
struct UCommandQueueComponent_FullyRestore_Params
{
};

// Function Zenith.CommandQueueComponent.ClearQueuedCommandBuffer
struct UCommandQueueComponent_ClearQueuedCommandBuffer_Params
{
};

// Function Zenith.CommandQueueComponent.ClearCommandBuffer
struct UCommandQueueComponent_ClearCommandBuffer_Params
{
};

// Function Zenith.CommandQueueComponent.AddRecastTimeCutPercentage
struct UCommandQueueComponent_AddRecastTimeCutPercentage_Params
{
	float                                              RecastTimeCutPercentageToAdd;                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.AddNewImmediateCommand
struct UCommandQueueComponent_AddNewImmediateCommand_Params
{
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CommandActionClass;                                        // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.AddNewCommandGroup
struct UCommandQueueComponent_AddNewCommandGroup_Params
{
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              CommandActionClasses;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              BufferTTL;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.AddNewCommand
struct UCommandQueueComponent_AddNewCommand_Params
{
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCommandSettings                            CommandSettings;                                           // 0x0008(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                FrameID;                                                   // 0x0090(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AddToFront;                                                // 0x0094(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0098(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandQueueComponent.AddMaxExecutionPercentageBonus
struct UCommandQueueComponent_AddMaxExecutionPercentageBonus_Params
{
	float                                              MaxExecutionPercentageBonusToAdd;                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandSet.RemoveCommand
struct UCommandSet_RemoveCommand_Params
{
	int                                                RuntimeID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandSet.RemoveAllCommandsForInputType
struct UCommandSet_RemoveAllCommandsForInputType_Params
{
	Zenith_ECommandInputTypes                          InputType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CommandSet.AddCommand
struct UCommandSet_AddCommand_Params
{
	struct FCommandSettings                            CommandSettings;                                           // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ComparisonCondition.GetValueToCompare
struct UComparisonCondition_GetValueToCompare_Params
{
	class AAIController*                               AIController;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ComparisonCondition.GetComparingValue
struct UComparisonCondition_GetComparingValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ConstantForceComponent.GetConstantForce
struct UConstantForceComponent_GetConstantForce_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CounterAttackComponent.OnJustGuard
struct UCounterAttackComponent_OnJustGuard_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Invoker;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWillForwardEventToAttacker;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CounterAttackComponent.OnExecuteCommandWhileCounter
struct UCounterAttackComponent_OnExecuteCommandWhileCounter_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CustomPhysicsVolume.IsPhysicsVolumeEnabled
struct ACustomPhysicsVolume_IsPhysicsVolumeEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CustomPhysicsVolume.GetPriority
struct ACustomPhysicsVolume_GetPriority_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CustomPhysicsVolumeWater.IsSimulatingWaterLine
struct ACustomPhysicsVolumeWater_IsSimulatingWaterLine_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CustomPhysicsVolumeWater.GetHeightAtLocation
struct ACustomPhysicsVolumeWater_GetHeightAtLocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CustomPhysicsVolumeWater.GetFluidFriction
struct ACustomPhysicsVolumeWater_GetFluidFriction_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CustomScrollBox.ScrollWidgetHostIntoView
struct UCustomScrollBox_ScrollWidgetHostIntoView_Params
{
	class UNativeWidgetHost*                           NativeWidgetHost;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InAnimateScroll;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EDescendantScrollDestination                 InDestination;                                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InScrollPadding;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CVarsBPFLibrary.GetUIHide
struct UCVarsBPFLibrary_GetUIHide_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CVarsBPFLibrary.GetDebugIgnoreTouchDamage
struct UCVarsBPFLibrary_GetDebugIgnoreTouchDamage_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CVarsBPFLibrary.GetDebugDrawJumpCurves
struct UCVarsBPFLibrary_GetDebugDrawJumpCurves_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.CVarsBPFLibrary.GetActionAllowInfiniteJumps
struct UCVarsBPFLibrary_GetActionAllowInfiniteJumps_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.IsValid
struct UDataTableBPFLibrary_IsValid_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetTutorialDialogData
struct UDataTableBPFLibrary_GetTutorialDialogData_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTutorialDialogData                         out_TutorialDialogDataData;                                // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetSpiritDataInfos
struct UDataTableBPFLibrary_GetSpiritDataInfos_Params
{
	class AZenithPlayerController*                     ZPlayerController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         ItemSpiritDataHandle;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIgnoreLevelOverride;                                      // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EItemSpiritType                             out_ItemSpiritType;                                        // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandSummonLimitType                     out_CastLimitType;                                         // 0x001A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                out_CastCount;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              out_RecastTime;                                            // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               out_bUnderwater;                                           // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetRecollectionItemData
struct UDataTableBPFLibrary_GetRecollectionItemData_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Zenith_ERecollectionItemType                       RecollectionItemType;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRecollectionItemData                       out_RecollectionItemData;                                  // 0x0018(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetItemTipData
struct UDataTableBPFLibrary_GetItemTipData_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FItemTipData                                out_ItemTipData;                                           // 0x0010(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetItemSpiritData
struct UDataTableBPFLibrary_GetItemSpiritData_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FItemSpiritData                             out_ItemData;                                              // 0x0010(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0138(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetItemPassiveData
struct UDataTableBPFLibrary_GetItemPassiveData_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FItemPassiveData                            out_ItemPassiveData;                                       // 0x0010(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetGameMapData
struct UDataTableBPFLibrary_GetGameMapData_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameMapData                                out_GameMapData;                                           // 0x0010(0x0130)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0140(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetBaseItemData
struct UDataTableBPFLibrary_GetBaseItemData_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FBaseItemData                               out_ItemData;                                              // 0x0010(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DataTableBPFLibrary.GetAchievementData
struct UDataTableBPFLibrary_GetAchievementData_Params
{
	struct FDataTableRowHandle                         Handle;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAchievementData                            out_AchievementData;                                       // 0x0010(0x0098)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DeathComponent.ResetDeathProcess
struct UDeathComponent_ResetDeathProcess_Params
{
};

// Function Zenith.DeathComponent.OnStartDeathProcess
struct UDeathComponent_OnStartDeathProcess_Params
{
};

// Function Zenith.DeathComponent.OnReceiveDeadEvent
struct UDeathComponent_OnReceiveDeadEvent_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DeathComponent.OnPlayerDeathTimerComplete
struct UDeathComponent_OnPlayerDeathTimerComplete_Params
{
};

// Function Zenith.DeathComponent.OnKnockbackTimerComplete
struct UDeathComponent_OnKnockbackTimerComplete_Params
{
};

// Function Zenith.DeathComponent.OnFinishDeathProcess
struct UDeathComponent_OnFinishDeathProcess_Params
{
};

// Function Zenith.DeathComponent.OnDeathAnimationComplete
struct UDeathComponent_OnDeathAnimationComplete_Params
{
};

// Function Zenith.DeathComponent.NotifyManualDeathCompleted
struct UDeathComponent_NotifyManualDeathCompleted_Params
{
};

// Function Zenith.DeathComponent.NotifyDissolveDeathCompleted
struct UDeathComponent_NotifyDissolveDeathCompleted_Params
{
};

// Function Zenith.DeathComponent.IsDead
struct UDeathComponent_IsDead_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DeathComponent.IsAlive
struct UDeathComponent_IsAlive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DeathComponent.ForceDeath
struct UDeathComponent_ForceDeath_Params
{
};

// Function Zenith.DebugMenuSubsystem.ShowDebugMenu
struct UDebugMenuSubsystem_ShowDebugMenu_Params
{
	class UClass*                                      DebugMenuClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DebugMenuSubsystem.IsDebugMenuShown
struct UDebugMenuSubsystem_IsDebugMenuShown_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DebugMenuSubsystem.HideDebugMenu
struct UDebugMenuSubsystem_HideDebugMenu_Params
{
};

// Function Zenith.DebugMenuSubsystem.GetTimeSinceLastClose
struct UDebugMenuSubsystem_GetTimeSinceLastClose_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DebugMenuSubsystem.CanShowDebugMenu
struct UDebugMenuSubsystem_CanShowDebugMenu_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DelayFrameCountAsyncAction.DelayFrameCount
struct UDelayFrameCountAsyncAction_DelayFrameCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DelayInFrames;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDelayFrameCountAsyncAction*                 ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DisableAudioSnapshotOnGameMapReadyAsyncAction.OnGameMapReady
struct UDisableAudioSnapshotOnGameMapReadyAsyncAction_OnGameMapReady_Params
{
};

// Function Zenith.DisableAudioSnapshotOnGameMapReadyAsyncAction.DisableAudioSnapshotOnGameMapReady
struct UDisableAudioSnapshotOnGameMapReadyAsyncAction_DisableAudioSnapshotOnGameMapReady_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsiderFadeAsLoading;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AudioSnapshotTag;                                          // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDisableAudioSnapshotOnGameMapReadyAsyncAction* ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DisableAudioSnapshotOnGameMapReadyAsyncAction.CheckGameMapReady
struct UDisableAudioSnapshotOnGameMapReadyAsyncAction_CheckGameMapReady_Params
{
};

// Function Zenith.DropComponent.SetDropDataHandle
struct UDropComponent_SetDropDataHandle_Params
{
	struct FDataTableRowHandle                         NewDropDataHandle;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.DropComponent.OnDeath
struct UDropComponent_OnDeath_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.DropComponent.LaunchDropProcess
struct UDropComponent_LaunchDropProcess_Params
{
};

// Function Zenith.EffectBPFLibrary.StopAllDeactivatingParticleSystems
struct UEffectBPFLibrary_StopAllDeactivatingParticleSystems_Params
{
};

// Function Zenith.EffectBPFLibrary.GetStepEffectForSurfaceType
struct UEffectBPFLibrary_GetStepEffectForSurfaceType_Params
{
	class UObject*                                     WorldContextObj;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EffectBPFLibrary.GetLandingEffectForSurfaceType
struct UEffectBPFLibrary_GetLandingEffectForSurfaceType_Params
{
	class UObject*                                     WorldContextObj;                                           // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ElevatorMovementComponent.TeleportToOrigin
struct UElevatorMovementComponent_TeleportToOrigin_Params
{
};

// Function Zenith.ElevatorMovementComponent.TeleportToDestination
struct UElevatorMovementComponent_TeleportToDestination_Params
{
};

// Function Zenith.ElevatorMovementComponent.SetSpeedFactor
struct UElevatorMovementComponent_SetSpeedFactor_Params
{
	float                                              NewSpeedFactor;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ElevatorMovementComponent.IsMoving
struct UElevatorMovementComponent_IsMoving_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ElevatorMovementComponent.IsDirectionSetToDestination
struct UElevatorMovementComponent_IsDirectionSetToDestination_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ElevatorMovementComponent.GoToOrigin
struct UElevatorMovementComponent_GoToOrigin_Params
{
};

// Function Zenith.ElevatorMovementComponent.GoToDestination
struct UElevatorMovementComponent_GoToDestination_Params
{
};

// Function Zenith.ElevatorMovementComponent.GetSpeedFactor
struct UElevatorMovementComponent_GetSpeedFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EmulatedFog.SetFogActive
struct AEmulatedFog_SetFogActive_Params
{
	bool                                               bNewActive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EmulatedFog.OnDeactivateFog
struct AEmulatedFog_OnDeactivateFog_Params
{
};

// Function Zenith.EmulatedFog.OnActivateFog
struct AEmulatedFog_OnActivateFog_Params
{
};

// Function Zenith.EmulatedFog.IsInfiniteBounds
struct AEmulatedFog_IsInfiniteBounds_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EmulatedFog.DeactivateFog
struct AEmulatedFog_DeactivateFog_Params
{
	bool                                               bForce;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EmulatedFog.ActivateFog
struct AEmulatedFog_ActivateFog_Params
{
	bool                                               bForce;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EmulatedLightDetector.RefreshEmulatedLights
struct UEmulatedLightDetector_RefreshEmulatedLights_Params
{
};

// Function Zenith.EnemySpawnPoint.OverrideEnemySpawned
struct AEnemySpawnPoint_OverrideEnemySpawned_Params
{
	class AZenithCharacter*                            NewEnemy;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EnemySpawnPoint.OnUnregisterEnemy
struct AEnemySpawnPoint_OnUnregisterEnemy_Params
{
};

// Function Zenith.EnemySpawnPoint.OnSpawnPointAlreadyCleared
struct AEnemySpawnPoint_OnSpawnPointAlreadyCleared_Params
{
	bool                                               bHasPreviousDeathTransform;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  PreviousDeathTransform;                                    // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.EnemySpawnPoint.OnRegisterEnemy
struct AEnemySpawnPoint_OnRegisterEnemy_Params
{
};

// Function Zenith.EnemySpawnPoint.OnOverrideEnemySpawned
struct AEnemySpawnPoint_OnOverrideEnemySpawned_Params
{
};

// Function Zenith.EnemySpawnPoint.OnEnemySpawn
struct AEnemySpawnPoint_OnEnemySpawn_Params
{
};

// Function Zenith.EnemySpawnPoint.OnEnemyRespawn
struct AEnemySpawnPoint_OnEnemyRespawn_Params
{
};

// Function Zenith.EnemySpawnPoint.OnEnemyDeathStart
struct AEnemySpawnPoint_OnEnemyDeathStart_Params
{
};

// Function Zenith.EnemySpawnPoint.OnEnemyDeathProcessStart
struct AEnemySpawnPoint_OnEnemyDeathProcessStart_Params
{
};

// Function Zenith.EnemySpawnPoint.OnEnemyDeathProcessEnd
struct AEnemySpawnPoint_OnEnemyDeathProcessEnd_Params
{
};

// Function Zenith.EnemySpawnPoint.OnEnemyDeath
struct AEnemySpawnPoint_OnEnemyDeath_Params
{
};

// Function Zenith.EnemySpawnPoint.OnEnemyActivate
struct AEnemySpawnPoint_OnEnemyActivate_Params
{
};

// Function Zenith.EnemySpawnPoint.OnClearedStatusChecked
struct AEnemySpawnPoint_OnClearedStatusChecked_Params
{
	bool                                               bCleared;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EnemySpawnPoint.OnApplyBlackboardOverride
struct AEnemySpawnPoint_OnApplyBlackboardOverride_Params
{
};

// Function Zenith.EnemySpawnPoint.IsEnemySpawned
struct AEnemySpawnPoint_IsEnemySpawned_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EnemySpawnPoint.IsEnemyActivated
struct AEnemySpawnPoint_IsEnemyActivated_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EnemySpawnPoint.GetEnemyController
struct AEnemySpawnPoint_GetEnemyController_Params
{
	class AController*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EnemySpawnPoint.GetEnemy
struct AEnemySpawnPoint_GetEnemy_Params
{
	class AZenithCharacter*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.EnemySpawnPoint.ActivateEnemy
struct AEnemySpawnPoint_ActivateEnemy_Params
{
};

// Function Zenith.ErrorSubsystem.ReportError
struct UErrorSubsystem_ReportError_Params
{
	Zenith_EZenithError                                Error;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ExecuteActionAsync.Update
struct UExecuteActionAsync_Update_Params
{
};

// Function Zenith.ExecuteActionAsync.Finish
struct UExecuteActionAsync_Finish_Params
{
};

// Function Zenith.ExecuteActionAsync.ExecuteActionAsync
struct UExecuteActionAsync_ExecuteActionAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommandQueueComponent*                      CommandQueueComponent;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      CommandActionClass;                                        // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExecuteActionAsync*                         ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ExecuteTutorialHookAsyncAction.Finish
struct UExecuteTutorialHookAsyncAction_Finish_Params
{
};

// Function Zenith.ExecuteTutorialHookAsyncAction.ExecuteTutorialHook
struct UExecuteTutorialHookAsyncAction_ExecuteTutorialHook_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZenithPlayerController*                     PlayerController;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ETutorialHook                               TutorialHook;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExecuteTutorialHookAsyncAction*             ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FactionComponent.SetFaction
struct UFactionComponent_SetFaction_Params
{
	Zenith_EFaction                                    NewFaction;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FactionComponent.IsSameFaction
struct UFactionComponent_IsSameFaction_Params
{
	Zenith_EFaction                                    OtherFaction;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FactionComponent.IsPlayerFaction
struct UFactionComponent_IsPlayerFaction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Fader.PrepareFadeIn
struct AFader_PrepareFadeIn_Params
{
};

// Function Zenith.Fader.OnLevelSequencePlay
struct AFader_OnLevelSequencePlay_Params
{
};

// Function Zenith.Fader.OnLevelSequenceFinished
struct AFader_OnLevelSequenceFinished_Params
{
};

// Function Zenith.Fader.LaunchFadeOut
struct AFader_LaunchFadeOut_Params
{
};

// Function Zenith.Fader.LaunchFadeIn
struct AFader_LaunchFadeIn_Params
{
};

// Function Zenith.FadeSubsystem.PrepareFadeInAtZOrder
struct UFadeSubsystem_PrepareFadeInAtZOrder_Params
{
	class UClass*                                      FadeClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeSubsystem.PrepareFadeIn
struct UFadeSubsystem_PrepareFadeIn_Params
{
	class UClass*                                      FadeClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeSubsystem.OnFadeFinished
struct UFadeSubsystem_OnFadeFinished_Params
{
	bool                                               bWasFadeIn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeSubsystem.LaunchFadeOut
struct UFadeSubsystem_LaunchFadeOut_Params
{
	class UClass*                                      FadeClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnFadeFinished;                                            // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeSubsystem.LaunchFadeIn
struct UFadeSubsystem_LaunchFadeIn_Params
{
	class UClass*                                      FadeClass;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnFadeFinished;                                            // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeSubsystem.LaunchFadeAtZOrder
struct UFadeSubsystem_LaunchFadeAtZOrder_Params
{
	bool                                               bFadeIn;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeClass;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnFadeFinished;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeSubsystem.LaunchFade
struct UFadeSubsystem_LaunchFade_Params
{
	bool                                               bFadeIn;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeClass;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnFadeFinished;                                            // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeSubsystem.IsFading
struct UFadeSubsystem_IsFading_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeSubsystem.GetLastFadeType
struct UFadeSubsystem_GetLastFadeType_Params
{
	Zenith_EFadeTypes                                  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeUserWidget.PrepareFadeIn
struct UFadeUserWidget_PrepareFadeIn_Params
{
};

// Function Zenith.FadeUserWidget.NotifyFinish
struct UFadeUserWidget_NotifyFinish_Params
{
	bool                                               bWasFadeIn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FadeUserWidget.LaunchFadeOut
struct UFadeUserWidget_LaunchFadeOut_Params
{
};

// Function Zenith.FadeUserWidget.LaunchFadeIn
struct UFadeUserWidget_LaunchFadeIn_Params
{
};

// Function Zenith.FluidMeshComponent.OnComponentEndOverlap
struct UFluidMeshComponent_OnComponentEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FluidMeshComponent.OnComponentBeginOverlap
struct UFluidMeshComponent_OnComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.FluidMeshComponent.IsActorInteractionEnabled
struct UFluidMeshComponent_IsActorInteractionEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FluidMeshComponent.GetInteractingActors
struct UFluidMeshComponent_GetInteractingActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.FluidMeshComponent.GetHeightAtLocation
struct UFluidMeshComponent_GetHeightAtLocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FollowSplineComponent.Launch
struct UFollowSplineComponent_Launch_Params
{
	bool                                               bForward;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FollowTargetComponent.TeleportToTarget
struct UFollowTargetComponent_TeleportToTarget_Params
{
};

// Function Zenith.FollowTargetComponent.SetFollowTarget
struct UFollowTargetComponent_SetFollowTarget_Params
{
	class USceneComponent*                             NewFollowTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToTarget;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FollowTargetComponent.GetTargetLocation
struct UFollowTargetComponent_GetTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FollowTargetComponent.GetFollowTargetLocation
struct UFollowTargetComponent_GetFollowTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FollowTargetComponent.GetFollowTargetForward
struct UFollowTargetComponent_GetFollowTargetForward_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FollowTargetComponent.GetFollowTargetDeltaLocation
struct UFollowTargetComponent_GetFollowTargetDeltaLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FollowTargetComponent.GetFollowTarget
struct UFollowTargetComponent_GetFollowTarget_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.FollowTargetComponent.ClearFollowTarget
struct UFollowTargetComponent_ClearFollowTarget_Params
{
};

// Function Zenith.GameBPFLibrary.SetPreviewLanguage
struct UGameBPFLibrary_SetPreviewLanguage_Params
{
	struct FString                                     CultureName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.PrintStringWarning
struct UGameBPFLibrary_PrintStringWarning_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.PrintStringError
struct UGameBPFLibrary_PrintStringError_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsXboxOne
struct UGameBPFLibrary_IsXboxOne_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsXboxFamilyBuild
struct UGameBPFLibrary_IsXboxFamilyBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsSwitchBuild
struct UGameBPFLibrary_IsSwitchBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsSteamBuild
struct UGameBPFLibrary_IsSteamBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsShippingBuild
struct UGameBPFLibrary_IsShippingBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsPSFamilyBuild
struct UGameBPFLibrary_IsPSFamilyBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsPS5Build
struct UGameBPFLibrary_IsPS5Build_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsPS4Build
struct UGameBPFLibrary_IsPS4Build_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsPCBuild
struct UGameBPFLibrary_IsPCBuild_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsEditor
struct UGameBPFLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.IsEarlyAccessBuild
struct UGameBPFLibrary_IsEarlyAccessBuild_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.GetVersion
struct UGameBPFLibrary_GetVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.GetRHIInfo
struct UGameBPFLibrary_GetRHIInfo_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.GetPreviewLanguage
struct UGameBPFLibrary_GetPreviewLanguage_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.GetGameResolution
struct UGameBPFLibrary_GetGameResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.GetDesktopResolution
struct UGameBPFLibrary_GetDesktopResolution_Params
{
	struct FIntPoint                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.GetBuildNumber
struct UGameBPFLibrary_GetBuildNumber_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameBPFLibrary.DoesGameVersionMatchesPakVersion
struct UGameBPFLibrary_DoesGameVersionMatchesPakVersion_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.SetLaunchGameIntent
struct UGameInstanceZenithBase_SetLaunchGameIntent_Params
{
	Zenith_ELaunchGameIntent                           Intent;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.IsSimulatingEarlyAccess
struct UGameInstanceZenithBase_IsSimulatingEarlyAccess_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.GetSoundVCA
struct UGameInstanceZenithBase_GetSoundVCA_Params
{
	Zenith_ESoundFamily                                SoundFamily;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODVCA*                                    ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.GetSoundEffectMatrixData
struct UGameInstanceZenithBase_GetSoundEffectMatrixData_Params
{
	class USoundMatrixData*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.GetPersistentGameWorld
struct UGameInstanceZenithBase_GetPersistentGameWorld_Params
{
};

// Function Zenith.GameInstanceZenithBase.GetLaunchGameIntent
struct UGameInstanceZenithBase_GetLaunchGameIntent_Params
{
	Zenith_ELaunchGameIntent                           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.GetGameInstanceZenith
struct UGameInstanceZenithBase_GetGameInstanceZenith_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameInstanceZenithBase*                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.GetErrorUserWidget
struct UGameInstanceZenithBase_GetErrorUserWidget_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.GetErrorDataTable
struct UGameInstanceZenithBase_GetErrorDataTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameInstanceZenithBase.GetAchievementDataTable
struct UGameInstanceZenithBase_GetAchievementDataTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.StopAllForceFeedbacks
struct UGameLogicBPFLibrary_StopAllForceFeedbacks_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.LaunchForceFeedback
struct UGameLogicBPFLibrary_LaunchForceFeedback_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.LaunchCameraShake
struct UGameLogicBPFLibrary_LaunchCameraShake_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Shake;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Epicenter;                                                 // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InnerRadius;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OuterRadius;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Falloff;                                                   // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOrientShakeTowardsEpicenter;                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.IsSameVerticalDirection
struct UGameLogicBPFLibrary_IsSameVerticalDirection_Params
{
	Zenith_EDirectionInputTypes                        DirectionA;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EDirectionInputTypes                        DirectionB;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsiderNeutralAsSame;                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.IsSameHorizontalDirection
struct UGameLogicBPFLibrary_IsSameHorizontalDirection_Params
{
	Zenith_EDirectionInputTypes                        DirectionA;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EDirectionInputTypes                        DirectionB;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsiderNeutralAsSame;                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.IsPureVerticalDirection
struct UGameLogicBPFLibrary_IsPureVerticalDirection_Params
{
	Zenith_EDirectionInputTypes                        Direction;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsiderNeutralAsVertical;                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.IsPureHorizontalDirection
struct UGameLogicBPFLibrary_IsPureHorizontalDirection_Params
{
	Zenith_EDirectionInputTypes                        Direction;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsiderNeutralAsHorizontal;                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.GetSpecialAttackMPCost
struct UGameLogicBPFLibrary_GetSpecialAttackMPCost_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.GetRestPlayerPointStartTag
struct UGameLogicBPFLibrary_GetRestPlayerPointStartTag_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.GetClosestEnemyOfActor
struct UGameLogicBPFLibrary_GetClosestEnemyOfActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Range;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNeedLineOfSight;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFrontCheck;                                               // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.ComputeLaunchVelocityToDestination
struct UGameLogicBPFLibrary_ComputeLaunchVelocityToDestination_Params
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DestinationLocation;                                       // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityFactor;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameLogicBPFLibrary.CanUseStrengthenOnAnySpirit
struct UGameLogicBPFLibrary_CanUseStrengthenOnAnySpirit_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.SetNewGamePlusGeneration
struct AGameModeZenithBase_SetNewGamePlusGeneration_Params
{
	int                                                NewNewGamePlusGeneration;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.SetDifficultyLevel
struct AGameModeZenithBase_SetDifficultyLevel_Params
{
	int                                                NewDifficultyLevel;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.RespawnPlayerPawn
struct AGameModeZenithBase_RespawnPlayerPawn_Params
{
	class APlayerController*                           Player;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeOutClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeInClass;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.RegisterBossRushComponent
struct AGameModeZenithBase_RegisterBossRushComponent_Params
{
	class UBossRushComponent*                          NewBossRushComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.OnGameMapSwitch
struct AGameModeZenithBase_OnGameMapSwitch_Params
{
};

// Function Zenith.GameModeZenithBase.OnGameDataLoaded
struct AGameModeZenithBase_OnGameDataLoaded_Params
{
};

// Function Zenith.GameModeZenithBase.NotifyTutorialsFinished
struct AGameModeZenithBase_NotifyTutorialsFinished_Params
{
};

// Function Zenith.GameModeZenithBase.NotifyGameEndingReached
struct AGameModeZenithBase_NotifyGameEndingReached_Params
{
	Zenith_EGameEndingType                             GameEndingType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.LoadGameData
struct AGameModeZenithBase_LoadGameData_Params
{
	class UClass*                                      FadeOutClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeInClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.LaunchTutorials
struct AGameModeZenithBase_LaunchTutorials_Params
{
	class AZenithPlayerController*                     PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTutorialKeyDataPair>                Tutorials;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.IsGameCleared
struct AGameModeZenithBase_IsGameCleared_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetParameterLevelTable
struct AGameModeZenithBase_GetParameterLevelTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetNewGamePlusGeneration
struct AGameModeZenithBase_GetNewGamePlusGeneration_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetMaxDifficultyLevel
struct AGameModeZenithBase_GetMaxDifficultyLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetItemTipTable
struct AGameModeZenithBase_GetItemTipTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetItemSpiritTable
struct AGameModeZenithBase_GetItemSpiritTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetItemPassiveTable
struct AGameModeZenithBase_GetItemPassiveTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetItemParameterTable
struct AGameModeZenithBase_GetItemParameterTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetItemGenericTable
struct AGameModeZenithBase_GetItemGenericTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetItemAptitudeTable
struct AGameModeZenithBase_GetItemAptitudeTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetInitialCommonSpiritLevelTable
struct AGameModeZenithBase_GetInitialCommonSpiritLevelTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetInitialBossSpiritLevelTable
struct AGameModeZenithBase_GetInitialBossSpiritLevelTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetHealPowerLevelTable
struct AGameModeZenithBase_GetHealPowerLevelTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetHealCountLevelTable
struct AGameModeZenithBase_GetHealCountLevelTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetGameModeZenith
struct AGameModeZenithBase_GetGameModeZenith_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGameModeZenithBase*                         ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetGameMapTable
struct AGameModeZenithBase_GetGameMapTable_Params
{
	class UDataTable*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetGameEndingCountReached
struct AGameModeZenithBase_GetGameEndingCountReached_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetGameClearCount
struct AGameModeZenithBase_GetGameClearCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetEffectMatrixData
struct AGameModeZenithBase_GetEffectMatrixData_Params
{
	class UEffectMatrixData*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetDifficultyLevelWithoutOverride
struct AGameModeZenithBase_GetDifficultyLevelWithoutOverride_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetDifficultyLevel
struct AGameModeZenithBase_GetDifficultyLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetChapterDisplay
struct AGameModeZenithBase_GetChapterDisplay_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.GetChallengeSettings
struct AGameModeZenithBase_GetChallengeSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChallengeSettings*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.DidReachGameEnding
struct AGameModeZenithBase_DidReachGameEnding_Params
{
	Zenith_EGameEndingType                             GameEndingType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckPreviousGameGeneration;                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameModeZenithBase.AddDifficultyLevel
struct AGameModeZenithBase_AddDifficultyLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.RemoveStates
struct UStateComponent_RemoveStates_Params
{
	TArray<class UClass*>                              States;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.RemoveState
struct UStateComponent_RemoveState_Params
{
	class UClass*                                      State;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.RemoveAllStates
struct UStateComponent_RemoveAllStates_Params
{
};

// Function Zenith.StateComponent.HasState
struct UStateComponent_HasState_Params
{
	class UClass*                                      State;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.HasAnyState
struct UStateComponent_HasAnyState_Params
{
	TArray<class UClass*>                              States;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.HasAllStates
struct UStateComponent_HasAllStates_Params
{
	TArray<class UClass*>                              States;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.CanUseCommandInput
struct UStateComponent_CanUseCommandInput_Params
{
	Zenith_ECommandInputTypes                          CommandInput;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.AddStatesForDuration
struct UStateComponent_AddStatesForDuration_Params
{
	TArray<class UClass*>                              States;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.AddStates
struct UStateComponent_AddStates_Params
{
	TArray<class UClass*>                              States;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// Function Zenith.StateComponent.AddState
struct UStateComponent_AddState_Params
{
	class UClass*                                      State;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StreamingVolume.OnLevelLoaded
struct AStreamingVolume_OnLevelLoaded_Params
{
};

// Function Zenith.StreamingVolume.OnEndOverlap
struct AStreamingVolume_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StreamingVolume.OnBeginOverlap
struct AStreamingVolume_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.StringBPFLibrary.Sort
struct UStringBPFLibrary_Sort_Params
{
	TArray<struct FString>                             Array;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.StringBPFLibrary.ConvertTimeToString
struct UStringBPFLibrary_ConvertTimeToString_Params
{
	float                                              TimeInSeconds;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RegenerativeParamComponent.Subtract
struct URegenerativeParamComponent_Subtract_Params
{
	int                                                ValueToSub;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RegenerativeParamComponent.SetMaxValue
struct URegenerativeParamComponent_SetMaxValue_Params
{
	float                                              NewMaxValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RegenerativeParamComponent.OnBreak
struct URegenerativeParamComponent_OnBreak_Params
{
};

// Function Zenith.RegenerativeParamComponent.IsInvincible
struct URegenerativeParamComponent_IsInvincible_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RegenerativeParamComponent.IsBroken
struct URegenerativeParamComponent_IsBroken_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RegenerativeParamComponent.GetMaxValue
struct URegenerativeParamComponent_GetMaxValue_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RegenerativeParamComponent.GetCurrValue
struct URegenerativeParamComponent_GetCurrValue_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RegenerativeParamComponent.GetCurrRatio
struct URegenerativeParamComponent_GetCurrRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RegenerativeParamComponent.FullyRestore
struct URegenerativeParamComponent_FullyRestore_Params
{
};

// Function Zenith.RegenerativeParamComponent.Add
struct URegenerativeParamComponent_Add_Params
{
	int                                                ValueToSub;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SummonerComponent.OnUnpossessed
struct USummonerComponent_OnUnpossessed_Params
{
};

// Function Zenith.SummonerComponent.OnUnequipSpirit
struct USummonerComponent_OnUnequipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpiritData                                 SpiritData;                                                // 0x0008(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.SummonerComponent.OnSwitchSummonSet
struct USummonerComponent_OnSwitchSummonSet_Params
{
	Zenith_ESummonSet                                  PrevSummonSet;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ESummonSet                                  NewSummonSet;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SummonerComponent.OnPossessed
struct USummonerComponent_OnPossessed_Params
{
};

// Function Zenith.SummonerComponent.OnEquipSpirit
struct USummonerComponent_OnEquipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char pad[0x7];
	struct FSpiritData                                 SpiritData;                                                // 0x0008(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.SummonSetHoldComponent.OnSettingsSaved
struct USummonSetHoldComponent_OnSettingsSaved_Params
{
};

// Function Zenith.TargetComponent.OnTargetChanged
struct UTargetComponent_OnTargetChanged_Params
{
};

// Function Zenith.TargetComponent.OnComponentOverlapEnd
struct UTargetComponent_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.TargetComponent.OnComponentOverlapBegin
struct UTargetComponent_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.TargetComponent.GetCurrentTarget
struct UTargetComponent_GetCurrentTarget_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Trigger.OnTriggerAlreadyCleared
struct ATrigger_OnTriggerAlreadyCleared_Params
{
};

// Function Zenith.Trigger.OnClearedStatusChecked
struct ATrigger_OnClearedStatusChecked_Params
{
	bool                                               bCleared;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Trigger.MarkAsTriggered
struct ATrigger_MarkAsTriggered_Params
{
};

// Function Zenith.Trigger.CanTrigger
struct ATrigger_CanTrigger_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.TriggerCondition.CheckCondition
struct UTriggerCondition_CheckCondition_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MGBPFLibrary.SetupVerticalWrapNavigation
struct UMGBPFLibrary_SetupVerticalWrapNavigation_Params
{
	class UPanelWidget*                                PanelWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColumnCount;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MGBPFLibrary.SetBrushFromSprite
struct UMGBPFLibrary_SetBrushFromSprite_Params
{
	class UImage*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSprite*                                Sprite;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchSize;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MGBPFLibrary.SetBrushFromSoftSprite
struct UMGBPFLibrary_SetBrushFromSoftSprite_Params
{
	class UImage*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchSize;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MGBPFLibrary.InvalidateAllWidgets
struct UMGBPFLibrary_InvalidateAllWidgets_Params
{
};

// Function Zenith.MGBPFLibrary.GetScrollboxStartShadowColor
struct UMGBPFLibrary_GetScrollboxStartShadowColor_Params
{
	class UScrollBox*                                  ScrollBox;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MGBPFLibrary.GetScrollboxEndShadowColor
struct UMGBPFLibrary_GetScrollboxEndShadowColor_Params
{
	class UScrollBox*                                  ScrollBox;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MGBPFLibrary.GetFocusCause
struct UMGBPFLibrary_GetFocusCause_Params
{
	struct FFocusEvent                                 FocusEvent;                                                // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	SlateCore_EFocusCause                              ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MGBPFLibrary.GetAllTopLevelWidgets
struct UMGBPFLibrary_GetAllTopLevelWidgets_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUserWidget*>                         ReturnValue;                                               // 0x0008(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.MGBPFLibrary.FlushUMGAnimations
struct UMGBPFLibrary_FlushUMGAnimations_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.SetFocusedWidget
struct UUMGSubsystem_SetFocusedWidget_Params
{
	class UUserWidget*                                 NewFocusedWidget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.SetCurrentFooterWidget
struct UUMGSubsystem_SetCurrentFooterWidget_Params
{
	class UFooterUserWidget*                           NewFooterWidget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.RestoreDefaultBindings
struct UUMGSubsystem_RestoreDefaultBindings_Params
{
};

// Function Zenith.UMGSubsystem.OverrideUIInput
struct UUMGSubsystem_OverrideUIInput_Params
{
	Zenith_EUIInputTypes                               UIInputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.IsNavigationEnabled
struct UUMGSubsystem_IsNavigationEnabled_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.IsKeyUIInputType
struct UUMGSubsystem_IsKeyUIInputType_Params
{
	Zenith_EUIInputTypes                               UIInputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.IsFocusingAnyWidget
struct UUMGSubsystem_IsFocusingAnyWidget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.GetLastFocusedWidget
struct UUMGSubsystem_GetLastFocusedWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.GetKeysForUIInput
struct UUMGSubsystem_GetKeysForUIInput_Params
{
	Zenith_EUIInputTypes                               UIInputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKey>                                ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.GetKeyForUIInput
struct UUMGSubsystem_GetKeyForUIInput_Params
{
	Zenith_EUIInputTypes                               UIInputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepad;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.GetCurrentFooterWidget
struct UUMGSubsystem_GetCurrentFooterWidget_Params
{
	class UFooterUserWidget*                           ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.EnableNavigationAndResetLocks
struct UUMGSubsystem_EnableNavigationAndResetLocks_Params
{
	bool                                               bExecuteImmediately;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.EnableNavigation
struct UUMGSubsystem_EnableNavigation_Params
{
	bool                                               bExecuteImmediately;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UMGSubsystem.DisableNavigation
struct UUMGSubsystem_DisableNavigation_Params
{
	class UClass*                                      InputBlockerWidgetClass;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UndilatedDelayAsyncAction.UndilatedDelay
struct UUndilatedDelayAsyncAction_UndilatedDelay_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayInSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUndilatedDelayAsyncAction*                  ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UndilatedDelayAsyncAction.Tick
struct UUndilatedDelayAsyncAction_Tick_Params
{
};

// Function Zenith.UserWidgetNavigable.RefreshDesign
struct UUserWidgetNavigable_RefreshDesign_Params
{
	bool                                               bFocused;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.PlayNavigateSoundEvent
struct UUserWidgetNavigable_PlayNavigateSoundEvent_Params
{
};

// Function Zenith.UserWidgetNavigable.PlayConfirmSoundEvent
struct UUserWidgetNavigable_PlayConfirmSoundEvent_Params
{
};

// Function Zenith.UserWidgetNavigable.PlayCancelSoundEvent
struct UUserWidgetNavigable_PlayCancelSoundEvent_Params
{
};

// Function Zenith.UserWidgetNavigable.OnPressUp
struct UUserWidgetNavigable_OnPressUp_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnPressRight
struct UUserWidgetNavigable_OnPressRight_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnPressPrevPage
struct UUserWidgetNavigable_OnPressPrevPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnPressNextPage
struct UUserWidgetNavigable_OnPressNextPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnPressLeft
struct UUserWidgetNavigable_OnPressLeft_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnPressDown
struct UUserWidgetNavigable_OnPressDown_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnPressContext
struct UUserWidgetNavigable_OnPressContext_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnPressConfirm
struct UUserWidgetNavigable_OnPressConfirm_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnPressCancel
struct UUserWidgetNavigable_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.OnDescendantFocused
struct UUserWidgetNavigable_OnDescendantFocused_Params
{
	class UNativeWidgetHost*                           FocusedWidget;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EFocusCause                              FocusCause;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetNavigable.IsOnFocusPath
struct UUserWidgetNavigable_IsOnFocusPath_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetError.ShouldReturnToTitle
struct UUserWidgetError_ShouldReturnToTitle_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetError.SetErrorMessage
struct UUserWidgetError_SetErrorMessage_Params
{
	struct FText                                       Title;                                                     // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetFloatingText.DetachFromComponent
struct UUserWidgetFloatingText_DetachFromComponent_Params
{
};

// Function Zenith.UserWidgetFloatingText.AttachToComponent
struct UUserWidgetFloatingText_AttachToComponent_Params
{
	class USceneComponent*                             SceneComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InWorldLocationOffset;                                     // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InPositionOffset;                                          // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetMenu.OpenMenu
struct UUserWidgetMenu_OpenMenu_Params
{
};

// Function Zenith.UserWidgetMenu.OnOpenMenu
struct UUserWidgetMenu_OnOpenMenu_Params
{
};

// Function Zenith.UserWidgetMenu.OnCloseMenu
struct UUserWidgetMenu_OnCloseMenu_Params
{
};

// Function Zenith.UserWidgetMenu.IsOpen
struct UUserWidgetMenu_IsOpen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.UserWidgetMenu.CloseMenu
struct UUserWidgetMenu_CloseMenu_Params
{
};

// Function Zenith.WaitFadeInAsyncAction.WaitFadeIn
struct UWaitFadeInAsyncAction_WaitFadeIn_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaitFadeInAsyncAction*                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WaitGameDataReadyAsyncAction.WaitGameDataReady
struct UWaitGameDataReadyAsyncAction_WaitGameDataReady_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaitGameDataReadyAsyncAction*               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WaitGameDataReadyAsyncAction.Tick
struct UWaitGameDataReadyAsyncAction_Tick_Params
{
};

// Function Zenith.WaitGameMapReadyAsyncAction.WaitGameMapReady
struct UWaitGameMapReadyAsyncAction_WaitGameMapReady_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bConsiderFadeAsLoading;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaitGameMapReadyAsyncAction*                ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WaitGameMapReadyAsyncAction.OnGameMapReady
struct UWaitGameMapReadyAsyncAction_OnGameMapReady_Params
{
};

// Function Zenith.WaitGameMapReadyAsyncAction.CheckGameMapReady
struct UWaitGameMapReadyAsyncAction_CheckGameMapReady_Params
{
};

// Function Zenith.WaitGameUnpausedAsyncAction.WaitGameUnpaused
struct UWaitGameUnpausedAsyncAction_WaitGameUnpaused_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaitGameUnpausedAsyncAction*                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WaitUMGNavigationAsyncAction.WaitUMGNavigation
struct UWaitUMGNavigationAsyncAction_WaitUMGNavigation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaitUMGNavigationAsyncAction*               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WallGrabComponent.OnWallGrab
struct UWallGrabComponent_OnWallGrab_Params
{
};

// Function Zenith.WallGrabComponent.OnComponentOverlapEnd
struct UWallGrabComponent_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WallGrabComponent.OnComponentOverlapBegin
struct UWallGrabComponent_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.WallGrabComponent.IsGrabingWall
struct UWallGrabComponent_IsGrabingWall_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.UnpossessAllPlayers
struct UWorldLoaderSubsystem_UnpossessAllPlayers_Params
{
};

// Function Zenith.WorldLoaderSubsystem.SwitchGameMap_UnloadAndLoad
struct UWorldLoaderSubsystem_SwitchGameMap_UnloadAndLoad_Params
{
};

// Function Zenith.WorldLoaderSubsystem.SwitchGameMap_RestoreGame
struct UWorldLoaderSubsystem_SwitchGameMap_RestoreGame_Params
{
};

// Function Zenith.WorldLoaderSubsystem.SwitchGameMap_PostFadeOut
struct UWorldLoaderSubsystem_SwitchGameMap_PostFadeOut_Params
{
};

// Function Zenith.WorldLoaderSubsystem.SwitchGameMap_PostFadeIn
struct UWorldLoaderSubsystem_SwitchGameMap_PostFadeIn_Params
{
};

// Function Zenith.WorldLoaderSubsystem.SwitchGameMap_Finalize
struct UWorldLoaderSubsystem_SwitchGameMap_Finalize_Params
{
};

// Function Zenith.WorldLoaderSubsystem.SwitchGameMap
struct UWorldLoaderSubsystem_SwitchGameMap_Params
{
	struct FDataTableRowHandle                         GameMapHandle;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      FadeOutClass;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeInClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextPlayerStartTag;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.ProcessLevelTravel
struct UWorldLoaderSubsystem_ProcessLevelTravel_Params
{
	struct FString                                     WorldToLoad;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAsync;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.OpenLevelInternal
struct UWorldLoaderSubsystem_OpenLevelInternal_Params
{
	struct FString                                     WorldToLoad;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeClass;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAsync;                                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextPlayerStartTag;                                        // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.OpenLevelAsync
struct UWorldLoaderSubsystem_OpenLevelAsync_Params
{
	struct FString                                     WorldToLoad;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeClass;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextPlayerStartTag;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.OpenLevelAssetAsync
struct UWorldLoaderSubsystem_OpenLevelAssetAsync_Params
{
	class UClass*                                      FadeClass;                                                 // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextPlayerStartTag;                                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.OpenLevelAsset
struct UWorldLoaderSubsystem_OpenLevelAsset_Params
{
	class UClass*                                      FadeClass;                                                 // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextPlayerStartTag;                                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.OpenLevel
struct UWorldLoaderSubsystem_OpenLevel_Params
{
	struct FString                                     WorldToLoad;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeClass;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextPlayerStartTag;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.OpenGameMap
struct UWorldLoaderSubsystem_OpenGameMap_Params
{
	struct FDataTableRowHandle                         GameMapHandle;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      FadeOutClass;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeInClass;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       NextPlayerStartTag;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.OnPostWorldCleanup
struct UWorldLoaderSubsystem_OnPostWorldCleanup_Params
{
	class UWorld*                                      World;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSessionEnded;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCleanupResources;                                         // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.OnLevelStreamingDynamicLoaded
struct UWorldLoaderSubsystem_OnLevelStreamingDynamicLoaded_Params
{
};

// Function Zenith.WorldLoaderSubsystem.OnFadeFinished
struct UWorldLoaderSubsystem_OnFadeFinished_Params
{
};

// Function Zenith.WorldLoaderSubsystem.IsLoading
struct UWorldLoaderSubsystem_IsLoading_Params
{
	bool                                               bConsiderFadeAsLoading;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.IsGameMapReady
struct UWorldLoaderSubsystem_IsGameMapReady_Params
{
	bool                                               bConsiderFadeAsLoading;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.GetPlayerStartTag
struct UWorldLoaderSubsystem_GetPlayerStartTag_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.GetCurrentGameMapID
struct UWorldLoaderSubsystem_GetCurrentGameMapID_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.WorldLoaderSubsystem.GetCurrentGameMapData
struct UWorldLoaderSubsystem_GetCurrentGameMapData_Params
{
	struct FGameMapData                                ReturnValue;                                               // 0x0000(0x0130)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithAIBaseController.StopAllLogic
struct AZenithAIBaseController_StopAllLogic_Params
{
};

// Function Zenith.ZenithAIBaseController.ResumeLogic
struct AZenithAIBaseController_ResumeLogic_Params
{
};

// Function Zenith.ZenithAIBaseController.RestartLogic
struct AZenithAIBaseController_RestartLogic_Params
{
};

// Function Zenith.ZenithAIBaseController.PauseLogic
struct AZenithAIBaseController_PauseLogic_Params
{
};

// Function Zenith.ZenithAICompanionController.SetLeaderController
struct AZenithAICompanionController_SetLeaderController_Params
{
	class AController*                                 NewLeaderController;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithAICompanionController.ResetStateAndLocation
struct AZenithAICompanionController_ResetStateAndLocation_Params
{
};

// Function Zenith.ZenithAICompanionController.OnLeaderPawnChange
struct AZenithAICompanionController_OnLeaderPawnChange_Params
{
};

// Function Zenith.ZenithAICompanionController.GetLeaderPawn
struct AZenithAICompanionController_GetLeaderPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithAIController.OnPawnDeathEvent
struct AZenithAIController_OnPawnDeathEvent_Params
{
};

// Function Zenith.ZenithAIController.OnPawnDeath
struct AZenithAIController_OnPawnDeath_Params
{
};

// Function Zenith.ZenithAIController.OnChangeTarget
struct AZenithAIController_OnChangeTarget_Params
{
	class AActor*                                      NewTarget;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithAIController.OnActivate
struct AZenithAIController_OnActivate_Params
{
};

// Function Zenith.ZenithAIController.IsActive
struct AZenithAIController_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithAIController.GetSpawnLocationBlackboardKey
struct AZenithAIController_GetSpawnLocationBlackboardKey_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithAIController.GetControlledCharacter
struct AZenithAIController_GetControlledCharacter_Params
{
	class AZenithCharacter*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithAIController.Activate
struct AZenithAIController_Activate_Params
{
};

// Function Zenith.ZenithCharacter.UnlockInput
struct AZenithCharacter_UnlockInput_Params
{
};

// Function Zenith.ZenithCharacter.TriggerHookStart
struct AZenithCharacter_TriggerHookStart_Params
{
};

// Function Zenith.ZenithCharacter.SetPhysicsVolume
struct AZenithCharacter_SetPhysicsVolume_Params
{
	class APhysicsVolume*                              NewVolume;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.SetLastAttackerDirection
struct AZenithCharacter_SetLastAttackerDirection_Params
{
	struct FVector                                     NewAttackerDirection;                                      // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.SetClampedInCamera
struct AZenithCharacter_SetClampedInCamera_Params
{
	bool                                               bClamped;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.Sample
struct AZenithCharacter_Sample_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.Respawn
struct AZenithCharacter_Respawn_Params
{
};

// Function Zenith.ZenithCharacter.OnWallGrab
struct AZenithCharacter_OnWallGrab_Params
{
};

// Function Zenith.ZenithCharacter.OnSubmerged
struct AZenithCharacter_OnSubmerged_Params
{
};

// Function Zenith.ZenithCharacter.OnRespawn
struct AZenithCharacter_OnRespawn_Params
{
};

// Function Zenith.ZenithCharacter.OnParry
struct AZenithCharacter_OnParry_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Invoker;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWillForwardEventToAttacker;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTriggerParryAbility;                                      // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.OnJustGuard
struct AZenithCharacter_OnJustGuard_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Invoker;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWillForwardEventToAttacker;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.OnJustDodge
struct AZenithCharacter_OnJustDodge_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Invoker;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWillForwardEventToAttacker;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.OnGotParried
struct AZenithCharacter_OnGotParried_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.OnGotJustGuarded
struct AZenithCharacter_OnGotJustGuarded_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.OnGotJustDodged
struct AZenithCharacter_OnGotJustDodged_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.OnEventStop
struct AZenithCharacter_OnEventStop_Params
{
};

// Function Zenith.ZenithCharacter.OnEventStart
struct AZenithCharacter_OnEventStart_Params
{
};

// Function Zenith.ZenithCharacter.OnDeactivate
struct AZenithCharacter_OnDeactivate_Params
{
};

// Function Zenith.ZenithCharacter.OnBreakWaterSurface
struct AZenithCharacter_OnBreakWaterSurface_Params
{
};

// Function Zenith.ZenithCharacter.OnActivate
struct AZenithCharacter_OnActivate_Params
{
};

// Function Zenith.ZenithCharacter.LockInput
struct AZenithCharacter_LockInput_Params
{
};

// Function Zenith.ZenithCharacter.IsInputLocked
struct AZenithCharacter_IsInputLocked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.IsClampedInCamera
struct AZenithCharacter_IsClampedInCamera_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.IsActivated
struct AZenithCharacter_IsActivated_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.GetZenithCharacterMovement
struct AZenithCharacter_GetZenithCharacterMovement_Params
{
	class UZenithCharacterMovementComponent*           ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.GetSourceSpawnPoint
struct AZenithCharacter_GetSourceSpawnPoint_Params
{
	class AEnemySpawnPoint*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.GetRuntimeCommandSet
struct AZenithCharacter_GetRuntimeCommandSet_Params
{
	class UCommandSet*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.GetParameterComponent
struct AZenithCharacter_GetParameterComponent_Params
{
	class UParameterComponent*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.GetLastAttackerDirection
struct AZenithCharacter_GetLastAttackerDirection_Params
{
	bool                                               bIgnoreZ;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.GetHomingTarget
struct AZenithCharacter_GetHomingTarget_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.GetCharacterInfosData
struct AZenithCharacter_GetCharacterInfosData_Params
{
	struct FCharacterInfosData                         ReturnValue;                                               // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.GetCameraFocusTarget
struct AZenithCharacter_GetCameraFocusTarget_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.Deactivate
struct AZenithCharacter_Deactivate_Params
{
	bool                                               bForce;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacter.ClearPhysicsVolume
struct AZenithCharacter_ClearPhysicsVolume_Params
{
};

// Function Zenith.ZenithCharacter.Activate
struct AZenithCharacter_Activate_Params
{
};

// Function Zenith.ZenithCharacterMovementComponent.TraceJump
struct UZenithCharacterMovementComponent_TraceJump_Params
{
	struct FVector                                     Input;                                                     // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x000C(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                  // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.SetWalkMode
struct UZenithCharacterMovementComponent_SetWalkMode_Params
{
	Zenith_EWalkMode                                   NewWalkMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.SetCustomPhysicsVolume
struct UZenithCharacterMovementComponent_SetCustomPhysicsVolume_Params
{
	class ACustomPhysicsVolume*                        NewCustomPhysicsVolume;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.SetClampedInCamera
struct UZenithCharacterMovementComponent_SetClampedInCamera_Params
{
	bool                                               bClamped;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.SetClampedInArea
struct UZenithCharacterMovementComponent_SetClampedInArea_Params
{
	bool                                               bClamped;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.SetClampArea
struct UZenithCharacterMovementComponent_SetClampArea_Params
{
	struct FVector                                     NewClampAreaMin;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NewClampAreaMax;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.OnStateRemoved
struct UZenithCharacterMovementComponent_OnStateRemoved_Params
{
};

// Function Zenith.ZenithCharacterMovementComponent.OnStateAdded
struct UZenithCharacterMovementComponent_OnStateAdded_Params
{
};

// Function Zenith.ZenithCharacterMovementComponent.OnGameMapSwitch
struct UZenithCharacterMovementComponent_OnGameMapSwitch_Params
{
};

// Function Zenith.ZenithCharacterMovementComponent.OnEventStop
struct UZenithCharacterMovementComponent_OnEventStop_Params
{
};

// Function Zenith.ZenithCharacterMovementComponent.OnEventStart
struct UZenithCharacterMovementComponent_OnEventStart_Params
{
};

// Function Zenith.ZenithCharacterMovementComponent.IsClampedInCamera
struct UZenithCharacterMovementComponent_IsClampedInCamera_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.IsClampedInArea
struct UZenithCharacterMovementComponent_IsClampedInArea_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.GetWaterImmersionDepth
struct UZenithCharacterMovementComponent_GetWaterImmersionDepth_Params
{
	bool                                               bForceRecompute;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.GetWalkMode
struct UZenithCharacterMovementComponent_GetWalkMode_Params
{
	Zenith_EWalkMode                                   ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.GetTimeSinceLastWallGrab
struct UZenithCharacterMovementComponent_GetTimeSinceLastWallGrab_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.GetTimeSinceLastGround
struct UZenithCharacterMovementComponent_GetTimeSinceLastGround_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.GetLastNonFallingLocation
struct UZenithCharacterMovementComponent_GetLastNonFallingLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.GetJumpTimeForZTarget
struct UZenithCharacterMovementComponent_GetJumpTimeForZTarget_Params
{
	float                                              ZTarget;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              out_ResultA;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              out_ResultB;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.GetCustomPhysicsVolume
struct UZenithCharacterMovementComponent_GetCustomPhysicsVolume_Params
{
	class ACustomPhysicsVolume*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.ComputeLaunchVelocityToDestination
struct UZenithCharacterMovementComponent_ComputeLaunchVelocityToDestination_Params
{
	struct FVector                                     DestinationLocation;                                       // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterMovementComponent.ClearCustomPhysicsVolume
struct UZenithCharacterMovementComponent_ClearCustomPhysicsVolume_Params
{
};

// Function Zenith.ZenithCharacterMovementComponent.CanReachTargetByJump
struct UZenithCharacterMovementComponent_CanReachTargetByJump_Params
{
	struct FVector                                     TargetLocation;                                            // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawDebug;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCharacterPreview.Show
struct AZenithCharacterPreview_Show_Params
{
};

// Function Zenith.ZenithCharacterPreview.Hide
struct AZenithCharacterPreview_Hide_Params
{
};

// Function Zenith.ZenithCompanionCharacter.SetMoveTargetWithTime
struct AZenithCompanionCharacter_SetMoveTargetWithTime_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToReachTarget;                                         // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowSpineOnArrival;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpineFacingRight;                                         // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.SetMoveTarget
struct AZenithCompanionCharacter_SetMoveTarget_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowSpineOnArrival;                                       // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpineFacingRight;                                         // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.SetMoveSpeed
struct AZenithCompanionCharacter_SetMoveSpeed_Params
{
	float                                              NewMoveSpeed;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.SetActive
struct AZenithCompanionCharacter_SetActive_Params
{
	bool                                               bActive;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.ResetMoveSpeed
struct AZenithCompanionCharacter_ResetMoveSpeed_Params
{
};

// Function Zenith.ZenithCompanionCharacter.OnShowSpine
struct AZenithCompanionCharacter_OnShowSpine_Params
{
};

// Function Zenith.ZenithCompanionCharacter.OnSetTranslucencyPriority
struct AZenithCompanionCharacter_OnSetTranslucencyPriority_Params
{
	int                                                Priority;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.OnSetMeshComponentsHiddenInGame
struct AZenithCompanionCharacter_OnSetMeshComponentsHiddenInGame_Params
{
	bool                                               bHiddenInGame;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.OnSetAssociatedSpiritData
struct AZenithCompanionCharacter_OnSetAssociatedSpiritData_Params
{
};

// Function Zenith.ZenithCompanionCharacter.OnSetAlpha
struct AZenithCompanionCharacter_OnSetAlpha_Params
{
	float                                              Alpha;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.OnLeaderPawnChanged
struct AZenithCompanionCharacter_OnLeaderPawnChanged_Params
{
	class APawn*                                       NewLeaderPawn;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.OnHideSpine
struct AZenithCompanionCharacter_OnHideSpine_Params
{
};

// Function Zenith.ZenithCompanionCharacter.OnEventStop
struct AZenithCompanionCharacter_OnEventStop_Params
{
};

// Function Zenith.ZenithCompanionCharacter.OnEventStart
struct AZenithCompanionCharacter_OnEventStart_Params
{
};

// Function Zenith.ZenithCompanionCharacter.OnDeactivate
struct AZenithCompanionCharacter_OnDeactivate_Params
{
};

// Function Zenith.ZenithCompanionCharacter.OnArrivedAtTarget
struct AZenithCompanionCharacter_OnArrivedAtTarget_Params
{
};

// Function Zenith.ZenithCompanionCharacter.OnActivate
struct AZenithCompanionCharacter_OnActivate_Params
{
};

// Function Zenith.ZenithCompanionCharacter.NotifySpineVisible
struct AZenithCompanionCharacter_NotifySpineVisible_Params
{
};

// Function Zenith.ZenithCompanionCharacter.NotifySpineHidden
struct AZenithCompanionCharacter_NotifySpineHidden_Params
{
};

// Function Zenith.ZenithCompanionCharacter.IsActive
struct AZenithCompanionCharacter_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.HideSpine
struct AZenithCompanionCharacter_HideSpine_Params
{
};

// Function Zenith.ZenithCompanionCharacter.GetCurrentState
struct AZenithCompanionCharacter_GetCurrentState_Params
{
	Zenith_ECompanionState                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithCompanionCharacter.GetAssociatedSpiritData
struct AZenithCompanionCharacter_GetAssociatedSpiritData_Params
{
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommandSettingsData*                        CommandSettingsData;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemSpiritData                             ItemSpiritData;                                            // 0x0010(0x0128)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithInputComponent.GetInputSnapshot
struct UZenithInputComponent_GetInputSnapshot_Params
{
	struct FInputSnapshot                              ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithLevelSequenceActor.SetOrigin
struct AZenithLevelSequenceActor_SetOrigin_Params
{
	struct FTransform                                  Origin;                                                    // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithLevelSequenceActor.GetZenithSequencePlayer
struct AZenithLevelSequenceActor_GetZenithSequencePlayer_Params
{
	class UZenithLevelSequencePlayer*                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithLevelSequencePlayer.CreateZenithLevelSequencePlayer
struct UZenithLevelSequencePlayer_CreateZenithLevelSequencePlayer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                              InLevelSequence;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                  // 0x0010(0x0014)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class AZenithLevelSequenceActor*                   OutActor;                                                  // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FViewTargetTransitionParams                 BlendInParams;                                             // 0x0030(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FViewTargetTransitionParams                 BlendOutParams;                                            // 0x0040(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UZenithLevelSequencePlayer*                  ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.UnlockAllAptitudes
struct AZenithPlayerController_UnlockAllAptitudes_Params
{
};

// Function Zenith.ZenithPlayerController.SetSimulatedInput
struct AZenithPlayerController_SetSimulatedInput_Params
{
	struct FVector2D                                   SimulatedInput;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.SetRespawnPointData
struct AZenithPlayerController_SetRespawnPointData_Params
{
	class APlayerStart*                                RespawnPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.SetNextFastTravelDestination
struct AZenithPlayerController_SetNextFastTravelDestination_Params
{
	struct FDataTableRowHandle                         GameMapID;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.SetMinimapUISizeIndex
struct AZenithPlayerController_SetMinimapUISizeIndex_Params
{
	int                                                NewMinimapUISizeIndex;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.SetDefaultViewTarget
struct AZenithPlayerController_SetDefaultViewTarget_Params
{
	class AActor*                                      DefaultViewTarget;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnUnlockAptitude
struct AZenithPlayerController_OnUnlockAptitude_Params
{
	Zenith_EAptitudeType                               AptitudeType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnSwitchGameMapStart
struct AZenithPlayerController_OnSwitchGameMapStart_Params
{
};

// Function Zenith.ZenithPlayerController.OnPawnRespawn
struct AZenithPlayerController_OnPawnRespawn_Params
{
};

// Function Zenith.ZenithPlayerController.OnPawnDeathEvent
struct AZenithPlayerController_OnPawnDeathEvent_Params
{
};

// Function Zenith.ZenithPlayerController.OnPawnChanged
struct AZenithPlayerController_OnPawnChanged_Params
{
};

// Function Zenith.ZenithPlayerController.OnOpenNewWorld
struct AZenithPlayerController_OnOpenNewWorld_Params
{
	struct FGameMapData                                GameMapData;                                               // 0x0000(0x0130)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnOpenNewArea
struct AZenithPlayerController_OnOpenNewArea_Params
{
	struct FAreaData                                   AreaData;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnNoClampVolumeWarning
struct AZenithPlayerController_OnNoClampVolumeWarning_Params
{
};

// Function Zenith.ZenithPlayerController.OnGameMapSwitch
struct AZenithPlayerController_OnGameMapSwitch_Params
{
};

// Function Zenith.ZenithPlayerController.OnGameMapReadyPostFade
struct AZenithPlayerController_OnGameMapReadyPostFade_Params
{
};

// Function Zenith.ZenithPlayerController.OnGameMapReady
struct AZenithPlayerController_OnGameMapReady_Params
{
};

// Function Zenith.ZenithPlayerController.OnGameDataLoaded
struct AZenithPlayerController_OnGameDataLoaded_Params
{
};

// Function Zenith.ZenithPlayerController.OnEventStopped
struct AZenithPlayerController_OnEventStopped_Params
{
	class UEventAsset*                                 EventAsset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnEventStarted
struct AZenithPlayerController_OnEventStarted_Params
{
	class UEventAsset*                                 EventAsset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnControllerDisconnected
struct AZenithPlayerController_OnControllerDisconnected_Params
{
};

// Function Zenith.ZenithPlayerController.OnControllerConnected
struct AZenithPlayerController_OnControllerConnected_Params
{
};

// Function Zenith.ZenithPlayerController.OnAptitudeItemRemoved
struct AZenithPlayerController_OnAptitudeItemRemoved_Params
{
	struct FInventoryBaseItemData                      InventoryAptitudeItem;                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnAptitudeItemAdded
struct AZenithPlayerController_OnAptitudeItemAdded_Params
{
	struct FInventoryBaseItemData                      InventoryAptitudeItem;                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnApplicationWillDeactivate
struct AZenithPlayerController_OnApplicationWillDeactivate_Params
{
	bool                                               bApplicationWillBeSuspended;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.OnAchievementUnlocked
struct AZenithPlayerController_OnAchievementUnlocked_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.MarkTutorialAsSeen
struct AZenithPlayerController_MarkTutorialAsSeen_Params
{
	struct FName                                       TutorialID;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.MarkRecollectionItemAsChecked
struct AZenithPlayerController_MarkRecollectionItemAsChecked_Params
{
	struct FName                                       RecollectionItemID;                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.MarkGameMapAsOpen
struct AZenithPlayerController_MarkGameMapAsOpen_Params
{
	struct FName                                       GameMapID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameMapData                                GameMapData;                                               // 0x0008(0x0130)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsTutorialAlreadySeen
struct AZenithPlayerController_IsTutorialAlreadySeen_Params
{
	struct FName                                       TutorialID;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsSoftEventAssetAlreadyPlayed
struct AZenithPlayerController_IsSoftEventAssetAlreadyPlayed_Params
{
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsRecollectionItemAlreadyChecked
struct AZenithPlayerController_IsRecollectionItemAlreadyChecked_Params
{
	struct FName                                       RecollectionItemID;                                        // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsNextFastTravelDestinationSet
struct AZenithPlayerController_IsNextFastTravelDestinationSet_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsInputLocked
struct AZenithPlayerController_IsInputLocked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsInEvent
struct AZenithPlayerController_IsInEvent_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsGameMapOpen
struct AZenithPlayerController_IsGameMapOpen_Params
{
	struct FName                                       GameMapID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsFastTravelOpen
struct AZenithPlayerController_IsFastTravelOpen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsEventAlreadyPlayed
struct AZenithPlayerController_IsEventAlreadyPlayed_Params
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCheckPreviousGameGeneration;                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.IsAptitudeUnlocked
struct AZenithPlayerController_IsAptitudeUnlocked_Params
{
	Zenith_EAptitudeType                               Aptitude;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.GetZenithPlayerController
struct AZenithPlayerController_GetZenithPlayerController_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZenithPlayerController*                     ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.GetSimulatedInput
struct AZenithPlayerController_GetSimulatedInput_Params
{
	struct FVector2D                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.GetRespawnPointData
struct AZenithPlayerController_GetRespawnPointData_Params
{
	struct FRespawnPointData                           ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.GetOpenedGameMaps
struct AZenithPlayerController_GetOpenedGameMaps_Params
{
	TArray<struct FName>                               ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.GetMinimapUISizeIndex
struct AZenithPlayerController_GetMinimapUISizeIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.GetLastPawn
struct AZenithPlayerController_GetLastPawn_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.GetDefaultViewTarget
struct AZenithPlayerController_GetDefaultViewTarget_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.FullyRestore
struct AZenithPlayerController_FullyRestore_Params
{
	class APawn*                                       PawnToRestore;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.ExecuteFastTravel
struct AZenithPlayerController_ExecuteFastTravel_Params
{
	class UClass*                                      FadeOutClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FadeInClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerController.ClearSimulatedInput
struct AZenithPlayerController_ClearSimulatedInput_Params
{
};

// Function Zenith.ZenithPlayerController.ClearFastTravelDestination
struct AZenithPlayerController_ClearFastTravelDestination_Params
{
};

// Function Zenith.ZenithPlayerController.CanPlayerUseBackToRestPoint
struct AZenithPlayerController_CanPlayerUseBackToRestPoint_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithPlayerStart.OnPlayerRespawn
struct AZenithPlayerStart_OnPlayerRespawn_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.StopCurrentCommand
struct AZenithSpirit_StopCurrentCommand_Params
{
};

// Function Zenith.ZenithSpirit.ResetLocation
struct AZenithSpirit_ResetLocation_Params
{
};

// Function Zenith.ZenithSpirit.OnSummonerMovementModeChanged
struct AZenithSpirit_OnSummonerMovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviousCustomMode;                                        // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.OnSummonerCommandsCleared
struct AZenithSpirit_OnSummonerCommandsCleared_Params
{
};

// Function Zenith.ZenithSpirit.OnStartCommand
struct AZenithSpirit_OnStartCommand_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.OnSourceCommandReachedCastLimit
struct AZenithSpirit_OnSourceCommandReachedCastLimit_Params
{
};

// Function Zenith.ZenithSpirit.OnSoftDisappear
struct AZenithSpirit_OnSoftDisappear_Params
{
};

// Function Zenith.ZenithSpirit.OnResetLocation
struct AZenithSpirit_OnResetLocation_Params
{
};

// Function Zenith.ZenithSpirit.OnEndCommand
struct AZenithSpirit_OnEndCommand_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.OnDisappear
struct AZenithSpirit_OnDisappear_Params
{
};

// Function Zenith.ZenithSpirit.OnCommandAdded
struct AZenithSpirit_OnCommandAdded_Params
{
};

// Function Zenith.ZenithSpirit.OnAppear
struct AZenithSpirit_OnAppear_Params
{
};

// Function Zenith.ZenithSpirit.IsActive
struct AZenithSpirit_IsActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.GetSummoner
struct AZenithSpirit_GetSummoner_Params
{
	class APawn*                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.GetAttackFactor
struct AZenithSpirit_GetAttackFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.ForceDisappear
struct AZenithSpirit_ForceDisappear_Params
{
};

// Function Zenith.ZenithSpirit.Disappear
struct AZenithSpirit_Disappear_Params
{
	bool                                               bForce;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.CanStartCommandAction
struct AZenithSpirit_CanStartCommandAction_Params
{
	class APawn*                                       ActionSummoner;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ZenithSpirit.Appear
struct AZenithSpirit_Appear_Params
{
};

// Function Zenith.ZenithSpirit.AddAttackToken
struct AZenithSpirit_AddAttackToken_Params
{
};

// Function Zenith.GameplayCamera.UnregisterEnemyControllers
struct AGameplayCamera_UnregisterEnemyControllers_Params
{
	TArray<class AController*>                         EnemyControllersToRemove;                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.UnregisterEnemyController
struct AGameplayCamera_UnregisterEnemyController_Params
{
	class AController*                                 EnemyControllerToRemove;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.UnregisterAllyController
struct AGameplayCamera_UnregisterAllyController_Params
{
	class AController*                                 AllyControllerToRemove;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.SetSettings
struct AGameplayCamera_SetSettings_Params
{
	struct FGameplayCameraSettings                     NewSettings;                                               // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.SetBlendSpeedFactor
struct AGameplayCamera_SetBlendSpeedFactor_Params
{
	float                                              NewBlendSpeedFactor;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.ResetCameraLocation
struct AGameplayCamera_ResetCameraLocation_Params
{
};

// Function Zenith.GameplayCamera.RemoveOverrideSettings
struct AGameplayCamera_RemoveOverrideSettings_Params
{
	int                                                OverrideSettingsID;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.RegisterEnemyControllers
struct AGameplayCamera_RegisterEnemyControllers_Params
{
	TArray<class AController*>                         EnemyControllersToAdd;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.RegisterEnemyController
struct AGameplayCamera_RegisterEnemyController_Params
{
	class AController*                                 EnemyControllerToAdd;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.RegisterAllyController
struct AGameplayCamera_RegisterAllyController_Params
{
	class AController*                                 AllyControllerToAdd;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.OnViewportResized
struct AGameplayCamera_OnViewportResized_Params
{
};

// Function Zenith.GameplayCamera.GetOffsetFromPlayerFeet
struct AGameplayCamera_GetOffsetFromPlayerFeet_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.GetFOV
struct AGameplayCamera_GetFOV_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.GetCurrentMin
struct AGameplayCamera_GetCurrentMin_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.GetCurrentMax
struct AGameplayCamera_GetCurrentMax_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.GetCurrentCenter
struct AGameplayCamera_GetCurrentCenter_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.GetBorderLocationsAtDist
struct AGameplayCamera_GetBorderLocationsAtDist_Params
{
	float                                              DistFromCamera;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeftBorderLocation;                                        // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightBorderLocation;                                       // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.GetBorderLocationsAtAbsoluteX
struct AGameplayCamera_GetBorderLocationsAtAbsoluteX_Params
{
	float                                              AbsoluteX;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeftBorderLocation;                                        // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightBorderLocation;                                       // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.GetBlendSpeedFactor
struct AGameplayCamera_GetBlendSpeedFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameplayCamera.ClearSettings
struct AGameplayCamera_ClearSettings_Params
{
};

// Function Zenith.GameplayCamera.AddOverrideSettings
struct AGameplayCamera_AddOverrideSettings_Params
{
	struct FGameplayCameraOverrideSettings             NewOverrideSettings;                                       // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                              BlendTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetUseForceFeedback
struct UGameSettingsSubsystem_SetUseForceFeedback_Params
{
	bool                                               bUseForceFeedback;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetUseCameraShake
struct UGameSettingsSubsystem_SetUseCameraShake_Params
{
	bool                                               bUseCameraShake;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetResolutionScale
struct UGameSettingsSubsystem_SetResolutionScale_Params
{
	float                                              NewResolutionScale;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetNoAutoClimbWhilePressingDown
struct UGameSettingsSubsystem_SetNoAutoClimbWhilePressingDown_Params
{
	bool                                               bNoAutoClimbWhilePressingDown;                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetHoldForSummonSetSwitch
struct UGameSettingsSubsystem_SetHoldForSummonSetSwitch_Params
{
	bool                                               bSetHoldForSummonSetSwitch;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetGammaPercentage
struct UGameSettingsSubsystem_SetGammaPercentage_Params
{
	float                                              GammaPercentage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetGamma
struct UGameSettingsSubsystem_SetGamma_Params
{
	float                                              NewGamma;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetGameEndingReached
struct UGameSettingsSubsystem_SetGameEndingReached_Params
{
	Zenith_EGameEndingType                             GameEndingType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetEnableDamageAreaPostProcess
struct UGameSettingsSubsystem_SetEnableDamageAreaPostProcess_Params
{
	bool                                               bEnableDamageAreaPostProcess;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetDisplayPlayerUI
struct UGameSettingsSubsystem_SetDisplayPlayerUI_Params
{
	bool                                               bDisplayPlayerUI;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetDisplayInternalAchievementNotifications
struct UGameSettingsSubsystem_SetDisplayInternalAchievementNotifications_Params
{
	bool                                               bDisplayNotifications;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetDisplayHealValues
struct UGameSettingsSubsystem_SetDisplayHealValues_Params
{
	bool                                               bDisplayHealValues;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetDisplayEnemyFloatingGauges
struct UGameSettingsSubsystem_SetDisplayEnemyFloatingGauges_Params
{
	bool                                               bDisplayEnemyFloatingGauges;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.SetDisplayDamageValues
struct UGameSettingsSubsystem_SetDisplayDamageValues_Params
{
	bool                                               bDisplayDamageValues;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.ResetVideoSettingsToDefault
struct UGameSettingsSubsystem_ResetVideoSettingsToDefault_Params
{
};

// Function Zenith.GameSettingsSubsystem.ResetGameSettingsToDefault
struct UGameSettingsSubsystem_ResetGameSettingsToDefault_Params
{
};

// Function Zenith.GameSettingsSubsystem.GetUseForceFeedback
struct UGameSettingsSubsystem_GetUseForceFeedback_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetUseCameraShake
struct UGameSettingsSubsystem_GetUseCameraShake_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetResolutionScale
struct UGameSettingsSubsystem_GetResolutionScale_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetNoAutoClimbWhilePressingDown
struct UGameSettingsSubsystem_GetNoAutoClimbWhilePressingDown_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetHoldForSummonSetSwitch
struct UGameSettingsSubsystem_GetHoldForSummonSetSwitch_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetGammaPercentage
struct UGameSettingsSubsystem_GetGammaPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetGamma
struct UGameSettingsSubsystem_GetGamma_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetEnableDamageAreaPostProcess
struct UGameSettingsSubsystem_GetEnableDamageAreaPostProcess_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetDisplayPlayerUI
struct UGameSettingsSubsystem_GetDisplayPlayerUI_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetDisplayInternalAchievementNotifications
struct UGameSettingsSubsystem_GetDisplayInternalAchievementNotifications_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetDisplayHealValues
struct UGameSettingsSubsystem_GetDisplayHealValues_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetDisplayEnemyFloatingGauges
struct UGameSettingsSubsystem_GetDisplayEnemyFloatingGauges_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.GetDisplayDamageValues
struct UGameSettingsSubsystem_GetDisplayDamageValues_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameSettingsSubsystem.DidReachGameEnding
struct UGameSettingsSubsystem_DidReachGameEnding_Params
{
	Zenith_EGameEndingType                             GameEndingType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameStatsComponent.GetPlayTimeAsString
struct UGameStatsComponent_GetPlayTimeAsString_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameStatsComponent.GetPlayTime
struct UGameStatsComponent_GetPlayTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.UnlockActiveController
struct UGameViewportZenithBase_UnlockActiveController_Params
{
	bool                                               bResetLockCount;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.SetViewportOverlayWidgetVisible
struct UGameViewportZenithBase_SetViewportOverlayWidgetVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.SetViewportOverlayRenderOpacity
struct UGameViewportZenithBase_SetViewportOverlayRenderOpacity_Params
{
	float                                              Opacity;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.OnReceivedFocus
struct UGameViewportZenithBase_OnReceivedFocus_Params
{
};

// Function Zenith.GameViewportZenithBase.OnMouseMoveBP
struct UGameViewportZenithBase_OnMouseMoveBP_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.OnMouseDownBP
struct UGameViewportZenithBase_OnMouseDownBP_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.OnKeyDownBP
struct UGameViewportZenithBase_OnKeyDownBP_Params
{
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.OnInputDeviceChanged
struct UGameViewportZenithBase_OnInputDeviceChanged_Params
{
};

// Function Zenith.GameViewportZenithBase.OnControllerIDChanged
struct UGameViewportZenithBase_OnControllerIDChanged_Params
{
	int                                                OldControllerID;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewControllerID;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.OnControllerDisconnected
struct UGameViewportZenithBase_OnControllerDisconnected_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.OnControllerConnected
struct UGameViewportZenithBase_OnControllerConnected_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.OnApplicationReactivated
struct UGameViewportZenithBase_OnApplicationReactivated_Params
{
};

// Function Zenith.GameViewportZenithBase.OnApplicationDeactivated
struct UGameViewportZenithBase_OnApplicationDeactivated_Params
{
};

// Function Zenith.GameViewportZenithBase.LockActiveController
struct UGameViewportZenithBase_LockActiveController_Params
{
};

// Function Zenith.GameViewportZenithBase.IsUsingGamepad
struct UGameViewportZenithBase_IsUsingGamepad_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.IsGamepadAttached
struct UGameViewportZenithBase_IsGamepadAttached_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.IsActiveControllerLocked
struct UGameViewportZenithBase_IsActiveControllerLocked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.IsActiveControllerIDSet
struct UGameViewportZenithBase_IsActiveControllerIDSet_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.IsActiveControllerConnected
struct UGameViewportZenithBase_IsActiveControllerConnected_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.GetGameViewportZenith
struct UGameViewportZenithBase_GetGameViewportZenith_Params
{
	class UGameViewportZenithBase*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.GetActiveControllerID
struct UGameViewportZenithBase_GetActiveControllerID_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.GameViewportZenithBase.DelayedSetFocusToHighestWidget
struct UGameViewportZenithBase_DelayedSetFocusToHighestWidget_Params
{
};

// Function Zenith.GetItemTrigger.OnGetItem
struct UGetItemTrigger_OnGetItem_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         Item;                                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.UseHeal
struct UHealComponent_UseHeal_Params
{
};

// Function Zenith.HealComponent.SubHealPowerPercentageBonus
struct UHealComponent_SubHealPowerPercentageBonus_Params
{
	float                                              HealPercentBonusToSub;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.SubHealCountBonus
struct UHealComponent_SubHealCountBonus_Params
{
	int                                                HealCountBonusToSub;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.SetHealPowerLevel
struct UHealComponent_SetHealPowerLevel_Params
{
	int                                                NewHealPowerLevel;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.SetHealCountLevel
struct UHealComponent_SetHealCountLevel_Params
{
	int                                                NewHealCountLevel;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.RestoreHeal
struct UHealComponent_RestoreHeal_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.PlayerCantHealChanged
struct UHealComponent_PlayerCantHealChanged_Params
{
};

// Function Zenith.HealComponent.IsHealCountMax
struct UHealComponent_IsHealCountMax_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.GetRemainingHealCount
struct UHealComponent_GetRemainingHealCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.GetMaxHealPowerLevel
struct UHealComponent_GetMaxHealPowerLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.GetMaxHealCount
struct UHealComponent_GetMaxHealCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.GetHealValue
struct UHealComponent_GetHealValue_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.GetHealPowerLevel
struct UHealComponent_GetHealPowerLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.GetHealCountLevel
struct UHealComponent_GetHealCountLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.FullyRestoreHeals
struct UHealComponent_FullyRestoreHeals_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.AddHealPowerPercentageBonus
struct UHealComponent_AddHealPowerPercentageBonus_Params
{
	float                                              HealPercentBonusToAdd;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HealComponent.AddHealPowerLevel
struct UHealComponent_AddHealPowerLevel_Params
{
};

// Function Zenith.HealComponent.AddHealCountLevel
struct UHealComponent_AddHealCountLevel_Params
{
};

// Function Zenith.HealComponent.AddHealCountBonus
struct UHealComponent_AddHealCountBonus_Params
{
	int                                                HealCountBonusToAdd;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HitStopComponent.LaunchHitStop
struct UHitStopComponent_LaunchHitStop_Params
{
	float                                              HitStopDuration;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HitStopComponent.IsInHitStop
struct UHitStopComponent_IsInHitStop_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HitStopComponent.GetHitStopFactor
struct UHitStopComponent_GetHitStopFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HomingComponent.SetTarget
struct UHomingComponent_SetTarget_Params
{
	class USceneComponent*                             SceneComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HomingComponent.GetTarget
struct UHomingComponent_GetTarget_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HomingComponent.DidReachTarget
struct UHomingComponent_DidReachTarget_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HookComponent.UnlockHook
struct UHookComponent_UnlockHook_Params
{
};

// Function Zenith.HookComponent.OnUnlockHook
struct UHookComponent_OnUnlockHook_Params
{
	class AHookPoint*                                  HookPoint;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HookComponent.OnUnlockAptitude
struct UHookComponent_OnUnlockAptitude_Params
{
};

// Function Zenith.HookComponent.OnLockHook
struct UHookComponent_OnLockHook_Params
{
	class AHookPoint*                                  HookPoint;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HookComponent.OnHookChanged
struct UHookComponent_OnHookChanged_Params
{
};

// Function Zenith.HookComponent.OnComponentOverlapEnd
struct UHookComponent_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HookComponent.OnComponentOverlapBegin
struct UHookComponent_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.HookComponent.LockCurrentHook
struct UHookComponent_LockCurrentHook_Params
{
};

// Function Zenith.HookComponent.GetCurrentHookPoint
struct UHookComponent_GetCurrentHookPoint_Params
{
	class AHookPoint*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HookPoint.OnHookPointUsed
struct AHookPoint_OnHookPointUsed_Params
{
	class AZenithCharacter*                            UsingCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HookPoint.NotifyHookPointUsed
struct AHookPoint_NotifyHookPointUsed_Params
{
	class AZenithCharacter*                            UsingCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HookPoint.GetHookTransform
struct AHookPoint_GetHookTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.HookPoint.GetHookLocation
struct AHookPoint_GetHookLocation_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HookPoint.GetHookAttachComponent
struct AHookPoint_GetHookAttachComponent_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.SetMaxHP
struct UHPComponent_SetMaxHP_Params
{
	int                                                NewMaxHP;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.OnHeal
struct UHPComponent_OnHeal_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Heal;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.OnDamage
struct UHPComponent_OnDamage_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Damage;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.IsNullifyingDamage
struct UHPComponent_IsNullifyingDamage_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.IsAlive
struct UHPComponent_IsAlive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.GetMaxHP
struct UHPComponent_GetMaxHP_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.GetCurrHPRatio
struct UHPComponent_GetCurrHPRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.GetCurrHP
struct UHPComponent_GetCurrHP_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.FullyRestore
struct UHPComponent_FullyRestore_Params
{
};

// Function Zenith.HPComponent.DoHeal
struct UHPComponent_DoHeal_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Heal;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.HPComponent.DoDamage
struct UHPComponent_DoDamage_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Damage;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bJustGuarding;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGuarding;                                                 // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.SetInputModeUIOnlyForAllPlayers
struct UInputBPFLibrary_SetInputModeUIOnlyForAllPlayers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     FocusTarget;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EMouseLockMode                              MouseLockMode;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.SetInputModeGameOnlyForAllPlayers
struct UInputBPFLibrary_SetInputModeGameOnlyForAllPlayers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.SetInputModeGameAndUIForAllPlayers
struct UInputBPFLibrary_SetInputModeGameAndUIForAllPlayers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     FocusTarget;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EMouseLockMode                              MouseLockModer;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideCursorDuringCapture;                                  // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.SetAllUserFocus
struct UInputBPFLibrary_SetAllUserFocus_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EFocusCause                              FocusCause;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUIValidationKey
struct UInputBPFLibrary_IsUIValidationKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUIPauseKey
struct UInputBPFLibrary_IsUIPauseKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUINavigationUpKey
struct UInputBPFLibrary_IsUINavigationUpKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUINavigationRightKey
struct UInputBPFLibrary_IsUINavigationRightKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUINavigationPrevPageKey
struct UInputBPFLibrary_IsUINavigationPrevPageKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUINavigationNextPageKey
struct UInputBPFLibrary_IsUINavigationNextPageKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUINavigationLeftKey
struct UInputBPFLibrary_IsUINavigationLeftKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUINavigationDownKey
struct UInputBPFLibrary_IsUINavigationDownKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUIMenuKey
struct UInputBPFLibrary_IsUIMenuKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUIDebugKey
struct UInputBPFLibrary_IsUIDebugKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUIContextKey
struct UInputBPFLibrary_IsUIContextKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsUICancelKey
struct UInputBPFLibrary_IsUICancelKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsRepeatKeyEvent
struct UInputBPFLibrary_IsRepeatKeyEvent_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsRawInputTypeSet
struct UInputBPFLibrary_IsRawInputTypeSet_Params
{
	struct FInputSnapshot                              InputSnapshot;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.IsCommandInputTypeSet
struct UInputBPFLibrary_IsCommandInputTypeSet_Params
{
	struct FInputSnapshot                              InputSnapshot;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.GetRichTextFromInputChord
struct UInputBPFLibrary_GetRichTextFromInputChord_Params
{
	struct FInputChord                                 InputChord;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.GetRichTextFromInputActionKeyMapping
struct UInputBPFLibrary_GetRichTextFromInputActionKeyMapping_Params
{
	struct FInputActionKeyMapping                      InputActionKeyMapping;                                     // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0028(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.GetRichTextForUIKey
struct UInputBPFLibrary_GetRichTextForUIKey_Params
{
	TArray<struct FKey>                                Keys;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bRequestGamepad;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.GetRichTextForAction
struct UInputBPFLibrary_GetRichTextForAction_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActionName;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerIndex;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputBPFLibrary.GetNameForCommandInputType
struct UInputBPFLibrary_GetNameForCommandInputType_Params
{
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ShakeComponent.LaunchShake
struct UShakeComponent_LaunchShake_Params
{
	struct FShakeData                                  ShakeData;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.SlowMotionAsyncAction.Tick
struct USlowMotionAsyncAction_Tick_Params
{
};

// Function Zenith.SlowMotionAsyncAction.SlowMotion
struct USlowMotionAsyncAction_SlowMotion_Params
{
	class AZenithPlayerController*                     PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeDilationTarget;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlowMotionDurationInSec;                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendInDuration;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendOutDuration;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlowMotionAsyncAction*                      ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundDataComponent.GetMaterial
struct USoundDataComponent_GetMaterial_Params
{
	Zenith_ESoundMaterial                              ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.SetupOverride
struct UInputSettingsSubsystem_SetupOverride_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.SetInputStyle
struct UInputSettingsSubsystem_SetInputStyle_Params
{
	Zenith_EInputStyle                                 NewInputStyle;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.SetAxisMappings
struct UInputSettingsSubsystem_SetAxisMappings_Params
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                ActionMappings;                                            // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.SetActionMappings
struct UInputSettingsSubsystem_SetActionMappings_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                            // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.RestoreDefaultBindings
struct UInputSettingsSubsystem_RestoreDefaultBindings_Params
{
	Zenith_EBindingType                                BindingTypeToRestore;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.RebuildKeymaps
struct UInputSettingsSubsystem_RebuildKeymaps_Params
{
};

// Function Zenith.InputSettingsSubsystem.OverrideAxisMapping
struct UInputSettingsSubsystem_OverrideAxisMapping_Params
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputChord                                 InputChord;                                                // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AxisScale;                                                 // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepad;                                                  // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.OverrideActionMapping
struct UInputSettingsSubsystem_OverrideActionMapping_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputChord                                 InputChord;                                                // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGamepad;                                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.IsKeyMappedForAction
struct UInputSettingsSubsystem_IsKeyMappedForAction_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        Key;                                                       // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.HasAnyMouseBindings
struct UInputSettingsSubsystem_HasAnyMouseBindings_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.GetKeyMappingForAxis
struct UInputSettingsSubsystem_GetKeyMappingForAxis_Params
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleSign;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.GetKeyMappingForAction
struct UInputSettingsSubsystem_GetKeyMappingForAction_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.GetInputStyle
struct UInputSettingsSubsystem_GetInputStyle_Params
{
	Zenith_EInputStyle                                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.GetInputChordsForAxis
struct UInputSettingsSubsystem_GetInputChordsForAxis_Params
{
	struct FName                                       AxisName;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScaleSign;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputChord>                         ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.GetInputChordsForAction
struct UInputSettingsSubsystem_GetInputChordsForAction_Params
{
	struct FName                                       ActionName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FInputChord>                         ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.GetDefaultInputStyle
struct UInputSettingsSubsystem_GetDefaultInputStyle_Params
{
	Zenith_EInputStyle                                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InputSettingsSubsystem.ActivateActionSet
struct UInputSettingsSubsystem_ActivateActionSet_Params
{
	Zenith_EInputActionSet                             ActionSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.TryMarkAsCleared
struct AInteractable_TryMarkAsCleared_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.SetFacingMode
struct AInteractable_SetFacingMode_Params
{
	Zenith_EInteractableFacingMode                     NewFacingMode;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.OnTargetRemoveState
struct AInteractable_OnTargetRemoveState_Params
{
};

// Function Zenith.Interactable.OnTargetAddState
struct AInteractable_OnTargetAddState_Params
{
};

// Function Zenith.Interactable.OnReleaseInteract
struct AInteractable_OnReleaseInteract_Params
{
};

// Function Zenith.Interactable.OnPressInteract
struct AInteractable_OnPressInteract_Params
{
};

// Function Zenith.Interactable.OnIsInteractable
struct AInteractable_OnIsInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.OnInteractableAlreadyCleared
struct AInteractable_OnInteractableAlreadyCleared_Params
{
};

// Function Zenith.Interactable.OnInteract
struct AInteractable_OnInteract_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.OnInputOverrideChanged
struct AInteractable_OnInputOverrideChanged_Params
{
};

// Function Zenith.Interactable.OnInputDeviceChanged
struct AInteractable_OnInputDeviceChanged_Params
{
};

// Function Zenith.Interactable.OnDeactivateInteractable
struct AInteractable_OnDeactivateInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.OnClearedStatusChecked
struct AInteractable_OnClearedStatusChecked_Params
{
	bool                                               bCleared;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.OnActivateInteractable
struct AInteractable_OnActivateInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.IsInteractableActive
struct AInteractable_IsInteractableActive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.IsInteractable
struct AInteractable_IsInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.GetInteractionText
struct AInteractable_GetInteractionText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.GetInteractingController
struct AInteractable_GetInteractingController_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.GetInteractableInputType
struct AInteractable_GetInteractableInputType_Params
{
	Zenith_EInteractableInputType                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.DeactivateInteractable
struct AInteractable_DeactivateInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.CanBeMarkedAsCleared
struct AInteractable_CanBeMarkedAsCleared_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Interactable.ActivateInteractable
struct AInteractable_ActivateInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InteractComponent.OnStartCommand
struct UInteractComponent_OnStartCommand_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InteractComponent.OnEndCommand
struct UInteractComponent_OnEndCommand_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InteractComponent.OnComponentOverlapEnd
struct UInteractComponent_OnComponentOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InteractComponent.OnComponentOverlapBegin
struct UInteractComponent_OnComponentOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlapComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.SpendCurrency
struct UInventoryComponent_SpendCurrency_Params
{
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyToSpend;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.OnTryAddSpiritItem
struct UInventoryComponent_OnTryAddSpiritItem_Params
{
	struct FInventoryBaseItemData                      ItemData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.OnTipItemAdded
struct UInventoryComponent_OnTipItemAdded_Params
{
	struct FInventoryBaseItemData                      ItemData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.OnSpiritItemAdded
struct UInventoryComponent_OnSpiritItemAdded_Params
{
	struct FInventoryBaseItemData                      ItemData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.OnPassiveItemAdded
struct UInventoryComponent_OnPassiveItemAdded_Params
{
	struct FInventoryBaseItemData                      ItemData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.OnParameterItemAdded
struct UInventoryComponent_OnParameterItemAdded_Params
{
	struct FInventoryBaseItemData                      ItemData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.OnAptitudeItemRemoved
struct UInventoryComponent_OnAptitudeItemRemoved_Params
{
	struct FInventoryBaseItemData                      ItemData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.OnAptitudeItemAdded
struct UInventoryComponent_OnAptitudeItemAdded_Params
{
	struct FInventoryBaseItemData                      ItemData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.HasItem
struct UInventoryComponent_HasItem_Params
{
	struct FDataTableRowHandle                         ItemToAdd;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.GetItemTipInventory
struct UInventoryComponent_GetItemTipInventory_Params
{
	class UItemTipInventory*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.GetItemSpiritInventory
struct UInventoryComponent_GetItemSpiritInventory_Params
{
	class UItemSpiritInventory*                        ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.GetItemPassiveInventory
struct UInventoryComponent_GetItemPassiveInventory_Params
{
	class UItemPassiveInventory*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.GetItemParameterInventory
struct UInventoryComponent_GetItemParameterInventory_Params
{
	class UItemParameterInventory*                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.GetItemGenericInventory
struct UInventoryComponent_GetItemGenericInventory_Params
{
	class UItemInventory*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.GetItemAptitudeInventory
struct UInventoryComponent_GetItemAptitudeInventory_Params
{
	class UItemAptitudeInventory*                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.GetCurrency
struct UInventoryComponent_GetCurrency_Params
{
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.AddItem
struct UInventoryComponent_AddItem_Params
{
	struct FDataTableRowHandle                         ItemToAdd;                                                 // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.InventoryComponent.AddCurrency
struct UInventoryComponent_AddCurrency_Params
{
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyToAdd;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemPassiveInventory.MarkPassiveAsChecked
struct UItemPassiveInventory_MarkPassiveAsChecked_Params
{
	struct FName                                       PassiveID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemPassiveInventory.IsPassiveChecked
struct UItemPassiveInventory_IsPassiveChecked_Params
{
	struct FName                                       PassiveID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemPassiveInventory.IsAllObtainedPassivesChecked
struct UItemPassiveInventory_IsAllObtainedPassivesChecked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.UnlockedAllSpirits
struct UItemSpiritInventory_UnlockedAllSpirits_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.SetSpiritLevel
struct UItemSpiritInventory_SetSpiritLevel_Params
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewLevel;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.MarkSpiritAsChecked
struct UItemSpiritInventory_MarkSpiritAsChecked_Params
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.IsSpiritMaxLevel
struct UItemSpiritInventory_IsSpiritMaxLevel_Params
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.IsSpiritChecked
struct UItemSpiritInventory_IsSpiritChecked_Params
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.IsAllObtainedSpiritsChecked
struct UItemSpiritInventory_IsAllObtainedSpiritsChecked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.GetSpiritMaxLevel
struct UItemSpiritInventory_GetSpiritMaxLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.GetSpiritLevel
struct UItemSpiritInventory_GetSpiritLevel_Params
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreLevelOverride;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.GetSpiritCount
struct UItemSpiritInventory_GetSpiritCount_Params
{
	bool                                               bCountBossSpirit;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.GetCommonSpiritCount
struct UItemSpiritInventory_GetCommonSpiritCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.GetBossSpiritCount
struct UItemSpiritInventory_GetBossSpiritCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemSpiritInventory.AddSpiritLevel
struct UItemSpiritInventory_AddSpiritLevel_Params
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemTipInventory.MarkAsRead
struct UItemTipInventory_MarkAsRead_Params
{
	struct FName                                       TipID;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ItemTipInventory.IsAlreadyRead
struct UItemTipInventory_IsAlreadyRead_Params
{
	struct FName                                       TipID;                                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RefreshableRichTextBlock.SetupAndRefresh
struct URefreshableRichTextBlock_SetupAndRefresh_Params
{
	struct FText                                       NewFormat;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FRichTextFormatElement>              NewFormatElements;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.RefreshableRichTextBlock.SetFormatElements
struct URefreshableRichTextBlock_SetFormatElements_Params
{
	TArray<struct FRichTextFormatElement>              NewFormatElements;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.RefreshableRichTextBlock.SetFormat
struct URefreshableRichTextBlock_SetFormat_Params
{
	struct FText                                       NewFormat;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.RefreshableRichTextBlock.Refresh
struct URefreshableRichTextBlock_Refresh_Params
{
};

// Function Zenith.RefreshableRichTextBlock.GetFormatElements
struct URefreshableRichTextBlock_GetFormatElements_Params
{
	TArray<struct FRichTextFormatElement>              ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.ScreenBPFLibrary.ProjectWorldToViewport
struct UScreenBPFLibrary_ProjectWorldToViewport_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldLocation;                                             // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   out_ViewportLocation;                                      // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ScreenBPFLibrary.DeprojectViewportToWorldAtDepth
struct UScreenBPFLibrary_DeprojectViewportToWorldAtDepth_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ViewportLocation;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     out_WorldLocation;                                         // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.StopSoundEventInstance
struct USoundSubsystem_StopSoundEventInstance_Params
{
	struct FFMODEventInstance                          SoundInstance;                                             // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.StopBGM
struct USoundSubsystem_StopBGM_Params
{
};

// Function Zenith.SoundSubsystem.StopAmbience
struct USoundSubsystem_StopAmbience_Params
{
};

// Function Zenith.SoundSubsystem.StopAll
struct USoundSubsystem_StopAll_Params
{
};

// Function Zenith.SoundSubsystem.SetVolume
struct USoundSubsystem_SetVolume_Params
{
	Zenith_ESoundFamily                                SoundFamily;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewVolume;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.SetParameter
struct USoundSubsystem_SetParameter_Params
{
	struct FName                                       Parameter;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.ResetVolumes
struct USoundSubsystem_ResetVolumes_Params
{
};

// Function Zenith.SoundSubsystem.PlaySoundEvent
struct USoundSubsystem_PlaySoundEvent_Params
{
	class UFMODEvent*                                  SoundEvent;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventInstance                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.PlayBGM
struct USoundSubsystem_PlayBGM_Params
{
	class UFMODEvent*                                  SoundEvent;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.PlayAmbience
struct USoundSubsystem_PlayAmbience_Params
{
	class UFMODEvent*                                  SoundEvent;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.GetVolume
struct USoundSubsystem_GetVolume_Params
{
	Zenith_ESoundFamily                                SoundFamily;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.GetStepSoundEffect
struct USoundSubsystem_GetStepSoundEffect_Params
{
	Zenith_ESoundHeavinessCategory                     Heaviness;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.GetLandingSoundEffect
struct USoundSubsystem_GetLandingSoundEffect_Params
{
	Zenith_ESoundHeavinessCategory                     Heaviness;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          SurfaceType;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.GetHitSoundEffect
struct USoundSubsystem_GetHitSoundEffect_Params
{
	Zenith_ESoundMaterial                              From;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ESoundMaterial                              To;                                                        // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ESoundAction                                Action;                                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.GetCurrentBGM
struct USoundSubsystem_GetCurrentBGM_Params
{
	class UFMODEvent*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.GetCurrentAmbience
struct USoundSubsystem_GetCurrentAmbience_Params
{
	class UFMODEvent*                                  ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.EnableSnapshot
struct USoundSubsystem_EnableSnapshot_Params
{
	class UFMODEvent*                                  Snapshot;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.DisableSnapshot
struct USoundSubsystem_DisableSnapshot_Params
{
	struct FName                                       Tag;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SoundSubsystem.DisableAllSnapshots
struct USoundSubsystem_DisableAllSnapshots_Params
{
};

// Function Zenith.KnockbackComponent.StopKnockback
struct UKnockbackComponent_StopKnockback_Params
{
};

// Function Zenith.KnockbackComponent.OnLanded
struct UKnockbackComponent_OnLanded_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x008C)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.KnockbackComponent.OnGameMapSwitch
struct UKnockbackComponent_OnGameMapSwitch_Params
{
};

// Function Zenith.KnockbackComponent.LaunchKnockback
struct UKnockbackComponent_LaunchKnockback_Params
{
	struct FKnockbackData                              KnockbackData;                                             // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                                     KnockbackDirection;                                        // 0x0058(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.KnockbackComponent.IsInKnockbackRecovery
struct UKnockbackComponent_IsInKnockbackRecovery_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.KnockbackComponent.IsInKnockback
struct UKnockbackComponent_IsInKnockback_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.KnockbackComponent.GetRunningKnockback
struct UKnockbackComponent_GetRunningKnockback_Params
{
	struct FKnockbackRuntimeData                       ReturnValue;                                               // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.KnockbackComponent.CanLaunchKnockback
struct UKnockbackComponent_CanLaunchKnockback_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.KnockbackComponent.CancelKnockback
struct UKnockbackComponent_CancelKnockback_Params
{
};

// Function Zenith.LanguageBPFLibrary.SetDefaultLanguageAsCurrent
struct ULanguageBPFLibrary_SetDefaultLanguageAsCurrent_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LightEmulatorComponent.SetLightEmulatorMode
struct ULightEmulatorComponent_SetLightEmulatorMode_Params
{
	Zenith_ELightEmulatorMode                          NewLightEmulatorMode;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LightEmulatorComponent.SetCustomLightScaleValues
struct ULightEmulatorComponent_SetCustomLightScaleValues_Params
{
	struct FVector                                     NewLightScaleCustomValues;                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LightEmulatorComponent.RefreshTranslucencySortPriority
struct ULightEmulatorComponent_RefreshTranslucencySortPriority_Params
{
};

// Function Zenith.LightEmulatorComponent.OnSpineMaterialsUpdated
struct ULightEmulatorComponent_OnSpineMaterialsUpdated_Params
{
};

// Function Zenith.LoadGameDataFromSlotIndexAsync.LoadGameDataFromSlotIndexAsync
struct ULoadGameDataFromSlotIndexAsync_LoadGameDataFromSlotIndexAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlotIndex;                                                 // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseExclusiveMode;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULoadGameDataFromSlotIndexAsync*             ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.WasFacingRight
struct ULocomotionComponent_WasFacingRight_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.UseRootMotionLocomotion
struct ULocomotionComponent_UseRootMotionLocomotion_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.UseCheapMove
struct ULocomotionComponent_UseCheapMove_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.ToggleFacing
struct ULocomotionComponent_ToggleFacing_Params
{
};

// Function Zenith.LocomotionComponent.SetForcedWalkMode
struct ULocomotionComponent_SetForcedWalkMode_Params
{
	Zenith_EWalkMode                                   NewForcedWalkMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.SetFacingFromInputSnapshot
struct ULocomotionComponent_SetFacingFromInputSnapshot_Params
{
	struct FInputSnapshot                              InputSnapshot;                                             // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.SetFacingFromDirectionInputType
struct ULocomotionComponent_SetFacingFromDirectionInputType_Params
{
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.SetFacing
struct ULocomotionComponent_SetFacing_Params
{
	bool                                               bFacingRight;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.Sample
struct ULocomotionComponent_Sample_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputSnapshot                              InputSnapshot;                                             // 0x0004(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bApplyInputVector;                                         // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.IsFacingRight
struct ULocomotionComponent_IsFacingRight_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.IsDiving
struct ULocomotionComponent_IsDiving_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.GetXYVelocityRatio
struct ULocomotionComponent_GetXYVelocityRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.GetInputVector
struct ULocomotionComponent_GetInputVector_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.LocomotionComponent.CanApplyMove
struct ULocomotionComponent_CanApplyMove_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MasterWidget.SetVisible
struct UMasterWidget_SetVisible_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MasterWidget.AddChild
struct UMasterWidget_AddChild_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ZOrder;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.RoundToPowerOfTwo
struct UMathBPFLibrary_RoundToPowerOfTwo_Params
{
	float                                              A;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.LoopAround_Int
struct UMathBPFLibrary_LoopAround_Int_Params
{
	int                                                X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Min;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.LoopAround_Float
struct UMathBPFLibrary_LoopAround_Float_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Min;                                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.LerpVectorComponents
struct UMathBPFLibrary_LerpVectorComponents_Params
{
	struct FVector                                     A;                                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     B;                                                         // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Alpha;                                                     // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.GetMinTime
struct UMathBPFLibrary_GetMinTime_Params
{
	struct FRuntimeFloatCurve                          Curve;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.GetMaxTime
struct UMathBPFLibrary_GetMaxTime_Params
{
	struct FRuntimeFloatCurve                          Curve;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.FloorToPowerOfTwo
struct UMathBPFLibrary_FloorToPowerOfTwo_Params
{
	float                                              A;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.Evaluate
struct UMathBPFLibrary_Evaluate_Params
{
	struct FRuntimeFloatCurve                          Curve;                                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x008C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.Clamp
struct UMathBPFLibrary_Clamp_Params
{
	struct FVector                                     Vector;                                                    // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Min;                                                       // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Max;                                                       // 0x0018(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.CeilToPowerOfTwo
struct UMathBPFLibrary_CeilToPowerOfTwo_Params
{
	float                                              A;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.AngleBetweenAsRad
struct UMathBPFLibrary_AngleBetweenAsRad_Params
{
	struct FVector                                     VectorA;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VectorB;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MathBPFLibrary.AngleBetweenAsDegree
struct UMathBPFLibrary_AngleBetweenAsDegree_Params
{
	struct FVector                                     VectorA;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     VectorB;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MediaPlayerBPFLibrary.RewindOrReopen
struct UMediaPlayerBPFLibrary_RewindOrReopen_Params
{
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MediaPlayerBPFLibrary.ParseSubtitleDataTable
struct UMediaPlayerBPFLibrary_ParseSubtitleDataTable_Params
{
	class UDataTable*                                  DataTable;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSubtitleData>                       out_SubtitleData;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MediaPlayerBPFLibrary.IsMediaPlayerProcessing
struct UMediaPlayerBPFLibrary_IsMediaPlayerProcessing_Params
{
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DeltaTime;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InOut_LastProcessedTime;                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InOut_InvalidTime;                                         // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MediaPlayerBPFLibrary.GetSubtitleAtTime
struct UMediaPlayerBPFLibrary_GetSubtitleAtTime_Params
{
	TArray<struct FSubtitleData>                       SubtitleData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              VideoTime;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       out_SubtitleText;                                          // 0x0018(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	float                                              out_Alpha;                                                 // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MediaPlayerBPFLibrary.GetLastVideoProcessedTimeInSecond
struct UMediaPlayerBPFLibrary_GetLastVideoProcessedTimeInSecond_Params
{
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MediaPlayerBPFLibrary.GetLastProcessedTimeInSecond
struct UMediaPlayerBPFLibrary_GetLastProcessedTimeInSecond_Params
{
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MediaPlayerBPFLibrary.GetLastAudioProcessedTimeInSecond
struct UMediaPlayerBPFLibrary_GetLastAudioProcessedTimeInSecond_Params
{
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MediaPlayerBPFLibrary.DisplayMediaPlayerData
struct UMediaPlayerBPFLibrary_DisplayMediaPlayerData_Params
{
	class UMediaPlayer*                                MediaPlayer;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MenuInterface.OnOpenMenu
struct UMenuInterface_OnOpenMenu_Params
{
};

// Function Zenith.MenuInterface.OnCloseMenu
struct UMenuInterface_OnCloseMenu_Params
{
};

// Function Zenith.MovePlayerPawnAsyncAction.Tick
struct UMovePlayerPawnAsyncAction_Tick_Params
{
};

// Function Zenith.MovePlayerPawnAsyncAction.OnSimulatedInputChanged
struct UMovePlayerPawnAsyncAction_OnSimulatedInputChanged_Params
{
};

// Function Zenith.MovePlayerPawnAsyncAction.MovePlayerPawn
struct UMovePlayerPawnAsyncAction_MovePlayerPawn_Params
{
	class AZenithPlayerController*                     PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AcceptableRadius;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowVerticalMovement;                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovePlayerPawnAsyncAction*                  ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MPComponent.Subtract
struct UMPComponent_Subtract_Params
{
	int                                                MPToSub;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MPComponent.SetMaxMP
struct UMPComponent_SetMaxMP_Params
{
	int                                                NewMaxMP;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MPComponent.Reset
struct UMPComponent_Reset_Params
{
};

// Function Zenith.MPComponent.GetMaxMP
struct UMPComponent_GetMaxMP_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MPComponent.GetCurrMPRatio
struct UMPComponent_GetCurrMPRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MPComponent.GetCurrMP
struct UMPComponent_GetCurrMP_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.MPComponent.Add
struct UMPComponent_Add_Params
{
	int                                                MPToAdd;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetStunDamageFactor
struct UParameterComponent_GetStunDamageFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetStaminaDamageFactor
struct UParameterComponent_GetStaminaDamageFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetPostDamageInvincibilityBonusTime
struct UParameterComponent_GetPostDamageInvincibilityBonusTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetMPRestoreBonusPercentage
struct UParameterComponent_GetMPRestoreBonusPercentage_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetDamageCutPercentageForAttribute
struct UParameterComponent_GetDamageCutPercentageForAttribute_Params
{
	Zenith_EDamageAttribute                            DamageAttribute;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetDamageCutPercentage
struct UParameterComponent_GetDamageCutPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetDamageAfterDamageCut
struct UParameterComponent_GetDamageAfterDamageCut_Params
{
	int                                                RawDamage;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EDamageAttribute                            DamageAttribute;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetAttackFromRate
struct UParameterComponent_GetAttackFromRate_Params
{
	float                                              Rate;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreOverride;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterComponent.GetAttack
struct UParameterComponent_GetAttack_Params
{
	bool                                               bIgnoreOverride;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterEnemyComponent.OnDifficultyLevelChanged
struct UParameterEnemyComponent_OnDifficultyLevelChanged_Params
{
};

// Function Zenith.ParameterPlayerComponent.SubStunDamagePercentBonus
struct UParameterPlayerComponent_SubStunDamagePercentBonus_Params
{
	float                                              StunDamagePercentBonusToSub;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubStaminaDamagePercentBonus
struct UParameterPlayerComponent_SubStaminaDamagePercentBonus_Params
{
	float                                              StaminaDamagePercentBonusToSub;                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubPostDamageInvincibilityBonusTime
struct UParameterPlayerComponent_SubPostDamageInvincibilityBonusTime_Params
{
	float                                              BonusTimeToSub;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubMPRestorePercentBonus
struct UParameterPlayerComponent_SubMPRestorePercentBonus_Params
{
	float                                              MPPercentBonusToSub;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubMaxStaminaBonusPercentage
struct UParameterPlayerComponent_SubMaxStaminaBonusPercentage_Params
{
	float                                              MaxStaminaBonusToSub;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubMaxMPBonusPercentage
struct UParameterPlayerComponent_SubMaxMPBonusPercentage_Params
{
	float                                              MaxMPBonusToSub;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubMaxHPBonusPercentage
struct UParameterPlayerComponent_SubMaxHPBonusPercentage_Params
{
	float                                              MaxHPBonusToSub;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubExpPercentBonus
struct UParameterPlayerComponent_SubExpPercentBonus_Params
{
	float                                              ExpBonusToSub;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubDamagePercentBonusWhenSwimming
struct UParameterPlayerComponent_SubDamagePercentBonusWhenSwimming_Params
{
	float                                              DamagePercentBonusToSub;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubDamagePercentBonusWhenGrounded
struct UParameterPlayerComponent_SubDamagePercentBonusWhenGrounded_Params
{
	float                                              DamagePercentBonusToSub;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubDamagePercentBonusWhenAirborne
struct UParameterPlayerComponent_SubDamagePercentBonusWhenAirborne_Params
{
	float                                              DamagePercentBonusToSub;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubDamagePercentBonusOnMaxHP
struct UParameterPlayerComponent_SubDamagePercentBonusOnMaxHP_Params
{
	float                                              DamagePercentBonusToSub;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubDamagePercentBonus
struct UParameterPlayerComponent_SubDamagePercentBonus_Params
{
	float                                              DamagePercentBonusToSub;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubDamageCutPercentageForAttribute
struct UParameterPlayerComponent_SubDamageCutPercentageForAttribute_Params
{
	Zenith_EDamageAttribute                            DamageAttribute;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageCutToSub;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SubDamageCutPercentage
struct UParameterPlayerComponent_SubDamageCutPercentage_Params
{
	float                                              DamageCutToSub;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SetSkinLevelOverride
struct UParameterPlayerComponent_SetSkinLevelOverride_Params
{
	int                                                NewSkinLevelOverride;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceOverride;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SetSkinLevel
struct UParameterPlayerComponent_SetSkinLevel_Params
{
	int                                                NewSkinLevel;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SetLevel
struct UParameterPlayerComponent_SetLevel_Params
{
	int                                                NewLevel;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.SetFinalPassivePartCount
struct UParameterPlayerComponent_SetFinalPassivePartCount_Params
{
	int                                                NewFinalPassivePartCount;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.OnItemParameterAdded
struct UParameterPlayerComponent_OnItemParameterAdded_Params
{
	struct FInventoryBaseItemData                      InventoryParameterData;                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.OnChallengeMaxPlayerLevelChanged
struct UParameterPlayerComponent_OnChallengeMaxPlayerLevelChanged_Params
{
};

// Function Zenith.ParameterPlayerComponent.IsMaxLevel
struct UParameterPlayerComponent_IsMaxLevel_Params
{
	bool                                               bIgnoreOverride;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.HasSkinLevelOverride
struct UParameterPlayerComponent_HasSkinLevelOverride_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetSkinLevel
struct UParameterPlayerComponent_GetSkinLevel_Params
{
	bool                                               bWithoutOverride;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetNecessaryExpPointsForLevelUp
struct UParameterPlayerComponent_GetNecessaryExpPointsForLevelUp_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetMaxLevel
struct UParameterPlayerComponent_GetMaxLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetLevel
struct UParameterPlayerComponent_GetLevel_Params
{
	bool                                               bIgnoreOverride;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetFinalPassivePartMaxCount
struct UParameterPlayerComponent_GetFinalPassivePartMaxCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetFinalPassivePartCount
struct UParameterPlayerComponent_GetFinalPassivePartCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetExperienceRatio
struct UParameterPlayerComponent_GetExperienceRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetExperiencePoints
struct UParameterPlayerComponent_GetExperiencePoints_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetExpBonusPercent
struct UParameterPlayerComponent_GetExpBonusPercent_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetBonusRateAdjustedExperiencePoints
struct UParameterPlayerComponent_GetBonusRateAdjustedExperiencePoints_Params
{
	int                                                DefaultPoints;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.GetAttackBonusPercentage
struct UParameterPlayerComponent_GetAttackBonusPercentage_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.ClearSkinLevelOverride
struct UParameterPlayerComponent_ClearSkinLevelOverride_Params
{
};

// Function Zenith.ParameterPlayerComponent.AddStunDamagePercentBonus
struct UParameterPlayerComponent_AddStunDamagePercentBonus_Params
{
	float                                              StunDamagePercentBonusToAdd;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddStaminaDamagePercentBonus
struct UParameterPlayerComponent_AddStaminaDamagePercentBonus_Params
{
	float                                              StaminaDamagePercentBonusToAdd;                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddSkinLevel
struct UParameterPlayerComponent_AddSkinLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddPostDamageInvincibilityBonusTime
struct UParameterPlayerComponent_AddPostDamageInvincibilityBonusTime_Params
{
	float                                              BonusTimeToAdd;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddMPRestorePercentBonus
struct UParameterPlayerComponent_AddMPRestorePercentBonus_Params
{
	float                                              MPPercentBonusToAdd;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddMaxStaminaBonusPercentage
struct UParameterPlayerComponent_AddMaxStaminaBonusPercentage_Params
{
	float                                              MaxStaminaBonusToAdd;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddMaxMPBonusPercentage
struct UParameterPlayerComponent_AddMaxMPBonusPercentage_Params
{
	float                                              MaxMPBonusToAdd;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddMaxHPBonusPercentage
struct UParameterPlayerComponent_AddMaxHPBonusPercentage_Params
{
	float                                              MaxHPBonusToAdd;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddFinalPassivePartCount
struct UParameterPlayerComponent_AddFinalPassivePartCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddExpPercentBonus
struct UParameterPlayerComponent_AddExpPercentBonus_Params
{
	float                                              ExpBonusToAdd;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddExperiencePoints
struct UParameterPlayerComponent_AddExperiencePoints_Params
{
	int                                                PointsToAdd;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAppliedBonusExpRate;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddDamagePercentBonusWhenSwimming
struct UParameterPlayerComponent_AddDamagePercentBonusWhenSwimming_Params
{
	float                                              DamagePercentBonusToAdd;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddDamagePercentBonusWhenGrounded
struct UParameterPlayerComponent_AddDamagePercentBonusWhenGrounded_Params
{
	float                                              DamagePercentBonusToAdd;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddDamagePercentBonusWhenAirborne
struct UParameterPlayerComponent_AddDamagePercentBonusWhenAirborne_Params
{
	float                                              DamagePercentBonusToAdd;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddDamagePercentBonusOnMaxHP
struct UParameterPlayerComponent_AddDamagePercentBonusOnMaxHP_Params
{
	float                                              DamagePercentBonusToAdd;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddDamagePercentBonus
struct UParameterPlayerComponent_AddDamagePercentBonus_Params
{
	float                                              DamagePercentBonusToAdd;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddDamageCutPercentageForAttribute
struct UParameterPlayerComponent_AddDamageCutPercentageForAttribute_Params
{
	Zenith_EDamageAttribute                            DamageAttribute;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageCutToAdd;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ParameterPlayerComponent.AddDamageCutPercentage
struct UParameterPlayerComponent_AddDamageCutPercentage_Params
{
	float                                              DamageCutToAdd;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Passive.OnUnequipPassive
struct UPassive_OnUnequipPassive_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Passive.OnRemoveFromPawn
struct UPassive_OnRemoveFromPawn_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Controller;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Passive.OnEquipPassive
struct UPassive_OnEquipPassive_Params
{
	class AController*                                 Controller;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.Passive.OnApplyToPawn
struct UPassive_OnApplyToPawn_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                                 Controller;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.WakeUpEnd
struct USpineAnimationComponent_WakeUpEnd_Params
{
};

// Function Zenith.SpineAnimationComponent.WakeUpComplete
struct USpineAnimationComponent_WakeUpComplete_Params
{
};

// Function Zenith.SpineAnimationComponent.StopDamage
struct USpineAnimationComponent_StopDamage_Params
{
	bool                                               bPlayRecovery;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.StopAnimation
struct USpineAnimationComponent_StopAnimation_Params
{
	Zenith_ESpineAnimationLayer                        Layer;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideBlend;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Blend;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.StopAllAnimations
struct USpineAnimationComponent_StopAllAnimations_Params
{
};

// Function Zenith.SpineAnimationComponent.StopActionAnimation
struct USpineAnimationComponent_StopActionAnimation_Params
{
	bool                                               bOverrideBlend;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Blend;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.RequestRefreshPlayingAnimation
struct USpineAnimationComponent_RequestRefreshPlayingAnimation_Params
{
};

// Function Zenith.SpineAnimationComponent.PlayWakeUp
struct USpineAnimationComponent_PlayWakeUp_Params
{
};

// Function Zenith.SpineAnimationComponent.PlayLaunchKnockback
struct USpineAnimationComponent_PlayLaunchKnockback_Params
{
};

// Function Zenith.SpineAnimationComponent.PlayKnockbackLanding
struct USpineAnimationComponent_PlayKnockbackLanding_Params
{
};

// Function Zenith.SpineAnimationComponent.PlayDeathBackSide
struct USpineAnimationComponent_PlayDeathBackSide_Params
{
};

// Function Zenith.SpineAnimationComponent.PlayDeath
struct USpineAnimationComponent_PlayDeath_Params
{
};

// Function Zenith.SpineAnimationComponent.PlayDamage
struct USpineAnimationComponent_PlayDamage_Params
{
	bool                                               bForceRestart;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.PlayAnimationWithEvents
struct USpineAnimationComponent_PlayAnimationWithEvents_Params
{
	struct FString                                     AnimName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ESpineAnimationLayer                        Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnAnimEnd;                                                 // 0x0014(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnAnimComplete;                                            // 0x0024(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendIn;                                                   // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRootMotion;                                            // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.PlayAnimations
struct USpineAnimationComponent_PlayAnimations_Params
{
	TArray<struct FSpineAnimationDefinition>           Animations;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Zenith_ESpineAnimationLayer                        Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.PlayAnimationDefinition
struct USpineAnimationComponent_PlayAnimationDefinition_Params
{
	struct FSpineAnimationDefinition                   AnimationDefinition;                                       // 0x0000(0x0048)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Zenith_ESpineAnimationLayer                        Layer;                                                     // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.PlayAnimation
struct USpineAnimationComponent_PlayAnimation_Params
{
	struct FString                                     AnimName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ESpineAnimationLayer                        Layer;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendIn;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRootMotion;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.PlayAdditiveDamage
struct USpineAnimationComponent_PlayAdditiveDamage_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.PlayActionAnimation
struct USpineAnimationComponent_PlayActionAnimation_Params
{
	struct FString                                     AnimName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendIn;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRootMotion;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.OnTrackStarted
struct USpineAnimationComponent_OnTrackStarted_Params
{
	class UTrackEntry*                                 TrackEntry;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.OnMovementModeChanged
struct USpineAnimationComponent_OnMovementModeChanged_Params
{
	class ACharacter*                                  InCharacter;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviousCustomMode;                                        // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.OnLanded
struct USpineAnimationComponent_OnLanded_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x008C)  (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.OnGameMapSwitch
struct USpineAnimationComponent_OnGameMapSwitch_Params
{
};

// Function Zenith.SpineAnimationComponent.OnEventStop
struct USpineAnimationComponent_OnEventStop_Params
{
};

// Function Zenith.SpineAnimationComponent.OnAnimationComplete
struct USpineAnimationComponent_OnAnimationComplete_Params
{
	class UTrackEntry*                                 TrackEntry;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.OnAfterBoneTransformUpdate
struct USpineAnimationComponent_OnAfterBoneTransformUpdate_Params
{
	class USpineSkeletonComponent*                     SpineSkeletonComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.OnAdditiveDamageTimerEnd
struct USpineAnimationComponent_OnAdditiveDamageTimerEnd_Params
{
};

// Function Zenith.SpineAnimationComponent.KnockbackLandingEnd
struct USpineAnimationComponent_KnockbackLandingEnd_Params
{
};

// Function Zenith.SpineAnimationComponent.IsReactionLayerActive
struct USpineAnimationComponent_IsReactionLayerActive_Params
{
	bool                                               bConsiderLoopAsActive;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.IsPlayingSpecificAnimation
struct USpineAnimationComponent_IsPlayingSpecificAnimation_Params
{
	struct FString                                     AnimName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.IsPlayingAnimationAtLayer
struct USpineAnimationComponent_IsPlayingAnimationAtLayer_Params
{
	Zenith_ESpineAnimationLayer                        Layer;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.IsPlayingActionAnimation
struct USpineAnimationComponent_IsPlayingActionAnimation_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.IsKnockbackLocked
struct USpineAnimationComponent_IsKnockbackLocked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.GetLastRootMotionMove
struct USpineAnimationComponent_GetLastRootMotionMove_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.GetHighestActiveLayer
struct USpineAnimationComponent_GetHighestActiveLayer_Params
{
	Zenith_ESpineAnimationLayer                        ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.GetCurrentAnimationName
struct USpineAnimationComponent_GetCurrentAnimationName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineAnimationComponent.DeathEnd
struct USpineAnimationComponent_DeathEnd_Params
{
};

// Function Zenith.SpineAnimationComponent.DeathComplete
struct USpineAnimationComponent_DeathComplete_Params
{
};

// Function Zenith.SpineBPFLibrary.IsPlayingAnyAnimation
struct USpineBPFLibrary_IsPlayingAnyAnimation_Params
{
	class USpineSkeletonAnimationComponent*            AnimSkelComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineBPFLibrary.IsPlayingAnimation
struct USpineBPFLibrary_IsPlayingAnimation_Params
{
	class USpineSkeletonAnimationComponent*            AnimSkelComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimName;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackIndex;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineBPFLibrary.GetTrackIndex
struct USpineBPFLibrary_GetTrackIndex_Params
{
	Zenith_ESpineTrackLayer                            TrackLayer;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineBPFLibrary.AddBoneFollowerComponent
struct USpineBPFLibrary_AddBoneFollowerComponent_Params
{
	class USpineSkeletonAnimationComponent*            AnimSkelComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BoneName;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USpineBoneFollowerComponent*                 ReturnValue;                                               // 0x0018(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpineRootMotionComponent.OnAfterBoneTransformUpdate
struct USpineRootMotionComponent_OnAfterBoneTransformUpdate_Params
{
	class USpineSkeletonComponent*                     SpineSkeletonComponent;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.UnequipSpiritFromCurrentSet
struct USpiritEquipComponent_UnequipSpiritFromCurrentSet_Params
{
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.UnequipSpirit
struct USpiritEquipComponent_UnequipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.UnequipAllSpirits
struct USpiritEquipComponent_UnequipAllSpirits_Params
{
};

// Function Zenith.SpiritEquipComponent.ToggleSummonSet
struct USpiritEquipComponent_ToggleSummonSet_Params
{
};

// Function Zenith.SpiritEquipComponent.SwitchSummonSet
struct USpiritEquipComponent_SwitchSummonSet_Params
{
	Zenith_ESummonSet                                  NewSet;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.SetCanChangeEquipment
struct USpiritEquipComponent_SetCanChangeEquipment_Params
{
	bool                                               bNewCanChangeEquipment;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.ReequipSpirits
struct USpiritEquipComponent_ReequipSpirits_Params
{
};

// Function Zenith.SpiritEquipComponent.OnSpiritLevelChanged
struct USpiritEquipComponent_OnSpiritLevelChanged_Params
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewSpiritLevel;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.OnGameMapSwitch
struct USpiritEquipComponent_OnGameMapSwitch_Params
{
};

// Function Zenith.SpiritEquipComponent.IsSpiritEquipped
struct USpiritEquipComponent_IsSpiritEquipped_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SpiritID;                                                  // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.GetSummonSetDataAsReadOnly
struct USpiritEquipComponent_GetSummonSetDataAsReadOnly_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSummonSetData                              ReturnValue;                                               // 0x0008(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.GetCurrentSummonSet
struct USpiritEquipComponent_GetCurrentSummonSet_Params
{
	Zenith_ESummonSet                                  ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.GetAllSummonSets
struct USpiritEquipComponent_GetAllSummonSets_Params
{
	TMap<Zenith_ESummonSet, struct FSummonSetData>     ReturnValue;                                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.ForceDisappearAllSpirits
struct USpiritEquipComponent_ForceDisappearAllSpirits_Params
{
};

// Function Zenith.SpiritEquipComponent.EquipSpiritToCurrentSet
struct USpiritEquipComponent_EquipSpiritToCurrentSet_Params
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.EquipSpirit
struct USpiritEquipComponent_EquipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SpiritID;                                                  // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritEquipComponent.CanChangeEquipment
struct USpiritEquipComponent_CanChangeEquipment_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.StaminaComponent.OnKnockbackEnd
struct UStaminaComponent_OnKnockbackEnd_Params
{
	struct FKnockbackRuntimeData                       KnockbackRuntimeData;                                      // 0x0000(0x0088)  (Parm, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.UnequipPassive
struct UPassiveEquipComponent_UnequipPassive_Params
{
	struct FName                                       PassiveID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.SetSlotCount
struct UPassiveEquipComponent_SetSlotCount_Params
{
	int                                                NewSlotCount;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.IsPassiveEquipped
struct UPassiveEquipComponent_IsPassiveEquipped_Params
{
	struct FName                                       PassiveID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.GetUsedSlotCount
struct UPassiveEquipComponent_GetUsedSlotCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.GetSlotCount
struct UPassiveEquipComponent_GetSlotCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.GetMaxSlotCount
struct UPassiveEquipComponent_GetMaxSlotCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.GetMaxEquippablePassiveCount
struct UPassiveEquipComponent_GetMaxEquippablePassiveCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.GetEquippedPassives
struct UPassiveEquipComponent_GetEquippedPassives_Params
{
	TArray<struct FPassiveEquipRuntimeData>            ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.GetAvailableSlotCount
struct UPassiveEquipComponent_GetAvailableSlotCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.EquipPassive
struct UPassiveEquipComponent_EquipPassive_Params
{
	struct FName                                       PassiveID;                                                 // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EPassiveEquipResult                         ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.CanEquipPassive
struct UPassiveEquipComponent_CanEquipPassive_Params
{
	struct FItemPassiveData                            ItemPassiveData;                                           // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	Zenith_EPassiveEquipResult                         ReturnValue;                                               // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.AddSlotCount
struct UPassiveEquipComponent_AddSlotCount_Params
{
	int                                                SlotToAdd;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PassiveEquipComponent.AddSlot
struct UPassiveEquipComponent_AddSlot_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PawnActivationVolume.OnPawnEndPlay
struct APawnActivationVolume_OnPawnEndPlay_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PawnActivationVolume.OnEndOverlap
struct APawnActivationVolume_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PawnActivationVolume.OnBeginOverlap
struct APawnActivationVolume_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function Zenith.PawnBPFLibrary.SpawnCustomController
struct UPawnBPFLibrary_SpawnCustomController_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AIControllerClass;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PawnBPFLibrary.ResetZVelocity
struct UPawnBPFLibrary_ResetZVelocity_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PawnBPFLibrary.ResetVelocity
struct UPawnBPFLibrary_ResetVelocity_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PawnBPFLibrary.GetZenithPlayerController
struct UPawnBPFLibrary_GetZenithPlayerController_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AZenithPlayerController*                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PawnBPFLibrary.AttributeFaction
struct UPawnBPFLibrary_AttributeFaction_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EFaction                                    Faction;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PhysicsVolumeDetectorComponent.OnActorEndOverlap
struct UPhysicsVolumeDetectorComponent_OnActorEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PhysicsVolumeDetectorComponent.OnActorBeginOverlap
struct UPhysicsVolumeDetectorComponent_OnActorBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.UnregisterGameplayCamera
struct APlayerCameraManagerZenithBase_UnregisterGameplayCamera_Params
{
	class AGameplayCamera*                             GameplayCamera;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.RemoveClampVolume
struct APlayerCameraManagerZenithBase_RemoveClampVolume_Params
{
	class ACameraClampVolume*                          ClampVolume;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.RegisterGameplayCamera
struct APlayerCameraManagerZenithBase_RegisterGameplayCamera_Params
{
	class AGameplayCamera*                             GameplayCamera;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.OnPostUpdateCamera
struct APlayerCameraManagerZenithBase_OnPostUpdateCamera_Params
{
};

// Function Zenith.PlayerCameraManagerZenithBase.OnNoClampVolumeWarning
struct APlayerCameraManagerZenithBase_OnNoClampVolumeWarning_Params
{
};

// Function Zenith.PlayerCameraManagerZenithBase.IsGameplayCameraRegistered
struct APlayerCameraManagerZenithBase_IsGameplayCameraRegistered_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.IsClamped
struct APlayerCameraManagerZenithBase_IsClamped_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetViewTargetActor
struct APlayerCameraManagerZenithBase_GetViewTargetActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetRootClampVolume
struct APlayerCameraManagerZenithBase_GetRootClampVolume_Params
{
	class ACameraClampVolume*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetRegisteredGameplayCamera
struct APlayerCameraManagerZenithBase_GetRegisteredGameplayCamera_Params
{
	class AGameplayCamera*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetPlayerCameraManagerZenith
struct APlayerCameraManagerZenithBase_GetPlayerCameraManagerZenith_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerControllerIndex;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerCameraManagerZenithBase*              ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetGameplayCamera
struct APlayerCameraManagerZenithBase_GetGameplayCamera_Params
{
	class AGameplayCamera*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetCameraComponent
struct APlayerCameraManagerZenithBase_GetCameraComponent_Params
{
	class UCameraComponent*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetCamera
struct APlayerCameraManagerZenithBase_GetCamera_Params
{
	class ACameraActor*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetAspectRatioAxisConstraint
struct APlayerCameraManagerZenithBase_GetAspectRatioAxisConstraint_Params
{
	TEnumAsByte<Engine_EAspectRatioAxisConstraint>     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.GetActiveClampVolume
struct APlayerCameraManagerZenithBase_GetActiveClampVolume_Params
{
	class ACameraClampVolume*                          ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.ClampLocationInCameraView
struct APlayerCameraManagerZenithBase_ClampLocationInCameraView_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Size;                                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PlayerCameraManagerZenithBase.AddClampVolume
struct APlayerCameraManagerZenithBase_AddClampVolume_Params
{
	class ACameraClampVolume*                          ClampVolume;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PoolSubsystem.GetPoolSystem
struct UPoolSubsystem_GetPoolSystem_Params
{
	class UPoolSystem*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PoolSystem.ReturnToPool
struct UPoolSystem_ReturnToPool_Params
{
	class UObject*                                     ObjectInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PoolSystem.GetFromPool
struct UPoolSystem_GetFromPool_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.PoolSystem.ClearPool
struct UPoolSystem_ClearPool_Params
{
};

// Function Zenith.PoolSystemBPFLibrary.GetPoolSystem
struct UPoolSystemBPFLibrary_GetPoolSystem_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPoolSystem*                                 ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.UseProfileSystem
struct UProfileSubsystem_UseProfileSystem_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.SaveCurrProfileAsMainProfile
struct UProfileSubsystem_SaveCurrProfileAsMainProfile_Params
{
};

// Function Zenith.ProfileSubsystem.OpenProfileUIWithDelegate
struct UProfileSubsystem_OpenProfileUIWithDelegate_Params
{
	int                                                ControllerIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnProfileUIClosed;                                         // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.OpenProfileUI
struct UProfileSubsystem_OpenProfileUI_Params
{
	int                                                ControllerIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.OnPlayerControllerIDChanged
struct UProfileSubsystem_OnPlayerControllerIDChanged_Params
{
	int                                                OldControllerID;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewControllerID;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.IsUsingMainProfile
struct UProfileSubsystem_IsUsingMainProfile_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.IsMainProfileValid
struct UProfileSubsystem_IsMainProfileValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.GetMainProfileUserIndex
struct UProfileSubsystem_GetMainProfileUserIndex_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.GetMainProfileName
struct UProfileSubsystem_GetMainProfileName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.ProfileSubsystem.ClearMainProfile
struct UProfileSubsystem_ClearMainProfile_Params
{
};

// Function Zenith.RealTimeDelayAsyncAction.RealTimeDelay
struct URealTimeDelayAsyncAction_RealTimeDelay_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayInSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URealTimeDelayAsyncAction*                   ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RenderBPFLibrary.GetUMGZOrder
struct URenderBPFLibrary_GetUMGZOrder_Params
{
	Zenith_EUMGZOrderLayer                             Layer;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.RenderBPFLibrary.GetTranslucencySortPriority
struct URenderBPFLibrary_GetTranslucencySortPriority_Params
{
	Zenith_ETranslucencyLayer                          Layer;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveIconUserWidget.Show
struct USaveIconUserWidget_Show_Params
{
};

// Function Zenith.SaveIconUserWidget.HideAndRemoveFromViewport
struct USaveIconUserWidget_HideAndRemoveFromViewport_Params
{
};

// Function Zenith.SaveSubsystem.SetSaveSlotIndex
struct USaveSubsystem_SetSaveSlotIndex_Params
{
	int                                                SlotIndexToUse;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.SaveSettings
struct USaveSubsystem_SaveSettings_Params
{
};

// Function Zenith.SaveSubsystem.SaveGameAsync
struct USaveSubsystem_SaveGameAsync_Params
{
	class UClass*                                      SaveIconWidgetClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnFinished;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.SaveGame
struct USaveSubsystem_SaveGame_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.ReloadSettings
struct USaveSubsystem_ReloadSettings_Params
{
	Zenith_ESaveExistsType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.OnSaveFinished
struct USaveSubsystem_OnSaveFinished_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserIndex;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.OnSaveBackupFinished
struct USaveSubsystem_OnSaveBackupFinished_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserIndex;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.OnLoadFinished
struct USaveSubsystem_OnLoadFinished_Params
{
	struct FString                                     LoadedSlotName;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserIndex;                                                 // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USaveGame*                                   SaveGame;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.MarkInitializationSettingsCompleted
struct USaveSubsystem_MarkInitializationSettingsCompleted_Params
{
};

// Function Zenith.SaveSubsystem.LoadSettings
struct USaveSubsystem_LoadSettings_Params
{
	Zenith_ESaveExistsType                             ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.LoadGameBackupAsync
struct USaveSubsystem_LoadGameBackupAsync_Params
{
	int                                                BackupIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LoadIconWidgetClass;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnFinished;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.LoadGameBackup
struct USaveSubsystem_LoadGameBackup_Params
{
	int                                                BackupIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.LoadGameAsync
struct USaveSubsystem_LoadGameAsync_Params
{
	class UClass*                                      LoadIconWidgetClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnFinished;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.LoadGame
struct USaveSubsystem_LoadGame_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.IsSettingsLoaded
struct USaveSubsystem_IsSettingsLoaded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.IsSaving
struct USaveSubsystem_IsSaving_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.IsLoading
struct USaveSubsystem_IsLoading_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.IsInitializationSettingsCompleted
struct USaveSubsystem_IsInitializationSettingsCompleted_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.IsGameLoaded
struct USaveSubsystem_IsGameLoaded_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.HasSaveDataInSlotIndexWithResult
struct USaveSubsystem_HasSaveDataInSlotIndexWithResult_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ESaveExistsType                             ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.HasSaveDataInSlotIndex
struct USaveSubsystem_HasSaveDataInSlotIndex_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.HasSaveData
struct USaveSubsystem_HasSaveData_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.GenerateSaveSlotName
struct USaveSubsystem_GenerateSaveSlotName_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.DeleteSettings
struct USaveSubsystem_DeleteSettings_Params
{
};

// Function Zenith.SaveSubsystem.DeleteSaveDataAtSlotIndex
struct USaveSubsystem_DeleteSaveDataAtSlotIndex_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.DeleteAllSaveData
struct USaveSubsystem_DeleteAllSaveData_Params
{
};

// Function Zenith.SaveSubsystem.CheckSaveDataVersionFromSaveData
struct USaveSubsystem_CheckSaveDataVersionFromSaveData_Params
{
	class USaveData*                                   SaveData;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReturnToTitleOnFail;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SaveSubsystem.CheckSaveDataVersion
struct USaveSubsystem_CheckSaveDataVersion_Params
{
	bool                                               bReturnToTitleOnFail;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.ResetCurrentSetStateAndLocation
struct USpiritCompanionComponent_ResetCurrentSetStateAndLocation_Params
{
};

// Function Zenith.SpiritCompanionComponent.RequestExtraCompanion
struct USpiritCompanionComponent_RequestExtraCompanion_Params
{
	class AZenithCompanionCharacter*                   ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.OnUnequipSpirit
struct USpiritCompanionComponent_OnUnequipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpiritData                                 SpiritData;                                                // 0x0008(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.OnSummonSetSwitch
struct USpiritCompanionComponent_OnSummonSetSwitch_Params
{
	Zenith_ESummonSet                                  PrevSummonSet;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ESummonSet                                  NewSummonSet;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.OnSpiritDisappear
struct USpiritCompanionComponent_OnSpiritDisappear_Params
{
	class AZenithSpirit*                               Spirit;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.OnSpiritAppear
struct USpiritCompanionComponent_OnSpiritAppear_Params
{
	class AZenithSpirit*                               Spirit;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.OnGameMapSwitch
struct USpiritCompanionComponent_OnGameMapSwitch_Params
{
};

// Function Zenith.SpiritCompanionComponent.OnEquipSpirit
struct USpiritCompanionComponent_OnEquipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpiritData                                 SpiritData;                                                // 0x0008(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.GetOrderedCurrentCompanions
struct USpiritCompanionComponent_GetOrderedCurrentCompanions_Params
{
	TArray<class AZenithCompanionCharacter*>           ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.GetExtraCompanions
struct USpiritCompanionComponent_GetExtraCompanions_Params
{
	TArray<class AZenithCompanionCharacter*>           ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Zenith.SpiritCompanionComponent.ClearAllExtraCompanions
struct USpiritCompanionComponent_ClearAllExtraCompanions_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
