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
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.IsAlreadyAtDestination
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_MoveBase_C::IsAlreadyAtDestination(class APawn* Pawn, const struct FVector& TargetLocation, class AActor* TargetActor, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.IsAlreadyAtDestination");

	UBTTask_MoveBase_C_IsAlreadyAtDestination_Params params;
	params.Pawn = Pawn;
	params.TargetLocation = TargetLocation;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.ClampDestination
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ClampedDestination                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveBase_C::ClampDestination(const struct FVector& Destination, struct FVector* ClampedDestination)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.ClampDestination");

	UBTTask_MoveBase_C_ClampDestination_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClampedDestination != nullptr)
		*ClampedDestination = params.ClampedDestination;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.OnFail_F1A707A84ECFFDEAE2AF4EB36EB48C8A
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveBase_C::OnFail_F1A707A84ECFFDEAE2AF4EB36EB48C8A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.OnFail_F1A707A84ECFFDEAE2AF4EB36EB48C8A");

	UBTTask_MoveBase_C_OnFail_F1A707A84ECFFDEAE2AF4EB36EB48C8A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.OnSuccess_F1A707A84ECFFDEAE2AF4EB36EB48C8A
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveBase_C::OnSuccess_F1A707A84ECFFDEAE2AF4EB36EB48C8A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.OnSuccess_F1A707A84ECFFDEAE2AF4EB36EB48C8A");

	UBTTask_MoveBase_C_OnSuccess_F1A707A84ECFFDEAE2AF4EB36EB48C8A_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveFinished_51D1FBAA45E53E8DCB3F09A9336A616B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<AIModule_EPathFollowingResult>         Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveBase_C::OnMoveFinished_51D1FBAA45E53E8DCB3F09A9336A616B(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveFinished_51D1FBAA45E53E8DCB3F09A9336A616B");

	UBTTask_MoveBase_C_OnMoveFinished_51D1FBAA45E53E8DCB3F09A9336A616B_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.OnRequestFailed_51D1FBAA45E53E8DCB3F09A9336A616B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBTTask_MoveBase_C::OnRequestFailed_51D1FBAA45E53E8DCB3F09A9336A616B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.OnRequestFailed_51D1FBAA45E53E8DCB3F09A9336A616B");

	UBTTask_MoveBase_C_OnRequestFailed_51D1FBAA45E53E8DCB3F09A9336A616B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.ReceiveAbortAI
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveBase_C::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.ReceiveAbortAI");

	UBTTask_MoveBase_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveSuccess
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBTTask_MoveBase_C::OnMoveSuccess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveSuccess");

	UBTTask_MoveBase_C_OnMoveSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveFail
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBTTask_MoveBase_C::OnMoveFail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveFail");

	UBTTask_MoveBase_C_OnMoveFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.ExecuteMovement
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Destination                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveBase_C::ExecuteMovement(class AAIController* OwnerController, class APawn* ControlledPawn, const struct FVector& Destination, class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.ExecuteMovement");

	UBTTask_MoveBase_C_ExecuteMovement_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.Destination = Destination;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BTTask_MoveBase.BTTask_MoveBase_C.ExecuteUbergraph_BTTask_MoveBase
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_MoveBase_C::ExecuteUbergraph_BTTask_MoveBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BTTask_MoveBase.BTTask_MoveBase_C.ExecuteUbergraph_BTTask_MoveBase");

	UBTTask_MoveBase_C_ExecuteUbergraph_BTTask_MoveBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
