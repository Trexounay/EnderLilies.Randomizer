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
//		Name   -> Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetNewFlagAtIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShowNewFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BossRush_Leaderboard_C::SetNewFlagAtIndex(int Index, bool ShowNewFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetNewFlagAtIndex");

	UWBP_BossRush_Leaderboard_C_SetNewFlagAtIndex_Params params;
	params.Index = Index;
	params.ShowNewFlag = ShowNewFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetTextsAtIndex
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		struct FBossRushRecordData                         RecordData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_BossRush_Leaderboard_C::SetTextsAtIndex(int Index, const struct FBossRushRecordData& RecordData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetTextsAtIndex");

	UWBP_BossRush_Leaderboard_C_SetTextsAtIndex_Params params;
	params.Index = Index;
	params.RecordData = RecordData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetLeaderboardTexts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BossRush_Leaderboard_C::SetLeaderboardTexts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetLeaderboardTexts");

	UWBP_BossRush_Leaderboard_C_SetLeaderboardTexts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.GetLeaderboardLength
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UWBP_BossRush_Leaderboard_C::GetLeaderboardLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.GetLeaderboardLength");

	UWBP_BossRush_Leaderboard_C_GetLeaderboardLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BossRush_Leaderboard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.Construct");

	UWBP_BossRush_Leaderboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.ExecuteUbergraph_WBP_BossRush_Leaderboard
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BossRush_Leaderboard_C::ExecuteUbergraph_WBP_BossRush_Leaderboard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.ExecuteUbergraph_WBP_BossRush_Leaderboard");

	UWBP_BossRush_Leaderboard_C_ExecuteUbergraph_WBP_BossRush_Leaderboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
