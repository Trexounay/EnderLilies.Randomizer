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

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// 0x0030
struct FMovieSceneGeometryCollectionParams
{
	unsigned char                                      UnknownData_4JVI[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             GeometryCollectionCache;                                   // 0x0008(0x0018) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                StartFrameOffset;                                          // 0x0020(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                EndFrameOffset;                                            // 0x0024(0x0004) (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayRate;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BXF6[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// 0x0008 (0x0038 - 0x0030)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
	struct FFrameNumber                                SectionStartTime;                                          // 0x0030(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                                SectionEndTime;                                            // 0x0034(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// 0x0038 (0x0058 - 0x0020)
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;                                                    // 0x0020(0x0038) (NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
