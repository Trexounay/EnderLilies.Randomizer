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

// Enum VariantManagerContent.EPropertyValueCategory
enum class VariantManagerContent_EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined = 0,
	EPropertyValueCategory__Generic = 1,
	EPropertyValueCategory__RelativeLocation = 2,
	EPropertyValueCategory__RelativeRotation = 3,
	EPropertyValueCategory__RelativeScale3D = 4,
	EPropertyValueCategory__Visibility = 5,
	EPropertyValueCategory__Material = 6,
	EPropertyValueCategory__Color  = 7,
	EPropertyValueCategory__Option = 8,
	EPropertyValueCategory__EPropertyValueCategory_MAX = 9,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0028
struct FCapturedPropSegment
{
	struct FString                                     PropertyName;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PropertyIndex;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F2JB[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ComponentName;                                             // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct VariantManagerContent.VariantDependency
// 0x0058
struct FVariantDependency
{
	unsigned char                                      VariantSet[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Variant[0x28];                                             // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               bEnabled;                                                  // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8PN2[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x0008
struct FFunctionCaller
{
	struct FName                                       FunctionName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
