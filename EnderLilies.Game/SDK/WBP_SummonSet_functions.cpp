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
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.GetWidgetSwitcherFromCommandInput
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Zenith_ECommandInputTypes                          CommandInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidgetSwitcher*                             WidgetSwitcher_2                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonSet_C::GetWidgetSwitcherFromCommandInput(Zenith_ECommandInputTypes CommandInput, class UWidgetSwitcher** WidgetSwitcher_2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.GetWidgetSwitcherFromCommandInput");

	UWBP_SummonSet_C_GetWidgetSwitcherFromCommandInput_Params params;
	params.CommandInput = CommandInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WidgetSwitcher_2 != nullptr)
		*WidgetSwitcher_2 = params.WidgetSwitcher_2;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.GetSlotFromCommandInput
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Zenith_ECommandInputTypes                          Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UNamedSlot*                                  Slot                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonSet_C::GetSlotFromCommandInput(Zenith_ECommandInputTypes Index, class UNamedSlot** Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.GetSlotFromCommandInput");

	UWBP_SummonSet_C_GetSlotFromCommandInput_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.GetGridIndexForCommandInput
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Zenith_ECommandInputTypes                          Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                GridIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonSet_C::GetGridIndexForCommandInput(Zenith_ECommandInputTypes Index, int* GridIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.GetGridIndexForCommandInput");

	UWBP_SummonSet_C_GetGridIndexForCommandInput_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GridIndex != nullptr)
		*GridIndex = params.GridIndex;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithPlayerController*                     Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonSet_C::Initialize(class AZenithPlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.Initialize");

	UWBP_SummonSet_C_Initialize_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.BuildSummonItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSpiritData                                 SpiritData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SummonSet_C::BuildSummonItem(const struct FSpiritData& SpiritData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.BuildSummonItem");

	UWBP_SummonSet_C_BuildSummonItem_Params params;
	params.SpiritData = SpiritData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.BuildEquippedSpirits
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonSet_C::BuildEquippedSpirits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.BuildEquippedSpirits");

	UWBP_SummonSet_C_BuildEquippedSpirits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.RemoveSummonSpirit
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSpiritData                                 SpiritData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper)
void UWBP_SummonSet_C::RemoveSummonSpirit(const struct FSpiritData& SpiritData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.RemoveSummonSpirit");

	UWBP_SummonSet_C_RemoveSummonSpirit_Params params;
	params.SpiritData = SpiritData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.OnEquipSpirit
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ESummonSet                                  SummonSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSpiritData                                 SpiritData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_SummonSet_C::OnEquipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.OnEquipSpirit");

	UWBP_SummonSet_C_OnEquipSpirit_Params params;
	params.SummonSet = SummonSet;
	params.SpiritData = SpiritData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.OnUnequipSpirit
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ESummonSet                                  SummonSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSpiritData                                 SpiritData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_SummonSet_C::OnUnequipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.OnUnequipSpirit");

	UWBP_SummonSet_C_OnUnequipSpirit_Params params;
	params.SummonSet = SummonSet;
	params.SpiritData = SpiritData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonSet.WBP_SummonSet_C.ExecuteUbergraph_WBP_SummonSet
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonSet_C::ExecuteUbergraph_WBP_SummonSet(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonSet.WBP_SummonSet_C.ExecuteUbergraph_WBP_SummonSet");

	UWBP_SummonSet_C_ExecuteUbergraph_WBP_SummonSet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
