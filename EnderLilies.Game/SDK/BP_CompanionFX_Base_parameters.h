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

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ResetAndUnbindCommandAction
struct ABP_CompanionFX_Base_C_ResetAndUnbindCommandAction_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.RefreshCommandActionCache
struct ABP_CompanionFX_Base_C_RefreshCommandActionCache_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.TeleportToAssociatedLocation
struct ABP_CompanionFX_Base_C_TeleportToAssociatedLocation_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.TriggerWorldSpaceUI
struct ABP_CompanionFX_Base_C_TriggerWorldSpaceUI_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.Set FXVisibility
struct ABP_CompanionFX_Base_C_Set_FXVisibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetDesiredUIOffset
struct ABP_CompanionFX_Base_C_GetDesiredUIOffset_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetDesiredFXColor
struct ABP_CompanionFX_Base_C_GetDesiredFXColor_Params
{
	struct FLinearColor                                DesiredColor;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetDissolveValue
struct ABP_CompanionFX_Base_C_SetDissolveValue_Params
{
	float                                              DissolveValue;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetIdleAnimationName
struct ABP_CompanionFX_Base_C_GetIdleAnimationName_Params
{
	struct FString                                     IdleAnimationName;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ClearIdleAnimationOverride
struct ABP_CompanionFX_Base_C_ClearIdleAnimationOverride_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetIdleAnimationOverride
struct ABP_CompanionFX_Base_C_SetIdleAnimationOverride_Params
{
	struct FString                                     IdleAnimationOverrideName;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeIn__FinishedFunc
struct ABP_CompanionFX_Base_C_FadeIn__FinishedFunc_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeIn__UpdateFunc
struct ABP_CompanionFX_Base_C_FadeIn__UpdateFunc_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeOut__FinishedFunc
struct ABP_CompanionFX_Base_C_FadeOut__FinishedFunc_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeOut__UpdateFunc
struct ABP_CompanionFX_Base_C_FadeOut__UpdateFunc_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnShowSpine
struct ABP_CompanionFX_Base_C_OnShowSpine_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnHideSpine
struct ABP_CompanionFX_Base_C_OnHideSpine_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetMeshComponentsHiddenInGame
struct ABP_CompanionFX_Base_C_OnSetMeshComponentsHiddenInGame_Params
{
	bool                                               bHiddenInGame;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetPoseFadePlaneAlpha
struct ABP_CompanionFX_Base_C_SetPoseFadePlaneAlpha_Params
{
	float                                              Alpha;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetTranslucencyPriority
struct ABP_CompanionFX_Base_C_OnSetTranslucencyPriority_Params
{
	int                                                Priority;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnActivate
struct ABP_CompanionFX_Base_C_OnActivate_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnDeactivate
struct ABP_CompanionFX_Base_C_OnDeactivate_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveEndPlay
struct ABP_CompanionFX_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveDestroyed
struct ABP_CompanionFX_Base_C_ReceiveDestroyed_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveBeginPlay
struct ABP_CompanionFX_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnEventStop
struct ABP_CompanionFX_Base_C_OnEventStop_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnAssociatedCommandStart
struct ABP_CompanionFX_Base_C_OnAssociatedCommandStart_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveTick
struct ABP_CompanionFX_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetAssociatedSpiritData
struct ABP_CompanionFX_Base_C_OnSetAssociatedSpiritData_Params
{
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnLeaderPawnChanged
struct ABP_CompanionFX_Base_C_OnLeaderPawnChanged_Params
{
	class APawn*                                       NewLeaderPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ExecuteUbergraph_BP_CompanionFX_Base
struct ABP_CompanionFX_Base_C_ExecuteUbergraph_BP_CompanionFX_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
