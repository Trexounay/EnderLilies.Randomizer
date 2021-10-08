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
//		Name   -> Function CA_Jump.CA_Jump_C.ResetJumpCount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UCA_Jump_C::ResetJumpCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.ResetJumpCount");

	UCA_Jump_C_ResetJumpCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.IsGroundedJump
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               IsDoubleJump                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCA_Jump_C::IsGroundedJump(bool* IsDoubleJump)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.IsGroundedJump");

	UCA_Jump_C_IsGroundedJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDoubleJump != nullptr)
		*IsDoubleJump = params.IsDoubleJump;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.IsWallJump
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               IsWallJump                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCA_Jump_C::IsWallJump(bool* IsWallJump)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.IsWallJump");

	UCA_Jump_C_IsWallJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsWallJump != nullptr)
		*IsWallJump = params.IsWallJump;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.ShouldClearVelocities
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               bShouldClear                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCA_Jump_C::ShouldClearVelocities(bool* bShouldClear)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.ShouldClearVelocities");

	UCA_Jump_C_ShouldClearVelocities_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShouldClear != nullptr)
		*bShouldClear = params.bShouldClear;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.ClearVelocities
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Jump_C::ClearVelocities(class ACharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.ClearVelocities");

	UCA_Jump_C_ClearVelocities_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.CanStartCommandAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCA_Jump_C::CanStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.CanStartCommandAction");

	UCA_Jump_C_CanStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.ExecuteJump
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Jump_C::ExecuteJump(class AZenithCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.ExecuteJump");

	UCA_Jump_C_ExecuteJump_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCA_Jump_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.OnSampleCommandAction");

	UCA_Jump_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.OnChangePawn
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       OldPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       NewPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Jump_C::OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.OnChangePawn");

	UCA_Jump_C_OnChangePawn_Params params;
	params.OldPawnSubject = OldPawnSubject;
	params.NewPawnSubject = NewPawnSubject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.OnLanded
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_Jump_C::OnLanded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.OnLanded");

	UCA_Jump_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.OnHookStart
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_Jump_C::OnHookStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.OnHookStart");

	UCA_Jump_C_OnHookStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Jump_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.OnEndCommandAction");

	UCA_Jump_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.OnMovementModeUpdated
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EMovementMode>                  NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Jump_C::OnMovementModeUpdated(TEnumAsByte<Engine_EMovementMode> NewMovementMode, TEnumAsByte<Engine_EMovementMode> PrevMovementMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.OnMovementModeUpdated");

	UCA_Jump_C_OnMovementModeUpdated_Params params;
	params.NewMovementMode = NewMovementMode;
	params.PrevMovementMode = PrevMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.OnWallgrabStart
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_Jump_C::OnWallgrabStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.OnWallgrabStart");

	UCA_Jump_C_OnWallgrabStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_Jump_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.OnStartCommandAction");

	UCA_Jump_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Jump.CA_Jump_C.ExecuteUbergraph_CA_Jump
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Jump_C::ExecuteUbergraph_CA_Jump(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Jump.CA_Jump_C.ExecuteUbergraph_CA_Jump");

	UCA_Jump_C_ExecuteUbergraph_CA_Jump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
