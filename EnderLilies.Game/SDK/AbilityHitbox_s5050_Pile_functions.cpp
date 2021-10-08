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
//		Name   -> Function AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C.GetAttackLevel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                AttackLevel                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAbilityHitbox_s5050_Pile_C::GetAttackLevel(int* AttackLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C.GetAttackLevel");

	AAbilityHitbox_s5050_Pile_C_GetAttackLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AttackLevel != nullptr)
		*AttackLevel = params.AttackLevel;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C.OnTick
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAbilityHitbox_s5050_Pile_C::OnTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C.OnTick");

	AAbilityHitbox_s5050_Pile_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C.OnLaunch
//		Flags  -> (Event, Protected, BlueprintEvent)
void AAbilityHitbox_s5050_Pile_C::OnLaunch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C.OnLaunch");

	AAbilityHitbox_s5050_Pile_C_OnLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C.ExecuteUbergraph_AbilityHitbox_s5050_Pile
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAbilityHitbox_s5050_Pile_C::ExecuteUbergraph_AbilityHitbox_s5050_Pile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C.ExecuteUbergraph_AbilityHitbox_s5050_Pile");

	AAbilityHitbox_s5050_Pile_C_ExecuteUbergraph_AbilityHitbox_s5050_Pile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
