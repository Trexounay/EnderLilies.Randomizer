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
//		Name   -> Function BP_Trigger_Dialog.BP_Trigger_Dialog_C.OnTrigger
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_Dialog_C::OnTrigger(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger_Dialog.BP_Trigger_Dialog_C.OnTrigger");

	ABP_Trigger_Dialog_C_OnTrigger_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger_Dialog.BP_Trigger_Dialog_C.ExecuteUbergraph_BP_Trigger_Dialog
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_Dialog_C::ExecuteUbergraph_BP_Trigger_Dialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger_Dialog.BP_Trigger_Dialog_C.ExecuteUbergraph_BP_Trigger_Dialog");

	ABP_Trigger_Dialog_C_ExecuteUbergraph_BP_Trigger_Dialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
