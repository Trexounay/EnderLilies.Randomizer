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
//		Name   -> Function TriggerCondition_HasUnlockedAnyMovieRecollection.TriggerCondition_HasUnlockedAnyMovieRecollection_C.CheckCondition
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTriggerCondition_HasUnlockedAnyMovieRecollection_C::CheckCondition(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TriggerCondition_HasUnlockedAnyMovieRecollection.TriggerCondition_HasUnlockedAnyMovieRecollection_C.CheckCondition");

	UTriggerCondition_HasUnlockedAnyMovieRecollection_C_CheckCondition_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
