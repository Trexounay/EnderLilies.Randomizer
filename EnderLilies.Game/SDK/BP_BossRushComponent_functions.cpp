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
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.SetTransitionPlayerStates
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BossRushComponent_C::SetTransitionPlayerStates(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.SetTransitionPlayerStates");

	UBP_BossRushComponent_C_SetTransitionPlayerStates_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.GetDropOriginTransform
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UBP_BossRushComponent_C::GetDropOriginTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.GetDropOriginTransform");

	UBP_BossRushComponent_C_GetDropOriginTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.IsPlayerAlive
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_BossRushComponent_C::IsPlayerAlive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.IsPlayerAlive");

	UBP_BossRushComponent_C_IsPlayerAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.IsLastBoss
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_BossRushComponent_C::IsLastBoss()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.IsLastBoss");

	UBP_BossRushComponent_C_IsLastBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.CanUpdateTime
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_BossRushComponent_C::CanUpdateTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.CanUpdateTime");

	UBP_BossRushComponent_C_CanUpdateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.SetupBossSpawnPoint
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_EnemySpawnPoint_BossRecollection_C*      InBossSpawnPoint                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BossRushComponent_C::SetupBossSpawnPoint(class ABP_EnemySpawnPoint_BossRecollection_C* InBossSpawnPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.SetupBossSpawnPoint");

	UBP_BossRushComponent_C_SetupBossSpawnPoint_Params params;
	params.InBossSpawnPoint = InBossSpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.TeleportPlayerToBoss
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      BossSpawnPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BossRushComponent_C::TeleportPlayerToBoss(class AActor* BossSpawnPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.TeleportPlayerToBoss");

	UBP_BossRushComponent_C_TeleportPlayerToBoss_Params params;
	params.BossSpawnPoint = BossSpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.GetCurrentRecollectionBossData
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FRecollectionBossData                       CurrentBossData                                            (Parm, OutParm)
void UBP_BossRushComponent_C::GetCurrentRecollectionBossData(bool* Success, struct FRecollectionBossData* CurrentBossData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.GetCurrentRecollectionBossData");

	UBP_BossRushComponent_C_GetCurrentRecollectionBossData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (CurrentBossData != nullptr)
		*CurrentBossData = params.CurrentBossData;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.GoToNextBoss
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_BossRushComponent_C::GoToNextBoss()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.GoToNextBoss");

	UBP_BossRushComponent_C_GoToNextBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnStartBossRush
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_BossRushComponent_C::OnStartBossRush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnStartBossRush");

	UBP_BossRushComponent_C_OnStartBossRush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnClearBossRush
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_BossRushComponent_C::OnClearBossRush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnClearBossRush");

	UBP_BossRushComponent_C_OnClearBossRush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnEndBossRush
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_BossRushComponent_C::OnEndBossRush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnEndBossRush");

	UBP_BossRushComponent_C_OnEndBossRush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnMapSwitch
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_BossRushComponent_C::OnMapSwitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnMapSwitch");

	UBP_BossRushComponent_C_OnMapSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossSpawn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEnemySpawnPoint*                            EnemySpawnPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BossRushComponent_C::OnBossSpawn(class AEnemySpawnPoint* EnemySpawnPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossSpawn");

	UBP_BossRushComponent_C_OnBossSpawn_Params params;
	params.EnemySpawnPoint = EnemySpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossDeathEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEnemySpawnPoint*                            EnemySpawnPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BossRushComponent_C::OnBossDeathEnd(class AEnemySpawnPoint* EnemySpawnPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossDeathEnd");

	UBP_BossRushComponent_C_OnBossDeathEnd_Params params;
	params.EnemySpawnPoint = EnemySpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnCloseRecapFadeFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_BossRushComponent_C::OnCloseRecapFadeFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnCloseRecapFadeFinished");

	UBP_BossRushComponent_C_OnCloseRecapFadeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnCloseBossRushRecap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_BossRushComponent_C::OnCloseBossRushRecap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnCloseBossRushRecap");

	UBP_BossRushComponent_C_OnCloseBossRushRecap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossDeathStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AEnemySpawnPoint*                            EnemySpawnPoint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BossRushComponent_C::OnBossDeathStart(class AEnemySpawnPoint* EnemySpawnPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.OnBossDeathStart");

	UBP_BossRushComponent_C_OnBossDeathStart_Params params;
	params.EnemySpawnPoint = EnemySpawnPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BossRushComponent.BP_BossRushComponent_C.ExecuteUbergraph_BP_BossRushComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BossRushComponent_C::ExecuteUbergraph_BP_BossRushComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BossRushComponent.BP_BossRushComponent_C.ExecuteUbergraph_BP_BossRushComponent");

	UBP_BossRushComponent_C_ExecuteUbergraph_BP_BossRushComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
