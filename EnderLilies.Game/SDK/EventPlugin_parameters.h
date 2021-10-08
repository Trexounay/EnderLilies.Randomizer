#pragma once

// Name: enderlilies, Version: 1.1.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function EventPlugin.EventAction.TickAction
struct UEventAction_TickAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           ConsideringPlayer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.StartAction
struct UEventAction_StartAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.OnTickAction
struct UEventAction_OnTickAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           ConsideringPlayer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.OnStartAction
struct UEventAction_OnStartAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.OnEndAction
struct UEventAction_OnEndAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.OnAbortAction
struct UEventAction_OnAbortAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.GetResult
struct UEventAction_GetResult_Params
{
	EventPlugin_EEventActionResult                     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.GetOriginTransform
struct UEventAction_GetOriginTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.GetEventPlayer
struct UEventAction_GetEventPlayer_Params
{
	class UEventPlayer*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.FinishAction
struct UEventAction_FinishAction_Params
{
	EventPlugin_EEventActionResult                     Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.EndAction
struct UEventAction_EndAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAction.AbortAction
struct UEventAction_AbortAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.SkipEventAction.OnSkip
struct USkipEventAction_OnSkip_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.SkipEventAction.OnPostSkip
struct USkipEventAction_OnPostSkip_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.ExecuteEventActionAsync.Update
struct UExecuteEventActionAsync_Update_Params
{
};

// Function EventPlugin.ExecuteEventActionAsync.Finish
struct UExecuteEventActionAsync_Finish_Params
{
};

// Function EventPlugin.ExecuteEventActionAsync.ExecuteEventActionAsync
struct UExecuteEventActionAsync_ExecuteEventActionAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventPlayer*                                InEventPlayer;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventNode                                  EventNode;                                                 // 0x0010(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UEventAction*                                EventActionToExecute;                                      // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UExecuteEventActionAsync*                    ReturnValue;                                               // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAsset.GetNextNodes
struct UEventAsset_GetNextNodes_Params
{
	struct FEventNode                                  Node;                                                      // 0x0000(0x0078)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FEventNode>                          ReturnValue;                                               // 0x0078(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAsset.GetFirstNode
struct UEventAsset_GetFirstNode_Params
{
	struct FEventNode                                  ReturnValue;                                               // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAsset.GetEventName
struct UEventAsset_GetEventName_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventAsset.CallFunctionByName
struct UEventAsset_CallFunctionByName_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FunctionName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventCamera.Unlock
struct AEventCamera_Unlock_Params
{
};

// Function EventPlugin.EventCamera.LockToTarget
struct AEventCamera_LockToTarget_Params
{
	class AActor*                                      TargetToLock;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Offset;                                                    // 0x0010(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventCondition.IsConditionMet
struct UEventCondition_IsConditionMet_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.SubmitReply
struct UEventPlayer_SubmitReply_Params
{
	struct FEventNode                                  Reply;                                                     // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.SpawnActorBinding
struct UEventPlayer_SpawnActorBinding_Params
{
	struct FName                                       BindingName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActorBindingInfos                          ActorBindingInfos;                                         // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.SetEventSkippable
struct UEventPlayer_SetEventSkippable_Params
{
};

// Function EventPlugin.EventPlayer.RemoveActorBinding
struct UEventPlayer_RemoveActorBinding_Params
{
	struct FName                                       BindingName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.Play
struct UEventPlayer_Play_Params
{
	class APlayerController*                           PlayerInstigator;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EventInstigator;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, class AActor*>                  EventActorBindings;                                        // 0x0010(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.OnReceivedFinishActionFireAndForget
struct UEventPlayer_OnReceivedFinishActionFireAndForget_Params
{
	class UExecuteEventActionAsync*                    EventActionAsync;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.OnReceivedFinishAction
struct UEventPlayer_OnReceivedFinishAction_Params
{
	class UExecuteEventActionAsync*                    EventActionAsync;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.IsWaitingForPlayer
struct UEventPlayer_IsWaitingForPlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.IsPlaying
struct UEventPlayer_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.IsEventSkippable
struct UEventPlayer_IsEventSkippable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.IsEventPausable
struct UEventPlayer_IsEventPausable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetPlayerChoices
struct UEventPlayer_GetPlayerChoices_Params
{
	TArray<struct FEventNode>                          ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetPlayerActor
struct UEventPlayer_GetPlayerActor_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetOwner
struct UEventPlayer_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetOriginTransform
struct UEventPlayer_GetOriginTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetInteractingPlayer
struct UEventPlayer_GetInteractingPlayer_Params
{
	class APlayerController*                           ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetInstigator
struct UEventPlayer_GetInstigator_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetEventWidget
struct UEventPlayer_GetEventWidget_Params
{
	class UEventUserWidget*                            ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetEventCamera
struct UEventPlayer_GetEventCamera_Params
{
	class AEventCamera*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetEventAsset
struct UEventPlayer_GetEventAsset_Params
{
	class UEventAsset*                                 ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetCurrentNode
struct UEventPlayer_GetCurrentNode_Params
{
	struct FEventNode                                  ReturnValue;                                               // 0x0000(0x0078)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetBlackBoard
struct UEventPlayer_GetBlackBoard_Params
{
	class UEventBlackBoard*                            ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetBindingForActor
struct UEventPlayer_GetBindingForActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetActorForBinding
struct UEventPlayer_GetActorForBinding_Params
{
	struct FName                                       Binding;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetActorForActorType
struct UEventPlayer_GetActorForActorType_Params
{
	EventPlugin_EEventActorType                        ActorType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Binding;                                                   // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLogIfNotFound;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.GetActorBindings
struct UEventPlayer_GetActorBindings_Params
{
	TMap<struct FName, class AActor*>                  ReturnValue;                                               // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.CreateEventPlayer
struct UEventPlayer_CreateEventPlayer_Params
{
	class AActor*                                      Owner;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventAsset*                                 EventAsset;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ControllerClassToUse;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      EventWidgetClass;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventPlayer*                                ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.Continue
struct UEventPlayer_Continue_Params
{
};

// Function EventPlugin.EventPlayer.AddOrReplaceActorBinding
struct UEventPlayer_AddOrReplaceActorBinding_Params
{
	struct FName                                       BindingName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.AddActorBinding
struct UEventPlayer_AddActorBinding_Params
{
	struct FName                                       BindingName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventPlayer.Abort
struct UEventPlayer_Abort_Params
{
};

// Function EventPlugin.EventTrigger.ExecuteTrigger
struct UEventTrigger_ExecuteTrigger_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EventPlugin.EventUserWidget.RequestRemove
struct UEventUserWidget_RequestRemove_Params
{
};

// Function EventPlugin.EventUserWidget.OnStartNewAction
struct UEventUserWidget_OnStartNewAction_Params
{
};

// Function EventPlugin.EventUserWidget.OnEventStep
struct UEventUserWidget_OnEventStep_Params
{
};

// Function EventPlugin.EventUserWidget.OnEventStart
struct UEventUserWidget_OnEventStart_Params
{
};

// Function EventPlugin.EventUserWidget.OnEventFinish
struct UEventUserWidget_OnEventFinish_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
