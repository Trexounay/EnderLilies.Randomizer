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

// Function WBP_SummonItem.WBP_SummonItem_C.SequenceEvent__ENTRYPOINTWBP_SummonItem_1
struct UWBP_SummonItem_C_SequenceEvent__ENTRYPOINTWBP_SummonItem_1_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.TickSPAttackIdle
struct UWBP_SummonItem_C_TickSPAttackIdle_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.TickShadowBG
struct UWBP_SummonItem_C_TickShadowBG_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.RefreshInputDisplay
struct UWBP_SummonItem_C_RefreshInputDisplay_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.GetCastLimitType
struct UWBP_SummonItem_C_GetCastLimitType_Params
{
	Zenith_ECommandSummonLimitType                     CastLimitType;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonItem.WBP_SummonItem_C.HasReachedCastLimit
struct UWBP_SummonItem_C_HasReachedCastLimit_Params
{
	bool                                               ReachedCastLimit;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SummonItem.WBP_SummonItem_C.GetRemainingCastValue
struct UWBP_SummonItem_C_GetRemainingCastValue_Params
{
	int                                                CastValue;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonItem.WBP_SummonItem_C.GetVisibility_1
struct UWBP_SummonItem_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonItem.WBP_SummonItem_C.GetbIsEnabled_1
struct UWBP_SummonItem_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_SummonItem.WBP_SummonItem_C.GetPercent_1
struct UWBP_SummonItem_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonItem.WBP_SummonItem_C.SetAvatarImages
struct UWBP_SummonItem_C_SetAvatarImages_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.CacheCommandAction
struct UWBP_SummonItem_C_CacheCommandAction_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.RefreshCastCount
struct UWBP_SummonItem_C_RefreshCastCount_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.OnActionEnd
struct UWBP_SummonItem_C_OnActionEnd_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonItem.WBP_SummonItem_C.OnActionRestored
struct UWBP_SummonItem_C_OnActionRestored_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.OnCooldownFinished
struct UWBP_SummonItem_C_OnCooldownFinished_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.Tick
struct UWBP_SummonItem_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonItem.WBP_SummonItem_C.SetGaugePercentage
struct UWBP_SummonItem_C_SetGaugePercentage_Params
{
	float                                              Percentage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonItem.WBP_SummonItem_C.OnReachedCastLimit
struct UWBP_SummonItem_C_OnReachedCastLimit_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.OnMovementModeChanged
struct UWBP_SummonItem_C_OnMovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PreviousCustomMode;                                        // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonItem.WBP_SummonItem_C.OnActionStart
struct UWBP_SummonItem_C_OnActionStart_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.OnCastLimitChanged
struct UWBP_SummonItem_C_OnCastLimitChanged_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.Construct
struct UWBP_SummonItem_C_Construct_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.PreConstruct
struct UWBP_SummonItem_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SummonItem.WBP_SummonItem_C.OnMPChanged
struct UWBP_SummonItem_C_OnMPChanged_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.SPattackIdle
struct UWBP_SummonItem_C_SPattackIdle_Params
{
};

// Function WBP_SummonItem.WBP_SummonItem_C.ExecuteUbergraph_WBP_SummonItem
struct UWBP_SummonItem_C_ExecuteUbergraph_WBP_SummonItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
