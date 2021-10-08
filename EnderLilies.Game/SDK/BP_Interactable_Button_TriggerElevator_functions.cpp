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
//		Name   -> Function BP_Interactable_Button_TriggerElevator.BP_Interactable_Button_TriggerElevator_C.SetElevator
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_Elevator_C*                              Elevator                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Button_TriggerElevator_C::SetElevator(class ABP_Elevator_C* Elevator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button_TriggerElevator.BP_Interactable_Button_TriggerElevator_C.SetElevator");

	ABP_Interactable_Button_TriggerElevator_C_SetElevator_Params params;
	params.Elevator = Elevator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button_TriggerElevator.BP_Interactable_Button_TriggerElevator_C.OnIsInteractable
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Interactable_Button_TriggerElevator_C::OnIsInteractable(class APlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button_TriggerElevator.BP_Interactable_Button_TriggerElevator_C.OnIsInteractable");

	ABP_Interactable_Button_TriggerElevator_C_OnIsInteractable_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
