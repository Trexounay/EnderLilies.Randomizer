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

// Function CAS_Dash.CAS_Dash_C.SampleDashCharge
struct UCAS_Dash_C_SampleDashCharge_Params
{
};

// Function CAS_Dash.CAS_Dash_C.OnSampleCommandAction
struct UCAS_Dash_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_Dash.CAS_Dash_C.OnChargeLevelUp
struct UCAS_Dash_C_OnChargeLevelUp_Params
{
};

// Function CAS_Dash.CAS_Dash_C.OnEndCommandAction
struct UCAS_Dash_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_Dash.CAS_Dash_C.OnStartCommandAction
struct UCAS_Dash_C_OnStartCommandAction_Params
{
};

// Function CAS_Dash.CAS_Dash_C.ExecuteUbergraph_CAS_Dash
struct UCAS_Dash_C_ExecuteUbergraph_CAS_Dash_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
