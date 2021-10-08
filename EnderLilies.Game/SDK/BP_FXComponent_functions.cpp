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
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.GetBreathFX
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UParticleSystem*                             OverrideBreathFX                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FXComponent_C::GetBreathFX(class UParticleSystem** OverrideBreathFX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.GetBreathFX");

	UBP_FXComponent_C_GetBreathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OverrideBreathFX != nullptr)
		*OverrideBreathFX = params.OverrideBreathFX;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.StopBreathFX
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UBP_FXComponent_C::StopBreathFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.StopBreathFX");

	UBP_FXComponent_C_StopBreathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.PlayBreathFX
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_FXComponent_C::PlayBreathFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.PlayBreathFX");

	UBP_FXComponent_C_PlayBreathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.ClearOverrideBreathFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_FXComponent_C::ClearOverrideBreathFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.ClearOverrideBreathFX");

	UBP_FXComponent_C_ClearOverrideBreathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.SetOverrideBreathFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UParticleSystem*                             OverrideBreathFX                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FXComponent_C::SetOverrideBreathFX(class UParticleSystem* OverrideBreathFX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.SetOverrideBreathFX");

	UBP_FXComponent_C_SetOverrideBreathFX_Params params;
	params.OverrideBreathFX = OverrideBreathFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.TriggerFindEnemyFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FXComponent_C::TriggerFindEnemyFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.TriggerFindEnemyFX");

	UBP_FXComponent_C_TriggerFindEnemyFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.TriggerJustGuardFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FXComponent_C::TriggerJustGuardFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.TriggerJustGuardFX");

	UBP_FXComponent_C_TriggerJustGuardFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.TriggerLandingFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  FloorHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void UBP_FXComponent_C::TriggerLandingFX(const struct FHitResult& FloorHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.TriggerLandingFX");

	UBP_FXComponent_C_TriggerLandingFX_Params params;
	params.FloorHit = FloorHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.TriggerContactDamageFX
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_FXComponent_C::TriggerContactDamageFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.TriggerContactDamageFX");

	UBP_FXComponent_C_TriggerContactDamageFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_FXComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.ReceiveBeginPlay");

	UBP_FXComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FXComponent.BP_FXComponent_C.ExecuteUbergraph_BP_FXComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_FXComponent_C::ExecuteUbergraph_BP_FXComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FXComponent.BP_FXComponent_C.ExecuteUbergraph_BP_FXComponent");

	UBP_FXComponent_C_ExecuteUbergraph_BP_FXComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
