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

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.RemovePlayerStates
struct ABP_EnemySpawnPoint_Boss_C_RemovePlayerStates_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.AddPlayerStates
struct ABP_EnemySpawnPoint_Boss_C_AddPlayerStates_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.SetClampAreaOnEnemy
struct ABP_EnemySpawnPoint_Boss_C_SetClampAreaOnEnemy_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.TryDeleteClampVolume
struct ABP_EnemySpawnPoint_Boss_C_TryDeleteClampVolume_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.SetupClampVolume
struct ABP_EnemySpawnPoint_Boss_C_SetupClampVolume_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.TryStopBGM
struct ABP_EnemySpawnPoint_Boss_C_TryStopBGM_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.TryPlayBGM
struct ABP_EnemySpawnPoint_Boss_C_TryPlayBGM_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.OnEnemyActivate
struct ABP_EnemySpawnPoint_Boss_C_OnEnemyActivate_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.OnRegisterEnemy
struct ABP_EnemySpawnPoint_Boss_C_OnRegisterEnemy_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.OnDeactivateSpawnPoint
struct ABP_EnemySpawnPoint_Boss_C_OnDeactivateSpawnPoint_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.OnSpawnPointAlreadyCleared
struct ABP_EnemySpawnPoint_Boss_C_OnSpawnPointAlreadyCleared_Params
{
	bool                                               bHasPreviousDeathTransform;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                                  PreviousDeathTransform;                                    // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.OnEnemyDeathStart
struct ABP_EnemySpawnPoint_Boss_C_OnEnemyDeathStart_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.OnEnemyEventStart
struct ABP_EnemySpawnPoint_Boss_C_OnEnemyEventStart_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.OnOverrideEnemySpawned
struct ABP_EnemySpawnPoint_Boss_C_OnOverrideEnemySpawned_Params
{
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_EnemySpawnPoint_Boss_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C.ExecuteUbergraph_BP_EnemySpawnPoint_Boss
struct ABP_EnemySpawnPoint_Boss_C_ExecuteUbergraph_BP_EnemySpawnPoint_Boss_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
