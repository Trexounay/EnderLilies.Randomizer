// Name: enderlilies, Version: 1.1.3_chest

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
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.SetSpineEnabled
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Interactable_Treasure_C::SetSpineEnabled(bool bEnabled)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.SetSpineEnabled");

	ABP_Interactable_Treasure_C_SetSpineEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.ConfigureEventPlayer
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Treasure_C::ConfigureEventPlayer(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.ConfigureEventPlayer");

	ABP_Interactable_Treasure_C_ConfigureEventPlayer_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnIsInteractable
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Interactable_Treasure_C::OnIsInteractable(class APlayerController* Controller)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnIsInteractable");

	ABP_Interactable_Treasure_C_OnIsInteractable_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Treasure_C::UserConstructionScript()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.UserConstructionScript");

	ABP_Interactable_Treasure_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnFinish_F1BF530347E388EF6B03D09FF02ADE4B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Treasure_C::OnFinish_F1BF530347E388EF6B03D09FF02ADE4B()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnFinish_F1BF530347E388EF6B03D09FF02ADE4B");

	ABP_Interactable_Treasure_C_OnFinish_F1BF530347E388EF6B03D09FF02ADE4B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnFinish_30F3864E4AA553E1799A2B8BC4D1B9C4
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Interactable_Treasure_C::OnFinish_30F3864E4AA553E1799A2B8BC4D1B9C4()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnFinish_30F3864E4AA553E1799A2B8BC4D1B9C4");

	ABP_Interactable_Treasure_C_OnFinish_30F3864E4AA553E1799A2B8BC4D1B9C4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnCloseToOpenAnimEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTrackEntry*                                 Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Treasure_C::OnCloseToOpenAnimEnd(class UTrackEntry* Entry)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnCloseToOpenAnimEnd");

	ABP_Interactable_Treasure_C_OnCloseToOpenAnimEnd_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_0_ClearableEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bAlreadyCleared                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Interactable_Treasure_C::BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_0_ClearableEvent__DelegateSignature(bool bAlreadyCleared)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_0_ClearableEvent__DelegateSignature");

	ABP_Interactable_Treasure_C_BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_0_ClearableEvent__DelegateSignature_Params params;
	params.bAlreadyCleared = bAlreadyCleared;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnOpenEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTrackEntry*                                 Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Treasure_C::OnOpenEnd(class UTrackEntry* Entry)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnOpenEnd");

	ABP_Interactable_Treasure_C_OnOpenEnd_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnInteract
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Treasure_C::OnInteract(class APlayerController* Controller)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnInteract");

	ABP_Interactable_Treasure_C_OnInteract_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnCloseEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTrackEntry*                                 Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Treasure_C::OnCloseEnd(class UTrackEntry* Entry)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.OnCloseEnd");

	ABP_Interactable_Treasure_C_OnCloseEnd_Params params;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.ExecuteUbergraph_BP_Interactable_Treasure
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Interactable_Treasure_C::ExecuteUbergraph_BP_Interactable_Treasure(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Interactable_Treasure.BP_Interactable_Treasure_C.ExecuteUbergraph_BP_Interactable_Treasure");

	ABP_Interactable_Treasure_C_ExecuteUbergraph_BP_Interactable_Treasure_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
