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

// Function WBP_AchievementNotification.WBP_AchievementNotification_C.SetupNotification
struct UWBP_AchievementNotification_C_SetupNotification_Params
{
	struct FAchievementData                            AchievementData;                                           // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_AchievementNotification.WBP_AchievementNotification_C.OnAnimationFinished
struct UWBP_AchievementNotification_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AchievementNotification.WBP_AchievementNotification_C.LaunchNextNotification
struct UWBP_AchievementNotification_C_LaunchNextNotification_Params
{
};

// Function WBP_AchievementNotification.WBP_AchievementNotification_C.QueueAchievementNotification
struct UWBP_AchievementNotification_C_QueueAchievementNotification_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_AchievementNotification.WBP_AchievementNotification_C.Construct
struct UWBP_AchievementNotification_C_Construct_Params
{
};

// Function WBP_AchievementNotification.WBP_AchievementNotification_C.ExecuteUbergraph_WBP_AchievementNotification
struct UWBP_AchievementNotification_C_ExecuteUbergraph_WBP_AchievementNotification_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
