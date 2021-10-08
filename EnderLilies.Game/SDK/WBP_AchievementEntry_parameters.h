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

// Function WBP_AchievementEntry.WBP_AchievementEntry_C.SetupLockedAchievement
struct UWBP_AchievementEntry_C_SetupLockedAchievement_Params
{
	struct FAchievementData                            AchievementData;                                           // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_AchievementEntry.WBP_AchievementEntry_C.SetupUnlockedAchievement
struct UWBP_AchievementEntry_C_SetupUnlockedAchievement_Params
{
	struct FAchievementData                            AchievementData;                                           // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_AchievementEntry.WBP_AchievementEntry_C.RefreshDesign
struct UWBP_AchievementEntry_C_RefreshDesign_Params
{
	bool                                               bFocused;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_AchievementEntry.WBP_AchievementEntry_C.Construct
struct UWBP_AchievementEntry_C_Construct_Params
{
};

// Function WBP_AchievementEntry.WBP_AchievementEntry_C.ExecuteUbergraph_WBP_AchievementEntry
struct UWBP_AchievementEntry_C_ExecuteUbergraph_WBP_AchievementEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
