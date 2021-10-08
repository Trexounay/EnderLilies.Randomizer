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

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.IsStandingOnElevator
struct ABP_Character_Enemy_Base_C_IsStandingOnElevator_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.GetCurrentTarget
struct ABP_Character_Enemy_Base_C_GetCurrentTarget_Params
{
	class AActor*                                      CurrentTarget;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.StopMeatAction
struct ABP_Character_Enemy_Base_C_StopMeatAction_Params
{
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.PlayMeatAction
struct ABP_Character_Enemy_Base_C_PlayMeatAction_Params
{
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.IsPaused
struct ABP_Character_Enemy_Base_C_IsPaused_Params
{
	bool                                               paused;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.SetPaused
struct ABP_Character_Enemy_Base_C_SetPaused_Params
{
	bool                                               paused;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.GetContactDamage
struct ABP_Character_Enemy_Base_C_GetContactDamage_Params
{
	int                                                ContactDamage;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ComputeSortPriority
struct ABP_Character_Enemy_Base_C_ComputeSortPriority_Params
{
	int                                                SortPriority;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.FadeOut__FinishedFunc
struct ABP_Character_Enemy_Base_C_FadeOut__FinishedFunc_Params
{
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.FadeOut__UpdateFunc
struct ABP_Character_Enemy_Base_C_FadeOut__UpdateFunc_Params
{
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Character_Enemy_Base_C_BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Character_Enemy_Base_C_BndEvt__SpineActivationSphere_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ReceiveBeginPlay
struct ABP_Character_Enemy_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.BndEvt__DeathComponent_K2Node_ComponentBoundEvent_3_DeathEvent__DelegateSignature
struct ABP_Character_Enemy_Base_C_BndEvt__DeathComponent_K2Node_ComponentBoundEvent_3_DeathEvent__DelegateSignature_Params
{
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnLanded
struct ABP_Character_Enemy_Base_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnChangeTarget
struct ABP_Character_Enemy_Base_C_OnChangeTarget_Params
{
	class AActor*                                      NewTarget;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.K2_OnMovementModeChanged
struct ABP_Character_Enemy_Base_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PrevCustomMode;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NewCustomMode;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnMovementModeChanged_ToSwimming
struct ABP_Character_Enemy_Base_C_OnMovementModeChanged_ToSwimming_Params
{
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.OnRespawn
struct ABP_Character_Enemy_Base_C_OnRespawn_Params
{
};

// Function BP_Character_Enemy_Base.BP_Character_Enemy_Base_C.ExecuteUbergraph_BP_Character_Enemy_Base
struct ABP_Character_Enemy_Base_C_ExecuteUbergraph_BP_Character_Enemy_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
