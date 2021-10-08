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

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.DestroyActors
struct ABP_EnemySpawnPoint_C_DestroyActors_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.ApplyIdleBlackboardValues
struct ABP_EnemySpawnPoint_C_ApplyIdleBlackboardValues_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.TryRemoveCameraOverrideSettings
struct ABP_EnemySpawnPoint_C_TryRemoveCameraOverrideSettings_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.TryAddCameraOverrideSettings
struct ABP_EnemySpawnPoint_C_TryAddCameraOverrideSettings_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.TryUnregisterFromCamera
struct ABP_EnemySpawnPoint_C_TryUnregisterFromCamera_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.TryRegisterToCamera
struct ABP_EnemySpawnPoint_C_TryRegisterToCamera_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.OnEnemyActivate
struct ABP_EnemySpawnPoint_C_OnEnemyActivate_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.OnEnemyDeath
struct ABP_EnemySpawnPoint_C_OnEnemyDeath_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.OnRegisterEnemy
struct ABP_EnemySpawnPoint_C_OnRegisterEnemy_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.OnUnregisterEnemy
struct ABP_EnemySpawnPoint_C_OnUnregisterEnemy_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.ReceiveEndPlay
struct ABP_EnemySpawnPoint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.Deactivate
struct ABP_EnemySpawnPoint_C_Deactivate_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.OnDeactivateSpawnPoint
struct ABP_EnemySpawnPoint_C_OnDeactivateSpawnPoint_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.OnApplyBlackboardOverride
struct ABP_EnemySpawnPoint_C_OnApplyBlackboardOverride_Params
{
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.OnSpawnPointAlreadyCleared
struct ABP_EnemySpawnPoint_C_OnSpawnPointAlreadyCleared_Params
{
	bool                                               bHasPreviousDeathTransform;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  PreviousDeathTransform;                                    // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function BP_EnemySpawnPoint.BP_EnemySpawnPoint_C.ExecuteUbergraph_BP_EnemySpawnPoint
struct ABP_EnemySpawnPoint_C_ExecuteUbergraph_BP_EnemySpawnPoint_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
