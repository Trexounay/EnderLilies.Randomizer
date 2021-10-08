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

// BlueprintGeneratedClass GameModeZenith_Default.GameModeZenith_Default_C
// 0x0058 (FullSize[0x0508] - InheritedSize[0x04B0])
class AGameModeZenith_Default_C : public AGameModeZenithBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_BossRushComponent_C*                     BP_BossRushComponent;                                      // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ControllerChecker_C*                     BP_ControllerChecker;                                      // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlatformProfileChecker_C*                BP_PlatformProfileChecker;                                 // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ConditionCheckerComponent_C*             BP_ConditionCheckerComponent;                              // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBeforeRespawn;                                        // 0x04E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N3T4[0x4];                                     // 0x04E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZenithPlayerController*                     TutorialPlayerController;                                  // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FTutorialKeyDataPair>                Tutorials;                                                 // 0x04F0(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	class UWBP_DialogProfileChange_C*                  ProfileWidget;                                             // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GameModeZenith_Default.GameModeZenith_Default_C");
		return ptr;
	}



	void ShowNextTutorial();
	void InitializeNewGame();
	void Print_Player_Start_Infos(class AActor* PlayerStart);
	class AActor* FindPlayerStart(class AController* Player, const struct FString& IncomingName);
	class APawn* SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform);
	void OnReady_85E20DB34BDA93E25A6C48BC32218351();
	void K2_OnRestartPlayer(class AController* NewPlayer);
	void OnGameMapSwitch();
	void ReceiveBeginPlay();
	void OnFadeOutFinished();
	void OnPlayerDeath();
	void OnSaveFinished(bool bSuccess);
	void LaunchTutorials(class AZenithPlayerController* PlayerController, TArray<struct FTutorialKeyDataPair> Tutorials);
	void OnCloseTutorial();
	void ExecuteUbergraph_GameModeZenith_Default(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
