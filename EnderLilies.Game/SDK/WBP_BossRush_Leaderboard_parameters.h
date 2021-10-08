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

// Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetNewFlagAtIndex
struct UWBP_BossRush_Leaderboard_C_SetNewFlagAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowNewFlag;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetTextsAtIndex
struct UWBP_BossRush_Leaderboard_C_SetTextsAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FBossRushRecordData                         RecordData;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.SetLeaderboardTexts
struct UWBP_BossRush_Leaderboard_C_SetLeaderboardTexts_Params
{
};

// Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.GetLeaderboardLength
struct UWBP_BossRush_Leaderboard_C_GetLeaderboardLength_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.Construct
struct UWBP_BossRush_Leaderboard_C_Construct_Params
{
};

// Function WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C.ExecuteUbergraph_WBP_BossRush_Leaderboard
struct UWBP_BossRush_Leaderboard_C_ExecuteUbergraph_WBP_BossRush_Leaderboard_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
