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
//		Name   -> Function BP_BreakableBlock.BP_BreakableBlock_C.TryBreakBlock
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AttackLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBlock_C::TryBreakBlock(class AActor* From, int AttackLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock.BP_BreakableBlock_C.TryBreakBlock");

	ABP_BreakableBlock_C_TryBreakBlock_Params params;
	params.From = From;
	params.AttackLevel = AttackLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BreakableBlock.BP_BreakableBlock_C.OnAttackLevelInsufficient
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                AttackLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NecessaryAttackLevel                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBlock_C::OnAttackLevelInsufficient(int AttackLevel, int NecessaryAttackLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock.BP_BreakableBlock_C.OnAttackLevelInsufficient");

	ABP_BreakableBlock_C_OnAttackLevelInsufficient_Params params;
	params.AttackLevel = AttackLevel;
	params.NecessaryAttackLevel = NecessaryAttackLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_BreakableBlock.BP_BreakableBlock_C.ExecuteUbergraph_BP_BreakableBlock
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BreakableBlock_C::ExecuteUbergraph_BP_BreakableBlock(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BreakableBlock.BP_BreakableBlock_C.ExecuteUbergraph_BP_BreakableBlock");

	ABP_BreakableBlock_C_ExecuteUbergraph_BP_BreakableBlock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
