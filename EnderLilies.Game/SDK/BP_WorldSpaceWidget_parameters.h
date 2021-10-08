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

// Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.ForceFinish
struct ABP_WorldSpaceWidget_C_ForceFinish_Params
{
};

// Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.IsFinished
struct ABP_WorldSpaceWidget_C_IsFinished_Params
{
	bool                                               Finished;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.OnWidgetFinished
struct ABP_WorldSpaceWidget_C_OnWidgetFinished_Params
{
};

// Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.InitializeWithInstance
struct ABP_WorldSpaceWidget_C_InitializeWithInstance_Params
{
	class UUserWidget*                                 UserWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnToPoolOnFinish;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.Initialize
struct ABP_WorldSpaceWidget_C_Initialize_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnToPoolOnFinish;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.SetFollowTarget
struct ABP_WorldSpaceWidget_C_SetFollowTarget_Params
{
	class USceneComponent*                             NewFollowTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Offset;                                                    // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSnapToTarget;                                             // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.ExecuteUbergraph_BP_WorldSpaceWidget
struct ABP_WorldSpaceWidget_C_ExecuteUbergraph_BP_WorldSpaceWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
