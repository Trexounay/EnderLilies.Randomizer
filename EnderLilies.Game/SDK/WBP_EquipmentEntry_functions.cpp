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
//		Name   -> Function WBP_EquipmentEntry.WBP_EquipmentEntry_C.RefreshEntry
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ESummonSet                                  SummonSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSummonSetData                              SummonSetData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_EquipmentEntry_C::RefreshEntry(Zenith_ESummonSet SummonSet, const struct FSummonSetData& SummonSetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EquipmentEntry.WBP_EquipmentEntry_C.RefreshEntry");

	UWBP_EquipmentEntry_C_RefreshEntry_Params params;
	params.SummonSet = SummonSet;
	params.SummonSetData = SummonSetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_EquipmentEntry.WBP_EquipmentEntry_C.ExecuteUbergraph_WBP_EquipmentEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_EquipmentEntry_C::ExecuteUbergraph_WBP_EquipmentEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_EquipmentEntry.WBP_EquipmentEntry_C.ExecuteUbergraph_WBP_EquipmentEntry");

	UWBP_EquipmentEntry_C_ExecuteUbergraph_WBP_EquipmentEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
