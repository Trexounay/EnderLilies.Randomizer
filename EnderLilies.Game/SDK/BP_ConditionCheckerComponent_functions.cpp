// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.BuildAndCheckConditions
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<EConditionOperatorType_EConditionOperatorType> Operator                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Passed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ConditionCheckerComponent_C::BuildAndCheckConditions(TArray<class UClass*>* Array, class APlayerController* PlayerController, TEnumAsByte<EConditionOperatorType_EConditionOperatorType> Operator, bool* Passed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.BuildAndCheckConditions");

	UBP_ConditionCheckerComponent_C_BuildAndCheckConditions_Params params;
	params.PlayerController = PlayerController;
	params.Operator = Operator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Passed != nullptr)
		*Passed = params.Passed;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.CheckConditions
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Passed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_ConditionCheckerComponent_C::CheckConditions(class APlayerController* PlayerController, bool* Passed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.CheckConditions");

	UBP_ConditionCheckerComponent_C_CheckConditions_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Passed != nullptr)
		*Passed = params.Passed;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.BuildConditions
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBP_ConditionCheckerComponent_C::BuildConditions(TArray<class UClass*>* Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C.BuildConditions");

	UBP_ConditionCheckerComponent_C_BuildConditions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
