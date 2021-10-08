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

// Function WBP_HealingItems.WBP_HealingItems_C.RefreshButtonVisibility
struct UWBP_HealingItems_C_RefreshButtonVisibility_Params
{
};

// Function WBP_HealingItems.WBP_HealingItems_C.BindEvents
struct UWBP_HealingItems_C_BindEvents_Params
{
};

// Function WBP_HealingItems.WBP_HealingItems_C.Initialize
struct UWBP_HealingItems_C_Initialize_Params
{
	class UHealComponent*                              HealComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHPComponent*                                HPComponent;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_HealingItems.WBP_HealingItems_C.BuildItems
struct UWBP_HealingItems_C_BuildItems_Params
{
};

// Function WBP_HealingItems.WBP_HealingItems_C.BuildItem
struct UWBP_HealingItems_C_BuildItem_Params
{
	bool                                               ShouldMarkUsed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_HealingItems.WBP_HealingItems_C.OnUseHealingItem
struct UWBP_HealingItems_C_OnUseHealingItem_Params
{
};

// Function WBP_HealingItems.WBP_HealingItems_C.OnRestoreHealingItem
struct UWBP_HealingItems_C_OnRestoreHealingItem_Params
{
};

// Function WBP_HealingItems.WBP_HealingItems_C.OnHealCountChanged
struct UWBP_HealingItems_C_OnHealCountChanged_Params
{
};

// Function WBP_HealingItems.WBP_HealingItems_C.OnFullyRestoreHealingItems
struct UWBP_HealingItems_C_OnFullyRestoreHealingItems_Params
{
};

// Function WBP_HealingItems.WBP_HealingItems_C.OnHPChanged
struct UWBP_HealingItems_C_OnHPChanged_Params
{
};

// Function WBP_HealingItems.WBP_HealingItems_C.ExecuteUbergraph_WBP_HealingItems
struct UWBP_HealingItems_C_ExecuteUbergraph_WBP_HealingItems_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
