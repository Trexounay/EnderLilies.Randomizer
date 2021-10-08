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

// Function GameModeZenith_Default.GameModeZenith_Default_C.ShowNextTutorial
struct AGameModeZenith_Default_C_ShowNextTutorial_Params
{
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.InitializeNewGame
struct AGameModeZenith_Default_C_InitializeNewGame_Params
{
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.Print Player Start Infos
struct AGameModeZenith_Default_C_Print_Player_Start_Infos_Params
{
	class AActor*                                      PlayerStart;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.FindPlayerStart
struct AGameModeZenith_Default_C_FindPlayerStart_Params
{
	class AController*                                 Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     IncomingName;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                      ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.SpawnDefaultPawnAtTransform
struct AGameModeZenith_Default_C_SpawnDefaultPawnAtTransform_Params
{
	class AController*                                 NewPlayer;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	class APawn*                                       ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.OnReady_85E20DB34BDA93E25A6C48BC32218351
struct AGameModeZenith_Default_C_OnReady_85E20DB34BDA93E25A6C48BC32218351_Params
{
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.K2_OnRestartPlayer
struct AGameModeZenith_Default_C_K2_OnRestartPlayer_Params
{
	class AController*                                 NewPlayer;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.OnGameMapSwitch
struct AGameModeZenith_Default_C_OnGameMapSwitch_Params
{
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.ReceiveBeginPlay
struct AGameModeZenith_Default_C_ReceiveBeginPlay_Params
{
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.OnFadeOutFinished
struct AGameModeZenith_Default_C_OnFadeOutFinished_Params
{
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.OnPlayerDeath
struct AGameModeZenith_Default_C_OnPlayerDeath_Params
{
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.OnSaveFinished
struct AGameModeZenith_Default_C_OnSaveFinished_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.LaunchTutorials
struct AGameModeZenith_Default_C_LaunchTutorials_Params
{
	class AZenithPlayerController*                     PlayerController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTutorialKeyDataPair>                Tutorials;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.OnCloseTutorial
struct AGameModeZenith_Default_C_OnCloseTutorial_Params
{
};

// Function GameModeZenith_Default.GameModeZenith_Default_C.ExecuteUbergraph_GameModeZenith_Default
struct AGameModeZenith_Default_C_ExecuteUbergraph_GameModeZenith_Default_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
