// Name: enderlilies, Version: 1.1.3

#include "pch.h"
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
//		Name   -> Function BP_Interactable_Item.BP_Interactable_Item_C.EnsureItemObtained
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Interactable_Item_C::EnsureItemObtained()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Item.BP_Interactable_Item_C.EnsureItemObtained");

	ABP_Interactable_Item_C_EnsureItemObtained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Item.BP_Interactable_Item_C.ConfigureEventPlayer
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Item_C::ConfigureEventPlayer(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Item.BP_Interactable_Item_C.ConfigureEventPlayer");

	ABP_Interactable_Item_C_ConfigureEventPlayer_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Item.BP_Interactable_Item_C.GetInteractionText
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText ABP_Interactable_Item_C::GetInteractionText()
{
	UFunction* fn = UObject::FindFunction("BP_Interactable_Item_C.GetInteractionText");
	//UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Item.BP_Interactable_Item_C.GetInteractionText");

	ABP_Interactable_Item_C_GetInteractionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Item.BP_Interactable_Item_C.OnInteract
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Item_C::OnInteract(class APlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Item.BP_Interactable_Item_C.OnInteract");

	ABP_Interactable_Item_C_OnInteract_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Item.BP_Interactable_Item_C.OnEventFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Item_C::OnEventFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Item.BP_Interactable_Item_C.OnEventFinished");

	ABP_Interactable_Item_C_OnEventFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Item.BP_Interactable_Item_C.OnInteractableAlreadyCleared
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Interactable_Item_C::OnInteractableAlreadyCleared()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Item.BP_Interactable_Item_C.OnInteractableAlreadyCleared");

	ABP_Interactable_Item_C_OnInteractableAlreadyCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Item.BP_Interactable_Item_C.ExecuteUbergraph_BP_Interactable_Item
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Item_C::ExecuteUbergraph_BP_Interactable_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Item.BP_Interactable_Item_C.ExecuteUbergraph_BP_Interactable_Item");

	ABP_Interactable_Item_C_ExecuteUbergraph_BP_Interactable_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
