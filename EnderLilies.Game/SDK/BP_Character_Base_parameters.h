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

// Function BP_Character_Base.BP_Character_Base_C.SimulateLanding
struct ABP_Character_Base_C_SimulateLanding_Params
{
	float                                              Size;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Strength;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Base.BP_Character_Base_C.CanPlayLandingEvents
struct ABP_Character_Base_C_CanPlayLandingEvents_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Base.BP_Character_Base_C.CanBePossessed
struct ABP_Character_Base_C_CanBePossessed_Params
{
	bool                                               CanBePossessed;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotTimeline__FinishedFunc
struct ABP_Character_Base_C_ResetVisualPivotTimeline__FinishedFunc_Params
{
};

// Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotTimeline__UpdateFunc
struct ABP_Character_Base_C_ResetVisualPivotTimeline__UpdateFunc_Params
{
};

// Function BP_Character_Base.BP_Character_Base_C.OnJustGuard
struct ABP_Character_Base_C_OnJustGuard_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Invoker;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWillForwardEventToAttacker;                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Base.BP_Character_Base_C.OnLanded
struct ABP_Character_Base_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Character_Base.BP_Character_Base_C.ResetVisualPivotLocation
struct ABP_Character_Base_C_ResetVisualPivotLocation_Params
{
	float                                              BlendTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Base.BP_Character_Base_C.BndEvt__BP_Character_Base_Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature
struct ABP_Character_Base_C_BndEvt__BP_Character_Base_Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature_Params
{
	struct FKnockbackRuntimeData                       KnockbackRuntimeData;                                      // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character_Base.BP_Character_Base_C.ReceiveUnpossessed
struct ABP_Character_Base_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Base.BP_Character_Base_C.K2_OnMovementModeChanged
struct ABP_Character_Base_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PrevCustomMode;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NewCustomMode;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Base.BP_Character_Base_C.OnGotJustGuarded
struct ABP_Character_Base_C_OnGotJustGuarded_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Base.BP_Character_Base_C.ExecuteUbergraph_BP_Character_Base
struct ABP_Character_Base_C_ExecuteUbergraph_BP_Character_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
