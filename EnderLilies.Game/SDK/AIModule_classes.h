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

// Class AIModule.AITask
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UAITask : public UGameplayTask
{
public:
	class AAIController*                               OwnerController;                                           // 0x0068(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}



};

// Class AIModule.AITask_MoveTo
// 0x00A0 (FullSize[0x0110] - InheritedSize[0x0070])
class UAITask_MoveTo : public UAITask
{
public:
	struct FScriptMulticastDelegate                    OnRequestFailed;                                           // 0x0070(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    OnMoveFinished;                                            // 0x0080(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	struct FAIMoveRequest                              MoveRequest;                                               // 0x0090(0x0040) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_6VRH[0x40];                                    // 0x00D0(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}



	class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<AIModule_EAIOptionFlag> StopOnOverlap, TEnumAsByte<AIModule_EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<AIModule_EAIOptionFlag> ProjectGoalOnNavigation);
};

// Class AIModule.BTNode
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UBTNode : public UObject
{
public:
	unsigned char                                      UnknownData_U5K8[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NodeName;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBehaviorTree*                               TreeAsset;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBTCompositeNode*                            ParentNode;                                                // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_TJ1E[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}



};

// Class AIModule.BTAuxiliaryNode
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UBTAuxiliaryNode : public UBTNode
{
public:
	unsigned char                                      UnknownData_67I7[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}



};

// Class AIModule.BTDecorator
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBTDecorator : public UBTAuxiliaryNode
{
public:
	unsigned char                                      UnknownData_EZVC : 7;                                      // 0x0060(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bInverseCondition : 1;                                     // 0x0060(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MHPD[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EBTFlowAbortMode>             FlowAbortMode;                                             // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J1L6[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}



};

// Class AIModule.BTDecorator_TimeLimit
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_TimeLimit : public UBTDecorator
{
public:
	float                                              TimeLimit;                                                 // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RFF9[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}



};

// Class AIModule.BTService
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UBTService : public UBTAuxiliaryNode
{
public:
	float                                              Interval;                                                  // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              RandomDeviation;                                           // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCallTickOnSearchStart : 1;                                // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bRestartTimerOnEachActivation : 1;                         // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QUIH[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}



};

// Class AIModule.AIController
// 0x0090 (FullSize[0x0328] - InheritedSize[0x0298])
class AAIController : public AController
{
public:
	unsigned char                                      UnknownData_7L5Y[0x38];                                    // 0x0298(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bStartAILogicOnPossess : 1;                                // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bStopAILogicOnUnposses : 1;                                // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bLOSflag : 1;                                              // 0x02D0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSkipExtraLOSChecks : 1;                                   // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bWantsPlayerState : 1;                                     // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSetControlRotationFromPawnOrientation : 1;                // 0x02D0(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QL3P[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPathFollowingComponent*                     PathFollowingComponent;                                    // 0x02D8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                             BrainComponent;                                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIPerceptionComponent*                      PerceptionComponent;                                       // 0x02E8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnActionsComponent*                       ActionsComp;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlackboardComponent*                        Blackboard;                                                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                              // 0x0300(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      DefaultNavigationFilterClass;                              // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScriptMulticastDelegate                    ReceiveMoveCompleted;                                      // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7XET[0x8];                                     // 0x0320(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}



	bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent);
	void UnclaimTaskResource(class UClass* ResourceClass);
	void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
	void SetMoveBlockDetection(bool bEnable);
	bool RunBehaviorTree(class UBehaviorTree* BTAsset);
	void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
	void OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased);
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	TEnumAsByte<AIModule_EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath);
	void K2_SetFocus(class AActor* NewFocus);
	void K2_SetFocalPoint(const struct FVector& FP);
	void K2_ClearFocus();
	bool HasPartialPath();
	class UPathFollowingComponent* GetPathFollowingComponent();
	TEnumAsByte<AIModule_EPathFollowingStatus> GetMoveStatus();
	struct FVector GetImmediateMoveDestination();
	class AActor* GetFocusActor();
	struct FVector GetFocalPointOnActor(class AActor* Actor);
	struct FVector GetFocalPoint();
	class UAIPerceptionComponent* GetAIPerceptionComponent();
	void ClaimTaskResource(class UClass* ResourceClass);
};

// Class AIModule.PathFollowingComponent
// 0x01A0 (FullSize[0x0250] - InheritedSize[0x00B0])
class UPathFollowingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_7XCE[0x38];                                    // 0x00B0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNavMovementComponent*                       MovementComp;                                              // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OBHV[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANavigationData*                             MyNavData;                                                 // 0x00F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QWWR[0x150];                                   // 0x0100(0x0150) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}



	void OnNavDataRegistered(class ANavigationData* NavData);
	void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector GetPathDestination();
	TEnumAsByte<AIModule_EPathFollowingAction> GetPathActionType();
};

// Class AIModule.AIAsyncTaskBlueprintProxy
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YCX2[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}



	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
};

// Class AIModule.AIBlueprintHelperLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}



	void STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
	class APawn* STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class AActor* Owner);
	void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	void STATIC_SendAIMessage(class APawn* Target, const struct FName& Message, class UObject* MessageSource, bool bSuccess);
	void STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
	bool STATIC_IsValidAIRotation(const struct FRotator& Rotation);
	bool STATIC_IsValidAILocation(const struct FVector& Location);
	bool STATIC_IsValidAIDirection(const struct FVector& DirectionVector);
	int STATIC_GetNextNavLinkIndex(class AController* Controller);
	TArray<struct FVector> STATIC_GetCurrentPathPoints(class AController* Controller);
	int STATIC_GetCurrentPathIndex(class AController* Controller);
	class UNavigationPath* STATIC_GetCurrentPath(class AController* Controller);
	class UBlackboardComponent* STATIC_GetBlackBoard(class AActor* Target);
	class AAIController* STATIC_GetAIController(class AActor* ControlledActor);
	class UAIAsyncTaskBlueprintProxy* STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
};

// Class AIModule.AIDataProvider
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIDataProvider : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}



};

// Class AIModule.AIDataProvider_QueryParams
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAIDataProvider_QueryParams : public UAIDataProvider
{
public:
	struct FName                                       ParamName;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatValue;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntValue;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               BoolValue;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OOWD[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}



};

// Class AIModule.AIDataProvider_Random
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
public:
	float                                              Min;                                                       // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Max;                                                       // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bInteger : 1;                                              // 0x0048(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UCNI[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIDataProvider_Random");
		return ptr;
	}



};

// Class AIModule.AIHotSpotManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIHotSpotManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}



};

// Class AIModule.AIPerceptionComponent
// 0x00E0 (FullSize[0x0190] - InheritedSize[0x00B0])
class UAIPerceptionComponent : public UActorComponent
{
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                              // 0x00B0(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      DominantSense;                                             // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7BNS[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AAIController*                               AIOwner;                                                   // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_D2GR[0x80];                                    // 0x00E0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPerceptionUpdated;                                       // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTargetPerceptionUpdated;                                 // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTargetPerceptionInfoUpdated;                             // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}



	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	void RequestStimuliListenerUpdate();
	void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void GetPerceivedHostileActorsBySense(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);
	void ForgetAll();
};

// Class AIModule.AIPerceptionListenerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIPerceptionListenerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}



};

// Class AIModule.AIPerceptionStimuliSourceComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
public:
	unsigned char                                      bAutoRegisterAsSource : 1;                                 // 0x00B0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S6RM[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                 // 0x00B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}



	void UnregisterFromSense(class UClass* SenseClass);
	void UnregisterFromPerceptionSystem();
	void RegisterWithPerceptionSystem();
	void RegisterForSense(class UClass* SenseClass);
};

// Class AIModule.AISubsystem
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAISubsystem : public UObject
{
public:
	unsigned char                                      UnknownData_SPW4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAISystem*                                   AISystem;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISubsystem");
		return ptr;
	}



};

// Class AIModule.AIPerceptionSystem
// 0x00F8 (FullSize[0x0130] - InheritedSize[0x0038])
class UAIPerceptionSystem : public UAISubsystem
{
public:
	unsigned char                                      UnknownData_80G6[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAISense*>                            Senses;                                                    // 0x0088(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              PerceptionAgingRate;                                       // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Y2SQ[0x94];                                    // 0x009C(0x0094) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}



	void STATIC_ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
	void ReportEvent(class UAISenseEvent* PerceptionEvent);
	bool STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);
	void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	class UClass* STATIC_GetSenseClassForStimulus(class UObject* WorldContextObject, const struct FAIStimulus& Stimulus);
};

// Class AIModule.AIResourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAIResourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}



};

// Class AIModule.AIResource_Movement
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAIResource_Movement : public UGameplayTaskResource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}



};

// Class AIModule.AIResource_Logic
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UAIResource_Logic : public UGameplayTaskResource
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}



};

// Class AIModule.AISense
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UAISense : public UObject
{
public:
	float                                              DefaultExpirationAge;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	AIModule_EAISenseNotifyType                        NotifyType;                                                // 0x002C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_R0LR[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWantsNewPawnNotification : 1;                             // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAutoRegisterAllPawnsAsSources : 1;                        // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N13X[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NF3G[0x40];                                    // 0x0040(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}



};

// Class AIModule.AISense_Blueprint
// 0x0028 (FullSize[0x00A8] - InheritedSize[0x0080])
class UAISense_Blueprint : public UAISense
{
public:
	class UClass*                                      ListenerDataType;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                         // 0x0088(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                         // 0x0098(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}



	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	void K2_OnNewPawn(class APawn* NewPawn);
	void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	void GetAllListenerActors(TArray<class AActor*>* ListenerActors);
};

// Class AIModule.AISense_Damage
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UAISense_Damage : public UAISense
{
public:
	TArray<struct FAIDamageEvent>                      RegisteredEvents;                                          // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}



	void STATIC_ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation);
};

// Class AIModule.AISense_Hearing
// 0x0068 (FullSize[0x00E8] - InheritedSize[0x0080])
class UAISense_Hearing : public UAISense
{
public:
	TArray<struct FAINoiseEvent>                       NoiseEvents;                                               // 0x0080(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                              SpeedOfSoundSq;                                            // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SYCY[0x54];                                    // 0x0094(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}



	void STATIC_ReportNoiseEvent(class UObject* WorldContextObject, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const struct FName& Tag);
};

// Class AIModule.AISense_Prediction
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UAISense_Prediction : public UAISense
{
public:
	TArray<struct FAIPredictionEvent>                  RegisteredEvents;                                          // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}



	void STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
	void STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
};

// Class AIModule.AISense_Sight
// 0x00F0 (FullSize[0x0170] - InheritedSize[0x0080])
class UAISense_Sight : public UAISense
{
public:
	unsigned char                                      UnknownData_H20R[0xC8];                                    // 0x0080(0x00C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxTracesPerTick;                                          // 0x0148(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinQueriesPerTimeSliceCheck;                               // 0x014C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                             MaxTimeSlicePerTick;                                       // 0x0150(0x0008) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              HighImportanceQueryDistanceThreshold;                      // 0x0158(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NLCB[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxQueryImportance;                                        // 0x0160(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SightLimitQueryImportance;                                 // 0x0164(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZX7V[0x8];                                     // 0x0168(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}



};

// Class AIModule.AISense_Team
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UAISense_Team : public UAISense
{
public:
	TArray<struct FAITeamStimulusEvent>                RegisteredEvents;                                          // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}



};

// Class AIModule.AISense_Touch
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UAISense_Touch : public UAISense
{
public:
	TArray<struct FAITouchEvent>                       RegisteredEvents;                                          // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}



};

// Class AIModule.AISenseBlueprintListener
// 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
class UAISenseBlueprintListener : public UUserDefinedStruct
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}



};

// Class AIModule.AISenseConfig
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UAISenseConfig : public UObject
{
public:
	struct FColor                                      DebugColor;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAge;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bStartsEnabled : 1;                                        // 0x0030(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_N4IM[0x17];                                    // 0x0031(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Blueprint
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UAISenseConfig_Blueprint : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Damage
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UAISenseConfig_Damage : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Hearing
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UAISenseConfig_Hearing : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingRange;                                              // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoSHearingRange;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseLoSHearing : 1;                                        // 0x0058(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EPDW[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Prediction
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAISenseConfig_Prediction : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Sight
// 0x0028 (FullSize[0x0070] - InheritedSize[0x0048])
class UAISenseConfig_Sight : public UAISenseConfig
{
public:
	class UClass*                                      Implementation;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRadius;                                               // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoseSightRadius;                                           // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngleDegrees;                              // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAISenseAffiliationFilter                   DetectionByAffiliation;                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AutoSuccessRangeFromLastSeenLocation;                      // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointOfViewBackwardOffset;                                 // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NearClippingRadius;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UWGI[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Team
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAISenseConfig_Team : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}



};

// Class AIModule.AISenseConfig_Touch
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UAISenseConfig_Touch : public UAISenseConfig
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}



};

// Class AIModule.AISenseEvent
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISenseEvent : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}



};

// Class AIModule.AISenseEvent_Damage
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UAISenseEvent_Damage : public UAISenseEvent
{
public:
	struct FAIDamageEvent                              Event;                                                     // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}



};

// Class AIModule.AISenseEvent_Hearing
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UAISenseEvent_Hearing : public UAISenseEvent
{
public:
	struct FAINoiseEvent                               Event;                                                     // 0x0028(0x0030) (Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}



};

// Class AIModule.AISightTargetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAISightTargetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}



};

// Class AIModule.AISystem
// 0x00D8 (FullSize[0x0130] - InheritedSize[0x0058])
class UAISystem : public UAISystemBase
{
public:
	struct FSoftClassPath                              PerceptionSystemClassName;                                 // 0x0058(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FSoftClassPath                              HotSpotManagerClassName;                                   // 0x0070(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AcceptanceRadius;                                          // 0x0088(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathfollowingRegularPathPointAcceptanceRadius;             // 0x008C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PathfollowingNavLinkAcceptanceRadius;                      // 0x0090(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFinishMoveOnGoalOverlap;                                  // 0x0094(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAcceptPartialPaths;                                       // 0x0095(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowStrafing;                                            // 0x0096(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableBTAITasks;                                          // 0x0097(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowControllersAsEQSQuerier;                             // 0x0098(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDebuggerPlugin;                                     // 0x0099(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForgetStaleActors;                                        // 0x009A(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddBlackboardSelfKey;                                     // 0x009B(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              DefaultSightCollisionChannel;                              // 0x009C(0x0001) (Edit, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZIU8[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                       // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnvQueryManager*                            EnvironmentQueryManager;                                   // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAIPerceptionSystem*                         PerceptionSystem;                                          // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                           // 0x00B8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UAIHotSpotManager*                           HotSpotManager;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNavLocalGridManager*                        NavLocalGrids;                                             // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4KZ5[0x58];                                    // 0x00D8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}



	void AILoggingVerbose();
	void AIIgnorePlayers();
};

// Class AIModule.AITask_LockLogic
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UAITask_LockLogic : public UAITask
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AITask_LockLogic");
		return ptr;
	}



};

// Class AIModule.AITask_RunEQS
// 0x0078 (FullSize[0x00E8] - InheritedSize[0x0070])
class UAITask_RunEQS : public UAITask
{
public:
	unsigned char                                      UnknownData_024Y[0x78];                                    // 0x0070(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.AITask_RunEQS");
		return ptr;
	}



	class UAITask_RunEQS* STATIC_RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
};

// Class AIModule.BehaviorTree
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UBehaviorTree : public UObject
{
public:
	unsigned char                                      UnknownData_TPQT[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBTCompositeNode*                            RootNode;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBTDecorator*>                        RootDecorators;                                            // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBTDecoratorLogic>                   RootDecoratorOps;                                          // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FIFW[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}



};

// Class AIModule.BrainComponent
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class UBrainComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_ECJ7[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBlackboardComponent*                        BlackboardComp;                                            // 0x00B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AAIController*                               AIOwner;                                                   // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FNZE[0x40];                                    // 0x00C8(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}



	void StopLogic(const struct FString& Reason);
	void StartLogic();
	void RestartLogic();
	bool IsRunning();
	bool IsPaused();
};

// Class AIModule.BehaviorTreeComponent
// 0x0190 (FullSize[0x0298] - InheritedSize[0x0108])
class UBehaviorTreeComponent : public UBrainComponent
{
public:
	unsigned char                                      UnknownData_INIF[0x20];                                    // 0x0108(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBTNode*>                             NodeInstances;                                             // 0x0128(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MEVM[0x140];                                   // 0x0138(0x0140) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTree*                               DefaultBehaviorTreeAsset;                                  // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0CY2[0x18];                                    // 0x0280(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}



	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
};

// Class AIModule.BehaviorTreeManager
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UBehaviorTreeManager : public UObject
{
public:
	int                                                MaxDebuggerSteps;                                          // 0x0028(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FE0K[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBehaviorTreeTemplateInfo>           LoadedTemplates;                                           // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                          // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}



};

// Class AIModule.BehaviorTreeTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBehaviorTreeTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}



};

// Class AIModule.BlackboardAssetProvider
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBlackboardAssetProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardAssetProvider");
		return ptr;
	}



	class UBlackboardData* GetBlackboardAsset();
};

// Class AIModule.BlackboardComponent
// 0x0108 (FullSize[0x01B8] - InheritedSize[0x00B0])
class UBlackboardComponent : public UActorComponent
{
public:
	class UBrainComponent*                             BrainComp;                                                 // 0x00B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardData*                             DefaultBlackboardAsset;                                    // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBlackboardData*                             BlackboardAsset;                                           // 0x00C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2N9J[0x20];                                    // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                              // 0x00E8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_T7DF[0xC0];                                    // 0x00F8(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}



	void SetValueAsVector(const struct FName& KeyName, const struct FVector& VectorValue);
	void SetValueAsString(const struct FName& KeyName, const struct FString& StringValue);
	void SetValueAsRotator(const struct FName& KeyName, const struct FRotator& VectorValue);
	void SetValueAsObject(const struct FName& KeyName, class UObject* ObjectValue);
	void SetValueAsName(const struct FName& KeyName, const struct FName& NameValue);
	void SetValueAsInt(const struct FName& KeyName, int IntValue);
	void SetValueAsFloat(const struct FName& KeyName, float FloatValue);
	void SetValueAsEnum(const struct FName& KeyName, unsigned char EnumValue);
	void SetValueAsClass(const struct FName& KeyName, class UClass* ClassValue);
	void SetValueAsBool(const struct FName& KeyName, bool BoolValue);
	bool IsVectorValueSet(const struct FName& KeyName);
	struct FVector GetValueAsVector(const struct FName& KeyName);
	struct FString GetValueAsString(const struct FName& KeyName);
	struct FRotator GetValueAsRotator(const struct FName& KeyName);
	class UObject* GetValueAsObject(const struct FName& KeyName);
	struct FName GetValueAsName(const struct FName& KeyName);
	int GetValueAsInt(const struct FName& KeyName);
	float GetValueAsFloat(const struct FName& KeyName);
	unsigned char GetValueAsEnum(const struct FName& KeyName);
	class UClass* GetValueAsClass(const struct FName& KeyName);
	bool GetValueAsBool(const struct FName& KeyName);
	bool GetRotationFromEntry(const struct FName& KeyName, struct FRotator* ResultRotation);
	bool GetLocationFromEntry(const struct FName& KeyName, struct FVector* ResultLocation);
	void ClearValue(const struct FName& KeyName);
};

// Class AIModule.BlackboardData
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UBlackboardData : public UDataAsset
{
public:
	class UBlackboardData*                             Parent;                                                    // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlackboardEntry>                    Keys;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      bHasSynchronizedKeys : 1;                                  // 0x0048(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PO4P[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBlackboardKeyType : public UObject
{
public:
	unsigned char                                      UnknownData_ULSV[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Bool
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Class
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBlackboardKeyType_Class : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Enum
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
public:
	class UEnum*                                       EnumType;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EnumName;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnumNameValid : 1;                                      // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6C9A[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Float
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Float : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Int
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Int : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Name
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Name : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_NativeEnum
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
public:
	struct FString                                     EnumName;                                                  // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnum*                                       EnumType;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Object
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UBlackboardKeyType_Object : public UBlackboardKeyType
{
public:
	class UClass*                                      BaseClass;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Rotator
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_String
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UBlackboardKeyType_String : public UBlackboardKeyType
{
public:
	struct FString                                     StringValue;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}



};

// Class AIModule.BlackboardKeyType_Vector
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}



};

// Class AIModule.BTCompositeNode
// 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
class UBTCompositeNode : public UBTNode
{
public:
	TArray<struct FBTCompositeChild>                   Children;                                                  // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UBTService*>                          Services;                                                  // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y4RB[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bApplyDecoratorScope : 1;                                  // 0x0088(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FVA7[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}



};

// Class AIModule.BTComposite_Selector
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UBTComposite_Selector : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}



};

// Class AIModule.BTComposite_Sequence
// 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
class UBTComposite_Sequence : public UBTCompositeNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}



};

// Class AIModule.BTComposite_SimpleParallel
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTComposite_SimpleParallel : public UBTCompositeNode
{
public:
	TEnumAsByte<AIModule_EBTParallelMode>              FinishMode;                                                // 0x0090(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OAVA[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}



};

// Class AIModule.BTDecorator_BlackboardBase
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UBTDecorator_BlackboardBase : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}



};

// Class AIModule.BTDecorator_Blackboard
// 0x0030 (FullSize[0x00C0] - InheritedSize[0x0090])
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
public:
	int                                                IntValue;                                                  // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              FloatValue;                                                // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     StringValue;                                               // 0x0098(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     CachedDescription;                                         // 0x00A8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      OperationType;                                             // 0x00B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<AIModule_EBTBlackboardRestart>         NotifyObserver;                                            // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_L4R2[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}



};

// Class AIModule.BTDecorator_BlueprintBase
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UBTDecorator_BlueprintBase : public UBTDecorator
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0068(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FName>                               ObservedKeyNames;                                          // 0x0078(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XDKJ[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bCheckConditionOnlyBlackBoardChanges : 1;                  // 0x0098(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIsObservingBB : 1;                                        // 0x0098(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SFKS[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverDeactivated(class AActor* OwnerActor);
	void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveObserverActivated(class AActor* OwnerActor);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionStart(class AActor* OwnerActor);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<AIModule_EBTNodeResult> NodeResult);
	void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<AIModule_EBTNodeResult> NodeResult);
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	bool PerformConditionCheck(class AActor* OwnerActor);
	bool IsDecoratorObserverActive();
	bool IsDecoratorExecutionActive();
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                              // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	GameplayTags_EGameplayContainerMatchType           TagsToMatch;                                               // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0QMT[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0098(0x0020) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FString                                     CachedDescription;                                         // 0x00B8(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}



};

// Class AIModule.BTDecorator_CompareBBEntries
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UBTDecorator_CompareBBEntries : public UBTDecorator
{
public:
	TEnumAsByte<AIModule_EBlackBoardEntryComparison>   Operator;                                                  // 0x0068(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8EZS[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BlackboardKeyA;                                            // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                            // 0x0098(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}



};

// Class AIModule.BTDecorator_ConditionalLoop
// 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}



};

// Class AIModule.BTDecorator_ConeCheck
// 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
class UBTDecorator_ConeCheck : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1YSB[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x0070(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      ConeDirection;                                             // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x00C0(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZP11[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}



};

// Class AIModule.BTDecorator_Cooldown
// 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
class UBTDecorator_Cooldown : public UBTDecorator
{
public:
	float                                              CoolDownTime;                                              // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KN9F[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}



};

// Class AIModule.BTDecorator_DoesPathExist
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UBTDecorator_DoesPathExist : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      BlackboardKeyA;                                            // 0x0068(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	struct FBlackboardKeySelector                      BlackboardKeyB;                                            // 0x0090(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      bUseSelf : 1;                                              // 0x00B8(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VCGA[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EPathExistanceQueryType>      PathQueryType;                                             // 0x00BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D3EG[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FilterClass;                                               // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}



};

// Class AIModule.BTDecorator_ForceSuccess
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_ForceSuccess : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}



};

// Class AIModule.BTDecorator_IsAtLocation
// 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TF6L[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ParametrizedAcceptableRadius;                              // 0x0098(0x0038) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	AIModule_EFAIDistanceType                          GeometricDistanceType;                                     // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZXU[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseParametrizedRadius : 1;                                // 0x00D4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseNavAgentGoalLocation : 1;                              // 0x00D4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPathFindingBasedTest : 1;                                 // 0x00D4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HMN8[0x3];                                     // 0x00D5(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}



};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
public:
	class UClass*                                      TestClass;                                                 // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}



};

// Class AIModule.BTDecorator_KeepInCone
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UBTDecorator_KeepInCone : public UBTDecorator
{
public:
	float                                              ConeHalfAngle;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_633Q[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      ConeOrigin;                                                // 0x0070(0x0028) (Edit, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      Observed;                                                  // 0x0098(0x0028) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSelfAsOrigin : 1;                                      // 0x00C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseSelfAsObserved : 1;                                    // 0x00C0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8JZX[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}



};

// Class AIModule.BTDecorator_Loop
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_Loop : public UBTDecorator
{
public:
	int                                                NumLoops;                                                  // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInfiniteLoop;                                             // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVFQ[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InfiniteLoopTimeoutTime;                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FA4L[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}



};

// Class AIModule.BTDecorator_ReachedMoveGoal
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}



};

// Class AIModule.BTDecorator_SetTagCooldown
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_SetTagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0068(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RAQF[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}



};

// Class AIModule.BTDecorator_TagCooldown
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UBTDecorator_TagCooldown : public UBTDecorator
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0068(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownDuration;                                          // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0074(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bActivatesCooldown;                                        // 0x0075(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7YRP[0x2];                                     // 0x0076(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}



};

// Class AIModule.BTFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}



	void STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner);
	void STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
	void STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value);
	void STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FString& Value);
	void STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value);
	void STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value);
	void STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FName& Value);
	void STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int Value);
	void STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value);
	void STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value);
	void STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value);
	void STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value);
	class UBlackboardComponent* STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner);
	class UBehaviorTreeComponent* STATIC_GetOwnerComponent(class UBTNode* NodeOwner);
	struct FVector STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FString STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FRotator STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UObject* STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	struct FName STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	int STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	float STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	unsigned char STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class UClass* STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	bool STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	class AActor* STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
	void STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key);
};

// Class AIModule.BTService_BlackboardBase
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_BlackboardBase : public UBTService
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}



};

// Class AIModule.BTService_BlueprintBase
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTService_BlueprintBase : public UBTService
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_9CND[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShowEventDetails : 1;                                     // 0x0090(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YTF3[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}



	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveSearchStart(class AActor* OwnerActor);
	void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveDeactivation(class AActor* OwnerActor);
	void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveActivation(class AActor* OwnerActor);
	bool IsServiceActive();
};

// Class AIModule.BTService_DefaultFocus
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
public:
	unsigned char                                      FocusPriority;                                             // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IF0T[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}



};

// Class AIModule.BTService_RunEQS
// 0x0058 (FullSize[0x00F0] - InheritedSize[0x0098])
class UBTService_RunEQS : public UBTService_BlackboardBase
{
public:
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                                // 0x0098(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q8X3[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTService_RunEQS");
		return ptr;
	}



};

// Class AIModule.BTTaskNode
// 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
class UBTTaskNode : public UBTNode
{
public:
	TArray<class UBTService*>                          Services;                                                  // 0x0058(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIgnoreRestartSelf : 1;                                    // 0x0068(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KCD9[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}



};

// Class AIModule.BTTask_BlackboardBase
// 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
class UBTTask_BlackboardBase : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0070(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}



};

// Class AIModule.BTTask_BlueprintBase
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UBTTask_BlueprintBase : public UBTTaskNode
{
public:
	class AAIController*                               AIOwner;                                                   // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                      ActorOwner;                                                // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntervalCountdown                          TickInterval;                                              // 0x0080(0x0008) (Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1NXN[0x18];                                    // 0x0088(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bShowPropertyDetails : 1;                                  // 0x00A0(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XO7F[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}



	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	void SetFinishOnMessage(const struct FName& MessageName);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecute(class AActor* OwnerActor);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbort(class AActor* OwnerActor);
	bool IsTaskExecuting();
	bool IsTaskAborting();
	void FinishExecute(bool bSuccess);
	void FinishAbort();
};

// Class AIModule.BTTask_FinishWithResult
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_FinishWithResult : public UBTTaskNode
{
public:
	TEnumAsByte<AIModule_EBTNodeResult>                Result;                                                    // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FP2F[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_FinishWithResult");
		return ptr;
	}



};

// Class AIModule.BTTask_GameplayTaskBase
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
public:
	unsigned char                                      bWaitForGameplayTask : 1;                                  // 0x0070(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4050[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_GameplayTaskBase");
		return ptr;
	}



};

// Class AIModule.BTTask_MakeNoise
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_MakeNoise : public UBTTaskNode
{
public:
	float                                              Loudnes;                                                   // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XDYH[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}



};

// Class AIModule.BTTask_MoveTo
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius;                                          // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SH41[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      FilterClass;                                               // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ObservedBlackboardValueTolerance;                          // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bObserveBlackboardValue : 1;                               // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTrackMovingGoal : 1;                                      // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectGoalLocation : 1;                                  // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReachTestIncludesAgentRadius : 1;                         // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReachTestIncludesGoalRadius : 1;                          // 0x00AC(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopOnOverlap : 1;                                        // 0x00AC(0x0001) BIT_FIELD (Edit, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopOnOverlapNeedsUpdate : 1;                             // 0x00AD(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_43DD[0x2];                                     // 0x00AE(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}



};

// Class AIModule.BTTask_MoveDirectlyToward
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
public:
	unsigned char                                      bDisablePathUpdateOnGoalLocationChange : 1;                // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bProjectVectorGoalToNavigation : 1;                        // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUpdatedDeprecatedProperties : 1;                          // 0x00B0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ABW7[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}



};

// Class AIModule.BTTask_PawnActionBase
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UBTTask_PawnActionBase : public UBTTaskNode
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}



};

// Class AIModule.BTTask_PlayAnimation
// 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
class UBTTask_PlayAnimation : public UBTTaskNode
{
public:
	class UAnimationAsset*                             AnimationToPlay;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLooping : 1;                                              // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNonBlocking : 1;                                          // 0x0078(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BRL[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBehaviorTreeComponent*                      MyOwnerComp;                                               // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      CachedSkelMesh;                                            // 0x0088(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JBK2[0x20];                                    // 0x0090(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}



};

// Class AIModule.BTTask_PlaySound
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_PlaySound : public UBTTaskNode
{
public:
	class USoundCue*                                   SoundToPlay;                                               // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}



};

// Class AIModule.BTTask_PushPawnAction
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
public:
	class UPawnAction*                                 Action;                                                    // 0x0070(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}



};

// Class AIModule.BTTask_RotateToFaceBBEntry
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
public:
	float                                              Precision;                                                 // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C6YH[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}



};

// Class AIModule.BTTask_RunBehavior
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_RunBehavior : public UBTTaskNode
{
public:
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}



};

// Class AIModule.BTTask_RunBehaviorDynamic
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
public:
	struct FGameplayTag                                InjectionTag;                                              // 0x0070(0x0008) (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               DefaultBehaviorAsset;                                      // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBehaviorTree*                               BehaviorAsset;                                             // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}



};

// Class AIModule.BTTask_RunEQSQuery
// 0x00B8 (FullSize[0x0150] - InheritedSize[0x0098])
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
public:
	class UEnvQuery*                                   QueryTemplate;                                             // 0x0098(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x00A0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                               // 0x00B0(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // 0x00C0(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QKMY[0x7];                                     // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                     // 0x00C8(0x0028) (Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                               bUseBBKey;                                                 // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L5FD[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEQSParametrizedQueryExecutionRequest       EQSRequest;                                                // 0x00F8(0x0048) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5UXJ[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}



};

// Class AIModule.BTTask_SetTagCooldown
// 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
class UBTTask_SetTagCooldown : public UBTTaskNode
{
public:
	struct FGameplayTag                                CooldownTag;                                               // 0x0070(0x0008) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToExistingDuration;                                    // 0x0078(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WR1P[0x3];                                     // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CooldownDuration;                                          // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}



};

// Class AIModule.BTTask_Wait
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBTTask_Wait : public UBTTaskNode
{
public:
	float                                              WaitTime;                                                  // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RandomDeviation;                                           // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}



};

// Class AIModule.BTTask_WaitBlackboardTime
// 0x0028 (FullSize[0x00A0] - InheritedSize[0x0078])
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
public:
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0078(0x0028) (Edit, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}



};

// Class AIModule.CrowdAgentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCrowdAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}



};

// Class AIModule.CrowdFollowingComponent
// 0x0048 (FullSize[0x0298] - InheritedSize[0x0250])
class UCrowdFollowingComponent : public UPathFollowingComponent
{
public:
	unsigned char                                      UnknownData_I84A[0x18];                                    // 0x0250(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     CrowdAgentMoveDirection;                                   // 0x0268(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1FST[0x24];                                    // 0x0274(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}



	void SuspendCrowdSteering(bool bSuspend);
};

// Class AIModule.CrowdManager
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class UCrowdManager : public UCrowdManagerBase
{
public:
	class ANavigationData*                             MyNavData;                                                 // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceConfig>               AvoidanceConfig;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCrowdAvoidanceSamplingPattern>      SamplingPatterns;                                          // 0x0040(0x0010) (Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	int                                                MaxAgents;                                                 // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxAgentRadius;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAvoidedAgents;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MaxAvoidedWalls;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              NavmeshCheckInterval;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathOptimizationInterval;                                  // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              SeparationDirClamp;                                        // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PathOffsetRadiusMultiplier;                                // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OYEX : 4;                                      // 0x0070(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bResolveCollisions : 1;                                    // 0x0070(0x0001) BIT_FIELD (Edit, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_752M[0x7F];                                    // 0x0071(0x007F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}



};

// Class AIModule.DetourCrowdAIController
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class ADetourCrowdAIController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}



};

// Class AIModule.EnvQuery
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UEnvQuery : public UDataAsset
{
public:
	struct FName                                       QueryName;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryOption*>                     Options;                                                   // 0x0038(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}



};

// Class AIModule.EnvQueryContext
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}



};

// Class AIModule.EnvQueryContext_BlueprintBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData_TBPI[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}



	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};

// Class AIModule.EnvQueryContext_Item
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_Item : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}



};

// Class AIModule.EnvQueryContext_Querier
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryContext_Querier : public UEnvQueryContext
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}



};

// Class AIModule.EnvQueryDebugHelpers
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryDebugHelpers : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}



};

// Class AIModule.EnvQueryNode
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryNode : public UObject
{
public:
	int                                                VerNum;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UOFC[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UEnvQueryGenerator : public UEnvQueryNode
{
public:
	struct FString                                     OptionName;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ItemType;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAutoSortTests : 1;                                        // 0x0048(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9E40[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// 0x0080 (FullSize[0x00D0] - InheritedSize[0x0050])
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
public:
	class UClass*                                      SearchedActorClass;                                        // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    GenerateOnlyActorsInRadius;                                // 0x0058(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SearchRadius;                                              // 0x0090(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      SearchCenter;                                              // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
	struct FText                                       GeneratorsActionDescription;                               // 0x0050(0x0018) (Edit, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                   // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      GeneratedItemType;                                         // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IGN0[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}



	class UObject* GetQuerier();
	void DoItemGeneration(TArray<struct FVector> ContextLocations);
	void AddGeneratedVector(const struct FVector& GeneratedVector);
	void AddGeneratedActor(class AActor* GeneratedActor);
};

// Class AIModule.EnvQueryGenerator_Composite
// 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
public:
	TArray<class UEnvQueryGenerator*>                  Generators;                                                // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      bAllowDifferentItemTypes : 1;                              // 0x0060(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasMatchingItemType : 1;                                  // 0x0060(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_64HM[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ForcedItemType;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
public:
	struct FEnvTraceData                               ProjectionData;                                            // 0x0050(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_Cone
// 0x00F0 (FullSize[0x0170] - InheritedSize[0x0080])
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   AlignedPointsDistance;                                     // 0x0080(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   ConeDegrees;                                               // 0x00B8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   AngleStep;                                                 // 0x00F0(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FAIDataProviderFloatValue                   Range;                                                     // 0x0128(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UClass*                                      CenterActor;                                               // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bIncludeContextLocation : 1;                               // 0x0168(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QOCJ[0x7];                                     // 0x0169(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Cone");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
public:
	class UClass*                                      QueryContext;                                              // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_CurrentLocation");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_Donut
// 0x0150 (FullSize[0x01D0] - InheritedSize[0x0080])
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   InnerRadius;                                               // 0x0080(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   OuterRadius;                                               // 0x00B8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfRings;                                             // 0x00F0(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     PointsPerRing;                                             // 0x0128(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvDirection                               ArcDirection;                                              // 0x0160(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x0180(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bUseSpiralPattern;                                         // 0x01B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8L4M[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Center;                                                    // 0x01C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDefineArc : 1;                                            // 0x01C8(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9TJQ[0x7];                                     // 0x01C9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_OnCircle
// 0x0190 (FullSize[0x0210] - InheritedSize[0x0080])
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   CircleRadius;                                              // 0x0080(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                              // 0x00B8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderIntValue                     NumberOfPoints;                                            // 0x00F0(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	AIModule_EPointOnCircleSpacingMethod               PointOnCircleSpacingMethod;                                // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LA55[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FEnvDirection                               ArcDirection;                                              // 0x0130(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ArcAngle;                                                  // 0x0150(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              AngleRadians;                                              // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VBEM[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CircleCenter;                                              // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;               // 0x0198(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UBCC[0x7];                                     // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   CircleCenterZOffset;                                       // 0x01A0(0x0038) (Edit, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FEnvTraceData                               TraceData;                                                 // 0x01D8(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      bDefineArc : 1;                                            // 0x0208(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_71PZ[0x7];                                     // 0x0209(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// 0x0078 (FullSize[0x00F8] - InheritedSize[0x0080])
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
public:
	struct FAIDataProviderFloatValue                   GridSize;                                                  // 0x0080(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   SpaceBetween;                                              // 0x00B8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      GenerateAround;                                            // 0x00F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}



};

// Class AIModule.EnvQueryGenerator_PathingGrid
// 0x0078 (FullSize[0x0170] - InheritedSize[0x00F8])
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
public:
	struct FAIDataProviderBoolValue                    PathToItem;                                                // 0x00F8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UClass*                                      NavigationFilter;                                          // 0x0130(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                       // 0x0138(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}



};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
public:
	unsigned char                                      UnknownData_0WO5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QueryID;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_F3RY[0x24];                                    // 0x0034(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemType;                                                  // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                OptionIndex;                                               // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4KBR[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnQueryFinishedEvent;                                      // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}



	void SetNamedParam(const struct FName& ParamName, float Value);
	TArray<struct FVector> GetResultsAsLocations();
	TArray<class AActor*> GetResultsAsActors();
	bool GetQueryResultsAsLocations(TArray<struct FVector>* ResultLocations);
	bool GetQueryResultsAsActors(TArray<class AActor*>* ResultActors);
	float GetItemScore(int ItemIndex);
	void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<AIModule_EEnvQueryStatus> QueryStatus);
};

// Class AIModule.EnvQueryItemType
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UEnvQueryItemType : public UObject
{
public:
	unsigned char                                      UnknownData_MF6B[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_VectorBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_ActorBase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_Actor
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_Direction
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}



};

// Class AIModule.EnvQueryItemType_Point
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}



};

// Class AIModule.EnvQueryManager
// 0x0108 (FullSize[0x0140] - InheritedSize[0x0038])
class UEnvQueryManager : public UAISubsystem
{
public:
	unsigned char                                      UnknownData_WA20[0x70];                                    // 0x0038(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEnvQueryInstanceCache>              InstanceCache;                                             // 0x00A8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryContext*>                    LocalContexts;                                             // 0x00B8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                        // 0x00C8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RSS1[0x54];                                    // 0x00D8(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxAllowedTestingTime;                                     // 0x012C(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bTestQueriesUsingBreadth;                                  // 0x0130(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_EXAX[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                QueryCountWarningThreshold;                                // 0x0134(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                             QueryCountWarningInterval;                                 // 0x0138(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}



	class UEnvQueryInstanceBlueprintWrapper* STATIC_RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<AIModule_EEnvQueryRunMode> RunMode, class UClass* WrapperClass);
};

// Class AIModule.EnvQueryOption
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UEnvQueryOption : public UObject
{
public:
	class UEnvQueryGenerator*                          Generator;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEnvQueryTest*>                       Tests;                                                     // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest
// 0x01C8 (FullSize[0x01F8] - InheritedSize[0x0030])
class UEnvQueryTest : public UEnvQueryNode
{
public:
	int                                                TestOrder;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestPurpose>              TestPurpose;                                               // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DCOK[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TestComment;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestFilterOperator>       MultipleContextFilterOp;                                   // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestScoreOperator>        MultipleContextScoreOp;                                    // 0x0049(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTestFilterType>           FilterType;                                                // 0x004A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5UVG[0x5];                                     // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderBoolValue                    BoolValue;                                                 // 0x0050(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   FloatValueMin;                                             // 0x0088(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   FloatValueMax;                                             // 0x00C0(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N5Y0[0x1];                                     // 0x00F8(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EEnvTestScoreEquation>        ScoringEquation;                                           // 0x00F9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryTestClamping>        ClampMinType;                                              // 0x00FA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryTestClamping>        ClampMaxType;                                              // 0x00FB(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AIModule_EEQSNormalizationType                     NormalizationType;                                         // 0x00FC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WC57[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAIDataProviderFloatValue                   ScoreClampMin;                                             // 0x0100(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoreClampMax;                                             // 0x0138(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ScoringFactor;                                             // 0x0170(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ReferenceValue;                                            // 0x01A8(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bDefineReferenceValue;                                     // 0x01E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P845[0xF];                                     // 0x01E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bWorkOnFloatValues : 1;                                    // 0x01F0(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FR4A[0x7];                                     // 0x01F1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Distance
// 0x0010 (FullSize[0x0208] - InheritedSize[0x01F8])
class UEnvQueryTest_Distance : public UEnvQueryTest
{
public:
	TEnumAsByte<AIModule_EEnvTestDistance>             TestMode;                                                  // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CX5Y[0x7];                                     // 0x01F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DistanceTo;                                                // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Dot
// 0x0048 (FullSize[0x0240] - InheritedSize[0x01F8])
class UEnvQueryTest_Dot : public UEnvQueryTest
{
public:
	struct FEnvDirection                               LineA;                                                     // 0x01F8(0x0020) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FEnvDirection                               LineB;                                                     // 0x0218(0x0020) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	AIModule_EEnvTestDot                               TestMode;                                                  // 0x0238(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAbsoluteValue;                                            // 0x0239(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4S8R[0x6];                                     // 0x023A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_GameplayTags
// 0x0070 (FullSize[0x0268] - InheritedSize[0x01F8])
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
public:
	struct FGameplayTagQuery                           TagQueryToMatch;                                           // 0x01F8(0x0048) (Edit, Protected, NativeAccessSpecifierProtected)
	bool                                               bUpdatedToUseQuery;                                        // 0x0240(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	GameplayTags_EGameplayContainerMatchType           TagsToMatch;                                               // 0x0241(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XY50[0x6];                                     // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       GameplayTags;                                              // 0x0248(0x0020) (Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Overlap
// 0x0020 (FullSize[0x0218] - InheritedSize[0x01F8])
class UEnvQueryTest_Overlap : public UEnvQueryTest
{
public:
	struct FEnvOverlapData                             OverlapData;                                               // 0x01F8(0x0020) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Overlap");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Pathfinding
// 0x0088 (FullSize[0x0280] - InheritedSize[0x01F8])
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
public:
	TEnumAsByte<AIModule_EEnvTestPathfinding>          TestMode;                                                  // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9T9C[0x7];                                     // 0x01F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Context;                                                   // 0x0200(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    PathFromContext;                                           // 0x0208(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    SkipUnreachable;                                           // 0x0240(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      FilterClass;                                               // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_PathfindingBatch
// 0x0038 (FullSize[0x02B8] - InheritedSize[0x0280])
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
public:
	struct FAIDataProviderFloatValue                   ScanRangeMultiplier;                                       // 0x0280(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Project
// 0x0030 (FullSize[0x0228] - InheritedSize[0x01F8])
class UEnvQueryTest_Project : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               ProjectionData;                                            // 0x01F8(0x0030) (Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Project");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Random
// 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
class UEnvQueryTest_Random : public UEnvQueryTest
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Trace
// 0x00E0 (FullSize[0x02D8] - InheritedSize[0x01F8])
class UEnvQueryTest_Trace : public UEnvQueryTest
{
public:
	struct FEnvTraceData                               TraceData;                                                 // 0x01F8(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIDataProviderBoolValue                    TraceFromContext;                                          // 0x0228(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ItemHeightOffset;                                          // 0x0260(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FAIDataProviderFloatValue                   ContextHeightOffset;                                       // 0x0298(0x0038) (Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UClass*                                      Context;                                                   // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}



};

// Class AIModule.EnvQueryTest_Volume
// 0x0018 (FullSize[0x0210] - InheritedSize[0x01F8])
class UEnvQueryTest_Volume : public UEnvQueryTest
{
public:
	class UClass*                                      VolumeContext;                                             // 0x01F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      VolumeClass;                                               // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bDoComplexVolumeTest : 1;                                  // 0x0208(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_JMN2[0x7];                                     // 0x0209(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Volume");
		return ptr;
	}



};

// Class AIModule.EnvQueryTypes
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEnvQueryTypes : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}



};

// Class AIModule.EQSQueryResultSourceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEQSQueryResultSourceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}



};

// Class AIModule.EQSRenderingComponent
// 0x0040 (FullSize[0x0480] - InheritedSize[0x0440])
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData_262V[0x40];                                    // 0x0440(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}



};

// Class AIModule.EQSTestingPawn
// 0x0098 (FullSize[0x0550] - InheritedSize[0x04B8])
class AEQSTestingPawn : public ACharacter
{
public:
	unsigned char                                      UnknownData_DDGJ[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	class UEnvQuery*                                   QueryTemplate;                                             // 0x04C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEnvNamedValue>                      QueryParams;                                               // 0x04C8(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                               // 0x04D8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              TimeLimitPerStep;                                          // 0x04E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StepToDebugDraw;                                           // 0x04EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AIModule_EEnvQueryHightlightMode                   HighlightMode;                                             // 0x04F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IX5L[0x3];                                     // 0x04F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bDrawLabels : 1;                                           // 0x04F4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDrawFailedItems : 1;                                      // 0x04F4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReRunQueryOnlyOnFinishedMove : 1;                         // 0x04F4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShouldBeVisibleInGame : 1;                                // 0x04F4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTickDuringGame : 1;                                       // 0x04F4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UQ9U[0x3];                                     // 0x04F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             QueryingMode;                                              // 0x04F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_22E6[0x7];                                     // 0x04F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNavAgentProperties                         NavAgentProperties;                                        // 0x0500(0x0030) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WD11[0x20];                                    // 0x0530(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}



};

// Class AIModule.GenericTeamAgentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGenericTeamAgentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}



};

// Class AIModule.GridPathAIController
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class AGridPathAIController : public AAIController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.GridPathAIController");
		return ptr;
	}



};

// Class AIModule.GridPathFollowingComponent
// 0x0030 (FullSize[0x0280] - InheritedSize[0x0250])
class UGridPathFollowingComponent : public UPathFollowingComponent
{
public:
	class UNavLocalGridManager*                        GridManager;                                               // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TQUQ[0x28];                                    // 0x0258(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.GridPathFollowingComponent");
		return ptr;
	}



};

// Class AIModule.NavFilter_AIControllerDefault
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.NavFilter_AIControllerDefault");
		return ptr;
	}



};

// Class AIModule.NavLinkProxy
// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
class ANavLinkProxy : public AActor
{
public:
	unsigned char                                      UnknownData_LUBZ[0x10];                                    // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FNavigationLink>                     PointLinks;                                                // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNavigationSegmentLink>              SegmentLinks;                                              // 0x0240(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UNavLinkCustomComponent*                     SmartLinkComp;                                             // 0x0250(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSmartLinkIsRelevant;                                      // 0x0258(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2WXR[0x7];                                     // 0x0259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSmartLinkReached;                                        // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.NavLinkProxy");
		return ptr;
	}



	void SetSmartLinkEnabled(bool bEnabled);
	void ResumePathFollowing(class AActor* Agent);
	void ReceiveSmartLinkReached(class AActor* Agent, const struct FVector& Destination);
	bool IsSmartLinkEnabled();
	bool HasMovingAgents();
};

// Class AIModule.NavLocalGridManager
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UNavLocalGridManager : public UObject
{
public:
	unsigned char                                      UnknownData_OAZK[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.NavLocalGridManager");
		return ptr;
	}



	bool STATIC_SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
	void STATIC_RemoveLocalNavigationGrid(class UObject* WorldContextObject, int GridId, bool bRebuildGrids);
	bool STATIC_FindLocalNavigationGridPath(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<struct FVector>* PathPoints);
	int STATIC_AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<struct FVector> Locations, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const struct FVector& Location, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const struct FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int Radius2D, float Height, bool bRebuildGrids);
	int STATIC_AddLocalNavigationGridForBox(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent, const struct FRotator& Rotation, int Radius2D, float Height, bool bRebuildGrids);
};

// Class AIModule.PathFollowingManager
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPathFollowingManager : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PathFollowingManager");
		return ptr;
	}



};

// Class AIModule.PawnAction
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UPawnAction : public UObject
{
public:
	class UPawnAction*                                 ChildAction;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnAction*                                 ParentAction;                                              // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPawnActionsComponent*                       OwnerComponent;                                            // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                                     Instigator;                                                // 0x0040(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBrainComponent*                             BrainComp;                                                 // 0x0048(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E0WF[0x30];                                    // 0x0050(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAllowNewSameClassInstance : 1;                            // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bReplaceActiveSameClassInstance : 1;                       // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bShouldPauseMovement : 1;                                  // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAlwaysNotifyOnFinished : 1;                               // 0x0080(0x0001) BIT_FIELD (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_WQDH[0x17];                                    // 0x0081(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}



	TEnumAsByte<AIModule_EAIRequestPriority> GetActionPriority();
	void Finish(TEnumAsByte<AIModule_EPawnActionResult> WithResult);
	class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);
};

// Class AIModule.PawnAction_BlueprintBase
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UPawnAction_BlueprintBase : public UPawnAction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}



	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionPause(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<AIModule_EPawnActionResult> WithResult);
};

// Class AIModule.PawnAction_Move
// 0x0050 (FullSize[0x00E8] - InheritedSize[0x0098])
class UPawnAction_Move : public UPawnAction
{
public:
	class AActor*                                      GoalActor;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                     GoalLocation;                                              // 0x00A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              AcceptableRadius;                                          // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UClass*                                      FilterClass;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowStrafe : 1;                                          // 0x00B8(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bFinishOnOverlap : 1;                                      // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUsePathfinding : 1;                                       // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAllowPartialPath : 1;                                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bProjectGoalToNavigation : 1;                              // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bUpdatePathToGoal : 1;                                     // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bAbortChildActionOnPathChange : 1;                         // 0x00B8(0x0001) BIT_FIELD (NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B87E[0x2F];                                    // 0x00B9(0x002F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}



};

// Class AIModule.PawnAction_Repeat
// 0x0020 (FullSize[0x00B8] - InheritedSize[0x0098])
class UPawnAction_Repeat : public UPawnAction
{
public:
	class UPawnAction*                                 ActionToRepeat;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnAction*                                 RecentActionCopy;                                          // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionFailHandling>      ChildFailureHandlingMode;                                  // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GM7K[0xF];                                     // 0x00A9(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}



};

// Class AIModule.PawnAction_Sequence
// 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
class UPawnAction_Sequence : public UPawnAction
{
public:
	TArray<class UPawnAction*>                         ActionSequence;                                            // 0x0098(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EPawnActionFailHandling>      ChildFailureHandlingMode;                                  // 0x00A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQDK[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPawnAction*                                 RecentActionCopy;                                          // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V44U[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}



};

// Class AIModule.PawnAction_Wait
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UPawnAction_Wait : public UPawnAction
{
public:
	float                                              TimeToWait;                                                // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KPNZ[0xC];                                     // 0x009C(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}



};

// Class AIModule.PawnActionsComponent
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UPawnActionsComponent : public UActorComponent
{
public:
	class APawn*                                       ControlledPawn;                                            // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionStack>                    ActionStacks;                                              // 0x00B8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FPawnActionEvent>                    ActionEvents;                                              // 0x00C8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UPawnAction*                                 CurrentAction;                                             // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7XUN[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}



	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<AIModule_EAIRequestPriority> Priority, class UObject* Instigator);
	bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<AIModule_EAIRequestPriority> Priority);
	TEnumAsByte<AIModule_EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	TEnumAsByte<AIModule_EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);
};

// Class AIModule.PawnSensingComponent
// 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
class UPawnSensingComponent : public UActorComponent
{
public:
	float                                              HearingThreshold;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LOSHearingThreshold;                                       // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SightRadius;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SensingInterval;                                           // 0x00BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HearingMaxSoundAge;                                        // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableSensingUpdates : 1;                                 // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlySensePlayers : 1;                                     // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSeePawns : 1;                                             // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHearNoises : 1;                                           // 0x00C4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4GME[0xB];                                     // 0x00C5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSeePawn;                                                 // 0x00D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHearNoise;                                               // 0x00E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngle;                                     // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PeripheralVisionCosine;                                    // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}



	void SetSensingUpdatesEnabled(bool bEnabled);
	void SetSensingInterval(float NewSensingInterval);
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);
	void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
	void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
	float GetPeripheralVisionCosine();
	float GetPeripheralVisionAngle();
};

// Class AIModule.VisualLoggerExtension
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVisualLoggerExtension : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
