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

// Function WBP_BossRush_Time.WBP_BossRush_Time_C.IsBossRecordDataValid
struct UWBP_BossRush_Time_C_IsBossRecordDataValid_Params
{
	struct FBossRushRecordData                         BossRushRecordData;                                        // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_BossRush_Time.WBP_BossRush_Time_C.SetNewFlag
struct UWBP_BossRush_Time_C_SetNewFlag_Params
{
	bool                                               ShowNewFlag;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BossRush_Time.WBP_BossRush_Time_C.SetTexts
struct UWBP_BossRush_Time_C_SetTexts_Params
{
	struct FBossRushRecordData                         RecordData;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_BossRush_Time.WBP_BossRush_Time_C.PreConstruct
struct UWBP_BossRush_Time_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_BossRush_Time.WBP_BossRush_Time_C.Construct
struct UWBP_BossRush_Time_C_Construct_Params
{
};

// Function WBP_BossRush_Time.WBP_BossRush_Time_C.ExecuteUbergraph_WBP_BossRush_Time
struct UWBP_BossRush_Time_C_ExecuteUbergraph_WBP_BossRush_Time_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
