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
//		Name   -> Function ItemTrigger_HealPowerUp.ItemTrigger_HealPowerUp_C.OnGetItem
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDataTableRowHandle                         Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UItemTrigger_HealPowerUp_C::OnGetItem(class AController* Controller, const struct FDataTableRowHandle& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemTrigger_HealPowerUp.ItemTrigger_HealPowerUp_C.OnGetItem");

	UItemTrigger_HealPowerUp_C_OnGetItem_Params params;
	params.Controller = Controller;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function ItemTrigger_HealPowerUp.ItemTrigger_HealPowerUp_C.ExecuteUbergraph_ItemTrigger_HealPowerUp
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemTrigger_HealPowerUp_C::ExecuteUbergraph_ItemTrigger_HealPowerUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemTrigger_HealPowerUp.ItemTrigger_HealPowerUp_C.ExecuteUbergraph_ItemTrigger_HealPowerUp");

	UItemTrigger_HealPowerUp_C_ExecuteUbergraph_ItemTrigger_HealPowerUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
