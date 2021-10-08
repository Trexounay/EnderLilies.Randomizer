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
//		Name   -> Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.CheckBuoyancy
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MovementPropertyComponent_C::CheckBuoyancy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.CheckBuoyancy");

	UBP_MovementPropertyComponent_C_CheckBuoyancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.CheckBrakingDeceleration
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MovementPropertyComponent_C::CheckBrakingDeceleration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.CheckBrakingDeceleration");

	UBP_MovementPropertyComponent_C_CheckBrakingDeceleration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.CheckGravity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_MovementPropertyComponent_C::CheckGravity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.CheckGravity");

	UBP_MovementPropertyComponent_C_CheckGravity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_MovementPropertyComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.ReceiveBeginPlay");

	UBP_MovementPropertyComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.OnStateAdded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MovementPropertyComponent_C::OnStateAdded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.OnStateAdded");

	UBP_MovementPropertyComponent_C_OnStateAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.OnStateRemoved
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_MovementPropertyComponent_C::OnStateRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.OnStateRemoved");

	UBP_MovementPropertyComponent_C_OnStateRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.ExecuteUbergraph_BP_MovementPropertyComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_MovementPropertyComponent_C::ExecuteUbergraph_BP_MovementPropertyComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MovementPropertyComponent.BP_MovementPropertyComponent_C.ExecuteUbergraph_BP_MovementPropertyComponent");

	UBP_MovementPropertyComponent_C_ExecuteUbergraph_BP_MovementPropertyComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
