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

// BlueprintGeneratedClass BP_EnemySpawnPoint.BP_EnemySpawnPoint_C
// 0x0048 (FullSize[0x0430] - InheritedSize[0x03E8])
class ABP_EnemySpawnPoint_C : public AEnemySpawnPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                     // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                 // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               RegisterToCamera;                                          // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AddCameraOverrideSettings;                                 // 0x0401(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q2DU[0x2];                                     // 0x0402(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayCameraOverrideSettings             CameraOverrideSettings;                                    // 0x0404(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	float                                              CameraOverrideSettingsInBlendTime;                         // 0x040C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraOverrideSettingsOutBlendTime;                        // 0x0410(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CameraOverrideSettingsID;                                  // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               Registered;                                                // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	Zenith_EAIIdleType                                 IdleType;                                                  // 0x0419(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_61YD[0x2];                                     // 0x041A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              IdlePatrolRange;                                           // 0x041C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ActorsToDestroyOnCleared;                                  // 0x0420(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemySpawnPoint.BP_EnemySpawnPoint_C");
		return ptr;
	}



	void DestroyActors();
	void ApplyIdleBlackboardValues();
	void TryRemoveCameraOverrideSettings();
	void TryAddCameraOverrideSettings();
	void TryUnregisterFromCamera();
	void TryRegisterToCamera();
	void OnEnemyActivate();
	void OnEnemyDeath();
	void OnRegisterEnemy();
	void OnUnregisterEnemy();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void Deactivate();
	void OnDeactivateSpawnPoint();
	void OnApplyBlackboardOverride();
	void OnSpawnPointAlreadyCleared(bool bHasPreviousDeathTransform, const struct FTransform& PreviousDeathTransform);
	void ExecuteUbergraph_BP_EnemySpawnPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
