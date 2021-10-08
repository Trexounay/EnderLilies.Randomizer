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

// Function AIC_Base.AIC_Base_C.IncrementTargetFoundCount
struct AAIC_Base_C_IncrementTargetFoundCount_Params
{
};

// Function AIC_Base.AIC_Base_C.RemoveUI
struct AAIC_Base_C_RemoveUI_Params
{
};

// Function AIC_Base.AIC_Base_C.InitializeUI
struct AAIC_Base_C_InitializeUI_Params
{
};

// Function AIC_Base.AIC_Base_C.OnActivate
struct AAIC_Base_C_OnActivate_Params
{
};

// Function AIC_Base.AIC_Base_C.OnChangeTarget
struct AAIC_Base_C_OnChangeTarget_Params
{
	class AActor*                                      NewTarget;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Base.AIC_Base_C.ReceiveEndPlay
struct AAIC_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Base.AIC_Base_C.OnPawnSetPaused
struct AAIC_Base_C_OnPawnSetPaused_Params
{
	bool                                               paused;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AIC_Base.AIC_Base_C.ReceivePossess
struct AAIC_Base_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Base.AIC_Base_C.ExecuteUbergraph_AIC_Base
struct AAIC_Base_C_ExecuteUbergraph_AIC_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
