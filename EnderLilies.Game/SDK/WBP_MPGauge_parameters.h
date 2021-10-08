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

// Function WBP_MPGauge.WBP_MPGauge_C.SequenceEvent__ENTRYPOINTWBP_MPGauge_2
struct UWBP_MPGauge_C_SequenceEvent__ENTRYPOINTWBP_MPGauge_2_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.SequenceEvent__ENTRYPOINTWBP_MPGauge_1
struct UWBP_MPGauge_C_SequenceEvent__ENTRYPOINTWBP_MPGauge_1_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.SampleMPFullIdle
struct UWBP_MPGauge_C_SampleMPFullIdle_Params
{
	class UWidget*                                     Frame;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UImage*                                      Gauge;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MPGauge.WBP_MPGauge_C.SetEnableState
struct UWBP_MPGauge_C_SetEnableState_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MPGauge.WBP_MPGauge_C.RefreshMpGauge
struct UWBP_MPGauge_C_RefreshMpGauge_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.RefreshVisibility
struct UWBP_MPGauge_C_RefreshVisibility_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.GetMaxMP
struct UWBP_MPGauge_C_GetMaxMP_Params
{
	int                                                Result;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MPGauge.WBP_MPGauge_C.GetMP
struct UWBP_MPGauge_C_GetMP_Params
{
	int                                                Result;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MPGauge.WBP_MPGauge_C.Get_MPGauge_Percent
struct UWBP_MPGauge_C_Get_MPGauge_Percent_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MPGauge.WBP_MPGauge_C.Sample_OnFirstGaugeFullIdle
struct UWBP_MPGauge_C_Sample_OnFirstGaugeFullIdle_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.Sample_OnSecondGaugeFullIdle
struct UWBP_MPGauge_C_Sample_OnSecondGaugeFullIdle_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.Initialize
struct UWBP_MPGauge_C_Initialize_Params
{
	class AZenithPlayerController*                     Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZenithCharacter*                            Character;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MPGauge.WBP_MPGauge_C.OnMPChanged
struct UWBP_MPGauge_C_OnMPChanged_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.OnAptitudeUnlockedDelegate_Event_1
struct UWBP_MPGauge_C_OnAptitudeUnlockedDelegate_Event_1_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.OnMaxMPChanged
struct UWBP_MPGauge_C_OnMaxMPChanged_Params
{
};

// Function WBP_MPGauge.WBP_MPGauge_C.OnMPGaugeFull
struct UWBP_MPGauge_C_OnMPGaugeFull_Params
{
	int                                                GaugeIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MPGauge.WBP_MPGauge_C.OnMPGaugeNotFull
struct UWBP_MPGauge_C_OnMPGaugeNotFull_Params
{
	int                                                GaugeIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MPGauge.WBP_MPGauge_C.ExecuteUbergraph_WBP_MPGauge
struct UWBP_MPGauge_C_ExecuteUbergraph_WBP_MPGauge_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
