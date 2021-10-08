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
//		Name   -> Function WBPI_Interactable.WBPI_Interactable_C.SetInteractionText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InteractionText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		Zenith_EInteractableInputType                      InteractableDirInput                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBPI_Interactable_C::SetInteractionText(const struct FText& InteractionText, Zenith_EInteractableInputType InteractableDirInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBPI_Interactable.WBPI_Interactable_C.SetInteractionText");

	UWBPI_Interactable_C_SetInteractionText_Params params;
	params.InteractionText = InteractionText;
	params.InteractableDirInput = InteractableDirInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBPI_Interactable.WBPI_Interactable_C.HideInteractableUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBPI_Interactable_C::HideInteractableUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBPI_Interactable.WBPI_Interactable_C.HideInteractableUI");

	UWBPI_Interactable_C_HideInteractableUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBPI_Interactable.WBPI_Interactable_C.ShowInteractableUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBPI_Interactable_C::ShowInteractableUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBPI_Interactable.WBPI_Interactable_C.ShowInteractableUI");

	UWBPI_Interactable_C_ShowInteractableUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
