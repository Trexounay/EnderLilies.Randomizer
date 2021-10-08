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

// Function WBP_PressInteract.WBP_PressInteract_C.UpdateCanvasVisibility
struct UWBP_PressInteract_C_UpdateCanvasVisibility_Params
{
};

// Function WBP_PressInteract.WBP_PressInteract_C.Construct
struct UWBP_PressInteract_C_Construct_Params
{
};

// Function WBP_PressInteract.WBP_PressInteract_C.SetInteractionText
struct UWBP_PressInteract_C_SetInteractionText_Params
{
	struct FText                                       InteractionText;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	Zenith_EInteractableInputType                      InteractableDirInput;                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PressInteract.WBP_PressInteract_C.ShowInteractableUI
struct UWBP_PressInteract_C_ShowInteractableUI_Params
{
};

// Function WBP_PressInteract.WBP_PressInteract_C.HideInteractableUI
struct UWBP_PressInteract_C_HideInteractableUI_Params
{
};

// Function WBP_PressInteract.WBP_PressInteract_C.ExecuteUbergraph_WBP_PressInteract
struct UWBP_PressInteract_C_ExecuteUbergraph_WBP_PressInteract_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
