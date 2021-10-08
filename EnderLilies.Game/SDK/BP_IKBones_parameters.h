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

// Function BP_IKBones.BP_IKBones_C.RemoveFinishedBlends
struct UBP_IKBones_C_RemoveFinishedBlends_Params
{
};

// Function BP_IKBones.BP_IKBones_C.UpdateBlends
struct UBP_IKBones_C_UpdateBlends_Params
{
	float                                              DelatTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_IKBones.BP_IKBones_C.ResetIKBoneByTag
struct UBP_IKBones_C_ResetIKBoneByTag_Params
{
	struct FName                                       Tag;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_IKBones.BP_IKBones_C.GetIKBoneByTag
struct UBP_IKBones_C_GetIKBoneByTag_Params
{
	struct FName                                       Tag;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             IKBone;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_IKBones.BP_IKBones_C.ReceiveTick
struct UBP_IKBones_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_IKBones.BP_IKBones_C.ExecuteUbergraph_BP_IKBones
struct UBP_IKBones_C_ExecuteUbergraph_BP_IKBones_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
