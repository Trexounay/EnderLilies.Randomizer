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
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.IsInValidMovementMode
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCAS_PileAttack_C::IsInValidMovementMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.IsInValidMovementMode");

	UCAS_PileAttack_C_IsInValidMovementMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.RemoveChargeStates
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UCAS_PileAttack_C::RemoveChargeStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.RemoveChargeStates");

	UCAS_PileAttack_C_RemoveChargeStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.AddChargeStates
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCAS_PileAttack_C::AddChargeStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.AddChargeStates");

	UCAS_PileAttack_C_AddChargeStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.GetGroundCommandAction
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UCommandSettingsData*                        CommandSettings                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_PileAttack_C::GetGroundCommandAction(class UCommandSettingsData** CommandSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.GetGroundCommandAction");

	UCAS_PileAttack_C_GetGroundCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CommandSettings != nullptr)
		*CommandSettings = params.CommandSettings;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.SampleChargeLevel
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCAS_PileAttack_C::SampleChargeLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.SampleChargeLevel");

	UCAS_PileAttack_C_SampleChargeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.RemoveChargePhaseStates
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UCAS_PileAttack_C::RemoveChargePhaseStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.RemoveChargePhaseStates");

	UCAS_PileAttack_C_RemoveChargePhaseStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.AddChargePhaseStates
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCAS_PileAttack_C::AddChargePhaseStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.AddChargePhaseStates");

	UCAS_PileAttack_C_AddChargePhaseStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.SampleDivePhase
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               PhaseCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCAS_PileAttack_C::SampleDivePhase(float DeltaTime, bool* PhaseCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.SampleDivePhase");

	UCAS_PileAttack_C_SampleDivePhase_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PhaseCompleted != nullptr)
		*PhaseCompleted = params.PhaseCompleted;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.SampleChargePhase
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               PhaseCompleted                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCAS_PileAttack_C::SampleChargePhase(float DeltaTime, bool* PhaseCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.SampleChargePhase");

	UCAS_PileAttack_C_SampleChargePhase_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PhaseCompleted != nullptr)
		*PhaseCompleted = params.PhaseCompleted;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCAS_PileAttack_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.OnSampleCommandAction");

	UCAS_PileAttack_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.CanStartCommandAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCAS_PileAttack_C::CanStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.CanStartCommandAction");

	UCAS_PileAttack_C_CanStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.IsOverridenByActionType
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Zenith_ECommandInputTypes                          commandType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCAS_PileAttack_C::IsOverridenByActionType(Zenith_ECommandInputTypes commandType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.IsOverridenByActionType");

	UCAS_PileAttack_C_IsOverridenByActionType_Params params;
	params.commandType = commandType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCAS_PileAttack_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.OnStartCommandAction");

	UCAS_PileAttack_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_PileAttack_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.OnEndCommandAction");

	UCAS_PileAttack_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.TryStartDivePhase
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCAS_PileAttack_C::TryStartDivePhase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.TryStartDivePhase");

	UCAS_PileAttack_C_TryStartDivePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.TryEndDivePhase
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCAS_PileAttack_C::TryEndDivePhase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.TryEndDivePhase");

	UCAS_PileAttack_C_TryEndDivePhase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.OnChargeLevelChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCAS_PileAttack_C::OnChargeLevelChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.OnChargeLevelChange");

	UCAS_PileAttack_C_OnChargeLevelChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_PileAttack.CAS_PileAttack_C.ExecuteUbergraph_CAS_PileAttack
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_PileAttack_C::ExecuteUbergraph_CAS_PileAttack(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_PileAttack.CAS_PileAttack_C.ExecuteUbergraph_CAS_PileAttack");

	UCAS_PileAttack_C_ExecuteUbergraph_CAS_PileAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
