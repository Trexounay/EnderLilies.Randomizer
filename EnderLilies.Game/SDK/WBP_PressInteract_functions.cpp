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
//		Name   -> Function WBP_PressInteract.WBP_PressInteract_C.UpdateCanvasVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PressInteract_C::UpdateCanvasVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PressInteract.WBP_PressInteract_C.UpdateCanvasVisibility");

	UWBP_PressInteract_C_UpdateCanvasVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PressInteract.WBP_PressInteract_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PressInteract_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PressInteract.WBP_PressInteract_C.Construct");

	UWBP_PressInteract_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PressInteract.WBP_PressInteract_C.SetInteractionText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InteractionText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		Zenith_EInteractableInputType                      InteractableDirInput                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PressInteract_C::SetInteractionText(const struct FText& InteractionText, Zenith_EInteractableInputType InteractableDirInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PressInteract.WBP_PressInteract_C.SetInteractionText");

	UWBP_PressInteract_C_SetInteractionText_Params params;
	params.InteractionText = InteractionText;
	params.InteractableDirInput = InteractableDirInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PressInteract.WBP_PressInteract_C.ShowInteractableUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PressInteract_C::ShowInteractableUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PressInteract.WBP_PressInteract_C.ShowInteractableUI");

	UWBP_PressInteract_C_ShowInteractableUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PressInteract.WBP_PressInteract_C.HideInteractableUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PressInteract_C::HideInteractableUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PressInteract.WBP_PressInteract_C.HideInteractableUI");

	UWBP_PressInteract_C_HideInteractableUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PressInteract.WBP_PressInteract_C.ExecuteUbergraph_WBP_PressInteract
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PressInteract_C::ExecuteUbergraph_WBP_PressInteract(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PressInteract.WBP_PressInteract_C.ExecuteUbergraph_WBP_PressInteract");

	UWBP_PressInteract_C_ExecuteUbergraph_WBP_PressInteract_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
