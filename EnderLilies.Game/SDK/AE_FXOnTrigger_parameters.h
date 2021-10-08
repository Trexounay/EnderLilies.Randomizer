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

// Function AE_FXOnTrigger.AE_FXOnTrigger_C.GetBone
struct UAE_FXOnTrigger_C_GetBone_Params
{
	class UBaseFXComponent*                            FXComponent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SpineExtensionPlugin_ESpineBone                    Bone;                                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AE_FXOnTrigger.AE_FXOnTrigger_C.ComputeOffset
struct UAE_FXOnTrigger_C_ComputeOffset_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      To;                                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  Offset;                                                    // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
};

// Function AE_FXOnTrigger.AE_FXOnTrigger_C.OnApplyEffect
struct UAE_FXOnTrigger_C_OnApplyEffect_Params
{
	class AActor*                                      From;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      To;                                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitInfos                                   HitInfos;                                                  // 0x0010(0x0120)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
};

// Function AE_FXOnTrigger.AE_FXOnTrigger_C.ExecuteUbergraph_AE_FXOnTrigger
struct UAE_FXOnTrigger_C_ExecuteUbergraph_AE_FXOnTrigger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
