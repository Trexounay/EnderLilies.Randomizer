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

// Enum Zenith.EAutoClimbType
enum class Zenith_EAutoClimbType : uint8_t
{
	EAutoClimbType__None           = 0,
	EAutoClimbType__Low            = 1,
	EAutoClimbType__Middle         = 2,
	EAutoClimbType__High           = 3,
	EAutoClimbType__EAutoClimbType_MAX = 4,

};

// Enum Zenith.ECommandRemoveTypes
enum class Zenith_ECommandRemoveTypes : uint8_t
{
	ECommandRemoveTypes__Normal    = 0,
	ECommandRemoveTypes__TTL       = 1,
	ECommandRemoveTypes__Override  = 2,
	ECommandRemoveTypes__Clear     = 3,
	ECommandRemoveTypes__NotStartable = 4,
	ECommandRemoveTypes__Group     = 5,
	ECommandRemoveTypes__Frame     = 6,
	ECommandRemoveTypes__ECommandRemoveTypes_MAX = 7,

};

// Enum Zenith.ECurrencyType
enum class Zenith_ECurrencyType : uint8_t
{
	ECurrencyType__Spirit_Lv1      = 0,
	ECurrencyType__Spirit_Lv2      = 1,
	ECurrencyType__Spirit_Lv3      = 2,
	ECurrencyType__Spirit_MAX      = 3,

};

// Enum Zenith.EKnockbackEndType
enum class Zenith_EKnockbackEndType : uint8_t
{
	EKnockbackEndType__Default     = 0,
	EKnockbackEndType__RequestedStop = 1,
	EKnockbackEndType__RequestedCancel = 2,
	EKnockbackEndType__EKnockbackEndType_MAX = 3,

};

// Enum Zenith.EKnockbackTypes
enum class Zenith_EKnockbackTypes : uint8_t
{
	EKnockbackTypes__Normal        = 0,
	EKnockbackTypes__Launch        = 1,
	EKnockbackTypes__EKnockbackTypes_MAX = 2,

};

// Enum Zenith.ECommandInputTypes
enum class Zenith_ECommandInputTypes : uint8_t
{
	ECommandInputTypes__NONE       = 0,
	ECommandInputTypes__JUMP       = 1,
	ECommandInputTypes__DODGE      = 2,
	ECommandInputTypes__ATTACK     = 3,
	ECommandInputTypes__SUMMON     = 4,
	ECommandInputTypes__SUMMON01   = 5,
	ECommandInputTypes__SUMMON_SET_SWITCH = 6,
	ECommandInputTypes__HOOK       = 7,
	ECommandInputTypes__HEAL       = 8,
	ECommandInputTypes__INTERACT   = 9,
	ECommandInputTypes__MAINMENU   = 10,
	ECommandInputTypes__PAUSE      = 11,
	ECommandInputTypes__MINIMAP    = 12,
	ECommandInputTypes__ANY        = 13,
	ECommandInputTypes__ECommandInputTypes_MAX = 14,

};

// Enum Zenith.EItemType
enum class Zenith_EItemType : uint8_t
{
	EItemType__None                = 0,
	EItemType__Dummy               = 1,
	EItemType__Parameter           = 2,
	EItemType__Aptitude            = 3,
	EItemType__Spirit              = 4,
	EItemType__Passive             = 5,
	EItemType__Tip                 = 6,
	EItemType__EItemType_MAX       = 7,

};

// Enum Zenith.EUIInputTypes
enum class Zenith_EUIInputTypes : uint8_t
{
	EUIInputTypes__NONE            = 0,
	EUIInputTypes__VALIDATION      = 1,
	EUIInputTypes__CANCEL          = 2,
	EUIInputTypes__CONTEXT         = 3,
	EUIInputTypes__RIGHT           = 4,
	EUIInputTypes__LEFT            = 5,
	EUIInputTypes__UP              = 6,
	EUIInputTypes__DOWN            = 7,
	EUIInputTypes__NEXT            = 8,
	EUIInputTypes__PREVIOUS        = 9,
	EUIInputTypes__DEBUG           = 10,
	EUIInputTypes__EUIInputTypes_MAX = 11,

};

// Enum Zenith.EDirectionInputTypes
enum class Zenith_EDirectionInputTypes : uint8_t
{
	EDirectionInputTypes__NONE     = 0,
	EDirectionInputTypes__UP       = 1,
	EDirectionInputTypes__DOWN     = 2,
	EDirectionInputTypes__LEFT     = 3,
	EDirectionInputTypes__RIGHT    = 4,
	EDirectionInputTypes__UP_RIGHT = 5,
	EDirectionInputTypes__UP_LEFT  = 6,
	EDirectionInputTypes__DOWN_RIGHT = 7,
	EDirectionInputTypes__DOWN_LEFT = 8,
	EDirectionInputTypes__MAX      = 9,

};

// Enum Zenith.ERichTextFormatType
enum class Zenith_ERichTextFormatType : uint8_t
{
	ERichTextFormatType__DIRECTION = 0,
	ERichTextFormatType__COMMAND   = 1,
	ERichTextFormatType__UI        = 2,
	ERichTextFormatType__CUSTOM    = 3,
	ERichTextFormatType__ERichTextFormatType_MAX = 4,

};

// Enum Zenith.EItemSpiritType
enum class Zenith_EItemSpiritType : uint8_t
{
	EItemSpiritType__Main          = 0,
	EItemSpiritType__Sub           = 1,
	EItemSpiritType__EItemSpiritType_MAX = 2,

};

// Enum Zenith.ESummonSet
enum class Zenith_ESummonSet : uint8_t
{
	ESummonSet__None               = 0,
	ESummonSet__SetA               = 1,
	ESummonSet__SetB               = 2,
	ESummonSet__ESummonSet_MAX     = 3,

};

// Enum Zenith.ESaveExistsType
enum class Zenith_ESaveExistsType : uint8_t
{
	ESaveExistsType__OK            = 0,
	ESaveExistsType__DoesNotExist  = 1,
	ESaveExistsType__Corrupt       = 2,
	ESaveExistsType__UnspecifiedError = 3,
	ESaveExistsType__ESaveExistsType_MAX = 4,

};

// Enum Zenith.EAbilityEffectQueue
enum class Zenith_EAbilityEffectQueue : uint8_t
{
	EAbilityEffectQueue__FIRST     = 0,
	EAbilityEffectQueue__PRE_DEFAULT = 1,
	EAbilityEffectQueue__DEFAULT   = 2,
	EAbilityEffectQueue__POST_DEFAULT = 3,
	EAbilityEffectQueue__MAX       = 4,

};

// Enum Zenith.EAbilityTargetTypes
enum class Zenith_EAbilityTargetTypes : uint8_t
{
	EAbilityTargetTypes__NONE      = 0,
	EAbilityTargetTypes__OPPONENTS = 1,
	EAbilityTargetTypes__ALLIES    = 2,
	EAbilityTargetTypes__ALL       = 3,
	EAbilityTargetTypes__EAbilityTargetTypes_MAX = 4,

};

// Enum Zenith.EAbilityStopReason
enum class Zenith_EAbilityStopReason : uint8_t
{
	EAbilityStopReason__NORMAL     = 0,
	EAbilityStopReason__MAX_EXECUTION_TIME = 1,
	EAbilityStopReason__CANCEL     = 2,
	EAbilityStopReason__END_PLAY   = 3,
	EAbilityStopReason__EAbilityStopReason_MAX = 4,

};

// Enum Zenith.EDamageAttribute
enum class Zenith_EDamageAttribute : uint8_t
{
	EDamageAttribute__Default      = 0,
	EDamageAttribute__Environment  = 1,
	EDamageAttribute__EDamageAttribute_MAX = 2,

};

// Enum Zenith.EAbilityType
enum class Zenith_EAbilityType : uint8_t
{
	EAbilityType__DEFAULT          = 0,
	EAbilityType__PILE_ATTACK      = 1,
	EAbilityType__DASH_ATTACK      = 2,
	EAbilityType__EAbilityType_MAX = 3,

};

// Enum Zenith.EZenithAchievement
enum class Zenith_EZenithAchievement : uint8_t
{
	EZenithAchievement__Invalid    = 0,
	EZenithAchievement__SpiritGet_S5010 = 1,
	EZenithAchievement__SpiritGet_S5020 = 2,
	EZenithAchievement__SpiritGet_S5030 = 3,
	EZenithAchievement__SpiritGet_S5040 = 4,
	EZenithAchievement__SpiritGet_S5050 = 5,
	EZenithAchievement__SpiritGet_S5060 = 6,
	EZenithAchievement__SpiritGet_S5070 = 7,
	EZenithAchievement__SpiritGet_S5080 = 8,
	EZenithAchievement__SpiritGet_AllBosses = 9,
	EZenithAchievement__SpiritGet_Count = 10,
	EZenithAchievement__SpiritGet_Count01 = 11,
	EZenithAchievement__SpiritGet_Count02 = 12,
	EZenithAchievement__SpiritGet_Count_ALL = 13,
	EZenithAchievement__SpiritLevel_Max_Count = 14,
	EZenithAchievement__SpiritLevel_Max_Count01 = 15,
	EZenithAchievement__SpiritLevel_Max_S5000 = 16,
	EZenithAchievement__PassiveGet_Count = 17,
	EZenithAchievement__PassiveGet_Count01 = 18,
	EZenithAchievement__PassiveGet_Count_ALL = 19,
	EZenithAchievement__ItemGet_HpMax_ALL = 20,
	EZenithAchievement__ItemGet_HealPower_ALL = 21,
	EZenithAchievement__ItemGet_PassiveSlot_ALL = 22,
	EZenithAchievement__TipsGet_024To028 = 23,
	EZenithAchievement__TipsGet_045 = 24,
	EZenithAchievement__TipsGet_ALL = 25,
	EZenithAchievement__PlayerLevel = 26,
	EZenithAchievement__PlayerLevel01 = 27,
	EZenithAchievement__PlayerLevel02 = 28,
	EZenithAchievement__RestPoint_Count = 29,
	EZenithAchievement__RestPoint_Count_ALL = 30,
	EZenithAchievement__Maps_Open_ALL = 31,
	EZenithAchievement__Strengthen_First_Use = 32,
	EZenithAchievement__Ending_A   = 33,
	EZenithAchievement__Ending_B   = 34,
	EZenithAchievement__Ending_C   = 35,
	EZenithAchievement__Action_Dash_Lv3 = 36,
	EZenithAchievement__Action_Pile_Lv3 = 37,
	EZenithAchievement__Passive_Get_Final = 38,
	EZenithAchievement__EZenithAchievement_MAX = 39,

};

// Enum Zenith.EDamageEffectType
enum class Zenith_EDamageEffectType : uint8_t
{
	EDamageEffectType__AttackParameter = 0,
	EDamageEffectType__Absolute    = 1,
	EDamageEffectType__TargetPercentage = 2,
	EDamageEffectType__EDamageEffectType_MAX = 3,

};

// Enum Zenith.EStaminaDamageEffectType
enum class Zenith_EStaminaDamageEffectType : uint8_t
{
	EStaminaDamageEffectType__Absolute = 0,
	EStaminaDamageEffectType__TargetPercentage = 1,
	EStaminaDamageEffectType__ForceBreak = 2,
	EStaminaDamageEffectType__EStaminaDamageEffectType_MAX = 3,

};

// Enum Zenith.EAIIdleType
enum class Zenith_EAIIdleType : uint8_t
{
	EAIIdleType__None              = 0,
	EAIIdleType__Patrol            = 1,
	EAIIdleType__IdlePeace         = 2,
	EAIIdleType__EAIIdleType_MAX   = 3,

};

// Enum Zenith.EAptitudeType
enum class Zenith_EAptitudeType : uint8_t
{
	EAptitudeType__None            = 0,
	EAptitudeType__Jump            = 1,
	EAptitudeType__DoubleJump      = 2,
	EAptitudeType__Dodge           = 3,
	EAptitudeType__Dash            = 4,
	EAptitudeType__DashAttack      = 5,
	EAptitudeType__PoundAttack     = 6,
	EAptitudeType__Swim            = 7,
	EAptitudeType__Dive            = 8,
	EAptitudeType__Wallgrab        = 9,
	EAptitudeType__Hook            = 10,
	EAptitudeType__DoorUnlock      = 11,
	EAptitudeType__SpecialAttack   = 12,
	EAptitudeType__Stumble         = 13,
	EAptitudeType__EAptitudeType_MAX = 14,

};

// Enum Zenith.EBoxSide
enum class Zenith_EBoxSide : uint8_t
{
	EBoxSide__None                 = 0,
	EBoxSide__Top                  = 1,
	EBoxSide__Bottom               = 2,
	EBoxSide__Left                 = 3,
	EBoxSide__Right                = 4,
	EBoxSide__EBoxSide_MAX         = 5,

};

// Enum Zenith.ECommandSummonLimitType
enum class Zenith_ECommandSummonLimitType : uint8_t
{
	ECommandSummonLimitType__None  = 0,
	ECommandSummonLimitType__CastCount = 1,
	ECommandSummonLimitType__Time  = 2,
	ECommandSummonLimitType__AttackCount = 3,
	ECommandSummonLimitType__ECommandSummonLimitType_MAX = 4,

};

// Enum Zenith.ECommandCondition
enum class Zenith_ECommandCondition : uint8_t
{
	ECommandCondition__NONE        = 0,
	ECommandCondition__IsGrounded  = 1,
	ECommandCondition__IsAirborne  = 2,
	ECommandCondition__IsSwimming  = 3,
	ECommandCondition__IsAirborneOrSwimming = 4,
	ECommandCondition__IsPressingUp = 5,
	ECommandCondition__IsPressingDown = 6,
	ECommandCondition__IsPressingLeft = 7,
	ECommandCondition__IsPressingRight = 8,
	ECommandCondition__IsPressingUpStrict = 9,
	ECommandCondition__IsPressingHorizontal = 10,
	ECommandCondition__IsPressingVertical = 11,
	ECommandCondition__HasTarget   = 12,
	ECommandCondition__HasNoTarget = 13,
	ECommandCondition__IsTargetGrounded = 14,
	ECommandCondition__IsTargetAirborne = 15,
	ECommandCondition__ECommandCondition_MAX = 16,

};

// Enum Zenith.ECommandResult
enum class Zenith_ECommandResult : uint8_t
{
	ECommandResult__NONE           = 0,
	ECommandResult__IN_PROGRESS    = 1,
	ECommandResult__SUCCESS        = 2,
	ECommandResult__FAILURE        = 3,
	ECommandResult__ECommandResult_MAX = 4,

};

// Enum Zenith.EConditionType
enum class Zenith_EConditionType : uint8_t
{
	EConditionType__Superior       = 0,
	EConditionType__SuperiorOrEqual = 1,
	EConditionType__Equal          = 2,
	EConditionType__InferiorOrEqual = 3,
	EConditionType__Inferior       = 4,
	EConditionType__EConditionType_MAX = 5,

};

// Enum Zenith.EConversationFlowMode
enum class Zenith_EConversationFlowMode : uint8_t
{
	EConversationFlowMode__Manual  = 0,
	EConversationFlowMode__Auto    = 1,
	EConversationFlowMode__EConversationFlowMode_MAX = 2,

};

// Enum Zenith.EDeathStyle
enum class Zenith_EDeathStyle : uint8_t
{
	EDeathStyle__ANIMATION         = 0,
	EDeathStyle__KNOCKBACK         = 1,
	EDeathStyle__PLAYER            = 2,
	EDeathStyle__MANUAL            = 3,
	EDeathStyle__DISSOLVE          = 4,
	EDeathStyle__EDeathStyle_MAX   = 5,

};

// Enum Zenith.EEnemySpawnPointClearTiming
enum class Zenith_EEnemySpawnPointClearTiming : uint8_t
{
	EEnemySpawnPointClearTiming__None = 0,
	EEnemySpawnPointClearTiming__OnDeath = 1,
	EEnemySpawnPointClearTiming__OnPostDeath = 2,
	EEnemySpawnPointClearTiming__EEnemySpawnPointClearTiming_MAX = 3,

};

// Enum Zenith.EZenithError
enum class Zenith_EZenithError : uint8_t
{
	EZenithError__None             = 0,
	EZenithError__SaveFailed       = 1,
	EZenithError__LoadFailed       = 2,
	EZenithError__LoadInvalidSaveDataVersion = 3,
	EZenithError__EZenithError_MAX = 4,

};

// Enum Zenith.EFaction
enum class Zenith_EFaction : uint8_t
{
	EFaction__None                 = 0,
	EFaction__Players              = 1,
	EFaction__Enemies              = 2,
	EFaction__PlayerCompanions     = 3,
	EFaction__EFaction_MAX         = 4,

};

// Enum Zenith.EFadeTypes
enum class Zenith_EFadeTypes : uint8_t
{
	EFadeTypes__None               = 0,
	EFadeTypes__FadeIn             = 1,
	EFadeTypes__FadeOut            = 2,
	EFadeTypes__EFadeTypes_MAX     = 3,

};

// Enum Zenith.EFollowSplineType
enum class Zenith_EFollowSplineType : uint8_t
{
	EFollowSplineType__None        = 0,
	EFollowSplineType__Loop        = 1,
	EFollowSplineType__PingPong    = 2,
	EFollowSplineType__EFollowSplineType_MAX = 3,

};

// Enum Zenith.ELaunchGameIntent
enum class Zenith_ELaunchGameIntent : uint8_t
{
	ELaunchGameIntent__Unknown     = 0,
	ELaunchGameIntent__NewGame     = 1,
	ELaunchGameIntent__Continue    = 2,
	ELaunchGameIntent__NewGamePlus = 3,
	ELaunchGameIntent__ELaunchGameIntent_MAX = 4,

};

// Enum Zenith.EGameEndingType
enum class Zenith_EGameEndingType : uint8_t
{
	EGameEndingType__EndingA       = 0,
	EGameEndingType__EndingB       = 1,
	EGameEndingType__EndingC       = 2,
	EGameEndingType__EGameEndingType_MAX = 3,

};

// Enum Zenith.ERichTextDecoratorMode
enum class Zenith_ERichTextDecoratorMode : uint8_t
{
	ERichTextDecoratorMode__Auto   = 0,
	ERichTextDecoratorMode__ForceKeyboard = 1,
	ERichTextDecoratorMode__ForceGamepad = 2,
	ERichTextDecoratorMode__ERichTextDecoratorMode_MAX = 3,

};

// Enum Zenith.EBindingType
enum class Zenith_EBindingType : uint8_t
{
	EBindingType__All              = 0,
	EBindingType__Gamepad          = 1,
	EBindingType__Keyboard         = 2,
	EBindingType__EBindingType_MAX = 3,

};

// Enum Zenith.EInputActionSet
enum class Zenith_EInputActionSet : uint8_t
{
	EInputActionSet__Game          = 0,
	EInputActionSet__Menu          = 1,
	EInputActionSet__Event         = 2,
	EInputActionSet__EInputActionSet_MAX = 3,

};

// Enum Zenith.EInputStyle
enum class Zenith_EInputStyle : uint8_t
{
	EInputStyle__INPUTSTYLE_NONE   = 0,
	EInputStyle__INPUTSTYLE_KEYBOARD = 1,
	EInputStyle__INPUTSTYLE_XBOX360 = 2,
	EInputStyle__INPUTSTYLE_XBOXONE = 3,
	EInputStyle__INPUTSTYLE_PS4    = 4,
	EInputStyle__INPUTSTYLE_PS5    = 5,
	EInputStyle__INPUTSTYLE_SWITCH = 6,
	EInputStyle__INPUTSTYLE_PC_PS4 = 7,
	EInputStyle__INPUTSTYLE_PC_PS5 = 8,
	EInputStyle__INPUTSTYLE_PC_SWITCH = 9,
	EInputStyle__INPUTSTYLE_MAX    = 10,

};

// Enum Zenith.EInteractableFacingMode
enum class Zenith_EInteractableFacingMode : uint8_t
{
	EInteractableFacingMode__NONE  = 0,
	EInteractableFacingMode__RIGHT = 1,
	EInteractableFacingMode__LEFT  = 2,
	EInteractableFacingMode__EInteractableFacingMode_MAX = 3,

};

// Enum Zenith.EInteractableInputType
enum class Zenith_EInteractableInputType : uint8_t
{
	EInteractableInputType__NONE   = 0,
	EInteractableInputType__UP     = 1,
	EInteractableInputType__DOWN   = 2,
	EInteractableInputType__EInteractableInputType_MAX = 3,

};

// Enum Zenith.ELightEmulatorMode
enum class Zenith_ELightEmulatorMode : uint8_t
{
	ELightEmulatorMode__LightSimulation = 0,
	ELightEmulatorMode__CustomValues = 1,
	ELightEmulatorMode__ELightEmulatorMode_MAX = 2,

};

// Enum Zenith.ECustomMovementMode
enum class Zenith_ECustomMovementMode : uint8_t
{
	ECustomMovementMode__None      = 0,
	ECustomMovementMode__Swimming  = 1,
	ECustomMovementMode__ECustomMovementMode_MAX = 2,

};

// Enum Zenith.EWalkMode
enum class Zenith_EWalkMode : uint8_t
{
	EWalkMode__None                = 0,
	EWalkMode__Walk                = 1,
	EWalkMode__Run                 = 2,
	EWalkMode__Dash                = 3,
	EWalkMode__EWalkMode_MAX       = 4,

};

// Enum Zenith.EPassiveEquipResult
enum class Zenith_EPassiveEquipResult : uint8_t
{
	EPassiveEquipResult__Success   = 0,
	EPassiveEquipResult__InsufficientFreeSlotCount = 1,
	EPassiveEquipResult__PassiveEquipLimitReached = 2,
	EPassiveEquipResult__InvalidPassive = 3,
	EPassiveEquipResult__EPassiveEquipResult_MAX = 4,

};

// Enum Zenith.EPawnVolumeState
enum class Zenith_EPawnVolumeState : uint8_t
{
	EPawnVolumeState__NONE         = 0,
	EPawnVolumeState__ACTIVATED    = 1,
	EPawnVolumeState__CLEARED      = 2,
	EPawnVolumeState__EPawnVolumeState_MAX = 3,

};

// Enum Zenith.ERecollectionItemType
enum class Zenith_ERecollectionItemType : uint8_t
{
	ERecollectionItemType__Boss    = 0,
	ERecollectionItemType__Movie   = 1,
	ERecollectionItemType__ERecollectionItemType_MAX = 2,

};

// Enum Zenith.ETranslucencyLayer
enum class Zenith_ETranslucencyLayer : uint8_t
{
	ETranslucencyLayer__Default    = 0,
	ETranslucencyLayer__Boss       = 1,
	ETranslucencyLayer__Companion  = 2,
	ETranslucencyLayer__EnemyBack  = 3,
	ETranslucencyLayer__SpiritDefault = 4,
	ETranslucencyLayer__EnemyDefault = 5,
	ETranslucencyLayer__AboveEnemyBelowPlayer = 6,
	ETranslucencyLayer__Player     = 7,
	ETranslucencyLayer__AbovePlayerBelowSpiritFront = 8,
	ETranslucencyLayer__SpiritFront = 9,
	ETranslucencyLayer__AbovePlayer = 10,
	ETranslucencyLayer__ETranslucencyLayer_MAX = 11,

};

// Enum Zenith.ESoundHeavinessCategory
enum class Zenith_ESoundHeavinessCategory : uint8_t
{
	ESoundHeavinessCategory__NONE  = 0,
	ESoundHeavinessCategory__Light = 1,
	ESoundHeavinessCategory__Medium = 2,
	ESoundHeavinessCategory__Heavy = 3,
	ESoundHeavinessCategory__ESoundHeavinessCategory_MAX = 4,

};

// Enum Zenith.ESoundAction
enum class Zenith_ESoundAction : uint8_t
{
	ESoundAction__NONE             = 0,
	ESoundAction__Cut              = 1,
	ESoundAction__Knock            = 2,
	ESoundAction__Stab             = 3,
	ESoundAction__ESoundAction_MAX = 4,

};

// Enum Zenith.ESoundMaterial
enum class Zenith_ESoundMaterial : uint8_t
{
	ESoundMaterial__NONE           = 0,
	ESoundMaterial__Iron           = 1,
	ESoundMaterial__Meat           = 2,
	ESoundMaterial__Wood           = 3,
	ESoundMaterial__Stone          = 4,
	ESoundMaterial__ESoundMaterial_MAX = 5,

};

// Enum Zenith.ESoundFamily
enum class Zenith_ESoundFamily : uint8_t
{
	ESoundFamily__None             = 0,
	ESoundFamily__BGM              = 1,
	ESoundFamily__SE               = 2,
	ESoundFamily__Ambience         = 3,
	ESoundFamily__ESoundFamily_MAX = 4,

};

// Enum Zenith.EDamageAdditiveType
enum class Zenith_EDamageAdditiveType : uint8_t
{
	EDamageAdditiveType__Never     = 0,
	EDamageAdditiveType__Always    = 1,
	EDamageAdditiveType__GroundedOnly = 2,
	EDamageAdditiveType__EDamageAdditiveType_MAX = 3,

};

// Enum Zenith.EImpartRootMotionVelocityType
enum class Zenith_EImpartRootMotionVelocityType : uint8_t
{
	EImpartRootMotionVelocityType__Never = 0,
	EImpartRootMotionVelocityType__Always = 1,
	EImpartRootMotionVelocityType__OnAnimationComplete = 2,
	EImpartRootMotionVelocityType__EImpartRootMotionVelocityType_MAX = 3,

};

// Enum Zenith.ESpineRefreshType
enum class Zenith_ESpineRefreshType : uint8_t
{
	ESpineRefreshType__DoNotRefresh = 0,
	ESpineRefreshType__RefreshWithoutTransition = 1,
	ESpineRefreshType__RefreshWithTransition = 2,
	ESpineRefreshType__ESpineRefreshType_MAX = 3,

};

// Enum Zenith.ESpineKnockbackType
enum class Zenith_ESpineKnockbackType : uint8_t
{
	ESpineKnockbackType__NONE      = 0,
	ESpineKnockbackType__UP        = 1,
	ESpineKnockbackType__APEX      = 2,
	ESpineKnockbackType__DOWN_WEAK = 3,
	ESpineKnockbackType__DOWN_STRONG = 4,
	ESpineKnockbackType__ESpineKnockbackType_MAX = 5,

};

// Enum Zenith.ESpineLocomotionType
enum class Zenith_ESpineLocomotionType : uint8_t
{
	ESpineLocomotionType__NONE     = 0,
	ESpineLocomotionType__IDLE     = 1,
	ESpineLocomotionType__WALK     = 2,
	ESpineLocomotionType__RUN      = 3,
	ESpineLocomotionType__JUMP_UP  = 4,
	ESpineLocomotionType__JUMP_APEX = 5,
	ESpineLocomotionType__FALL     = 6,
	ESpineLocomotionType__FLY_IDLE = 7,
	ESpineLocomotionType__FLY_UP   = 8,
	ESpineLocomotionType__FLY_DOWN = 9,
	ESpineLocomotionType__FLY_WALK = 10,
	ESpineLocomotionType__FLY_RUN  = 11,
	ESpineLocomotionType__SWIM_IDLE = 12,
	ESpineLocomotionType__SWIM_UP  = 13,
	ESpineLocomotionType__SWIM_DOWN = 14,
	ESpineLocomotionType__SWIM_LATERAL = 15,
	ESpineLocomotionType__DIVE_IDLE = 16,
	ESpineLocomotionType__DIVE_UP  = 17,
	ESpineLocomotionType__DIVE_DOWN = 18,
	ESpineLocomotionType__DIVE_LATERAL = 19,
	ESpineLocomotionType__ESpineLocomotionType_MAX = 20,

};

// Enum Zenith.ESpineAnimationLayer
enum class Zenith_ESpineAnimationLayer : uint8_t
{
	ESpineAnimationLayer__NONE     = 0,
	ESpineAnimationLayer__LOCOMOTION = 1,
	ESpineAnimationLayer__LOCOMOTION_TRANSITION = 2,
	ESpineAnimationLayer__ACTION   = 3,
	ESpineAnimationLayer__KNOCKBACK_FALL = 4,
	ESpineAnimationLayer__REACTION = 5,
	ESpineAnimationLayer__DEATH    = 6,
	ESpineAnimationLayer__EVENT_LOCOMOTION = 7,
	ESpineAnimationLayer__EVENT_KEEP = 8,
	ESpineAnimationLayer__EVENT    = 9,
	ESpineAnimationLayer__ESpineAnimationLayer_MAX = 10,

};

// Enum Zenith.ESpineTrackLayer
enum class Zenith_ESpineTrackLayer : uint8_t
{
	ESpineTrackLayer__DEFAULT      = 0,
	ESpineTrackLayer__MEAT_ACTION  = 1,
	ESpineTrackLayer__DAMAGE_ADDITIVE = 2,
	ESpineTrackLayer__ESpineTrackLayer_MAX = 3,

};

// Enum Zenith.ESpiritUnequipReason
enum class Zenith_ESpiritUnequipReason : uint8_t
{
	ESpiritUnequipReason__Unequip  = 0,
	ESpiritUnequipReason__SummonSetSwitch = 1,
	ESpiritUnequipReason__ESpiritUnequipReason_MAX = 2,

};

// Enum Zenith.ESpiritEndType
enum class Zenith_ESpiritEndType : uint8_t
{
	ESpiritEndType__Manual         = 0,
	ESpiritEndType__CommandQueueEnd = 1,
	ESpiritEndType__Time           = 2,
	ESpiritEndType__ESpiritEndType_MAX = 3,

};

// Enum Zenith.EResummonType
enum class Zenith_EResummonType : uint8_t
{
	EResummonType__AlwaysSummon    = 0,
	EResummonType__UnsummonIfSummoned = 1,
	EResummonType__EResummonType_MAX = 2,

};

// Enum Zenith.ESpiritDirectionStyle
enum class Zenith_ESpiritDirectionStyle : uint8_t
{
	ESpiritDirectionStyle__FollowInput = 0,
	ESpiritDirectionStyle__NoChange = 1,
	ESpiritDirectionStyle__CopySummoner = 2,
	ESpiritDirectionStyle__DashBeforeAction = 3,
	ESpiritDirectionStyle__DashWhileAction = 4,
	ESpiritDirectionStyle__ESpiritDirectionStyle_MAX = 5,

};

// Enum Zenith.ESpiritLocationStyle
enum class Zenith_ESpiritLocationStyle : uint8_t
{
	ESpiritLocationStyle__Default  = 0,
	ESpiritLocationStyle__ResetToSummoner = 1,
	ESpiritLocationStyle__ESpiritLocationStyle_MAX = 2,

};

// Enum Zenith.StreamingVolumeState
enum class Zenith_EStreamingVolumeState : uint8_t
{
	StreamingVolumeState__None     = 0,
	StreamingVolumeState__LoadingPrimary = 1,
	StreamingVolumeState__LoadingSecondary = 2,
	StreamingVolumeState__FullyLoaded = 3,
	StreamingVolumeState__WaitBeforeUnload = 4,
	StreamingVolumeState__StreamingVolumeState_MAX = 5,

};

// Enum Zenith.ETutorialHook
enum class Zenith_ETutorialHook : uint8_t
{
	ETutorialHook__NONE            = 0,
	ETutorialHook__RestMenu        = 1,
	ETutorialHook__ETutorialHook_MAX = 2,

};

// Enum Zenith.EUMGZOrderLayer
enum class Zenith_EUMGZOrderLayer : uint8_t
{
	EUMGZOrderLayer__Default       = 0,
	EUMGZOrderLayer__AreaDiscovery = 1,
	EUMGZOrderLayer__Menu          = 2,
	EUMGZOrderLayer__Fade          = 3,
	EUMGZOrderLayer__MoviePlayer   = 4,
	EUMGZOrderLayer__PauseMenu     = 5,
	EUMGZOrderLayer__Dialogue      = 6,
	EUMGZOrderLayer__System        = 7,
	EUMGZOrderLayer__SystemController = 8,
	EUMGZOrderLayer__InputLock     = 9,
	EUMGZOrderLayer__EUMGZOrderLayer_MAX = 10,

};

// Enum Zenith.ECompanionMovementMode
enum class Zenith_ECompanionMovementMode : uint8_t
{
	ECompanionMovementMode__DEFAULT = 0,
	ECompanionMovementMode__DIRECT_TIMED = 1,
	ECompanionMovementMode__ECompanionMovementMode_MAX = 2,

};

// Enum Zenith.ECompanionState
enum class Zenith_ECompanionState : uint8_t
{
	ECompanionState__NONE          = 0,
	ECompanionState__MOVE          = 1,
	ECompanionState__IDLE          = 2,
	ECompanionState__SHOW_SPINE    = 3,
	ECompanionState__SPINE_VISIBLE = 4,
	ECompanionState__HIDE_SPINE    = 5,
	ECompanionState__ECompanionState_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Zenith.ObjectArray
// 0x0010
struct FObjectArray
{
	TArray<class UObject*>                             Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.AbilityParams
// 0x0008
struct FAbilityParams
{
	float                                              MaxExecutionTimeOverride;                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageRate;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.AbilityVisualCue
// 0x0018
struct FAbilityVisualCue
{
	bool                                               bUseVisualCue;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9LYU[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             VisualCueFX;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LeadTime;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XEAN[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.AbilityDescription
// 0x0060
struct FAbilityDescription
{
	class UClass*                                      AbilityClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAbilityParams                              AbilityParameters;                                         // 0x0008(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Offset;                                                    // 0x0010(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	SpineExtensionPlugin_ESpineBone                    SpawnBone;                                                 // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0IBV[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomSpawnBone;                                           // 0x0044(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowSpawnBoneRotation;                                  // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SpineExtensionPlugin_ESpineBone                    AttachBone;                                                // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0SWD[0x2];                                     // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomAttachBone;                                          // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowAttachBoneRotation;                                 // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFireAndForget;                                            // 0x0059(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T9WL[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.AbilityTimelineEntry
// 0x0090
struct FAbilityTimelineEntry
{
	struct FAbilityDescription                         AbilityDescription;                                        // 0x0000(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              From;                                                      // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAbilityVisualCue                           AbilityVisualCue;                                          // 0x0068(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class AAbility*                                    Instance;                                                  // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Y43G[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.AbilityTimeline
// 0x0060
struct FAbilityTimeline
{
	class UAbilityComponent*                           TargetAbilityComponent;                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USpineFXComponent*                           FXComponent;                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YO4S[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  GlobalOffset;                                              // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FAbilityTimelineEntry>               Entries;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Zenith.HitInfos
// 0x0120
struct FHitInfos
{
	int                                                ID;                                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1RIO[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  OriginalFromTransform;                                     // 0x0010(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  OriginalToTransform;                                       // 0x0040(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0070(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0RJL[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0080(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // 0x0088(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4Y71[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  HitResult;                                                 // 0x008C(0x008C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                              TimeWhenHit;                                               // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGuard;                                                    // 0x011C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bJustGuard;                                                // 0x011D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bJustDodged;                                               // 0x011E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bParried;                                                  // 0x011F(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.KnockbackData
// 0x0050 (0x0058 - 0x0008)
struct FKnockbackData : public FTableRowBase
{
	bool                                               bForceRestartDamageAnimation;                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bResetVelocity;                                            // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0Q6E[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LaunchVectorGrounded;                                      // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LaunchVectorAir;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LaunchVectorSwim;                                          // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAbsoluteLaunchVector;                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKnockbackUntilGrounded;                                   // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_08A1[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StunTime;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveTime;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Strength;                                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 MovementCurve;                                             // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              AdditionalStates;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.InventoryBaseItemData
// 0x0008
struct FInventoryBaseItemData
{
	struct FName                                       RowName;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.StateTimelineEntry
// 0x0018
struct FStateTimelineEntry
{
	class UClass*                                      State;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              From;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0687[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.StateTimeline
// 0x0020
struct FStateTimeline
{
	unsigned char                                      UnknownData_APM6[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FStateTimelineEntry>                 StateEntries;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Zenith.ShakeData
// 0x0030
struct FShakeData
{
	float                                              OscillationDuration;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OscillationBlendInTime;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OscillationBlendOutTime;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVOscillator                                LocOscillation;                                            // 0x000C(0x0024) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ChallengeSettingsData
// 0x0018
struct FChallengeSettingsData
{
	bool                                               bChallengeSettingsUnlocked;                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerOneShotKill;                                        // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayerCantHeal;                                           // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3PXL[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPlayerLevel;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxSpiritLevel;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ContactDamageFactor;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnemyAttackFactor;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnemyMaxHPFactor;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.NameSet
// 0x0050
struct FNameSet
{
	unsigned char                                      Set[0x50];                                                 // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty

};

// ScriptStruct Zenith.NameTransformMap
// 0x0050
struct FNameTransformMap
{
	TMap<struct FName, struct FTransform>              Entries;                                                   // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SoundTimelineEntry
// 0x0010
struct FSoundTimelineEntry
{
	class UFMODEvent*                                  SoundEvent;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIs2DSound;                                                // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RTT2[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              From;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SoundTimeline
// 0x0020
struct FSoundTimeline
{
	unsigned char                                      UnknownData_98NU[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSoundTimelineEntry>                 SoundEntries;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Zenith.SpineAnimationDefinition
// 0x0048
struct FSpineAnimationDefinition
{
	struct FString                                     AnimationName;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoop;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHold;                                                     // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseRootMotion;                                            // 0x0012(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPSC[0x1];                                     // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndTime;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendIn;                                                   // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EImpartRootMotionVelocityType               ImpartRootMotionVelocityType;                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  MovementModeToSetOnStart;                                  // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  MovementModeToSetOnEnd;                                    // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GXC7[0x1];                                     // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnAnimComplete;                                            // 0x0024(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnAnimEnd;                                                 // 0x0034(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O0QO[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.NextComboAction
// 0x0018
struct FNextComboAction
{
	TArray<Zenith_ECommandCondition>                   Conditions;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      CommandActionClass;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ConditionedCommand
// 0x0020
struct FConditionedCommand
{
	TArray<Zenith_ECommandCondition>                   Conditions;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              CommandActionClasses;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.CommandActionSettingsSummon
// 0x0018
struct FCommandActionSettingsSummon
{
	Zenith_EResummonType                               ResummonType;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Zenith_ESpiritLocationStyle                        SpiritLocationStyle;                                       // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K6AB[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocationOffset;                                            // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Zenith_ESpiritEndType                              SpiritEndType;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QU91[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeUntilAutoEnd;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Zenith.CommandActionSettingsSummonCastLimit
// 0x0048
struct FCommandActionSettingsSummonCastLimit
{
	struct FScriptMulticastDelegate                    OnCastLimitChangedDelegate;                                // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnCastLimitReachedDelegate;                                // 0x0010(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	Zenith_ECommandSummonLimitType                     CastLimitType;                                             // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H2I9[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxCastCount;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              MaxTime;                                                   // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                MaxAttackCount;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DPUI[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.InputSnapshot
// 0x0028
struct FInputSnapshot
{
	struct FVector2D                                   InputVector;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   RightInputVector;                                          // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MoveInput;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FGZD[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CommandInputFlags;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RawInputs;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.DirectionInputProfile
// 0x0009
struct FDirectionInputProfile
{
	bool                                               bNone;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUp;                                                       // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDown;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeft;                                                     // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRight;                                                    // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpRight;                                                  // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpLeft;                                                   // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDownRight;                                                // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDownLeft;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.CommandSettings
// 0x0088
struct FCommandSettings
{
	struct FName                                       ItemRowName;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RuntimeID;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectionInputProfile                      DirectionInputProfile;                                     // 0x0010(0x0009) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9GZ[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BufferTTL;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveIfNotStartable;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlwaysFireWhileCommandPressed;                             // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FireOnDirectionChangeOnly;                                 // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6C80[0x5];                                     // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              NecessaryStates;                                           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ForbiddenStates;                                           // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<Zenith_EAptitudeType>                       NecessaryAptitudes;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<Zenith_EAptitudeType>                       ForbiddenAptitudes;                                        // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TEnumAsByte<Engine_EMovementMode>>          ValidMovementModes;                                        // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      CommandActionType;                                         // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GroupID;                                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F8PD[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.MoveTimelineEntry
// 0x0020
struct FMoveTimelineEntry
{
	class UCurveFloat*                                 MoveCurve;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     MoveVelocity;                                              // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              From;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2I52[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.MoveTimeline
// 0x0040
struct FMoveTimeline
{
	unsigned char                                      UnknownData_MUM4[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMoveTimelineEntry>                  MoveEntries;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8WH0[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.FXTimelineEntry
// 0x0070
struct FFXTimelineEntry
{
	class UParticleSystem*                             PSTemplate;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SpineExtensionPlugin_ESpineBone                    Bone;                                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LHV0[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       CustomBone;                                                // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HXA7[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Offset;                                                    // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              From;                                                      // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAttach;                                                   // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFollowBoneRotation;                                       // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFireAndForget;                                            // 0x005A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ETranslucencyLayer                          TranslucencyLayer;                                         // 0x005B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EPSCPoolMethod                              PoolMethod;                                                // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BQ0E[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    Instance;                                                  // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCYZ[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.FXTimeline
// 0x0028
struct FFXTimeline
{
	unsigned char                                      UnknownData_QKZC[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFXTimelineEntry>                    FXEntries;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Zenith.ConditionedCommandList
// 0x0010
struct FConditionedCommandList
{
	TArray<struct FConditionedCommand>                 AvailableCommands;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SpiritEquipElementSaveData
// 0x0010
struct FSpiritEquipElementSaveData
{
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_05FW[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SpiritID;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YZ5O[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.SpiritEquipSaveData
// 0x0018
struct FSpiritEquipSaveData
{
	Zenith_ESummonSet                                  ActiveSet;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLS7[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpiritEquipElementSaveData>         Elements;                                                  // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ConversationEntry
// 0x0038
struct FConversationEntry
{
	struct FText                                       Speaker;                                                   // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	Zenith_EConversationFlowMode                       Mode;                                                      // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QXKJ[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ConversationData
// 0x0010
struct FConversationData
{
	TArray<struct FConversationEntry>                  Entries;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ConditionedConversationData
// 0x0020
struct FConditionedConversationData
{
	TArray<class UClass*>                              Conditions;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FConversationData                           Conversation;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.KnockbackDeathSettings
// 0x00A0
struct FKnockbackDeathSettings
{
	struct FKnockbackData                              KnockbackData;                                             // 0x0000(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleTemplate;                                          // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ParticleOffset;                                            // 0x0060(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  SoundEvent;                                                // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8Z9Y[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.DissolveDeathSettings
// 0x00B0
struct FDissolveDeathSettings
{
	struct FKnockbackData                              KnockbackData;                                             // 0x0000(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bPlayDeathAnimation;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TT40[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ParticleTemplate;                                          // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LY9M[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  ParticleOffset;                                            // 0x0070(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  SoundEvent;                                                // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GSXZ[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.GameplayCameraAxisLag
// 0x000C
struct FGameplayCameraAxisLag
{
	float                                              MinLagSpeed;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxLagSpeed;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttenuationDistance;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.GameplayCameraOverrideSettings
// 0x0008
struct FGameplayCameraOverrideSettings
{
	unsigned char                                      UnknownData_M0XD[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ZoomValue;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.MapCompleteData
// 0x0018
struct FMapCompleteData
{
	int                                                ActorCountForMapCompletion;                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5UZG[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Zenith_EGameEndingType>                     ClearedEndings;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.CharacterInfosData
// 0x0018 (0x0020 - 0x0008)
struct FCharacterInfosData : public FTableRowBase
{
	struct FText                                       Name;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.AchievementData
// 0x0090 (0x0098 - 0x0008)
struct FAchievementData : public FTableRowBase
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6BJR[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      LockedIcon[0x28];                                          // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      UnlockedIcon[0x28];                                        // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bIsHidden;                                                 // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHideFromListInEarlyAccess;                                // 0x0091(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4P7B[0x6];                                     // 0x0092(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.ActorArray
// 0x0010
struct FActorArray
{
	TArray<class AActor*>                              Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SpiritParameterLevelData
// 0x0048 (0x0050 - 0x0008)
struct FSpiritParameterLevelData : public FTableRowBase
{
	unsigned char                                      CommandSettingsData[0x28];                                 // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              AttackFactor;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECurrencyType                               CurrencyTypeForLevelUp;                                    // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O5IQ[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NecessaryCurrencyForLevelUp;                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCastCountUpgrade;                                         // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCooldownUpgrade;                                          // 0x003D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PN3K[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               LevelUpTexts;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.EnemyParameterLevelData
// 0x0028 (0x0030 - 0x0008)
struct FEnemyParameterLevelData : public FTableRowBase
{
	int                                                HP;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Attack;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Stamina;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Stun;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DropExperience;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JPZQ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         DropHandle;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.PlayerParameterLevelData
// 0x0010 (0x0018 - 0x0008)
struct FPlayerParameterLevelData : public FTableRowBase
{
	int                                                NecessaryExperiencePointsForLevelUp;                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Attack;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Stamina;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_83JU[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.DropGroup
// 0x0018
struct FDropGroup
{
	float                                              DropRatio;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_228T[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              DropCollectables;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.DropData
// 0x0010 (0x0018 - 0x0008)
struct FDropData : public FTableRowBase
{
	TArray<struct FDropGroup>                          Drops;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ErrorData
// 0x0038 (0x0040 - 0x0008)
struct FErrorData : public FTableRowBase
{
	Zenith_EZenithError                                Error;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9GU[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ErrorTitle;                                                // 0x0010(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMessage;                                              // 0x0028(0x0018) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.HealPowerData
// 0x0008 (0x0010 - 0x0008)
struct FHealPowerData : public FTableRowBase
{
	int                                                HealPower;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_34DA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.HealCountData
// 0x0008 (0x0010 - 0x0008)
struct FHealCountData : public FTableRowBase
{
	int                                                MaxHealCount;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H99G[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.RichTextFormatElement
// 0x0038
struct FRichTextFormatElement
{
	Zenith_ERichTextFormatType                         FormatType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EDirectionInputTypes                        DirectionInputType;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EUIInputTypes                               UIInputType;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1A0B[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomInput;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVerticalCenter;                                           // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4ZT3[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.BaseItemData
// 0x0098 (0x00A0 - 0x0008)
struct FBaseItemData : public FTableRowBase
{
	struct FText                                       Name;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ShortExplanation;                                          // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Description;                                               // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FRichTextFormatElement>              FormatElements;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	Zenith_EItemType                                   ItemType;                                                  // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AddToInventory;                                            // 0x0061(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TU6L[0x6];                                     // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Icon[0x28];                                                // 0x0062(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UClass*                                      GetItemTriggerClass;                                       // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  OverrideGetSoundEvent;                                     // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ItemTipData
// 0x0030 (0x00D0 - 0x00A0)
struct FItemTipData : public FBaseItemData
{
	unsigned char                                      TipImage[0x28];                                            // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                Number;                                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X2S3[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.ItemData
// 0x0000 (0x00A0 - 0x00A0)
struct FItemData : public FBaseItemData
{

};

// ScriptStruct Zenith.ItemAptitudeData
// 0x0008 (0x00A8 - 0x00A0)
struct FItemAptitudeData : public FItemData
{
	bool                                               bInitialAptitude;                                          // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EAptitudeType                               Aptitude;                                                  // 0x00A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AR7X[0x6];                                     // 0x00A2(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.ItemParameterData
// 0x0008 (0x00A8 - 0x00A0)
struct FItemParameterData : public FItemData
{
	int                                                BonusMaxHP;                                                // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LGGE[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.ItemDummyData
// 0x0000 (0x00A0 - 0x00A0)
struct FItemDummyData : public FBaseItemData
{

};

// ScriptStruct Zenith.MapData
// 0x0048 (0x0050 - 0x0008)
struct FMapData : public FTableRowBase
{
	unsigned char                                      DestinationWorld[0x28];                                    // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FName                                       PlayerStartTag;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Name;                                                      // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.AreaData
// 0x0028 (0x0030 - 0x0008)
struct FAreaData : public FTableRowBase
{
	struct FText                                       AreaName;                                                  // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bDisplayAreaDiscovery;                                     // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFM9[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DifficultyOverrideAreaID;                                  // 0x0024(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0RHD[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.RecollectionConditionData
// 0x0030
struct FRecollectionConditionData
{
	TArray<struct FName>                               Spirits;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<Zenith_EGameEndingType>                     ClearedEndings;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SeenEvents;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.PlayerDeathSettings
// 0x0060
struct FPlayerDeathSettings
{
	float                                              TimeDilation;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeDilationDuration;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeDilationBlendIn;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeDilationBlendOut;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeBeforeFinishDeathProcess;                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OGQ0[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystem*                             ParticleTemplate;                                          // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ParticleOffset;                                            // 0x0020(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  SoundEvent;                                                // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                        ForceFeedback;                                             // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.GameplayCameraSettings
// 0x0078
struct FGameplayCameraSettings
{
	TEnumAsByte<Engine_ECameraProjectionMode>          ProjectionMode;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YEPQ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FOV;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OrthoWidth;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CameraComponentXOffset;                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     WorldSpaceLocationOffset;                                  // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     SoloForwardWorldOffset;                                    // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoloForwardOffsetBlendSpeed;                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDistance;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistance;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnemyLocationRadius;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCameraAxisLag                      AxisLagX;                                                  // 0x0044(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayCameraAxisLag                      AxisLagY;                                                  // 0x0050(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayCameraAxisLag                      AxisLagZ;                                                  // 0x005C(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              CameraRotationLagSpeed;                                    // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bKeepFloorInView;                                          // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JJKM[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FloorZ;                                                    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ComputeOnlyTargetInCameraLock;                             // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GO05[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.ClearedObjectsSaveData
// 0x0190
struct FClearedObjectsSaveData
{
	TMap<struct FName, struct FNameSet>                ClearedSavedActors;                                        // 0x0000(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FNameTransformMap>       GenericTransforms;                                         // 0x0050(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FNameSet>                MapCompletionActors;                                       // 0x00A0(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FNameSet>                PreviousRunsClearedSavedActors;                            // 0x00F0(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FName, struct FNameTransformMap>       PreviousRunsGenericSavedTransforms;                        // 0x0140(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ActionBinding
// 0x0010
struct FActionBinding
{
	TArray<struct FInputActionKeyMapping>              KeyBindings;                                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.RespawnPointSaveData
// 0x0010
struct FRespawnPointSaveData
{
	struct FName                                       GameMapID;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PlayerStartTag;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ParameterSaveData
// 0x0010
struct FParameterSaveData
{
	int                                                Level;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExpPoint;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkinLevel;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FinalPassivePartCount;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.HealSaveData
// 0x000C
struct FHealSaveData
{
	int                                                HealCountLevel;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HealPowerLevel;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrHealCount;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.InventorySaveData
// 0x0170
struct FInventorySaveData
{
	TArray<struct FName>                               ItemGenerics;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ItemParameters;                                            // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ItemSpirits;                                               // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, int>                            ItemSpiritLevels;                                          // 0x0030(0x0050) (NativeAccessSpecifierPublic)
	TArray<struct FName>                               ItemSpiritCheckedStatus;                                   // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ItemAptitudes;                                             // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ItemPassives;                                              // 0x00A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ItemPassiveCheckedStatus;                                  // 0x00B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               ItemTips;                                                  // 0x00C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FName, bool>                           ItemTipsReadStatus;                                        // 0x00D0(0x0050) (NativeAccessSpecifierPublic)
	TMap<Zenith_ECurrencyType, int>                    Currencies;                                                // 0x0120(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.PassiveEquipSaveData
// 0x0018
struct FPassiveEquipSaveData
{
	int                                                SlotCount;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OKY2[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ItemEquipIDs;                                              // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.PlayerSaveData
// 0x0238
struct FPlayerSaveData
{
	struct FRespawnPointSaveData                       RespawnPoint;                                              // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FParameterSaveData                          Parameters;                                                // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FHealSaveData                               Heals;                                                     // 0x0020(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MES6[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInventorySaveData                          Inventory;                                                 // 0x0030(0x0170) (NativeAccessSpecifierPublic)
	struct FSpiritEquipSaveData                        SpiritEquip;                                               // 0x01A0(0x0018) (NativeAccessSpecifierPublic)
	struct FPassiveEquipSaveData                       PassiveEquip;                                              // 0x01B8(0x0018) (NativeAccessSpecifierPublic)
	TArray<struct FName>                               OpenedGameMapIDs;                                          // 0x01D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               OpenedAreaIDs;                                             // 0x01E0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PlayedEventIDs;                                            // 0x01F0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               PreviousRunsPlayedEventIDs;                                // 0x0200(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SeenTutorialIDs;                                           // 0x0210(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               RecollectionCheckedIDs;                                    // 0x0220(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MinimapUISizeIndex;                                        // 0x0230(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U9NT[0x4];                                     // 0x0234(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.GameStats
// 0x0004
struct FGameStats
{
	float                                              PlayTime;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.BossRushRecordData
// 0x000C
struct FBossRushRecordData
{
	float                                              Time;                                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DifficultyLevel;                                           // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewGamePlusGeneration;                                     // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.GameAchievementsData
// 0x0010
struct FGameAchievementsData
{
	TArray<Zenith_EZenithAchievement>                  Achievements;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.MinimapData
// 0x0040
struct FMinimapData
{
	unsigned char                                      MinimapTexture[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FVector                                     MapSize;                                                   // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CenterWorldLocation;                                       // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.GameMapData
// 0x0128 (0x0130 - 0x0008)
struct FGameMapData : public FTableRowBase
{
	unsigned char                                      World[0x28];                                               // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       Name;                                                      // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         AreaData;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bContainsRestPoint;                                        // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8HTB[0x7];                                     // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      BGMEvent[0x28];                                            // 0x0059(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      AmbienceEvent[0x28];                                       // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FMapCompleteData                            MapCompleteData;                                           // 0x00B0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      MapTexture[0x28];                                          // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FMinimapData                                MinimapData;                                               // 0x00F0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.AxisBinding
// 0x0010
struct FAxisBinding
{
	TArray<struct FInputAxisKeyMapping>                KeyBindings;                                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.KnockbackRuntimeData
// 0x0088
struct FKnockbackRuntimeData
{
	int                                                KnockbackID;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C693[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKnockbackData                              KnockbackData;                                             // 0x0008(0x0058) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	Zenith_EKnockbackTypes                             KnockbackType;                                             // 0x0060(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V7X6[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Direction;                                                 // 0x0064(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LaunchVector;                                              // 0x0070(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExecutionTime;                                             // 0x007C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInRecovery;                                               // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_EKnockbackEndType                           EndType;                                                   // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VIJZ[0x6];                                     // 0x0082(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.BossRushData
// 0x0010
struct FBossRushData
{
	TArray<struct FBossRushRecordData>                 Records;                                                   // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.GameModeSaveData
// 0x02C0
struct FGameModeSaveData
{
	int                                                DifficultyLevel;                                           // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DHU2[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, int>                            DifficultyForAreas;                                        // 0x0008(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TMap<Zenith_EGameEndingType, int>                  ReachedGameEndings;                                        // 0x0058(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                NewGamePlusGeneration;                                     // 0x00A8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T5KR[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Zenith_EGameEndingType, int>                  PreviousRunsReachedGameEndings;                            // 0x00B0(0x0050) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FChallengeSettingsData                      ChallengeSettings;                                         // 0x0100(0x0018) (NoDestructor, NativeAccessSpecifierPublic)
	struct FGameStats                                  GameStats;                                                 // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_33BB[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClearedObjectsSaveData                     ClearedObjects;                                            // 0x0120(0x0190) (NativeAccessSpecifierPublic)
	struct FBossRushData                               BossRushData;                                              // 0x02B0(0x0010) (NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.GameSettingsData
// 0x0028
struct FGameSettingsData
{
	float                                              Gamma;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResolutionScale;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayDamageValues;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayHealValues;                                        // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayPlayerUI;                                          // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayEnemyFloatingGauges;                               // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseForceFeedback;                                         // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCameraShake;                                           // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisplayInternalAchievementNotifications;                  // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHoldForSummonSetSwitch;                                   // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDamageAreaPostProcess;                              // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNoAutoClimbWhilePressingDown;                             // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RUCK[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Zenith_EGameEndingType>                     ReachedGameEndings;                                        // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SoundMaterialMap
// 0x0050
struct FSoundMaterialMap
{
	TMap<Zenith_ESoundMaterial, class UFMODEvent*>     Sounds;                                                    // 0x0000(0x0050) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SurfaceToSoundMap
// 0x0050
struct FSurfaceToSoundMap
{
	TMap<TEnumAsByte<PhysicsCore_EPhysicalSurface>, class UFMODEvent*> Sounds;                                                    // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ItemPassiveData
// 0x0018 (0x00B8 - 0x00A0)
struct FItemPassiveData : public FBaseItemData
{
	int                                                SlotCount;                                                 // 0x00A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PWX1[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PassiveClass;                                              // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAvailableInGame;                                          // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TUV2[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.PassiveEquipRuntimeData
// 0x00C8
struct FPassiveEquipRuntimeData
{
	struct FName                                       PassiveID;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemPassiveData                            ItemPassiveData;                                           // 0x0008(0x00B8) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UPassive*                                    PassiveInstance;                                           // 0x00C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SoundActionMaterialMap
// 0x0050
struct FSoundActionMaterialMap
{
	TMap<Zenith_ESoundAction, struct FSoundMaterialMap> Sounds;                                                    // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SpineTransitionDefinition
// 0x0070
struct FSpineTransitionDefinition
{
	struct FString                                     AnimationFromName;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimationToName;                                           // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinFromAnimPlayedTime;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MOVO[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpineAnimationDefinition                   TransitionDefinition;                                      // 0x0028(0x0048) (Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SpineAnimDamageSetDefinition
// 0x0020
struct FSpineAnimDamageSetDefinition
{
	TArray<struct FSpineAnimationDefinition>           DamageStartDefinitions;                                    // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FSpineAnimationDefinition>           DamageStopDefinitions;                                     // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.ItemSpiritData
// 0x0088 (0x0128 - 0x00A0)
struct FItemSpiritData : public FBaseItemData
{
	Zenith_EItemSpiritType                             ItemSpiritType;                                            // 0x00A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4SDJ[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDataTable*                                  SpiritLevelTable;                                          // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInitialSpirit;                                            // 0x00B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBossSpirit;                                               // 0x00B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8SZJ[0x6];                                     // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CompanionClass[0x28];                                      // 0x00B2(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                LayerPriority;                                             // 0x00E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4A7M[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         AptitudeToUnlock;                                          // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         AptitudeToUnlockTutorial;                                  // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         SecondaryAptitudeToUnlock;                                 // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                         SecondaryAptitudeToUnlockTutorial;                         // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.CompanionData
// 0x0140
struct FCompanionData
{
	struct FItemSpiritData                             ItemSpiritData;                                            // 0x0000(0x0128) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AZenithAICompanionController> CompanionController;                                       // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AZenithCompanionCharacter>    Companion;                                                 // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0138(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P80O[0x7];                                     // 0x0139(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.SpiritData
// 0x0148
struct FSpiritData
{
	struct FName                                       SpiritID;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FItemSpiritData                             ItemSpiritData;                                            // 0x0008(0x0128) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class AZenithSpirit*                               ZenithSpirit;                                              // 0x0130(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommandSettingsData*                        CommandSettingsData;                                       // 0x0138(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0140(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H2Y6[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.SummonSetData
// 0x0050
struct FSummonSetData
{
	TMap<Zenith_ECommandInputTypes, struct FSpiritData> Spirits;                                                   // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.TimedStateData
// 0x0018
struct FTimedStateData
{
	TArray<class UClass*>                              States;                                                    // 0x0000(0x0010) (ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              RemainingTime;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LN1V[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.UIBinding
// 0x0010
struct FUIBinding
{
	TArray<struct FKey>                                KeyBindings;                                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.UIInputSettingsData
// 0x0058
struct FUIInputSettingsData
{
	int                                                Version;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RX84[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<Zenith_EUIInputTypes, struct FUIBinding>      BindingsForUI;                                             // 0x0008(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.SummonSetCompanions
// 0x0050
struct FSummonSetCompanions
{
	TMap<class AZenithSpirit*, struct FCompanionData>  Companions;                                                // 0x0000(0x0050) (Transient, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.RecollectionItemData
// 0x0030 (0x0038 - 0x0008)
struct FRecollectionItemData : public FTableRowBase
{
	struct FRecollectionConditionData                  Conditions;                                                // 0x0008(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.RecollectionMovieData
// 0x0050 (0x0088 - 0x0038)
struct FRecollectionMovieData : public FRecollectionItemData
{
	struct FText                                       MovieName;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      Sprite[0x28];                                              // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UMediaSource*                                MediaSource;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                                  Subtitles;                                                 // 0x0080(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.RecollectionBossData
// 0x0068 (0x00A0 - 0x0038)
struct FRecollectionBossData : public FRecollectionItemData
{
	struct FText                                       BossName;                                                  // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	unsigned char                                      Sprite[0x28];                                              // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FDataTableRowHandle                         Map;                                                       // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       PlayerStartTag;                                            // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PlayerSpawnOffset;                                         // 0x0090(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8H8C[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.SpawnPointSet
// 0x0050
struct FSpawnPointSet
{
	unsigned char                                      Set[0x50];                                                 // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty

};

// ScriptStruct Zenith.SpiritActionDefinition
// 0x0020
struct FSpiritActionDefinition
{
	TArray<Zenith_ECommandCondition>                   Conditions;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              CommandActionClasses;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.InitialSpiritLevelData
// 0x0008 (0x0010 - 0x0008)
struct FInitialSpiritLevelData : public FTableRowBase
{
	int                                                InitialLevel;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X26G[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Zenith.SubtitleData
// 0x0028 (0x0030 - 0x0008)
struct FSubtitleData : public FTableRowBase
{
	float                                              From;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              To;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Text;                                                      // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                              FadeInTime;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FadeOutTime;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.TutorialData
// 0x0028 (0x0030 - 0x0008)
struct FTutorialData : public FTableRowBase
{
	Zenith_ETutorialHook                               TutorialHook;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TEV1[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      TutorialCondition;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TutorialMessage;                                           // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.TutorialKeyDataPair
// 0x0038
struct FTutorialKeyDataPair
{
	struct FName                                       Key;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTutorialData                               TutorialData;                                              // 0x0008(0x0030) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.TutorialDialogData
// 0x0048 (0x0050 - 0x0008)
struct FTutorialDialogData : public FTableRowBase
{
	struct FText                                       Title;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0020(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FRichTextFormatElement>              FormatElements;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UMediaSource*                                Video;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Zenith.RespawnPointData
// 0x0010
struct FRespawnPointData
{
	struct FName                                       GameMapID;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PlayerStartTag;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
