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

// Function WBP_HPGauge.WBP_HPGauge_C.RefreshHPGaugeWidth
struct UWBP_HPGauge_C_RefreshHPGaugeWidth_Params
{
};

// Function WBP_HPGauge.WBP_HPGauge_C.SetDelayedGaugeVisible
struct UWBP_HPGauge_C_SetDelayedGaugeVisible_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};

// Function WBP_HPGauge.WBP_HPGauge_C.Get_HPGauge_Percent
struct UWBP_HPGauge_C_Get_HPGauge_Percent_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HPGauge.WBP_HPGauge_C.OnHPChanged
struct UWBP_HPGauge_C_OnHPChanged_Params
{
};

// Function WBP_HPGauge.WBP_HPGauge_C.Tick
struct UWBP_HPGauge_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HPGauge.WBP_HPGauge_C.OnMaxHPChanged
struct UWBP_HPGauge_C_OnMaxHPChanged_Params
{
};

// Function WBP_HPGauge.WBP_HPGauge_C.OnReceivedDamage
struct UWBP_HPGauge_C_OnReceivedDamage_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HPGauge.WBP_HPGauge_C.OnReceiveHeal
struct UWBP_HPGauge_C_OnReceiveHeal_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HPGauge.WBP_HPGauge_C.Initialize
struct UWBP_HPGauge_C_Initialize_Params
{
	class AZenithCharacter*                            Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HPGauge.WBP_HPGauge_C.PreConstruct
struct UWBP_HPGauge_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_HPGauge.WBP_HPGauge_C.ExecuteUbergraph_WBP_HPGauge
struct UWBP_HPGauge_C_ExecuteUbergraph_WBP_HPGauge_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
