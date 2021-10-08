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
// Enums
//---------------------------------------------------------------------------

// Enum AIModule.EPathFollowingResult
enum class AIModule_EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success  = 0,
	EPathFollowingResult__Blocked  = 1,
	EPathFollowingResult__OffPath  = 2,
	EPathFollowingResult__Aborted  = 3,
	EPathFollowingResult__Skipped_DEPRECATED = 4,
	EPathFollowingResult__Invalid  = 5,
	EPathFollowingResult__EPathFollowingResult_MAX = 6,

};

// Enum AIModule.EEnvQueryStatus
enum class AIModule_EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing    = 0,
	EEnvQueryStatus__Success       = 1,
	EEnvQueryStatus__Failed        = 2,
	EEnvQueryStatus__Aborted       = 3,
	EEnvQueryStatus__OwnerLost     = 4,
	EEnvQueryStatus__MissingParam  = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX = 6,

};

// Enum AIModule.EAISenseNotifyType
enum class AIModule_EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception = 0,
	EAISenseNotifyType__OnPerceptionChange = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX = 2,

};

// Enum AIModule.EAITaskPriority
enum class AIModule_EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest        = 0,
	EAITaskPriority__Low           = 1,
	EAITaskPriority__AutonomousAI  = 2,
	EAITaskPriority__High          = 3,
	EAITaskPriority__Ultimate      = 4,
	EAITaskPriority__EAITaskPriority_MAX = 5,

};

// Enum AIModule.EGenericAICheck
enum class AIModule_EGenericAICheck : uint8_t
{
	EGenericAICheck__Less          = 0,
	EGenericAICheck__LessOrEqual   = 1,
	EGenericAICheck__Equal         = 2,
	EGenericAICheck__NotEqual      = 3,
	EGenericAICheck__GreaterOrEqual = 4,
	EGenericAICheck__Greater       = 5,
	EGenericAICheck__IsTrue        = 6,
	EGenericAICheck__MAX           = 7,

};

// Enum AIModule.EAILockSource
enum class AIModule_EAILockSource : uint8_t
{
	EAILockSource__Animation       = 0,
	EAILockSource__Logic           = 1,
	EAILockSource__Script          = 2,
	EAILockSource__Gameplay        = 3,
	EAILockSource__MAX             = 4,

};

// Enum AIModule.EAIRequestPriority
enum class AIModule_EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript = 0,
	EAIRequestPriority__Logic      = 1,
	EAIRequestPriority__HardScript = 2,
	EAIRequestPriority__Reaction   = 3,
	EAIRequestPriority__Ultimate   = 4,
	EAIRequestPriority__MAX        = 5,

};

// Enum AIModule.EPawnActionEventType
enum class AIModule_EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid  = 0,
	EPawnActionEventType__FailedToStart = 1,
	EPawnActionEventType__InstantAbort = 2,
	EPawnActionEventType__FinishedAborting = 3,
	EPawnActionEventType__FinishedExecution = 4,
	EPawnActionEventType__Push     = 5,
	EPawnActionEventType__EPawnActionEventType_MAX = 6,

};

// Enum AIModule.EPawnActionResult
enum class AIModule_EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted  = 0,
	EPawnActionResult__InProgress  = 1,
	EPawnActionResult__Success     = 2,
	EPawnActionResult__Failed      = 3,
	EPawnActionResult__Aborted     = 4,
	EPawnActionResult__EPawnActionResult_MAX = 5,

};

// Enum AIModule.EPawnActionAbortState
enum class AIModule_EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted = 0,
	EPawnActionAbortState__NotBeingAborted = 1,
	EPawnActionAbortState__MarkPendingAbort = 2,
	EPawnActionAbortState__LatentAbortInProgress = 3,
	EPawnActionAbortState__AbortDone = 4,
	EPawnActionAbortState__MAX     = 5,

};

// Enum AIModule.FAIDistanceType
enum class AIModule_EFAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D    = 0,
	FAIDistanceType__Distance2D    = 1,
	FAIDistanceType__DistanceZ     = 2,
	FAIDistanceType__MAX           = 3,

};

// Enum AIModule.EAIOptionFlag
enum class AIModule_EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default         = 0,
	EAIOptionFlag__Enable          = 1,
	EAIOptionFlag__Disable         = 2,
	EAIOptionFlag__MAX             = 3,

};

// Enum AIModule.EBTFlowAbortMode
enum class AIModule_EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None         = 0,
	EBTFlowAbortMode__LowerPriority = 1,
	EBTFlowAbortMode__Self         = 2,
	EBTFlowAbortMode__Both         = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 4,

};

// Enum AIModule.EBTNodeResult
enum class AIModule_EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded       = 0,
	EBTNodeResult__Failed          = 1,
	EBTNodeResult__Aborted         = 2,
	EBTNodeResult__InProgress      = 3,
	EBTNodeResult__EBTNodeResult_MAX = 4,

};

// Enum AIModule.ETextKeyOperation
enum class AIModule_ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal       = 0,
	ETextKeyOperation__NotEqual    = 1,
	ETextKeyOperation__Contain     = 2,
	ETextKeyOperation__NotContain  = 3,
	ETextKeyOperation__ETextKeyOperation_MAX = 4,

};

// Enum AIModule.EArithmeticKeyOperation
enum class AIModule_EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal = 0,
	EArithmeticKeyOperation__NotEqual = 1,
	EArithmeticKeyOperation__Less  = 2,
	EArithmeticKeyOperation__LessOrEqual = 3,
	EArithmeticKeyOperation__Greater = 4,
	EArithmeticKeyOperation__GreaterOrEqual = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 6,

};

// Enum AIModule.EBasicKeyOperation
enum class AIModule_EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set        = 0,
	EBasicKeyOperation__NotSet     = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX = 2,

};

// Enum AIModule.EBTParallelMode
enum class AIModule_EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground = 0,
	EBTParallelMode__WaitForBackground = 1,
	EBTParallelMode__EBTParallelMode_MAX = 2,

};

// Enum AIModule.EBTDecoratorLogic
enum class AIModule_EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid     = 0,
	EBTDecoratorLogic__Test        = 1,
	EBTDecoratorLogic__And         = 2,
	EBTDecoratorLogic__Or          = 3,
	EBTDecoratorLogic__Not         = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX = 5,

};

// Enum AIModule.EBTChildIndex
enum class AIModule_EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode       = 0,
	EBTChildIndex__TaskNode        = 1,
	EBTChildIndex__EBTChildIndex_MAX = 2,

};

// Enum AIModule.EBTBlackboardRestart
enum class AIModule_EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange = 0,
	EBTBlackboardRestart__ResultChange = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX = 2,

};

// Enum AIModule.EBlackBoardEntryComparison
enum class AIModule_EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal = 0,
	EBlackBoardEntryComparison__NotEqual = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 2,

};

// Enum AIModule.EPathExistanceQueryType
enum class AIModule_EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	EPathExistanceQueryType__HierarchicalQuery = 1,
	EPathExistanceQueryType__RegularPathFinding = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX = 3,

};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class AIModule_EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX = 2,

};

// Enum AIModule.EEQSNormalizationType
enum class AIModule_EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute = 0,
	EEQSNormalizationType__RelativeToScores = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX = 2,

};

// Enum AIModule.EEnvTestDistance
enum class AIModule_EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D   = 0,
	EEnvTestDistance__Distance2D   = 1,
	EEnvTestDistance__DistanceZ    = 2,
	EEnvTestDistance__DistanceAbsoluteZ = 3,
	EEnvTestDistance__EEnvTestDistance_MAX = 4,

};

// Enum AIModule.EEnvTestDot
enum class AIModule_EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D             = 0,
	EEnvTestDot__Dot2D             = 1,
	EEnvTestDot__EEnvTestDot_MAX   = 2,

};

// Enum AIModule.EEnvTestPathfinding
enum class AIModule_EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist = 0,
	EEnvTestPathfinding__PathCost  = 1,
	EEnvTestPathfinding__PathLength = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX = 3,

};

// Enum AIModule.EEnvQueryTestClamping
enum class AIModule_EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None    = 0,
	EEnvQueryTestClamping__SpecifiedValue = 1,
	EEnvQueryTestClamping__FilterThreshold = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 3,

};

// Enum AIModule.EEnvDirection
enum class AIModule_EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints       = 0,
	EEnvDirection__Rotation        = 1,
	EEnvDirection__EEnvDirection_MAX = 2,

};

// Enum AIModule.EEnvOverlapShape
enum class AIModule_EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box          = 0,
	EEnvOverlapShape__Sphere       = 1,
	EEnvOverlapShape__Capsule      = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX = 3,

};

// Enum AIModule.EEnvTraceShape
enum class AIModule_EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line           = 0,
	EEnvTraceShape__Box            = 1,
	EEnvTraceShape__Sphere         = 2,
	EEnvTraceShape__Capsule        = 3,
	EEnvTraceShape__EEnvTraceShape_MAX = 4,

};

// Enum AIModule.EEnvQueryTrace
enum class AIModule_EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None           = 0,
	EEnvQueryTrace__Navigation     = 1,
	EEnvQueryTrace__Geometry       = 2,
	EEnvQueryTrace__NavigationOverLedges = 3,
	EEnvQueryTrace__EEnvQueryTrace_MAX = 4,

};

// Enum AIModule.EAIParamType
enum class AIModule_EAIParamType : uint8_t
{
	EAIParamType__Float            = 0,
	EAIParamType__Int              = 1,
	EAIParamType__Bool             = 2,
	EAIParamType__MAX              = 3,

};

// Enum AIModule.EEnvQueryParam
enum class AIModule_EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float          = 0,
	EEnvQueryParam__Int            = 1,
	EEnvQueryParam__Bool           = 2,
	EEnvQueryParam__EEnvQueryParam_MAX = 3,

};

// Enum AIModule.EEnvQueryRunMode
enum class AIModule_EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult = 0,
	EEnvQueryRunMode__RandomBest5Pct = 1,
	EEnvQueryRunMode__RandomBest25Pct = 2,
	EEnvQueryRunMode__AllMatching  = 3,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 4,

};

// Enum AIModule.EEnvTestScoreOperator
enum class AIModule_EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore = 0,
	EEnvTestScoreOperator__MinScore = 1,
	EEnvTestScoreOperator__MaxScore = 2,
	EEnvTestScoreOperator__Multiply = 3,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 4,

};

// Enum AIModule.EEnvTestFilterOperator
enum class AIModule_EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass = 0,
	EEnvTestFilterOperator__AnyPass = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX = 2,

};

// Enum AIModule.EEnvTestCost
enum class AIModule_EEnvTestCost : uint8_t
{
	EEnvTestCost__Low              = 0,
	EEnvTestCost__Medium           = 1,
	EEnvTestCost__High             = 2,
	EEnvTestCost__EEnvTestCost_MAX = 3,

};

// Enum AIModule.EEnvTestWeight
enum class AIModule_EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None           = 0,
	EEnvTestWeight__Square         = 1,
	EEnvTestWeight__Inverse        = 2,
	EEnvTestWeight__Unused         = 3,
	EEnvTestWeight__Constant       = 4,
	EEnvTestWeight__Skip           = 5,
	EEnvTestWeight__EEnvTestWeight_MAX = 6,

};

// Enum AIModule.EEnvTestScoreEquation
enum class AIModule_EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear  = 0,
	EEnvTestScoreEquation__Square  = 1,
	EEnvTestScoreEquation__InverseLinear = 2,
	EEnvTestScoreEquation__SquareRoot = 3,
	EEnvTestScoreEquation__Constant = 4,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 5,

};

// Enum AIModule.EEnvTestFilterType
enum class AIModule_EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum    = 0,
	EEnvTestFilterType__Maximum    = 1,
	EEnvTestFilterType__Range      = 2,
	EEnvTestFilterType__Match      = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 4,

};

// Enum AIModule.EEnvTestPurpose
enum class AIModule_EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter        = 0,
	EEnvTestPurpose__Score         = 1,
	EEnvTestPurpose__FilterAndScore = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX = 3,

};

// Enum AIModule.EEnvQueryHightlightMode
enum class AIModule_EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All   = 0,
	EEnvQueryHightlightMode__Best5Pct = 1,
	EEnvQueryHightlightMode__Best25Pct = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX = 3,

};

// Enum AIModule.ETeamAttitude
enum class AIModule_ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly        = 0,
	ETeamAttitude__Neutral         = 1,
	ETeamAttitude__Hostile         = 2,
	ETeamAttitude__ETeamAttitude_MAX = 3,

};

// Enum AIModule.EPathFollowingRequestResult
enum class AIModule_EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed = 0,
	EPathFollowingRequestResult__AlreadyAtGoal = 1,
	EPathFollowingRequestResult__RequestSuccessful = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 3,

};

// Enum AIModule.EPathFollowingAction
enum class AIModule_EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error    = 0,
	EPathFollowingAction__NoMove   = 1,
	EPathFollowingAction__DirectMove = 2,
	EPathFollowingAction__PartialPath = 3,
	EPathFollowingAction__PathToGoal = 4,
	EPathFollowingAction__EPathFollowingAction_MAX = 5,

};

// Enum AIModule.EPathFollowingStatus
enum class AIModule_EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle     = 0,
	EPathFollowingStatus__Waiting  = 1,
	EPathFollowingStatus__Paused   = 2,
	EPathFollowingStatus__Moving   = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 4,

};

// Enum AIModule.EPawnActionFailHandling
enum class AIModule_EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess = 0,
	EPawnActionFailHandling__IgnoreFailure = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX = 2,

};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class AIModule_EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 2,

};

// Enum AIModule.EPawnActionMoveMode
enum class AIModule_EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding = 0,
	EPawnActionMoveMode__StraightLine = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AIModule.AIMoveRequest
// 0x0040
struct FAIMoveRequest
{
	class AActor*                                      GoalActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_B0H6[0x38];                                    // 0x0008(0x0038) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AIDamageEvent
// 0x0030
struct FAIDamageEvent
{
	float                                              Amount;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ND02[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      DamagedActor;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.AINoiseEvent
// 0x0030
struct FAINoiseEvent
{
	unsigned char                                      UnknownData_SQDN[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     NoiseLocation;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Loudness;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxRange;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Instigator;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1HID[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AIPredictionEvent
// 0x0018
struct FAIPredictionEvent
{
	class AActor*                                      Requestor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      PredictedActor;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0F3M[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AITeamStimulusEvent
// 0x0038
struct FAITeamStimulusEvent
{
	unsigned char                                      UnknownData_AAMK[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Broadcaster;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      Enemy;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.AITouchEvent
// 0x0020
struct FAITouchEvent
{
	unsigned char                                      UnknownData_W70G[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TouchReceiver;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.AISenseAffiliationFilter
// 0x0004
struct FAISenseAffiliationFilter
{
	unsigned char                                      bDetectEnemies : 1;                                        // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDetectNeutrals : 1;                                       // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDetectFriendlies : 1;                                     // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G3K2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.BTDecoratorLogic
// 0x0004
struct FBTDecoratorLogic
{
	TEnumAsByte<AIModule_EBTDecoratorLogic>            Operation;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7CJC[0x1];                                     // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           Number;                                                    // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// 0x0018
struct FBehaviorTreeTemplateInfo
{
	class UBehaviorTree*                               Asset;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBTCompositeNode*                            Template;                                                  // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VQ66[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.BlackboardEntry
// 0x0018
struct FBlackboardEntry
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardKeyType*                          KeyType;                                                   // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInstanceSynced : 1;                                       // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_82E1[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.BTCompositeChild
// 0x0030
struct FBTCompositeChild
{
	class UBTCompositeNode*                            ChildComposite;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBTTaskNode*                                 ChildTask;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBTDecorator*>                        Decorators;                                                // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBTDecoratorLogic>                   DecoratorOps;                                              // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.BlackboardKeySelector
// 0x0028
struct FBlackboardKeySelector
{
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FName                                       SelectedKeyName;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      SelectedKeyType;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SelectedKeyID;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_YQG9[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bNoneIsAllowedValue : 1;                                   // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TOO7[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AIDataProviderValue
// 0x0020
struct FAIDataProviderValue
{
	unsigned char                                      UnknownData_4C64[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIDataProvider*                             DataBinding;                                               // 0x0010(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DataField;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.AIDataProviderTypedValue
// 0x0010 (0x0030 - 0x0020)
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
	class UClass*                                      PropertyType;                                              // 0x0020(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FEOO[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AIDataProviderFloatValue
// 0x0008 (0x0038 - 0x0030)
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
	float                                              DefaultValue;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSPH[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AIDynamicParam
// 0x0038
struct FAIDynamicParam
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AIModule_EAIParamType                              ParamType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_32T6[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      BBKey;                                                     // 0x0010(0x0028) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// 0x0048
struct FEQSParametrizedQueryExecutionRequest
{
	class UEnvQuery*                                   QueryTemplate;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>                     QueryConfig;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                      EQSQueryBlackboardKey;                                     // 0x0018(0x0028) (Edit, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryRunMode>             RunMode;                                                   // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDSR[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseBBKeyForQueryTemplate : 1;                             // 0x0044(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RBPZ[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.IntervalCountdown
// 0x0008
struct FIntervalCountdown
{
	float                                              Interval;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KZME[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.EnvNamedValue
// 0x0010
struct FEnvNamedValue
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AIModule_EAIParamType                              ParamType;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F5N2[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// 0x001C
struct FCrowdAvoidanceConfig
{
	float                                              VelocityBias;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DesiredVelocityWeight;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentVelocityWeight;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SideBiasWeight;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImpactTimeWeight;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ImpactTimeRange;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CustomPatternIdx;                                          // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AdaptiveDivisions;                                         // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AdaptiveRings;                                             // 0x001A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AdaptiveDepth;                                             // 0x001B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// 0x0020
struct FCrowdAvoidanceSamplingPattern
{
	TArray<float>                                      Angles;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      Radii;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.AIDataProviderBoolValue
// 0x0008 (0x0038 - 0x0030)
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
	bool                                               DefaultValue;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y2KY[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.EnvTraceData
// 0x0030
struct FEnvTraceData
{
	int                                                VersionNum;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXE8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      NavigationFilter;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectDown;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ProjectUp;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtentX;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtentY;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtentZ;                                                   // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PostProjectionVerticalOffset;                              // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceChannel;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              SerializedChannel;                                         // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvTraceShape>               TraceShape;                                                // 0x002A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvQueryTrace>               TraceMode;                                                 // 0x002B(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bTraceComplex : 1;                                         // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOnlyBlockingHits : 1;                                     // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanTraceOnNavMesh : 1;                                    // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanTraceOnGeometry : 1;                                   // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanDisableTrace : 1;                                      // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCanProjectDown : 1;                                       // 0x002C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J3WH[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AIDataProviderIntValue
// 0x0008 (0x0038 - 0x0030)
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
	int                                                DefaultValue;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L9YP[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.EnvDirection
// 0x0020
struct FEnvDirection
{
	class UClass*                                      LineFrom;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      LineTo;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Rotation;                                                  // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvDirection>                DirMode;                                                   // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDJ8[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.EnvQueryInstanceCache
// 0x0178
struct FEnvQueryInstanceCache
{
	class UEnvQuery*                                   Template;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9UAH[0x170];                                   // 0x0008(0x0170) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.EnvOverlapData
// 0x0020
struct FEnvOverlapData
{
	float                                              ExtentX;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtentY;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtentZ;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ShapeOffset;                                               // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              OverlapChannel;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AIModule_EEnvOverlapShape>             OverlapShape;                                              // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MD9U[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bOnlyBlockingHits : 1;                                     // 0x001C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverlapComplex : 1;                                       // 0x001C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSkipOverlapQuerier : 1;                                   // 0x001C(0x0001) BIT_FIELD (Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PHIC[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.PawnActionStack
// 0x0008
struct FPawnActionStack
{
	class UPawnAction*                                 TopAction;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct AIModule.PawnActionEvent
// 0x0018
struct FPawnActionEvent
{
	class UPawnAction*                                 Action;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6DK1[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AIRequestID
// 0x0004
struct FAIRequestID
{
	uint32_t                                           RequestID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct AIModule.AIStimulus
// 0x003C
struct FAIStimulus
{
	float                                              Age;                                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ExpirationAge;                                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              Strength;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     StimulusLocation;                                          // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReceiverLocation;                                          // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Tag;                                                       // 0x0024(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G99X[0xC];                                     // 0x002C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      UnknownData_PGV6 : 1;                                      // 0x0038(0x0001) BIT_FIELD (PADDING)
	unsigned char                                      bSuccessfullySensed : 1;                                   // 0x0038(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AX6I[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.ActorPerceptionUpdateInfo
// 0x0048
struct FActorPerceptionUpdateInfo
{
	int                                                TargetId;                                                  // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       Target;                                                    // 0x0004(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                                 Stimulus;                                                  // 0x000C(0x003C) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.AIDataProviderStructValue
// 0x0010 (0x0030 - 0x0020)
struct FAIDataProviderStructValue : public FAIDataProviderValue
{
	unsigned char                                      UnknownData_43J3[0x10];                                    // 0x0020(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// 0x0020
struct FActorPerceptionBlueprintInfo
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIStimulus>                         LastSensedStimuli;                                         // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      bIsHostile : 1;                                            // 0x0018(0x0001) BIT_FIELD (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FAYU[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.AISightEvent
// 0x0018
struct FAISightEvent
{
	unsigned char                                      UnknownData_DQVZ[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SeenActor;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Observer;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AIModule.EnvQueryRequest
// 0x0068
struct FEnvQueryRequest
{
	class UEnvQuery*                                   QueryTemplate;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                                     Owner;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorld*                                      World;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2XQ7[0x50];                                    // 0x0018(0x0050) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.EnvQueryResult
// 0x0040
struct FEnvQueryResult
{
	unsigned char                                      UnknownData_04H9[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ItemType;                                                  // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9J6J[0x14];                                    // 0x0018(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                OptionIndex;                                               // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QueryID;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PTZ[0xC];                                     // 0x0034(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct AIModule.GenericTeamId
// 0x0001
struct FGenericTeamId
{
	unsigned char                                      TeamID;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
