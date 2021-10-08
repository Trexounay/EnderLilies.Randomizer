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

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.CharacterStatesAllowVisibility
struct UWBP_DefaultHPGauge_C_CharacterStatesAllowVisibility_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.SetVisible
struct UWBP_DefaultHPGauge_C_SetVisible_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.SetGaugesVisibility
struct UWBP_DefaultHPGauge_C_SetGaugesVisibility_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetStunRatio
struct UWBP_DefaultHPGauge_C_GetStunRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.UpdateContainerVisibility
struct UWBP_DefaultHPGauge_C_UpdateContainerVisibility_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetStaminaRatio
struct UWBP_DefaultHPGauge_C_GetStaminaRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetHPRatio
struct UWBP_DefaultHPGauge_C_GetHPRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnDeath
struct UWBP_DefaultHPGauge_C_OnDeath_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnHPChanged
struct UWBP_DefaultHPGauge_C_OnHPChanged_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Initialize
struct UWBP_DefaultHPGauge_C_Initialize_Params
{
	class AZenithCharacter*                            Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Hide
struct UWBP_DefaultHPGauge_C_Hide_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.RequestRemove
struct UWBP_DefaultHPGauge_C_RequestRemove_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStaminaChanged
struct UWBP_DefaultHPGauge_C_OnStaminaChanged_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnReceiveDamage
struct UWBP_DefaultHPGauge_C_OnReceiveDamage_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStunChanged
struct UWBP_DefaultHPGauge_C_OnStunChanged_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStaminaBreak
struct UWBP_DefaultHPGauge_C_OnStaminaBreak_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStunBreak
struct UWBP_DefaultHPGauge_C_OnStunBreak_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Construct
struct UWBP_DefaultHPGauge_C_Construct_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Destruct
struct UWBP_DefaultHPGauge_C_Destruct_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnDisplayEnemyFloatingGaugeChanged
struct UWBP_DefaultHPGauge_C_OnDisplayEnemyFloatingGaugeChanged_Params
{
};

// Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.ExecuteUbergraph_WBP_DefaultHPGauge
struct UWBP_DefaultHPGauge_C_ExecuteUbergraph_WBP_DefaultHPGauge_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
