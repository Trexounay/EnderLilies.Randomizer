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

// Function WBP_SummonSet.WBP_SummonSet_C.GetWidgetSwitcherFromCommandInput
struct UWBP_SummonSet_C_GetWidgetSwitcherFromCommandInput_Params
{
	Zenith_ECommandInputTypes                          CommandInput;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonSet.WBP_SummonSet_C.GetSlotFromCommandInput
struct UWBP_SummonSet_C_GetSlotFromCommandInput_Params
{
	Zenith_ECommandInputTypes                          Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNamedSlot*                                  Slot;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonSet.WBP_SummonSet_C.GetGridIndexForCommandInput
struct UWBP_SummonSet_C_GetGridIndexForCommandInput_Params
{
	Zenith_ECommandInputTypes                          Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GridIndex;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonSet.WBP_SummonSet_C.Initialize
struct UWBP_SummonSet_C_Initialize_Params
{
	class AZenithPlayerController*                     Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonSet.WBP_SummonSet_C.BuildSummonItem
struct UWBP_SummonSet_C_BuildSummonItem_Params
{
	struct FSpiritData                                 SpiritData;                                                // 0x0000(0x0148)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SummonSet.WBP_SummonSet_C.BuildEquippedSpirits
struct UWBP_SummonSet_C_BuildEquippedSpirits_Params
{
};

// Function WBP_SummonSet.WBP_SummonSet_C.RemoveSummonSpirit
struct UWBP_SummonSet_C_RemoveSummonSpirit_Params
{
	struct FSpiritData                                 SpiritData;                                                // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper)
};

// Function WBP_SummonSet.WBP_SummonSet_C.OnEquipSpirit
struct UWBP_SummonSet_C_OnEquipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpiritData                                 SpiritData;                                                // 0x0008(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SummonSet.WBP_SummonSet_C.OnUnequipSpirit
struct UWBP_SummonSet_C_OnUnequipSpirit_Params
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpiritData                                 SpiritData;                                                // 0x0008(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_SummonSet.WBP_SummonSet_C.ExecuteUbergraph_WBP_SummonSet
struct UWBP_SummonSet_C_ExecuteUbergraph_WBP_SummonSet_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
