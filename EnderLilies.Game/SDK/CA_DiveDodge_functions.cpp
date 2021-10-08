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
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.IsSwimmingOrDiving
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               IsDiving                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCA_DiveDodge_C::IsSwimmingOrDiving(bool* IsDiving)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.IsSwimmingOrDiving");

	UCA_DiveDodge_C_IsSwimmingOrDiving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDiving != nullptr)
		*IsDiving = params.IsDiving;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.CanStartCommandAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCA_DiveDodge_C::CanStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.CanStartCommandAction");

	UCA_DiveDodge_C_CanStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.PlayDodgeAnim
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCA_DiveDodge_C::PlayDodgeAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.PlayDodgeAnim");

	UCA_DiveDodge_C_PlayDodgeAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.InitializeDodgeParams
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UCA_DiveDodge_C::InitializeDodgeParams()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.InitializeDodgeParams");

	UCA_DiveDodge_C_InitializeDodgeParams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.ComputeDodgeVector
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FMoveTimelineEntry                          MoveTimelineEntry                                          (Parm, OutParm, NoDestructor)
void UCA_DiveDodge_C::ComputeDodgeVector(struct FMoveTimelineEntry* MoveTimelineEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.ComputeDodgeVector");

	UCA_DiveDodge_C_ComputeDodgeVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MoveTimelineEntry != nullptr)
		*MoveTimelineEntry = params.MoveTimelineEntry;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCA_DiveDodge_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.OnSampleCommandAction");

	UCA_DiveDodge_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_DiveDodge_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.OnStartCommandAction");

	UCA_DiveDodge_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_DiveDodge_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.OnEndCommandAction");

	UCA_DiveDodge_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_DiveDodge.CA_DiveDodge_C.ExecuteUbergraph_CA_DiveDodge
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_DiveDodge_C::ExecuteUbergraph_CA_DiveDodge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_DiveDodge.CA_DiveDodge_C.ExecuteUbergraph_CA_DiveDodge");

	UCA_DiveDodge_C_ExecuteUbergraph_CA_DiveDodge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
