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

// Enum EventPlugin.EEventActionResult
enum class EventPlugin_EEventActionResult : uint8_t
{
	EEventActionResult__NONE       = 0,
	EEventActionResult__IN_PROGRESS = 1,
	EEventActionResult__SUCCESS    = 2,
	EEventActionResult__FAILURE    = 3,
	EEventActionResult__EEventActionResult_MAX = 4,

};

// Enum EventPlugin.EActorBindingTransformType
enum class EventPlugin_EActorBindingTransformType : uint8_t
{
	EActorBindingTransformType__Absolute = 0,
	EActorBindingTransformType__Local = 1,
	EActorBindingTransformType__EActorBindingTransformType_MAX = 2,

};

// Enum EventPlugin.EEventActorType
enum class EventPlugin_EEventActorType : uint8_t
{
	EEventActorType__None          = 0,
	EEventActorType__Player        = 1,
	EEventActorType__Binding       = 2,
	EEventActorType__EEventActorType_MAX = 3,

};

// Enum EventPlugin.EEventNodeType
enum class EventPlugin_EEventNodeType : uint8_t
{
	EEventNodeType__None           = 0,
	EEventNodeType__System         = 1,
	EEventNodeType__Camera         = 2,
	EEventNodeType__NPC            = 3,
	EEventNodeType__Player         = 4,
	EEventNodeType__EEventNodeType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EventPlugin.EventNode
// 0x0078
struct FEventNode
{
	int                                                ID;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EventPlugin_EEventNodeType                         NodeType;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EventPlugin_EEventActorType                        ActorSubject;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PXO4[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ActorSubjectBinding;                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EventPlugin_EEventActorType                        ActorTarget;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AF1S[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ActorTargetBinding;                                        // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EEPK[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Text;                                                      // 0x0020(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<int>                                        Links;                                                     // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Coordinates;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEventAction*>                        Actions;                                                   // 0x0050(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UEventCondition*>                     Conditions;                                                // 0x0060(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UDialogueWave*                               DialogueWave;                                              // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct EventPlugin.ActorBindingInfos
// 0x0060
struct FActorBindingInfos
{
	unsigned char                                      ActorClass[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	bool                                               bDestroyOnEventFinish;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EventPlugin_EActorBindingTransformType             TransformType;                                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U3HY[0x6];                                     // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SpawnTransform;                                            // 0x0030(0x0030) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
