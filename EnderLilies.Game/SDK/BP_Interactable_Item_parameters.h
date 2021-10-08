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

// Function BP_Interactable_Item.BP_Interactable_Item_C.EnsureItemObtained
struct ABP_Interactable_Item_C_EnsureItemObtained_Params
{
};

// Function BP_Interactable_Item.BP_Interactable_Item_C.ConfigureEventPlayer
struct ABP_Interactable_Item_C_ConfigureEventPlayer_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Item.BP_Interactable_Item_C.GetInteractionText
struct ABP_Interactable_Item_C_GetInteractionText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function BP_Interactable_Item.BP_Interactable_Item_C.OnInteract
struct ABP_Interactable_Item_C_OnInteract_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Item.BP_Interactable_Item_C.OnEventFinished
struct ABP_Interactable_Item_C_OnEventFinished_Params
{
};

// Function BP_Interactable_Item.BP_Interactable_Item_C.OnInteractableAlreadyCleared
struct ABP_Interactable_Item_C_OnInteractableAlreadyCleared_Params
{
};

// Function BP_Interactable_Item.BP_Interactable_Item_C.ExecuteUbergraph_BP_Interactable_Item
struct ABP_Interactable_Item_C_ExecuteUbergraph_BP_Interactable_Item_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
