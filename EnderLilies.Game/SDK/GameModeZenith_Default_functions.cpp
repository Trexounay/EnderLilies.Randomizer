// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.ShowNextTutorial
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGameModeZenith_Default_C::ShowNextTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.ShowNextTutorial");

	AGameModeZenith_Default_C_ShowNextTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.InitializeNewGame
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void AGameModeZenith_Default_C::InitializeNewGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.InitializeNewGame");

	AGameModeZenith_Default_C_InitializeNewGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.Print Player Start Infos
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      PlayerStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameModeZenith_Default_C::Print_Player_Start_Infos(class AActor* PlayerStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.Print Player Start Infos");

	AGameModeZenith_Default_C_Print_Player_Start_Infos_Params params;
	params.PlayerStart = PlayerStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.FindPlayerStart
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     IncomingName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* AGameModeZenith_Default_C::FindPlayerStart(class AController* Player, const struct FString& IncomingName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.FindPlayerStart");

	AGameModeZenith_Default_C_FindPlayerStart_Params params;
	params.Player = Player;
	params.IncomingName = IncomingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.SpawnDefaultPawnAtTransform
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AController*                                 NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnTransform                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APawn* AGameModeZenith_Default_C::SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.SpawnDefaultPawnAtTransform");

	AGameModeZenith_Default_C_SpawnDefaultPawnAtTransform_Params params;
	params.NewPlayer = NewPlayer;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.OnReady_85E20DB34BDA93E25A6C48BC32218351
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGameModeZenith_Default_C::OnReady_85E20DB34BDA93E25A6C48BC32218351()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.OnReady_85E20DB34BDA93E25A6C48BC32218351");

	AGameModeZenith_Default_C_OnReady_85E20DB34BDA93E25A6C48BC32218351_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.K2_OnRestartPlayer
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameModeZenith_Default_C::K2_OnRestartPlayer(class AController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.K2_OnRestartPlayer");

	AGameModeZenith_Default_C_K2_OnRestartPlayer_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.OnGameMapSwitch
//		Flags  -> (Event, Public, BlueprintEvent)
void AGameModeZenith_Default_C::OnGameMapSwitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.OnGameMapSwitch");

	AGameModeZenith_Default_C_OnGameMapSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AGameModeZenith_Default_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.ReceiveBeginPlay");

	AGameModeZenith_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.OnFadeOutFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGameModeZenith_Default_C::OnFadeOutFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.OnFadeOutFinished");

	AGameModeZenith_Default_C_OnFadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.OnPlayerDeath
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGameModeZenith_Default_C::OnPlayerDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.OnPlayerDeath");

	AGameModeZenith_Default_C_OnPlayerDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.OnSaveFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameModeZenith_Default_C::OnSaveFinished(bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.OnSaveFinished");

	AGameModeZenith_Default_C_OnSaveFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.LaunchTutorials
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class AZenithPlayerController*                     PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTutorialKeyDataPair>                Tutorials                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void AGameModeZenith_Default_C::LaunchTutorials(class AZenithPlayerController* PlayerController, TArray<struct FTutorialKeyDataPair> Tutorials)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.LaunchTutorials");

	AGameModeZenith_Default_C_LaunchTutorials_Params params;
	params.PlayerController = PlayerController;
	params.Tutorials = Tutorials;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.OnCloseTutorial
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void AGameModeZenith_Default_C::OnCloseTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.OnCloseTutorial");

	AGameModeZenith_Default_C_OnCloseTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameModeZenith_Default.GameModeZenith_Default_C.ExecuteUbergraph_GameModeZenith_Default
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameModeZenith_Default_C::ExecuteUbergraph_GameModeZenith_Default(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameModeZenith_Default.GameModeZenith_Default_C.ExecuteUbergraph_GameModeZenith_Default");

	AGameModeZenith_Default_C_ExecuteUbergraph_GameModeZenith_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
