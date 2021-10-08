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

// Function BP_Interactable_Button_TriggerElevator.BP_Interactable_Button_TriggerElevator_C.SetElevator
struct ABP_Interactable_Button_TriggerElevator_C_SetElevator_Params
{
	class ABP_Elevator_C*                              Elevator;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Button_TriggerElevator.BP_Interactable_Button_TriggerElevator_C.OnIsInteractable
struct ABP_Interactable_Button_TriggerElevator_C_OnIsInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
