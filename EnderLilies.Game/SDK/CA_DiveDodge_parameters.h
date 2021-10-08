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

// Function CA_DiveDodge.CA_DiveDodge_C.IsSwimmingOrDiving
struct UCA_DiveDodge_C_IsSwimmingOrDiving_Params
{
	bool                                               IsDiving;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CA_DiveDodge.CA_DiveDodge_C.CanStartCommandAction
struct UCA_DiveDodge_C_CanStartCommandAction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CA_DiveDodge.CA_DiveDodge_C.PlayDodgeAnim
struct UCA_DiveDodge_C_PlayDodgeAnim_Params
{
};

// Function CA_DiveDodge.CA_DiveDodge_C.InitializeDodgeParams
struct UCA_DiveDodge_C_InitializeDodgeParams_Params
{
};

// Function CA_DiveDodge.CA_DiveDodge_C.ComputeDodgeVector
struct UCA_DiveDodge_C_ComputeDodgeVector_Params
{
	struct FMoveTimelineEntry                          MoveTimelineEntry;                                         // 0x0000(0x0020)  (Parm, OutParm, NoDestructor)
};

// Function CA_DiveDodge.CA_DiveDodge_C.OnSampleCommandAction
struct UCA_DiveDodge_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_DiveDodge.CA_DiveDodge_C.OnStartCommandAction
struct UCA_DiveDodge_C_OnStartCommandAction_Params
{
};

// Function CA_DiveDodge.CA_DiveDodge_C.OnEndCommandAction
struct UCA_DiveDodge_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_DiveDodge.CA_DiveDodge_C.ExecuteUbergraph_CA_DiveDodge
struct UCA_DiveDodge_C_ExecuteUbergraph_CA_DiveDodge_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
