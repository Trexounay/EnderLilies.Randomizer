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
//		Name   -> Function CAS_Dash.CAS_Dash_C.SampleDashCharge
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCAS_Dash_C::SampleDashCharge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Dash.CAS_Dash_C.SampleDashCharge");

	UCAS_Dash_C_SampleDashCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Dash.CAS_Dash_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCAS_Dash_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Dash.CAS_Dash_C.OnSampleCommandAction");

	UCAS_Dash_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Dash.CAS_Dash_C.OnChargeLevelUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCAS_Dash_C::OnChargeLevelUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Dash.CAS_Dash_C.OnChargeLevelUp");

	UCAS_Dash_C_OnChargeLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Dash.CAS_Dash_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_Dash_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Dash.CAS_Dash_C.OnEndCommandAction");

	UCAS_Dash_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Dash.CAS_Dash_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCAS_Dash_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Dash.CAS_Dash_C.OnStartCommandAction");

	UCAS_Dash_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_Dash.CAS_Dash_C.ExecuteUbergraph_CAS_Dash
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_Dash_C::ExecuteUbergraph_CAS_Dash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_Dash.CAS_Dash_C.ExecuteUbergraph_CAS_Dash");

	UCAS_Dash_C_ExecuteUbergraph_CAS_Dash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
