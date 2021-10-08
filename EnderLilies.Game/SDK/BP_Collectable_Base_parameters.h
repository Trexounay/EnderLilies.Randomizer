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

// Function BP_Collectable_Base.BP_Collectable_Base_C.DidReachTarget
struct ABP_Collectable_Base_C_DidReachTarget_Params
{
	bool                                               bReachedTarget;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Collectable_Base.BP_Collectable_Base_C.OnCollect
struct ABP_Collectable_Base_C_OnCollect_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Collectable_Base.BP_Collectable_Base_C.ReceiveTick
struct ABP_Collectable_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Collectable_Base.BP_Collectable_Base_C.OnReachedTarget
struct ABP_Collectable_Base_C_OnReachedTarget_Params
{
};

// Function BP_Collectable_Base.BP_Collectable_Base_C.OnActivate
struct ABP_Collectable_Base_C_OnActivate_Params
{
};

// Function BP_Collectable_Base.BP_Collectable_Base_C.DeactivateCollectable
struct ABP_Collectable_Base_C_DeactivateCollectable_Params
{
};

// Function BP_Collectable_Base.BP_Collectable_Base_C.OnDeactivate
struct ABP_Collectable_Base_C_OnDeactivate_Params
{
};

// Function BP_Collectable_Base.BP_Collectable_Base_C.ExecuteUbergraph_BP_Collectable_Base
struct ABP_Collectable_Base_C_ExecuteUbergraph_BP_Collectable_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
