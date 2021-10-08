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
//		Name   -> Function BP_HookComponent.BP_HookComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_HookComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookComponent.BP_HookComponent_C.ReceiveBeginPlay");

	UBP_HookComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_HookComponent.BP_HookComponent_C.OnHookChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
void UBP_HookComponent_C::OnHookChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookComponent.BP_HookComponent_C.OnHookChanged");

	UBP_HookComponent_C_OnHookChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_HookComponent.BP_HookComponent_C.OnLockHook
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AHookPoint*                                  HookPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HookComponent_C::OnLockHook(class AHookPoint* HookPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookComponent.BP_HookComponent_C.OnLockHook");

	UBP_HookComponent_C_OnLockHook_Params params;
	params.HookPoint = HookPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_HookComponent.BP_HookComponent_C.OnUnlockHook
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AHookPoint*                                  HookPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HookComponent_C::OnUnlockHook(class AHookPoint* HookPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookComponent.BP_HookComponent_C.OnUnlockHook");

	UBP_HookComponent_C_OnUnlockHook_Params params;
	params.HookPoint = HookPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_HookComponent.BP_HookComponent_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HookComponent_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookComponent.BP_HookComponent_C.ReceiveEndPlay");

	UBP_HookComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_HookComponent.BP_HookComponent_C.ExecuteUbergraph_BP_HookComponent
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HookComponent_C::ExecuteUbergraph_BP_HookComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HookComponent.BP_HookComponent_C.ExecuteUbergraph_BP_HookComponent");

	UBP_HookComponent_C_ExecuteUbergraph_BP_HookComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
