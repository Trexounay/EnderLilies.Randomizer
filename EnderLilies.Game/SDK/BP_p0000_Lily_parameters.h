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

// Function BP_p0000_Lily.BP_p0000_Lily_C.SetSpineData
struct ABP_p0000_Lily_C_SetSpineData_Params
{
	struct FFSpineDataGroup                            FSpineDataGroup;                                           // 0x0000(0x0080)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function BP_p0000_Lily.BP_p0000_Lily_C.GetCameraFocusTarget
struct ABP_p0000_Lily_C_GetCameraFocusTarget_Params
{
	class USceneComponent*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_p0000_Lily.BP_p0000_Lily_C.ReceiveBeginPlay
struct ABP_p0000_Lily_C_ReceiveBeginPlay_Params
{
};

// Function BP_p0000_Lily.BP_p0000_Lily_C.K2_OnStartCrouch
struct ABP_p0000_Lily_C_K2_OnStartCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_p0000_Lily.BP_p0000_Lily_C.K2_OnEndCrouch
struct ABP_p0000_Lily_C_K2_OnEndCrouch_Params
{
	float                                              HalfHeightAdjust;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScaledHalfHeightAdjust;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_p0000_Lily.BP_p0000_Lily_C.ExecuteUbergraph_BP_p0000_Lily
struct ABP_p0000_Lily_C_ExecuteUbergraph_BP_p0000_Lily_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
