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

// Function WBP_EquipmentEntry.WBP_EquipmentEntry_C.RefreshEntry
struct UWBP_EquipmentEntry_C_RefreshEntry_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSummonSetData                              SummonSetData;                                             // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_EquipmentEntry.WBP_EquipmentEntry_C.ExecuteUbergraph_WBP_EquipmentEntry
struct UWBP_EquipmentEntry_C_ExecuteUbergraph_WBP_EquipmentEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
