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

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.IsOverlappingWaterSurface
struct UBP_WaterInteractionComponent_C_IsOverlappingWaterSurface_Params
{
	bool                                               CanDisplay;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnFinish_E3898B81464AE4DC15F4A1B8E356DF1B
struct UBP_WaterInteractionComponent_C_OnFinish_E3898B81464AE4DC15F4A1B8E356DF1B_Params
{
};

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.ReceiveBeginPlay
struct UBP_WaterInteractionComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnActorBeginOverlap
struct UBP_WaterInteractionComponent_C_OnActorBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.OnActorEndOverlap
struct UBP_WaterInteractionComponent_C_OnActorEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.splash
struct UBP_WaterInteractionComponent_C_splash_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Size;                                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Strength;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.TriggerStep
struct UBP_WaterInteractionComponent_C_TriggerStep_Params
{
	Zenith_EWalkMode                                   Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ActorLocation;                                             // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.TriggerWaterVolumeEntryMedium
struct UBP_WaterInteractionComponent_C_TriggerWaterVolumeEntryMedium_Params
{
};

// Function BP_WaterInteractionComponent.BP_WaterInteractionComponent_C.ExecuteUbergraph_BP_WaterInteractionComponent
struct UBP_WaterInteractionComponent_C_ExecuteUbergraph_BP_WaterInteractionComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
