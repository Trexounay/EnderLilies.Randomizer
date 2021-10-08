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

// Function CAS_WallGrab.CAS_WallGrab_C.CheckSummonSetSwitch
struct UCAS_WallGrab_C_CheckSummonSetSwitch_Params
{
};

// Function CAS_WallGrab.CAS_WallGrab_C.OnSampleCommandAction
struct UCAS_WallGrab_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_WallGrab.CAS_WallGrab_C.OnEndCommandAction
struct UCAS_WallGrab_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_WallGrab.CAS_WallGrab_C.OnInitialize
struct UCAS_WallGrab_C_OnInitialize_Params
{
};

// Function CAS_WallGrab.CAS_WallGrab_C.ExecuteUbergraph_CAS_WallGrab
struct UCAS_WallGrab_C_ExecuteUbergraph_CAS_WallGrab_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
