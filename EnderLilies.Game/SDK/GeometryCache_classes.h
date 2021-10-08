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

// Class GeometryCache.GeometryCache
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData_FEJO[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_269V[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StartFrame;                                                // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                EndFrame;                                                  // 0x0064(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCache");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheActor
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AGeometryCacheActor : public AActor
{
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                    // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return ptr;
	}



	class UGeometryCacheComponent* GetGeometryCacheComponent();
};

// Class GeometryCache.GeometryCacheCodecBase
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int>                                        TopologyRanges;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecBase");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheCodecRaw
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	int                                                DummyProperty;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_94E0[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecRaw");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheCodecV1
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:
	unsigned char                                      UnknownData_I2PL[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecV1");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheComponent
// 0x0058 (FullSize[0x04C0] - InheritedSize[0x0468])
class UGeometryCacheComponent : public UMeshComponent
{
public:
	class UGeometryCache*                              GeometryCache;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRunning;                                                  // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLooping;                                                  // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_C3CL[0x2];                                     // 0x0472(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTimeOffset;                                           // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              PlaybackSpeed;                                             // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                NumTracks;                                                 // 0x047C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              ElapsedTime;                                               // 0x0480(0x0004) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QAWP[0x30];                                    // 0x0484(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x04B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bManualTick;                                               // 0x04B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TDHZ[0x7];                                     // 0x04B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return ptr;
	}



	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
	float GetPlaybackDirection();
	int GetNumberOfFrames();
	float GetDuration();
	float GetAnimationTime();
};

// Class GeometryCache.GeometryCacheTrack
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UGeometryCacheTrack : public UObject
{
public:
	float                                              Duration;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7SGM[0x2C];                                    // 0x002C(0x002C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (FullSize[0x0080] - InheritedSize[0x0058])
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:
	uint32_t                                           NumMeshSamples;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_43OY[0x24];                                    // 0x005C(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return ptr;
	}



	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);
};

// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0078 (FullSize[0x00D0] - InheritedSize[0x0058])
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*                     Codec;                                                     // 0x0058(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OW2Z[0x68];                                    // 0x0060(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartSampleTime;                                           // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KUO8[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrackStreamable");
		return ptr;
	}



};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x00A8 (FullSize[0x0100] - InheritedSize[0x0058])
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData_EM53[0xA8];                                    // 0x0058(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return ptr;
	}



	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x00A8 (FullSize[0x0100] - InheritedSize[0x0058])
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:
	unsigned char                                      UnknownData_DKST[0xA8];                                    // 0x0058(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return ptr;
	}



	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
