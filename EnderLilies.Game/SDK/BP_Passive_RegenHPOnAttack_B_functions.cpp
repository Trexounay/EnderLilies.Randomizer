// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnApplyToPawn
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_RegenHPOnAttack_B_C::OnApplyToPawn(class APawn* Pawn, class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnApplyToPawn");

	UBP_Passive_RegenHPOnAttack_B_C_OnApplyToPawn_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnDamageDone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DamagedEnemy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DamageDone                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_RegenHPOnAttack_B_C::OnDamageDone(class AActor* DamagedEnemy, int DamageDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnDamageDone");

	UBP_Passive_RegenHPOnAttack_B_C_OnDamageDone_Params params;
	params.DamagedEnemy = DamagedEnemy;
	params.DamageDone = DamageDone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnRemoveFromPawn
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_RegenHPOnAttack_B_C::OnRemoveFromPawn(class APawn* Pawn, class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.OnRemoveFromPawn");

	UBP_Passive_RegenHPOnAttack_B_C_OnRemoveFromPawn_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.ExecuteUbergraph_BP_Passive_RegenHPOnAttack_B
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_RegenHPOnAttack_B_C::ExecuteUbergraph_BP_Passive_RegenHPOnAttack_B(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C.ExecuteUbergraph_BP_Passive_RegenHPOnAttack_B");

	UBP_Passive_RegenHPOnAttack_B_C_ExecuteUbergraph_BP_Passive_RegenHPOnAttack_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
