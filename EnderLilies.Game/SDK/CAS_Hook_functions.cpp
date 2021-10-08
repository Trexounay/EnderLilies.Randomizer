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
//		Name   -> Function CAS_Hook.CAS_Hook_C.UpdateIKBonesLocation
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCAS_Hook_C::UpdateIKBonesLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Hook.CAS_Hook_C.UpdateIKBonesLocation");

	UCAS_Hook_C_UpdateIKBonesLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Hook.CAS_Hook_C.CanStartCommandAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCAS_Hook_C::CanStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Hook.CAS_Hook_C.CanStartCommandAction");

	UCAS_Hook_C_CanStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Hook.CAS_Hook_C.LaunchCharacterToHook
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCAS_Hook_C::LaunchCharacterToHook()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Hook.CAS_Hook_C.LaunchCharacterToHook");

	UCAS_Hook_C_LaunchCharacterToHook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Hook.CAS_Hook_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCAS_Hook_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Hook.CAS_Hook_C.OnSampleCommandAction");

	UCAS_Hook_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Hook.CAS_Hook_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCAS_Hook_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Hook.CAS_Hook_C.OnStartCommandAction");

	UCAS_Hook_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Hook.CAS_Hook_C.OnChangePawn
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       OldPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       NewPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_Hook_C::OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Hook.CAS_Hook_C.OnChangePawn");

	UCAS_Hook_C_OnChangePawn_Params params;
	params.OldPawnSubject = OldPawnSubject;
	params.NewPawnSubject = NewPawnSubject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Hook.CAS_Hook_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_Hook_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Hook.CAS_Hook_C.OnEndCommandAction");

	UCAS_Hook_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Hook.CAS_Hook_C.ExecuteUbergraph_CAS_Hook
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_Hook_C::ExecuteUbergraph_CAS_Hook(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Hook.CAS_Hook_C.ExecuteUbergraph_CAS_Hook");

	UCAS_Hook_C_ExecuteUbergraph_CAS_Hook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
