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

// BlueprintGeneratedClass BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C
// 0x0061 (FullSize[0x0491] - InheritedSize[0x0430])
class ABP_EnemySpawnPoint_Boss_C : public ABP_EnemySpawnPoint_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               ClampArea;                                                 // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            ActivationSphereCollider;                                  // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  BGMEvent;                                                  // 0x0448(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StopBGMOnDeath;                                            // 0x0450(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O76N[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AlreadyDefeatedActorClass;                                 // 0x0458(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableClampVolumeOnEventStart;                            // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AutoDisableClampVolume;                                    // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FE4C[0x6];                                     // 0x0462(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              OnDeathPlayerStates;                                       // 0x0468(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class ABP_CameraClampVolume_C*                     ClampVolume;                                               // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAudioComponent*                             OverrideBGMInstance;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       PlayerPawn;                                                // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               PlayerStatesSet;                                           // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemySpawnPoint_Boss.BP_EnemySpawnPoint_Boss_C");
		return ptr;
	}



	void RemovePlayerStates();
	void AddPlayerStates();
	void SetClampAreaOnEnemy();
	void TryDeleteClampVolume();
	void SetupClampVolume();
	void TryStopBGM();
	void TryPlayBGM();
	void OnEnemyActivate();
	void OnRegisterEnemy();
	void OnDeactivateSpawnPoint();
	void OnSpawnPointAlreadyCleared(bool bHasPreviousDeathTransform, const struct FTransform& PreviousDeathTransform);
	void OnEnemyDeathStart();
	void OnEnemyEventStart();
	void OnOverrideEnemySpawned();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_EnemySpawnPoint_Boss(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
