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

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.IsPlayerAptitudeUnlocked
struct ABP_Character_Player_Base_C_IsPlayerAptitudeUnlocked_Params
{
	Zenith_EAptitudeType                               Aptitude;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.ShouldTriggerAutoDive
struct ABP_Character_Player_Base_C_ShouldTriggerAutoDive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.GetContactDamage
struct ABP_Character_Player_Base_C_GetContactDamage_Params
{
	class ABP_Character_Enemy_Base_C*                  EnemyCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ContactDamage;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.SetSpineData
struct ABP_Character_Player_Base_C_SetSpineData_Params
{
	struct FFSpineDataGroup                            FSpineDataGroup;                                           // 0x0000(0x0080)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.FindSpineDataForLevel
struct ABP_Character_Player_Base_C_FindSpineDataForLevel_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFSpineDataGroup                            SpindDataGroup;                                            // 0x0008(0x0080)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.RefreshSpineData
struct ABP_Character_Player_Base_C_RefreshSpineData_Params
{
	bool                                               Changed;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.DamageColorCurve__FinishedFunc
struct ABP_Character_Player_Base_C_DamageColorCurve__FinishedFunc_Params
{
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.DamageColorCurve__UpdateFunc
struct ABP_Character_Player_Base_C_DamageColorCurve__UpdateFunc_Params
{
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnFinish_9EDCDC9446133E62BE79C0B3D03533F1
struct ABP_Character_Player_Base_C_OnFinish_9EDCDC9446133E62BE79C0B3D03533F1_Params
{
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Knockback_K2Node_ComponentBoundEvent_2_KnockbackEvent__DelegateSignature
struct ABP_Character_Player_Base_C_BndEvt__Knockback_K2Node_ComponentBoundEvent_2_KnockbackEvent__DelegateSignature_Params
{
	struct FKnockbackRuntimeData                       KnockbackRuntimeData;                                      // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature
struct ABP_Character_Player_Base_C_BndEvt__Knockback_K2Node_ComponentBoundEvent_0_KnockbackEvent__DelegateSignature_Params
{
	struct FKnockbackRuntimeData                       KnockbackRuntimeData;                                      // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__AutoClimb_K2Node_ComponentBoundEvent_3_AutoClimbEvent__DelegateSignature
struct ABP_Character_Player_Base_C_BndEvt__AutoClimb_K2Node_ComponentBoundEvent_3_AutoClimbEvent__DelegateSignature_Params
{
	Zenith_EAutoClimbType                              ClimbType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DirectlyAbove;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetLocation;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnSubmerged
struct ABP_Character_Player_Base_C_OnSubmerged_Params
{
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__Collision_K2Node_ComponentBoundEvent_5_CollisionEvent__DelegateSignature
struct ABP_Character_Player_Base_C_BndEvt__Collision_K2Node_ComponentBoundEvent_5_CollisionEvent__DelegateSignature_Params
{
	class AActor*                                      OverlapActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.ReceiveBeginPlay
struct ABP_Character_Player_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.BndEvt__HPComponent_K2Node_ComponentBoundEvent_1_HPDamageEvent__DelegateSignature
struct ABP_Character_Player_Base_C_BndEvt__HPComponent_K2Node_ComponentBoundEvent_1_HPDamageEvent__DelegateSignature_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.K2_OnMovementModeChanged
struct ABP_Character_Player_Base_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PrevCustomMode;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NewCustomMode;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnJustGuard
struct ABP_Character_Player_Base_C_OnJustGuard_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Invoker;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWillForwardEventToAttacker;                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.OnEventStop
struct ABP_Character_Player_Base_C_OnEventStop_Params
{
};

// Function BP_Character_Player_Base.BP_Character_Player_Base_C.ExecuteUbergraph_BP_Character_Player_Base
struct ABP_Character_Player_Base_C_ExecuteUbergraph_BP_Character_Player_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
