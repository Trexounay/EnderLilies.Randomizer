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

// Function CA_Dive.CA_Dive_C.CanStartCommandAction
struct UCA_Dive_C_CanStartCommandAction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CA_Dive.CA_Dive_C.OnMovementModeUpdated
struct UCA_Dive_C_OnMovementModeUpdated_Params
{
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Dive.CA_Dive_C.OnBreakWaterSurfaceDelegate_Event_1
struct UCA_Dive_C_OnBreakWaterSurfaceDelegate_Event_1_Params
{
};

// Function CA_Dive.CA_Dive_C.BindPawnEvents
struct UCA_Dive_C_BindPawnEvents_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Dive.CA_Dive_C.UnbindPawnEvents
struct UCA_Dive_C_UnbindPawnEvents_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Dive.CA_Dive_C.RemoveDiveState
struct UCA_Dive_C_RemoveDiveState_Params
{
};

// Function CA_Dive.CA_Dive_C.OnStartCommandAction
struct UCA_Dive_C_OnStartCommandAction_Params
{
};

// Function CA_Dive.CA_Dive_C.AddDiveState
struct UCA_Dive_C_AddDiveState_Params
{
};

// Function CA_Dive.CA_Dive_C.ExecuteUbergraph_CA_Dive
struct UCA_Dive_C_ExecuteUbergraph_CA_Dive_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
