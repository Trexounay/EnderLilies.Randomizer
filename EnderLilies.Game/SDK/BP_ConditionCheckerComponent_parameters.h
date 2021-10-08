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

// Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.BuildAndCheckConditions
struct UBP_ConditionCheckerComponent_C_BuildAndCheckConditions_Params
{
	TArray<class UClass*>                              Array;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class APlayerController*                           PlayerController;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EConditionOperatorType_EConditionOperatorType> Operator;                                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Passed;                                                    // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.CheckConditions
struct UBP_ConditionCheckerComponent_C_CheckConditions_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Passed;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.BuildConditions
struct UBP_ConditionCheckerComponent_C_BuildConditions_Params
{
	TArray<class UClass*>                              Array;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
