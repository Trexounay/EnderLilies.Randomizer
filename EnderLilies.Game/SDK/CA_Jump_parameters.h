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

// Function CA_Jump.CA_Jump_C.ResetJumpCount
struct UCA_Jump_C_ResetJumpCount_Params
{
};

// Function CA_Jump.CA_Jump_C.IsGroundedJump
struct UCA_Jump_C_IsGroundedJump_Params
{
	bool                                               IsDoubleJump;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CA_Jump.CA_Jump_C.IsWallJump
struct UCA_Jump_C_IsWallJump_Params
{
	bool                                               IsWallJump;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CA_Jump.CA_Jump_C.ShouldClearVelocities
struct UCA_Jump_C_ShouldClearVelocities_Params
{
	bool                                               bShouldClear;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CA_Jump.CA_Jump_C.ClearVelocities
struct UCA_Jump_C_ClearVelocities_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Jump.CA_Jump_C.CanStartCommandAction
struct UCA_Jump_C_CanStartCommandAction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CA_Jump.CA_Jump_C.ExecuteJump
struct UCA_Jump_C_ExecuteJump_Params
{
	class AZenithCharacter*                            Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Jump.CA_Jump_C.OnSampleCommandAction
struct UCA_Jump_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Jump.CA_Jump_C.OnChangePawn
struct UCA_Jump_C_OnChangePawn_Params
{
	class APawn*                                       OldPawnSubject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       NewPawnSubject;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Jump.CA_Jump_C.OnLanded
struct UCA_Jump_C_OnLanded_Params
{
};

// Function CA_Jump.CA_Jump_C.OnHookStart
struct UCA_Jump_C_OnHookStart_Params
{
};

// Function CA_Jump.CA_Jump_C.OnEndCommandAction
struct UCA_Jump_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Jump.CA_Jump_C.OnMovementModeUpdated
struct UCA_Jump_C_OnMovementModeUpdated_Params
{
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Jump.CA_Jump_C.OnWallgrabStart
struct UCA_Jump_C_OnWallgrabStart_Params
{
};

// Function CA_Jump.CA_Jump_C.OnStartCommandAction
struct UCA_Jump_C_OnStartCommandAction_Params
{
};

// Function CA_Jump.CA_Jump_C.ExecuteUbergraph_CA_Jump
struct UCA_Jump_C_ExecuteUbergraph_CA_Jump_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
