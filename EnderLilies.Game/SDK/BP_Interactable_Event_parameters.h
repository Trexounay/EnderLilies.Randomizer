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

// Function BP_Interactable_Event.BP_Interactable_Event_C.CanBeMarkedAsCleared
struct ABP_Interactable_Event_C_CanBeMarkedAsCleared_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.AddActorBinding
struct ABP_Interactable_Event_C_AddActorBinding_Params
{
	struct FName                                       Key;                                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Value;                                                     // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.GetEventAssetToPlay
struct ABP_Interactable_Event_C_GetEventAssetToPlay_Params
{
	class UEventAsset*                                 EventAsset;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.ConfigureEventPlayer
struct ABP_Interactable_Event_C_ConfigureEventPlayer_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.OnIsInteractable
struct ABP_Interactable_Event_C_OnIsInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.LaunchEvent
struct ABP_Interactable_Event_C_LaunchEvent_Params
{
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.OnInteract
struct ABP_Interactable_Event_C_OnInteract_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.OnDialogueOver
struct ABP_Interactable_Event_C_OnDialogueOver_Params
{
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.ReceiveEndPlay
struct ABP_Interactable_Event_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.OnEventFinished
struct ABP_Interactable_Event_C_OnEventFinished_Params
{
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.OnLaunchEvent
struct ABP_Interactable_Event_C_OnLaunchEvent_Params
{
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.ReceiveBeginPlay
struct ABP_Interactable_Event_C_ReceiveBeginPlay_Params
{
};

// Function BP_Interactable_Event.BP_Interactable_Event_C.ExecuteUbergraph_BP_Interactable_Event
struct ABP_Interactable_Event_C_ExecuteUbergraph_BP_Interactable_Event_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
