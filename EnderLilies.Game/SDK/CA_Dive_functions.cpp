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
//		Name   -> Function CA_Dive.CA_Dive_C.CanStartCommandAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCA_Dive_C::CanStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.CanStartCommandAction");

	UCA_Dive_C_CanStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Dive.CA_Dive_C.OnMovementModeUpdated
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EMovementMode>                  NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Dive_C::OnMovementModeUpdated(TEnumAsByte<Engine_EMovementMode> NewMovementMode, TEnumAsByte<Engine_EMovementMode> PrevMovementMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.OnMovementModeUpdated");

	UCA_Dive_C_OnMovementModeUpdated_Params params;
	params.NewMovementMode = NewMovementMode;
	params.PrevMovementMode = PrevMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Dive.CA_Dive_C.OnBreakWaterSurfaceDelegate_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCA_Dive_C::OnBreakWaterSurfaceDelegate_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.OnBreakWaterSurfaceDelegate_Event_1");

	UCA_Dive_C_OnBreakWaterSurfaceDelegate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Dive.CA_Dive_C.BindPawnEvents
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Dive_C::BindPawnEvents(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.BindPawnEvents");

	UCA_Dive_C_BindPawnEvents_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Dive.CA_Dive_C.UnbindPawnEvents
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Dive_C::UnbindPawnEvents(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.UnbindPawnEvents");

	UCA_Dive_C_UnbindPawnEvents_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Dive.CA_Dive_C.RemoveDiveState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCA_Dive_C::RemoveDiveState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.RemoveDiveState");

	UCA_Dive_C_RemoveDiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Dive.CA_Dive_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_Dive_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.OnStartCommandAction");

	UCA_Dive_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Dive.CA_Dive_C.AddDiveState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCA_Dive_C::AddDiveState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.AddDiveState");

	UCA_Dive_C_AddDiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Dive.CA_Dive_C.ExecuteUbergraph_CA_Dive
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Dive_C::ExecuteUbergraph_CA_Dive(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Dive.CA_Dive_C.ExecuteUbergraph_CA_Dive");

	UCA_Dive_C_ExecuteUbergraph_CA_Dive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
