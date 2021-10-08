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

// Function BP_Breakable_Base.BP_Breakable_Base_C.GetRotationFromLastAttacker
struct ABP_Breakable_Base_C_GetRotationFromLastAttacker_Params
{
	struct FRotator                                    ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerPlayerOverlap
struct ABP_Breakable_Base_C_TriggerPlayerOverlap_Params
{
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerDisableCollision
struct ABP_Breakable_Base_C_TriggerDisableCollision_Params
{
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerAbility
struct ABP_Breakable_Base_C_TriggerAbility_Params
{
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerBreakFX
struct ABP_Breakable_Base_C_TriggerBreakFX_Params
{
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.TriggerBreakSE
struct ABP_Breakable_Base_C_TriggerBreakSE_Params
{
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_2_HPDamageEvent__DelegateSignature
struct ABP_Breakable_Base_C_BndEvt__HPComponent_K2Node_ComponentBoundEvent_2_HPDamageEvent__DelegateSignature_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.OnBreak
struct ABP_Breakable_Base_C_OnBreak_Params
{
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.PostBreakDestroy
struct ABP_Breakable_Base_C_PostBreakDestroy_Params
{
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_1_ClearableEvent__DelegateSignature
struct ABP_Breakable_Base_C_BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_1_ClearableEvent__DelegateSignature_Params
{
	bool                                               bAlreadyCleared;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Breakable_Base_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.OnPlayerOverlap
struct ABP_Breakable_Base_C_OnPlayerOverlap_Params
{
};

// Function BP_Breakable_Base.BP_Breakable_Base_C.ExecuteUbergraph_BP_Breakable_Base
struct ABP_Breakable_Base_C_ExecuteUbergraph_BP_Breakable_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
