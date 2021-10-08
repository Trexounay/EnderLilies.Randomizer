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
//		Name   -> Function BP_ControllerChecker.BP_ControllerChecker_C.CheckController
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_ControllerChecker_C::CheckController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ControllerChecker.BP_ControllerChecker_C.CheckController");

	UBP_ControllerChecker_C_CheckController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ControllerChecker.BP_ControllerChecker_C.OnReady_875B41654187463385316FB7395B8A76
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ControllerChecker_C::OnReady_875B41654187463385316FB7395B8A76()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ControllerChecker.BP_ControllerChecker_C.OnReady_875B41654187463385316FB7395B8A76");

	UBP_ControllerChecker_C_OnReady_875B41654187463385316FB7395B8A76_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ControllerChecker.BP_ControllerChecker_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_ControllerChecker_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ControllerChecker.BP_ControllerChecker_C.ReceiveBeginPlay");

	UBP_ControllerChecker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ControllerChecker.BP_ControllerChecker_C.OnMainControllerDisconnected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ControllerChecker_C::OnMainControllerDisconnected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ControllerChecker.BP_ControllerChecker_C.OnMainControllerDisconnected");

	UBP_ControllerChecker_C_OnMainControllerDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ControllerChecker.BP_ControllerChecker_C.OnClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_ControllerChecker_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ControllerChecker.BP_ControllerChecker_C.OnClose");

	UBP_ControllerChecker_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ControllerChecker.BP_ControllerChecker_C.ExecuteUbergraph_BP_ControllerChecker
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ControllerChecker_C::ExecuteUbergraph_BP_ControllerChecker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ControllerChecker.BP_ControllerChecker_C.ExecuteUbergraph_BP_ControllerChecker");

	UBP_ControllerChecker_C_ExecuteUbergraph_BP_ControllerChecker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
