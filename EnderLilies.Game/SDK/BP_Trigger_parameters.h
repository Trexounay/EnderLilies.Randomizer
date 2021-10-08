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

// Function BP_Trigger.BP_Trigger_C.CanTrigger
struct ABP_Trigger_C_CanTrigger_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Trigger.BP_Trigger_C.Trigger
struct ABP_Trigger_C_Trigger_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Trigger.BP_Trigger_C.ReceiveActorBeginOverlap
struct ABP_Trigger_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Trigger.BP_Trigger_C.OnTrigger
struct ABP_Trigger_C_OnTrigger_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Trigger.BP_Trigger_C.ExecuteUbergraph_BP_Trigger
struct ABP_Trigger_C_ExecuteUbergraph_BP_Trigger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
