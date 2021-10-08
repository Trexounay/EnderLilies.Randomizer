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

// Function CAS_PileAttack.CAS_PileAttack_C.IsInValidMovementMode
struct UCAS_PileAttack_C_IsInValidMovementMode_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CAS_PileAttack.CAS_PileAttack_C.RemoveChargeStates
struct UCAS_PileAttack_C_RemoveChargeStates_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.AddChargeStates
struct UCAS_PileAttack_C_AddChargeStates_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.GetGroundCommandAction
struct UCAS_PileAttack_C_GetGroundCommandAction_Params
{
	class UCommandSettingsData*                        CommandSettings;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_PileAttack.CAS_PileAttack_C.SampleChargeLevel
struct UCAS_PileAttack_C_SampleChargeLevel_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.RemoveChargePhaseStates
struct UCAS_PileAttack_C_RemoveChargePhaseStates_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.AddChargePhaseStates
struct UCAS_PileAttack_C_AddChargePhaseStates_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.SampleDivePhase
struct UCAS_PileAttack_C_SampleDivePhase_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PhaseCompleted;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CAS_PileAttack.CAS_PileAttack_C.SampleChargePhase
struct UCAS_PileAttack_C_SampleChargePhase_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PhaseCompleted;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CAS_PileAttack.CAS_PileAttack_C.OnSampleCommandAction
struct UCAS_PileAttack_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_PileAttack.CAS_PileAttack_C.CanStartCommandAction
struct UCAS_PileAttack_C_CanStartCommandAction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CAS_PileAttack.CAS_PileAttack_C.IsOverridenByActionType
struct UCAS_PileAttack_C_IsOverridenByActionType_Params
{
	Zenith_ECommandInputTypes                          commandType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CAS_PileAttack.CAS_PileAttack_C.OnStartCommandAction
struct UCAS_PileAttack_C_OnStartCommandAction_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.OnEndCommandAction
struct UCAS_PileAttack_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_PileAttack.CAS_PileAttack_C.TryStartDivePhase
struct UCAS_PileAttack_C_TryStartDivePhase_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.TryEndDivePhase
struct UCAS_PileAttack_C_TryEndDivePhase_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.OnChargeLevelChange
struct UCAS_PileAttack_C_OnChargeLevelChange_Params
{
};

// Function CAS_PileAttack.CAS_PileAttack_C.ExecuteUbergraph_CAS_PileAttack
struct UCAS_PileAttack_C_ExecuteUbergraph_CAS_PileAttack_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
