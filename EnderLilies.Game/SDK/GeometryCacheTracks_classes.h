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

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x0040 (FullSize[0x0128] - InheritedSize[0x00E8])
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	struct FMovieSceneGeometryCacheParams              Params;                                                    // 0x00E8(0x0040) (Edit, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheSection");
		return ptr;
	}



};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_JXJ0[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
