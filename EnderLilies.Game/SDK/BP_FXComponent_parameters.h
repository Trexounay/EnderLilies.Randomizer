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

// Function BP_FXComponent.BP_FXComponent_C.GetBreathFX
struct UBP_FXComponent_C_GetBreathFX_Params
{
	class UParticleSystem*                             OverrideBreathFX;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FXComponent.BP_FXComponent_C.StopBreathFX
struct UBP_FXComponent_C_StopBreathFX_Params
{
};

// Function BP_FXComponent.BP_FXComponent_C.PlayBreathFX
struct UBP_FXComponent_C_PlayBreathFX_Params
{
};

// Function BP_FXComponent.BP_FXComponent_C.ClearOverrideBreathFX
struct UBP_FXComponent_C_ClearOverrideBreathFX_Params
{
};

// Function BP_FXComponent.BP_FXComponent_C.SetOverrideBreathFX
struct UBP_FXComponent_C_SetOverrideBreathFX_Params
{
	class UParticleSystem*                             OverrideBreathFX;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FXComponent.BP_FXComponent_C.TriggerFindEnemyFX
struct UBP_FXComponent_C_TriggerFindEnemyFX_Params
{
};

// Function BP_FXComponent.BP_FXComponent_C.TriggerJustGuardFX
struct UBP_FXComponent_C_TriggerJustGuardFX_Params
{
};

// Function BP_FXComponent.BP_FXComponent_C.TriggerLandingFX
struct UBP_FXComponent_C_TriggerLandingFX_Params
{
	struct FHitResult                                  FloorHit;                                                  // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_FXComponent.BP_FXComponent_C.TriggerContactDamageFX
struct UBP_FXComponent_C_TriggerContactDamageFX_Params
{
};

// Function BP_FXComponent.BP_FXComponent_C.ReceiveBeginPlay
struct UBP_FXComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_FXComponent.BP_FXComponent_C.ExecuteUbergraph_BP_FXComponent
struct UBP_FXComponent_C_ExecuteUbergraph_BP_FXComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
