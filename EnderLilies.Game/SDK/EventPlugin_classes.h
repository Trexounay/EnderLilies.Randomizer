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
// Classes
//---------------------------------------------------------------------------

// Class EventPlugin.EventObject
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEventObject : public UObject
{
public:
	unsigned char                                      UnknownData_ENEH[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventObject");
		return ptr;
	}



};

// Class EventPlugin.EventAction
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UEventAction : public UEventObject
{
public:
	bool                                               bFireAndForget;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ACKM[0xF];                                     // 0x0031(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventAction");
		return ptr;
	}



	void TickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void StartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnTickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnEndAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnAbortAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	EventPlugin_EEventActionResult GetResult();
	struct FTransform GetOriginTransform();
	class UEventPlayer* GetEventPlayer();
	void FinishAction(EventPlugin_EEventActionResult Result);
	void EndAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void AbortAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
};

// Class EventPlugin.SkipEventAction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class USkipEventAction : public UEventObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.SkipEventAction");
		return ptr;
	}



	void OnSkip(class UEventPlayer* EventPlayer);
	void OnPostSkip(class UEventPlayer* EventPlayer);
};

// Class EventPlugin.ExecuteEventActionAsync
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UExecuteEventActionAsync : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_MJAA[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEventAction*                                EventAction;                                               // 0x0048(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEventPlayer*                                EventPlayer;                                               // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class APlayerController*                           InteractingPlayer;                                         // 0x0058(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      Subject;                                                   // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      Target;                                                    // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnStart;                                                   // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.ExecuteEventActionAsync");
		return ptr;
	}



	void Update();
	void Finish();
	class UExecuteEventActionAsync* STATIC_ExecuteEventActionAsync(class UObject* WorldContextObject, class UEventPlayer* InEventPlayer, const struct FEventNode& EventNode, class UEventAction* EventActionToExecute);
};

// Class EventPlugin.EventPlayerControllerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEventPlayerControllerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventPlayerControllerInterface");
		return ptr;
	}



};

// Class EventPlugin.EventActorInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEventActorInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventActorInterface");
		return ptr;
	}



};

// Class EventPlugin.EventAsset
// 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
class UEventAsset : public UDataAsset
{
public:
	class UClass*                                      EventCameraClass;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerUIFadeOutTime;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayerUIFadeInTime;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraBlendTimeOnEventFinished;                            // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       CameraBlendFunctionOnEventFinished;                        // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockPlayerInput;                                          // 0x0045(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsSkippable;                                              // 0x0046(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1EEJ[0x1];                                     // 0x0047(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SkipEventAction;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowPause;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DisplayIdleSplines;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WYJK[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FEventNode>                          Data;                                                      // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FActorBindingInfos>      DefaultActorBindings;                                      // 0x0080(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                NextNodeId;                                                // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GPY0[0x1C];                                    // 0x00D4(0x001C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventAsset");
		return ptr;
	}



	TArray<struct FEventNode> GetNextNodes(const struct FEventNode& Node);
	struct FEventNode GetFirstNode();
	struct FName GetEventName();
	void STATIC_CallFunctionByName(class UObject* Object, const struct FString& FunctionName);
};

// Class EventPlugin.EventBlackBoard
// 0x0330 (FullSize[0x0358] - InheritedSize[0x0028])
class UEventBlackBoard : public UObject
{
public:
	TMap<class APawn*, class AController*>             Controllers;                                               // 0x0028(0x0050) (BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	class AActor*                                      GameViewTarget;                                            // 0x0078(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AEventCamera*                                EventCamera;                                               // 0x0080(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, bool>                           BoolData;                                                  // 0x0088(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FName>                   NameData;                                                  // 0x00D8(0x0050) (BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, class AActor*>                  ActorData;                                                 // 0x0128(0x0050) (BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, class UUserWidget*>             UserWidgetData;                                            // 0x0178(0x0050) (BlueprintVisible, ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FDataTableRowHandle>     DataHandleData;                                            // 0x01C8(0x0050) (BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, struct FTransform>              TransformData;                                             // 0x0218(0x0050) (BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, class UMediaSource*>            MediaData;                                                 // 0x0268(0x0050) (BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, class UDataTable*>              DataTableData;                                             // 0x02B8(0x0050) (BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	TMap<struct FName, class UDataAsset*>              AssetData;                                                 // 0x0308(0x0050) (BlueprintVisible, Transient, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventBlackBoard");
		return ptr;
	}



};

// Class EventPlugin.EventCamera
// 0x0040 (FullSize[0x07E0] - InheritedSize[0x07A0])
class AEventCamera : public ACameraActor
{
public:
	TWeakObjectPtr<class AActor>                       LockedTarget;                                              // 0x07A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6AFD[0x8];                                     // 0x07A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LockedTargetOffset;                                        // 0x07B0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventCamera");
		return ptr;
	}



	void Unlock();
	void LockToTarget(class AActor* TargetToLock, const struct FTransform& Offset);
};

// Class EventPlugin.EventCondition
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEventCondition : public UEventObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventCondition");
		return ptr;
	}



	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
};

// Class EventPlugin.EventPlayer
// 0x0200 (FullSize[0x0228] - InheritedSize[0x0028])
class UEventPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnStart;                                                   // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEventStep;                                               // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MZI7[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Owner;                                                     // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEventAsset*                                 EventAsset;                                                // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2YKC[0x70];                                    // 0x0078(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      EventControllerClass;                                      // 0x00E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      EventWidgetClass;                                          // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AController*>                         UnusedEventControllers;                                    // 0x00F8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class UEventUserWidget*                            EventWidgetInstance;                                       // 0x0108(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AEventCamera*                                EventCamera;                                               // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FEventNode                                  CurrentNode;                                               // 0x0118(0x0078) (ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FEventNode>                          PlayerChoices;                                             // 0x0190(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UExecuteEventActionAsync*                    CurrentAction;                                             // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UExecuteEventActionAsync*>            RunningActions;                                            // 0x01A8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_U64R[0x70];                                    // 0x01B8(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventPlayer");
		return ptr;
	}



	void SubmitReply(const struct FEventNode& Reply);
	void SpawnActorBinding(const struct FName& BindingName, const struct FActorBindingInfos& ActorBindingInfos);
	void SetEventSkippable();
	void RemoveActorBinding(const struct FName& BindingName);
	void Play(class APlayerController* PlayerInstigator, class AActor* EventInstigator, TMap<struct FName, class AActor*> EventActorBindings);
	void OnReceivedFinishActionFireAndForget(class UExecuteEventActionAsync* EventActionAsync);
	void OnReceivedFinishAction(class UExecuteEventActionAsync* EventActionAsync);
	bool IsWaitingForPlayer();
	bool IsPlaying();
	bool IsEventSkippable();
	bool IsEventPausable();
	TArray<struct FEventNode> GetPlayerChoices();
	class AActor* GetPlayerActor();
	class AActor* GetOwner();
	struct FTransform GetOriginTransform();
	class APlayerController* GetInteractingPlayer();
	class AActor* GetInstigator();
	class UEventUserWidget* GetEventWidget();
	class AEventCamera* GetEventCamera();
	class UEventAsset* GetEventAsset();
	struct FEventNode GetCurrentNode();
	class UEventBlackBoard* GetBlackBoard();
	struct FName GetBindingForActor(class AActor* Actor);
	class AActor* GetActorForBinding(const struct FName& Binding);
	class AActor* GetActorForActorType(EventPlugin_EEventActorType ActorType, const struct FName& Binding, bool bLogIfNotFound);
	TMap<struct FName, class AActor*> GetActorBindings();
	class UEventPlayer* STATIC_CreateEventPlayer(class AActor* Owner, class UEventAsset* EventAsset, class UClass* ControllerClassToUse, class UClass* EventWidgetClass);
	void Continue();
	void AddOrReplaceActorBinding(const struct FName& BindingName, class AActor* Actor);
	void AddActorBinding(const struct FName& BindingName, class AActor* Actor);
	void Abort();
};

// Class EventPlugin.EventTrigger
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEventTrigger : public UEventObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventTrigger");
		return ptr;
	}



	void ExecuteTrigger(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
};

// Class EventPlugin.EventUserWidget
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UEventUserWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnKeyDownDelegate;                                         // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UEventPlayer*                                EventPlayer;                                               // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EventPlugin.EventUserWidget");
		return ptr;
	}



	void RequestRemove();
	void OnStartNewAction();
	void OnEventStep();
	void OnEventStart();
	void OnEventFinish();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
