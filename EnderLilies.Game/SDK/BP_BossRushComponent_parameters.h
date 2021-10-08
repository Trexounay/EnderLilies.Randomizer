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

// Function BP_BossRushComponent.BP_BossRushComponent_C.SetTransitionPlayerStates
struct UBP_BossRushComponent_C_SetTransitionPlayerStates_Params
{
	bool                                               Enable;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.GetDropOriginTransform
struct UBP_BossRushComponent_C_GetDropOriginTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.IsPlayerAlive
struct UBP_BossRushComponent_C_IsPlayerAlive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.IsLastBoss
struct UBP_BossRushComponent_C_IsLastBoss_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.CanUpdateTime
struct UBP_BossRushComponent_C_CanUpdateTime_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.SetupBossSpawnPoint
struct UBP_BossRushComponent_C_SetupBossSpawnPoint_Params
{
	class ABP_EnemySpawnPoint_BossRecollection_C*      InBossSpawnPoint;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.TeleportPlayerToBoss
struct UBP_BossRushComponent_C_TeleportPlayerToBoss_Params
{
	class AActor*                                      BossSpawnPoint;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.GetCurrentRecollectionBossData
struct UBP_BossRushComponent_C_GetCurrentRecollectionBossData_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRecollectionBossData                       CurrentBossData;                                           // 0x0008(0x00A0)  (Parm, OutParm)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.GoToNextBoss
struct UBP_BossRushComponent_C_GoToNextBoss_Params
{
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnStartBossRush
struct UBP_BossRushComponent_C_OnStartBossRush_Params
{
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnClearBossRush
struct UBP_BossRushComponent_C_OnClearBossRush_Params
{
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnEndBossRush
struct UBP_BossRushComponent_C_OnEndBossRush_Params
{
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnMapSwitch
struct UBP_BossRushComponent_C_OnMapSwitch_Params
{
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossSpawn
struct UBP_BossRushComponent_C_OnBossSpawn_Params
{
	class AEnemySpawnPoint*                            EnemySpawnPoint;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossDeathEnd
struct UBP_BossRushComponent_C_OnBossDeathEnd_Params
{
	class AEnemySpawnPoint*                            EnemySpawnPoint;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnCloseRecapFadeFinished
struct UBP_BossRushComponent_C_OnCloseRecapFadeFinished_Params
{
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnCloseBossRushRecap
struct UBP_BossRushComponent_C_OnCloseBossRushRecap_Params
{
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossDeathStart
struct UBP_BossRushComponent_C_OnBossDeathStart_Params
{
	class AEnemySpawnPoint*                            EnemySpawnPoint;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_BossRushComponent.BP_BossRushComponent_C.ExecuteUbergraph_BP_BossRushComponent
struct UBP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
