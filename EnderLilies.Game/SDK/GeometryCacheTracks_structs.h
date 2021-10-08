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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// 0x0040
struct FMovieSceneGeometryCacheParams
{
	class UGeometryCache*                              GeometryCacheAsset;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                FirstLoopStartFrameOffset;                                 // 0x0008(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                StartFrameOffset;                                          // 0x000C(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                EndFrameOffset;                                            // 0x0010(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bReverse : 1;                                              // 0x0018(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5ADC[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartOffset;                                               // 0x001C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EndOffset;                                                 // 0x0020(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P056[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             GeometryCache;                                             // 0x0028(0x0018) (ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// 0x0008 (0x0048 - 0x0040)
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
	struct FFrameNumber                                SectionStartTime;                                          // 0x0040(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                SectionEndTime;                                            // 0x0044(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// 0x0048 (0x0068 - 0x0020)
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;                                                    // 0x0020(0x0048) (NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
