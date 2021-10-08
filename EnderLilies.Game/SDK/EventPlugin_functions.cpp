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
//		Offset -> 0x00780AB0
//		Name   -> Function EventPlugin.EventAction.TickAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::TickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.TickAction");

	UEventAction_TickAction_Params params;
	params.DeltaTime = DeltaTime;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00780810
//		Name   -> Function EventPlugin.EventAction.StartAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::StartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.StartAction");

	UEventAction_StartAction_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventAction.OnTickAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::OnTickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.OnTickAction");

	UEventAction_OnTickAction_Params params;
	params.DeltaTime = DeltaTime;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventAction.OnStartAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.OnStartAction");

	UEventAction_OnStartAction_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventAction.OnEndAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::OnEndAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.OnEndAction");

	UEventAction_OnEndAction_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventAction.OnAbortAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::OnAbortAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.OnAbortAction");

	UEventAction_OnAbortAction_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007800C0
//		Name   -> Function EventPlugin.EventAction.GetResult
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		EventPlugin_EEventActionResult                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
EventPlugin_EEventActionResult UEventAction::GetResult()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.GetResult");

	UEventAction_GetResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FF50
//		Name   -> Function EventPlugin.EventAction.GetOriginTransform
//		Flags  -> (Final, Native, Protected, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UEventAction::GetOriginTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.GetOriginTransform");

	UEventAction_GetOriginTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FAE0
//		Name   -> Function EventPlugin.EventAction.GetEventPlayer
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UEventPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventPlayer* UEventAction::GetEventPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.GetEventPlayer");

	UEventAction_GetEventPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F5B0
//		Name   -> Function EventPlugin.EventAction.FinishAction
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		EventPlugin_EEventActionResult                     Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::FinishAction(EventPlugin_EEventActionResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.FinishAction");

	UEventAction_FinishAction_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077F230
//		Name   -> Function EventPlugin.EventAction.EndAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::EndAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.EndAction");

	UEventAction_EndAction_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077ECA0
//		Name   -> Function EventPlugin.EventAction.AbortAction
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAction::AbortAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAction.AbortAction");

	UEventAction_AbortAction_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.SkipEventAction.OnSkip
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkipEventAction::OnSkip(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.SkipEventAction.OnSkip");

	USkipEventAction_OnSkip_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.SkipEventAction.OnPostSkip
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USkipEventAction::OnPostSkip(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.SkipEventAction.OnPostSkip");

	USkipEventAction_OnPostSkip_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00780C80
//		Name   -> Function EventPlugin.ExecuteEventActionAsync.Update
//		Flags  -> (Final, Native, Private)
void UExecuteEventActionAsync::Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.ExecuteEventActionAsync.Update");

	UExecuteEventActionAsync_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077F590
//		Name   -> Function EventPlugin.ExecuteEventActionAsync.Finish
//		Flags  -> (Final, Native, Private)
void UExecuteEventActionAsync::Finish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.ExecuteEventActionAsync.Finish");

	UExecuteEventActionAsync_Finish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077F390
//		Name   -> Function EventPlugin.ExecuteEventActionAsync.ExecuteEventActionAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventPlayer*                                InEventPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventNode                                  EventNode                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		class UEventAction*                                EventActionToExecute                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UExecuteEventActionAsync*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UExecuteEventActionAsync* UExecuteEventActionAsync::STATIC_ExecuteEventActionAsync(class UObject* WorldContextObject, class UEventPlayer* InEventPlayer, const struct FEventNode& EventNode, class UEventAction* EventActionToExecute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.ExecuteEventActionAsync.ExecuteEventActionAsync");

	UExecuteEventActionAsync_ExecuteEventActionAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InEventPlayer = InEventPlayer;
	params.EventNode = EventNode;
	params.EventActionToExecute = EventActionToExecute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FCC0
//		Name   -> Function EventPlugin.EventAsset.GetNextNodes
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FEventNode                                  Node                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		TArray<struct FEventNode>                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<struct FEventNode> UEventAsset::GetNextNodes(const struct FEventNode& Node)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAsset.GetNextNodes");

	UEventAsset_GetNextNodes_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FB40
//		Name   -> Function EventPlugin.EventAsset.GetFirstNode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FEventNode                                  ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FEventNode UEventAsset::GetFirstNode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAsset.GetFirstNode");

	UEventAsset_GetFirstNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FAA0
//		Name   -> Function EventPlugin.EventAsset.GetEventName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UEventAsset::GetEventName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAsset.GetEventName");

	UEventAsset_GetEventName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077EFA0
//		Name   -> Function EventPlugin.EventAsset.CallFunctionByName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventAsset::STATIC_CallFunctionByName(class UObject* Object, const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventAsset.CallFunctionByName");

	UEventAsset_CallFunctionByName_Params params;
	params.Object = Object;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00780C60
//		Name   -> Function EventPlugin.EventCamera.Unlock
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AEventCamera::Unlock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventCamera.Unlock");

	AEventCamera_Unlock_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007801B0
//		Name   -> Function EventPlugin.EventCamera.LockToTarget
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetToLock                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Offset                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void AEventCamera::LockToTarget(class AActor* TargetToLock, const struct FTransform& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventCamera.LockToTarget");

	AEventCamera_LockToTarget_Params params;
	params.TargetToLock = TargetToLock;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventCondition.IsConditionMet
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEventCondition::IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventCondition.IsConditionMet");

	UEventCondition_IsConditionMet_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00780970
//		Name   -> Function EventPlugin.EventPlayer.SubmitReply
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FEventNode                                  Reply                                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UEventPlayer::SubmitReply(const struct FEventNode& Reply)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.SubmitReply");

	UEventPlayer_SubmitReply_Params params;
	params.Reply = Reply;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007806C0
//		Name   -> Function EventPlugin.EventPlayer.SpawnActorBinding
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       BindingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FActorBindingInfos                          ActorBindingInfos                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEventPlayer::SpawnActorBinding(const struct FName& BindingName, const struct FActorBindingInfos& ActorBindingInfos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.SpawnActorBinding");

	UEventPlayer_SpawnActorBinding_Params params;
	params.BindingName = BindingName;
	params.ActorBindingInfos = ActorBindingInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007806A0
//		Name   -> Function EventPlugin.EventPlayer.SetEventSkippable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UEventPlayer::SetEventSkippable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.SetEventSkippable");

	UEventPlayer_SetEventSkippable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007805F0
//		Name   -> Function EventPlugin.EventPlayer.RemoveActorBinding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       BindingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventPlayer::RemoveActorBinding(const struct FName& BindingName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.RemoveActorBinding");

	UEventPlayer_RemoveActorBinding_Params params;
	params.BindingName = BindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00780430
//		Name   -> Function EventPlugin.EventPlayer.Play
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FName, class AActor*>                  EventActorBindings                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEventPlayer::Play(class APlayerController* PlayerInstigator, class AActor* EventInstigator, TMap<struct FName, class AActor*> EventActorBindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.Play");

	UEventPlayer_Play_Params params;
	params.PlayerInstigator = PlayerInstigator;
	params.EventInstigator = EventInstigator;
	params.EventActorBindings = EventActorBindings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00780380
//		Name   -> Function EventPlugin.EventPlayer.OnReceivedFinishActionFireAndForget
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UExecuteEventActionAsync*                    EventActionAsync                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventPlayer::OnReceivedFinishActionFireAndForget(class UExecuteEventActionAsync* EventActionAsync)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.OnReceivedFinishActionFireAndForget");

	UEventPlayer_OnReceivedFinishActionFireAndForget_Params params;
	params.EventActionAsync = EventActionAsync;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007802F0
//		Name   -> Function EventPlugin.EventPlayer.OnReceivedFinishAction
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class UExecuteEventActionAsync*                    EventActionAsync                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventPlayer::OnReceivedFinishAction(class UExecuteEventActionAsync* EventActionAsync)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.OnReceivedFinishAction");

	UEventPlayer_OnReceivedFinishAction_Params params;
	params.EventActionAsync = EventActionAsync;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00780180
//		Name   -> Function EventPlugin.EventPlayer.IsWaitingForPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEventPlayer::IsWaitingForPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.IsWaitingForPlayer");

	UEventPlayer_IsWaitingForPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00780150
//		Name   -> Function EventPlugin.EventPlayer.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEventPlayer::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.IsPlaying");

	UEventPlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00780120
//		Name   -> Function EventPlugin.EventPlayer.IsEventSkippable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEventPlayer::IsEventSkippable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.IsEventSkippable");

	UEventPlayer_IsEventSkippable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007800F0
//		Name   -> Function EventPlugin.EventPlayer.IsEventPausable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEventPlayer::IsEventPausable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.IsEventPausable");

	UEventPlayer_IsEventPausable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00780050
//		Name   -> Function EventPlugin.EventPlayer.GetPlayerChoices
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FEventNode>                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<struct FEventNode> UEventPlayer::GetPlayerChoices()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetPlayerChoices");

	UEventPlayer_GetPlayerChoices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00780020
//		Name   -> Function EventPlugin.EventPlayer.GetPlayerActor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UEventPlayer::GetPlayerActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetPlayerActor");

	UEventPlayer_GetPlayerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FFF0
//		Name   -> Function EventPlugin.EventPlayer.GetOwner
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UEventPlayer::GetOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetOwner");

	UEventPlayer_GetOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FF90
//		Name   -> Function EventPlugin.EventPlayer.GetOriginTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UEventPlayer::GetOriginTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetOriginTransform");

	UEventPlayer_GetOriginTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FC60
//		Name   -> Function EventPlugin.EventPlayer.GetInteractingPlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* UEventPlayer::GetInteractingPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetInteractingPlayer");

	UEventPlayer_GetInteractingPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FC00
//		Name   -> Function EventPlugin.EventPlayer.GetInstigator
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UEventPlayer::GetInstigator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetInstigator");

	UEventPlayer_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FB10
//		Name   -> Function EventPlugin.EventPlayer.GetEventWidget
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UEventUserWidget*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventUserWidget* UEventPlayer::GetEventWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetEventWidget");

	UEventPlayer_GetEventWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FA70
//		Name   -> Function EventPlugin.EventPlayer.GetEventCamera
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AEventCamera*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AEventCamera* UEventPlayer::GetEventCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetEventCamera");

	UEventPlayer_GetEventCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077FA40
//		Name   -> Function EventPlugin.EventPlayer.GetEventAsset
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UEventAsset*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventAsset* UEventPlayer::GetEventAsset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetEventAsset");

	UEventPlayer_GetEventAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F980
//		Name   -> Function EventPlugin.EventPlayer.GetCurrentNode
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FEventNode                                  ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FEventNode UEventPlayer::GetCurrentNode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetCurrentNode");

	UEventPlayer_GetCurrentNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F950
//		Name   -> Function EventPlugin.EventPlayer.GetBlackBoard
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UEventBlackBoard*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventBlackBoard* UEventPlayer::GetBlackBoard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetBlackBoard");

	UEventPlayer_GetBlackBoard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F8C0
//		Name   -> Function EventPlugin.EventPlayer.GetBindingForActor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UEventPlayer::GetBindingForActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetBindingForActor");

	UEventPlayer_GetBindingForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F820
//		Name   -> Function EventPlugin.EventPlayer.GetActorForBinding
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       Binding                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UEventPlayer::GetActorForBinding(const struct FName& Binding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetActorForBinding");

	UEventPlayer_GetActorForBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F700
//		Name   -> Function EventPlugin.EventPlayer.GetActorForActorType
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		EventPlugin_EEventActorType                        ActorType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Binding                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLogIfNotFound                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UEventPlayer::GetActorForActorType(EventPlugin_EEventActorType ActorType, const struct FName& Binding, bool bLogIfNotFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetActorForActorType");

	UEventPlayer_GetActorForActorType_Params params;
	params.ActorType = ActorType;
	params.Binding = Binding;
	params.bLogIfNotFound = bLogIfNotFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F630
//		Name   -> Function EventPlugin.EventPlayer.GetActorBindings
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TMap<struct FName, class AActor*>                  ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<struct FName, class AActor*> UEventPlayer::GetActorBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.GetActorBindings");

	UEventPlayer_GetActorBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F0E0
//		Name   -> Function EventPlugin.EventPlayer.CreateEventPlayer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventAsset*                                 EventAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      ControllerClassToUse                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      EventWidgetClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEventPlayer* UEventPlayer::STATIC_CreateEventPlayer(class AActor* Owner, class UEventAsset* EventAsset, class UClass* ControllerClassToUse, class UClass* EventWidgetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.CreateEventPlayer");

	UEventPlayer_CreateEventPlayer_Params params;
	params.Owner = Owner;
	params.EventAsset = EventAsset;
	params.ControllerClassToUse = ControllerClassToUse;
	params.EventWidgetClass = EventWidgetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0077F0C0
//		Name   -> Function EventPlugin.EventPlayer.Continue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UEventPlayer::Continue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.Continue");

	UEventPlayer_Continue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077EED0
//		Name   -> Function EventPlugin.EventPlayer.AddOrReplaceActorBinding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       BindingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventPlayer::AddOrReplaceActorBinding(const struct FName& BindingName, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.AddOrReplaceActorBinding");

	UEventPlayer_AddOrReplaceActorBinding_Params params;
	params.BindingName = BindingName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077EE00
//		Name   -> Function EventPlugin.EventPlayer.AddActorBinding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       BindingName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventPlayer::AddActorBinding(const struct FName& BindingName, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.AddActorBinding");

	UEventPlayer_AddActorBinding_Params params;
	params.BindingName = BindingName;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0077EC80
//		Name   -> Function EventPlugin.EventPlayer.Abort
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UEventPlayer::Abort()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventPlayer.Abort");

	UEventPlayer_Abort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventTrigger.ExecuteTrigger
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Subject                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UEventBlackBoard*                            EventBlackBoard                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEventTrigger::ExecuteTrigger(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventTrigger.ExecuteTrigger");

	UEventTrigger_ExecuteTrigger_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00780680
//		Name   -> Function EventPlugin.EventUserWidget.RequestRemove
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UEventUserWidget::RequestRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventUserWidget.RequestRemove");

	UEventUserWidget_RequestRemove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00780410
//		Name   -> Function EventPlugin.EventUserWidget.OnStartNewAction
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void UEventUserWidget::OnStartNewAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventUserWidget.OnStartNewAction");

	UEventUserWidget_OnStartNewAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventUserWidget.OnEventStep
//		Flags  -> (Event, Protected, BlueprintEvent)
void UEventUserWidget::OnEventStep()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventUserWidget.OnEventStep");

	UEventUserWidget_OnEventStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventUserWidget.OnEventStart
//		Flags  -> (Event, Protected, BlueprintEvent)
void UEventUserWidget::OnEventStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventUserWidget.OnEventStart");

	UEventUserWidget_OnEventStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EventPlugin.EventUserWidget.OnEventFinish
//		Flags  -> (Event, Protected, BlueprintEvent)
void UEventUserWidget::OnEventFinish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EventPlugin.EventUserWidget.OnEventFinish");

	UEventUserWidget_OnEventFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
