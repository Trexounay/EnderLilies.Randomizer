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
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.StopSoundEventWhilePressed
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Button_C::StopSoundEventWhilePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.StopSoundEventWhilePressed");

	ABP_Interactable_Button_C_StopSoundEventWhilePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.PlaySoundEventWhilePressed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Interactable_Button_C::PlaySoundEventWhilePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.PlaySoundEventWhilePressed");

	ABP_Interactable_Button_C_PlaySoundEventWhilePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.GetIsPressed
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               IsPressed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Interactable_Button_C::GetIsPressed(bool* IsPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.GetIsPressed");

	ABP_Interactable_Button_C_GetIsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPressed != nullptr)
		*IsPressed = params.IsPressed;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.SetIsPressed
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsPressed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Interactable_Button_C::SetIsPressed(bool IsPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.SetIsPressed");

	ABP_Interactable_Button_C_SetIsPressed_Params params;
	params.IsPressed = IsPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.Release
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Button_C::Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.Release");

	ABP_Interactable_Button_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.Press
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Interactable_Button_C::Press()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.Press");

	ABP_Interactable_Button_C_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.OnIsInteractable
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Interactable_Button_C::OnIsInteractable(class APlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.OnIsInteractable");

	ABP_Interactable_Button_C_OnIsInteractable_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.OnInteract
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Button_C::OnInteract(class APlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.OnInteract");

	ABP_Interactable_Button_C_OnInteract_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.OnInteractableAlreadyCleared
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Interactable_Button_C::OnInteractableAlreadyCleared()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.OnInteractableAlreadyCleared");

	ABP_Interactable_Button_C_OnInteractableAlreadyCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.OnPress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Button_C::OnPress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.OnPress");

	ABP_Interactable_Button_C_OnPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.OnRelease
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Button_C::OnRelease()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.OnRelease");

	ABP_Interactable_Button_C_OnRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Button_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.ReceiveEndPlay");

	ABP_Interactable_Button_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.ExecuteUbergraph_BP_Interactable_Button
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Button_C::ExecuteUbergraph_BP_Interactable_Button(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.ExecuteUbergraph_BP_Interactable_Button");

	ABP_Interactable_Button_C_ExecuteUbergraph_BP_Interactable_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Button.BP_Interactable_Button_C.OnStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ABP_Interactable_Button_C*                   Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Button_C::OnStateChanged__DelegateSignature(class ABP_Interactable_Button_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_Button.BP_Interactable_Button_C.OnStateChanged__DelegateSignature");

	ABP_Interactable_Button_C_OnStateChanged__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
