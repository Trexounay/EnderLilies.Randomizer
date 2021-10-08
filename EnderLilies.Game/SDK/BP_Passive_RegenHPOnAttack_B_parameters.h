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

// Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnApplyToPawn
struct UBP_Passive_RegenHPOnAttack_B_C_OnApplyToPawn_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnDamageDone
struct UBP_Passive_RegenHPOnAttack_B_C_OnDamageDone_Params
{
	class AActor*                                      DamagedEnemy;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageDone;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnRemoveFromPawn
struct UBP_Passive_RegenHPOnAttack_B_C_OnRemoveFromPawn_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 Controller;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.ExecuteUbergraph_BP_Passive_RegenHPOnAttack_B
struct UBP_Passive_RegenHPOnAttack_B_C_ExecuteUbergraph_BP_Passive_RegenHPOnAttack_B_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
