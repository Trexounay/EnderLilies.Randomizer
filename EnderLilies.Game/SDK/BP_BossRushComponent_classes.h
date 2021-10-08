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

// BlueprintGeneratedClass BP_BossRushComponent.BP_BossRushComponent_C
// 0x0110 (FullSize[0x01E8] - InheritedSize[0x00D8])
class UBP_BossRushComponent_C : public UBossRushComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDataTable*                                  BossDataTable;                                             // 0x00E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>                 RecoveryDropHandleForNGGenerations;                        // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDataTableRowHandle>                 ClearDropHandleForNGGenerations;                           // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              BossActivationDelay;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreNextBossDelay;                                          // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreClearProcessDelay;                                      // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PostClearDropDelay;                                        // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              TransitionPlayerStates;                                    // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                CurrentBossIndex;                                          // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I2C2[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_BossRush_Timer_C*                       BossRushTimerWidget;                                       // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FRecollectionBossData                       CurrentBossData;                                           // 0x0138(0x00A0) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	class ABP_EnemySpawnPoint_BossRecollection_C*      CurrentBossSpawnPoint;                                     // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UStateComponent*                             TransitionStateComponent;                                  // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BossRushComponent.BP_BossRushComponent_C");
		return ptr;
	}



	void SetTransitionPlayerStates(bool Enable);
	struct FTransform GetDropOriginTransform();
	bool IsPlayerAlive();
	bool IsLastBoss();
	bool CanUpdateTime();
	void SetupBossSpawnPoint(class ABP_EnemySpawnPoint_BossRecollection_C* InBossSpawnPoint);
	void TeleportPlayerToBoss(class AActor* BossSpawnPoint);
	void GetCurrentRecollectionBossData(bool* Success, struct FRecollectionBossData* CurrentBossData);
	void GoToNextBoss();
	void OnStartBossRush();
	void OnClearBossRush();
	void OnEndBossRush();
	void OnMapSwitch();
	void OnBossSpawn(class AEnemySpawnPoint* EnemySpawnPoint);
	void OnBossDeathEnd(class AEnemySpawnPoint* EnemySpawnPoint);
	void OnCloseRecapFadeFinished();
	void OnCloseBossRushRecap();
	void OnBossDeathStart(class AEnemySpawnPoint* EnemySpawnPoint);
	void ExecuteUbergraph_BP_BossRushComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
