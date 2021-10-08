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
//		Name   -> Function WBP_HookTarget.WBP_HookTarget_C.AttachToHookPoint
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AHookPoint*                                  HookPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HookTarget_C::AttachToHookPoint(class AHookPoint* HookPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HookTarget.WBP_HookTarget_C.AttachToHookPoint");

	UWBP_HookTarget_C_AttachToHookPoint_Params params;
	params.HookPoint = HookPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HookTarget.WBP_HookTarget_C.ClearTarget
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HookTarget_C::ClearTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HookTarget.WBP_HookTarget_C.ClearTarget");

	UWBP_HookTarget_C_ClearTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HookTarget.WBP_HookTarget_C.PlayHookLock
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HookTarget_C::PlayHookLock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HookTarget.WBP_HookTarget_C.PlayHookLock");

	UWBP_HookTarget_C_PlayHookLock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HookTarget.WBP_HookTarget_C.PlayHookUnlock
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HookTarget_C::PlayHookUnlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HookTarget.WBP_HookTarget_C.PlayHookUnlock");

	UWBP_HookTarget_C_PlayHookUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HookTarget.WBP_HookTarget_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_HookTarget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HookTarget.WBP_HookTarget_C.Construct");

	UWBP_HookTarget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HookTarget.WBP_HookTarget_C.ExecuteUbergraph_WBP_HookTarget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HookTarget_C::ExecuteUbergraph_WBP_HookTarget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HookTarget.WBP_HookTarget_C.ExecuteUbergraph_WBP_HookTarget");

	UWBP_HookTarget_C_ExecuteUbergraph_WBP_HookTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
