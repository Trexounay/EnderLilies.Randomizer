#pragma once

// Name: enderlilies, Version: 1.1.3_chest


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

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.SetSpineEnabled
struct ABP_Interactable_Treasure_C_SetSpineEnabled_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.ConfigureEventPlayer
struct ABP_Interactable_Treasure_C_ConfigureEventPlayer_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnIsInteractable
struct ABP_Interactable_Treasure_C_OnIsInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.UserConstructionScript
struct ABP_Interactable_Treasure_C_UserConstructionScript_Params
{
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnFinish_F1BF530347E388EF6B03D09FF02ADE4B
struct ABP_Interactable_Treasure_C_OnFinish_F1BF530347E388EF6B03D09FF02ADE4B_Params
{
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnFinish_30F3864E4AA553E1799A2B8BC4D1B9C4
struct ABP_Interactable_Treasure_C_OnFinish_30F3864E4AA553E1799A2B8BC4D1B9C4_Params
{
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnCloseToOpenAnimEnd
struct ABP_Interactable_Treasure_C_OnCloseToOpenAnimEnd_Params
{
	class UTrackEntry*                                 Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_0_ClearableEvent__DelegateSignature
struct ABP_Interactable_Treasure_C_BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_0_ClearableEvent__DelegateSignature_Params
{
	bool                                               bAlreadyCleared;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnOpenEnd
struct ABP_Interactable_Treasure_C_OnOpenEnd_Params
{
	class UTrackEntry*                                 Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnInteract
struct ABP_Interactable_Treasure_C_OnInteract_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnCloseEnd
struct ABP_Interactable_Treasure_C_OnCloseEnd_Params
{
	class UTrackEntry*                                 Entry;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.ExecuteUbergraph_BP_Interactable_Treasure
struct ABP_Interactable_Treasure_C_ExecuteUbergraph_BP_Interactable_Treasure_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
