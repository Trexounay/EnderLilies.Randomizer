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

// Enum FMODStudio.EFMODEventProperty
enum class FMODStudio_EFMODEventProperty : uint8_t
{
	EFMODEventProperty__ChannelPriority = 0,
	EFMODEventProperty__ScheduleDelay = 1,
	EFMODEventProperty__ScheduleLookahead = 2,
	EFMODEventProperty__MinimumDistance = 3,
	EFMODEventProperty__MaximumDistance = 4,
	EFMODEventProperty__Count      = 5,
	EFMODEventProperty__EFMODEventProperty_MAX = 6,

};

// Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
enum class FMODStudio_EFMOD_STUDIO_STOP_MODE : uint8_t
{
	ALLOWFADEOUT                   = 0,
	IMMEDIATE                      = 1,
	EFMOD_STUDIO_STOP_MODE_MAX     = 2,

};

// Enum FMODStudio.EFMODEventControlKey
enum class FMODStudio_EFMODEventControlKey : uint8_t
{
	EFMODEventControlKey__Stop     = 0,
	EFMODEventControlKey__Play     = 1,
	EFMODEventControlKey__EFMODEventControlKey_MAX = 2,

};

// Enum FMODStudio.EFMODSpeakerMode
enum class FMODStudio_EFMODSpeakerMode : uint8_t
{
	EFMODSpeakerMode__Stereo       = 0,
	EFMODSpeakerMode__Surround_5   = 1,
	EFMODSpeakerMode__Surround_7   = 2,
	EFMODSpeakerMode__EFMODSpeakerMode_MAX = 3,

};

// Enum FMODStudio.EFMODLogging
enum class FMODStudio_EFMODLogging : uint8_t
{
	LEVEL_NONE                     = 0,
	LEVEL_ERROR                    = 1,
	LEVEL_WARNING                  = 2,
	LEVEL_LOG                      = 3,
	TYPE_MEMORY                    = 4,
	TYPE_FILE                      = 5,
	TYPE_CODEC                     = 6,
	TYPE_TRACE                     = 7,
	DISPLAY_TIMESTAMPS             = 8,
	DISPLAY_LINENUMBERS            = 9,
	DISPLAY_THREAD                 = 10,
	EFMODLogging_MAX               = 11,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FMODStudio.FMODAttenuationDetails
// 0x000C
struct FFMODAttenuationDetails
{
	unsigned char                                      bOverrideAttenuation : 1;                                  // 0x0000(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_813P[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDistance;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumDistance;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.FMODOcclusionDetails
// 0x0003
struct FFMODOcclusionDetails
{
	bool                                               bEnableOcclusion;                                          // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              OcclusionTraceChannel;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseComplexCollisionForOcclusion;                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.FMODEventControlChannel
// 0x0000 (0x0098 - 0x0098)
struct FFMODEventControlChannel : public FMovieSceneByteChannel
{

};

// ScriptStruct FMODStudio.FMODProjectLocale
// 0x0028
struct FFMODProjectLocale
{
	struct FString                                     LocaleName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LocaleCode;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDefault;                                                  // 0x0020(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3ST[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct FMODStudio.CustomPoolSizes
// 0x0014
struct FCustomPoolSizes
{
	int                                                Desktop;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Mobile;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PS4;                                                       // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Switch;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                XboxOne;                                                   // 0x0010(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.FMODAssetLookupRow
// 0x0020 (0x0028 - 0x0008)
struct FFMODAssetLookupRow : public FTableRowBase
{
	struct FString                                     PackageName;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssetName;                                                 // 0x0018(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.FMODLocalizedBankTable
// 0x0008 (0x0010 - 0x0008)
struct FFMODLocalizedBankTable : public FTableRowBase
{
	class UDataTable*                                  Banks;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.FMODLocalizedBankRow
// 0x0010 (0x0018 - 0x0008)
struct FFMODLocalizedBankRow : public FTableRowBase
{
	struct FString                                     Path;                                                      // 0x0008(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.FMODEventInstance
// 0x0008
struct FFMODEventInstance
{
	unsigned char                                      UnknownData_LGFK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
struct FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFMODEventControlChannel                    ControlKeys;                                               // 0x0020(0x0098) (NativeAccessSpecifierPublic)

};

// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
// 0x0000 (0x0080 - 0x0080)
struct FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
