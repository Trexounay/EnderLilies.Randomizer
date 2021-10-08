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

// Function BP_SoundComponent.BP_SoundComponent_C.GetActorTransform
struct UBP_SoundComponent_C_GetActorTransform_Params
{
	struct FTransform                                  ActorTransform;                                            // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function BP_SoundComponent.BP_SoundComponent_C.GetActorLocation
struct UBP_SoundComponent_C_GetActorLocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SoundComponent.BP_SoundComponent_C.TriggerJustGuardSE
struct UBP_SoundComponent_C_TriggerJustGuardSE_Params
{
};

// Function BP_SoundComponent.BP_SoundComponent_C.TriggerLandingSE
struct UBP_SoundComponent_C_TriggerLandingSE_Params
{
};

// Function BP_SoundComponent.BP_SoundComponent_C.TriggerLandingSEWithFloorHit
struct UBP_SoundComponent_C_TriggerLandingSEWithFloorHit_Params
{
	struct FHitResult                                  FloorHit;                                                  // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_SoundComponent.BP_SoundComponent_C.TriggerSoundEvent
struct UBP_SoundComponent_C_TriggerSoundEvent_Params
{
	class UFMODEvent*                                  Event;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SoundComponent.BP_SoundComponent_C.AddInstanceToRemoveOnCancel
struct UBP_SoundComponent_C_AddInstanceToRemoveOnCancel_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function BP_SoundComponent.BP_SoundComponent_C.ReceiveBeginPlay
struct UBP_SoundComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_SoundComponent.BP_SoundComponent_C.OnEndCommandAction
struct UBP_SoundComponent_C_OnEndCommandAction_Params
{
	class UCommandAction*                              CommandAction;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SoundComponent.BP_SoundComponent_C.AddComponentToRemoveOnCancel
struct UBP_SoundComponent_C_AddComponentToRemoveOnCancel_Params
{
	class UFMODAudioComponent*                         AudioComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_SoundComponent.BP_SoundComponent_C.ExecuteUbergraph_BP_SoundComponent
struct UBP_SoundComponent_C_ExecuteUbergraph_BP_SoundComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
