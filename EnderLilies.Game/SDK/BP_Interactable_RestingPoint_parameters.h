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

// Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ReplaceRestingCompanion
struct ABP_Interactable_RestingPoint_C_ReplaceRestingCompanion_Params
{
	struct FCompanionData                              CompanionData;                                             // 0x0000(0x0140)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper)
};

// Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ConfigureEventPlayer
struct ABP_Interactable_RestingPoint_C_ConfigureEventPlayer_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnInteract
struct ABP_Interactable_RestingPoint_C_OnInteract_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ReceiveBeginPlay
struct ABP_Interactable_RestingPoint_C_ReceiveBeginPlay_Params
{
};

// Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnSpawnCompanion
struct ABP_Interactable_RestingPoint_C_OnSpawnCompanion_Params
{
	struct FCompanionData                              CompanionData;                                             // 0x0000(0x0140)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.OnEventFinished
struct ABP_Interactable_RestingPoint_C_OnEventFinished_Params
{
};

// Function BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C.ExecuteUbergraph_BP_Interactable_RestingPoint
struct ABP_Interactable_RestingPoint_C_ExecuteUbergraph_BP_Interactable_RestingPoint_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
