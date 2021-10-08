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
//		Name   -> Function BP_Trigger.BP_Trigger_C.CanTrigger
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Trigger_C::CanTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger.BP_Trigger_C.CanTrigger");

	ABP_Trigger_C_CanTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger.BP_Trigger_C.Trigger
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_C::Trigger(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger.BP_Trigger_C.Trigger");

	ABP_Trigger_C_Trigger_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger.BP_Trigger_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger.BP_Trigger_C.ReceiveActorBeginOverlap");

	ABP_Trigger_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger.BP_Trigger_C.OnTrigger
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_C::OnTrigger(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger.BP_Trigger_C.OnTrigger");

	ABP_Trigger_C_OnTrigger_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger.BP_Trigger_C.ExecuteUbergraph_BP_Trigger
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_C::ExecuteUbergraph_BP_Trigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger.BP_Trigger_C.ExecuteUbergraph_BP_Trigger");

	ABP_Trigger_C_ExecuteUbergraph_BP_Trigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
