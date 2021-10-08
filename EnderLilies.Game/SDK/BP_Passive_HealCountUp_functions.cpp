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
//		Name   -> Function BP_Passive_HealCountUp.BP_Passive_HealCountUp_C.OnEquipPassive
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_HealCountUp_C::OnEquipPassive(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_HealCountUp.BP_Passive_HealCountUp_C.OnEquipPassive");

	UBP_Passive_HealCountUp_C_OnEquipPassive_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Passive_HealCountUp.BP_Passive_HealCountUp_C.OnUnequipPassive
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_HealCountUp_C::OnUnequipPassive(class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_HealCountUp.BP_Passive_HealCountUp_C.OnUnequipPassive");

	UBP_Passive_HealCountUp_C_OnUnequipPassive_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Passive_HealCountUp.BP_Passive_HealCountUp_C.ExecuteUbergraph_BP_Passive_HealCountUp
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_HealCountUp_C::ExecuteUbergraph_BP_Passive_HealCountUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_HealCountUp.BP_Passive_HealCountUp_C.ExecuteUbergraph_BP_Passive_HealCountUp");

	UBP_Passive_HealCountUp_C_ExecuteUbergraph_BP_Passive_HealCountUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
