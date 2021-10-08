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
//		Name   -> Function ItemTrigger_FinalPassivePart_AddOne.ItemTrigger_FinalPassivePart_AddOne_C.OnGetItem
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDataTableRowHandle                         Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UItemTrigger_FinalPassivePart_AddOne_C::OnGetItem(class AController* Controller, const struct FDataTableRowHandle& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemTrigger_FinalPassivePart_AddOne.ItemTrigger_FinalPassivePart_AddOne_C.OnGetItem");

	UItemTrigger_FinalPassivePart_AddOne_C_OnGetItem_Params params;
	params.Controller = Controller;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function ItemTrigger_FinalPassivePart_AddOne.ItemTrigger_FinalPassivePart_AddOne_C.ExecuteUbergraph_ItemTrigger_FinalPassivePart_AddOne
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemTrigger_FinalPassivePart_AddOne_C::ExecuteUbergraph_ItemTrigger_FinalPassivePart_AddOne(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemTrigger_FinalPassivePart_AddOne.ItemTrigger_FinalPassivePart_AddOne_C.ExecuteUbergraph_ItemTrigger_FinalPassivePart_AddOne");

	UItemTrigger_FinalPassivePart_AddOne_C_ExecuteUbergraph_ItemTrigger_FinalPassivePart_AddOne_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
