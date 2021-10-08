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
//		Name   -> Function CAS_WallGrab.CAS_WallGrab_C.CheckSummonSetSwitch
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCAS_WallGrab_C::CheckSummonSetSwitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_WallGrab.CAS_WallGrab_C.CheckSummonSetSwitch");

	UCAS_WallGrab_C_CheckSummonSetSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_WallGrab.CAS_WallGrab_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCAS_WallGrab_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_WallGrab.CAS_WallGrab_C.OnSampleCommandAction");

	UCAS_WallGrab_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_WallGrab.CAS_WallGrab_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_WallGrab_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_WallGrab.CAS_WallGrab_C.OnEndCommandAction");

	UCAS_WallGrab_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_WallGrab.CAS_WallGrab_C.OnInitialize
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCAS_WallGrab_C::OnInitialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_WallGrab.CAS_WallGrab_C.OnInitialize");

	UCAS_WallGrab_C_OnInitialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CAS_WallGrab.CAS_WallGrab_C.ExecuteUbergraph_CAS_WallGrab
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCAS_WallGrab_C::ExecuteUbergraph_CAS_WallGrab(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CAS_WallGrab.CAS_WallGrab_C.ExecuteUbergraph_CAS_WallGrab");

	UCAS_WallGrab_C_ExecuteUbergraph_CAS_WallGrab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
