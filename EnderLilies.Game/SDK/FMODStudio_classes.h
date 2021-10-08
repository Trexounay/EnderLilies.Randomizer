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

// Class FMODStudio.FMODAmbientSound
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AFMODAmbientSound : public AActor
{
public:
	class UFMODAudioComponent*                         AudioComponent;                                            // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODAmbientSound");
		return ptr;
	}



};

// Class FMODStudio.FMODAnimNotifyPlay
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UFMODAnimNotifyPlay : public UAnimNotify
{
public:
	unsigned char                                      bFollow : 1;                                               // 0x0038(0x0001) BIT_FIELD (Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G1HS[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AttachName;                                                // 0x0040(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Event[0x28];                                               // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODAnimNotifyPlay");
		return ptr;
	}



};

// Class FMODStudio.FMODAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UFMODAsset : public UObject
{
public:
	struct FGuid                                       AssetGuid;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODAsset");
		return ptr;
	}



};

// Class FMODStudio.FMODAudioComponent
// 0x0188 (FullSize[0x0380] - InheritedSize[0x01F8])
class UFMODAudioComponent : public USceneComponent
{
public:
	class UFMODEvent*                                  Event;                                                     // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FName, float>                          ParameterCache;                                            // 0x0200(0x0050) (Edit, BlueprintVisible, SimpleDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CUQX[0x8];                                     // 0x0250(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ProgrammerSoundName;                                       // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableTimelineCallbacks : 1;                              // 0x0268(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SSA[0x17];                                    // 0x0269(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bAutoDestroy : 1;                                          // 0x0280(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopWhenOwnerDestroyed : 1;                               // 0x0280(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BHAW[0x7];                                     // 0x0281(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnEventStopped;                                            // 0x0288(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTimelineMarker;                                          // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTimelineBeat;                                            // 0x02A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FFMODAttenuationDetails                     AttenuationDetails;                                        // 0x02B8(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFMODOcclusionDetails                       OcclusionDetails;                                          // 0x02C4(0x0003) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6FNS[0xB9];                                    // 0x02C7(0x00B9) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODAudioComponent");
		return ptr;
	}



	void TriggerCue();
	void Stop();
	void SetVolume(float Volume);
	void SetTimelinePosition(int Time);
	void SetProperty(TEnumAsByte<FMODStudio_EFMODEventProperty> Property, float Value);
	void SetProgrammerSoundName(const struct FString& Value);
	void SetPitch(float Pitch);
	void SetPaused(bool paused);
	void SetParameter(const struct FName& Name, float Value);
	void SetEvent(class UFMODEvent* NewEvent);
	void Release();
	void Play();
	bool IsPlaying();
	int GetTimelinePosition();
	float GetProperty(TEnumAsByte<FMODStudio_EFMODEventProperty> Property);
	void GetParameterValue(const struct FName& Name, float* UserValue, float* FinalValue);
	float GetParameter(const struct FName& Name);
	int GetLength();
};

// Class FMODStudio.FMODBank
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UFMODBank : public UFMODAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODBank");
		return ptr;
	}



};

// Class FMODStudio.FMODBankLookup
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UFMODBankLookup : public UObject
{
public:
	class UDataTable*                                  DataTable;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MasterBankPath;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MasterAssetsBankPath;                                      // 0x0040(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MasterStringsBankPath;                                     // 0x0050(0x0010) (Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODBankLookup");
		return ptr;
	}



};

// Class FMODStudio.FMODBlueprintStatics
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODBlueprintStatics");
		return ptr;
	}



	void STATIC_VCASetVolume(class UFMODVCA* Vca, float Volume);
	void STATIC_UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
	void STATIC_UnloadBankSampleData(class UFMODBank* Bank);
	void STATIC_UnloadBank(class UFMODBank* Bank);
	void STATIC_SetOutputDriverByName(const struct FString& NewDriverName);
	void STATIC_SetOutputDriverByIndex(int NewDriverIndex);
	void STATIC_SetLocale(const struct FString& Locale);
	void STATIC_SetGlobalParameterByName(const struct FName& Name, float Value);
	class UFMODAudioComponent* STATIC_PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy);
	struct FFMODEventInstance STATIC_PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay);
	struct FFMODEventInstance STATIC_PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay);
	void STATIC_MixerSuspend();
	void STATIC_MixerResume();
	void STATIC_LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event);
	void STATIC_LoadBankSampleData(class UFMODBank* Bank);
	void STATIC_LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData);
	bool STATIC_IsBankLoaded(class UFMODBank* Bank);
	TArray<struct FString> STATIC_GetOutputDrivers();
	void STATIC_GetGlobalParameterValueByName(const struct FName& Name, float* UserValue, float* FinalValue);
	float STATIC_GetGlobalParameterByName(const struct FName& Name);
	TArray<struct FFMODEventInstance> STATIC_FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event);
	class UFMODEvent* STATIC_FindEventByName(const struct FString& Name);
	class UFMODAsset* STATIC_FindAssetByName(const struct FString& Name);
	void STATIC_EventInstanceTriggerCue(const struct FFMODEventInstance& EventInstance);
	void STATIC_EventInstanceStop(const struct FFMODEventInstance& EventInstance, bool Release);
	void STATIC_EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume);
	void STATIC_EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location);
	void STATIC_EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, TEnumAsByte<FMODStudio_EFMODEventProperty> Property, float Value);
	void STATIC_EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch);
	void STATIC_EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused);
	void STATIC_EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float Value);
	void STATIC_EventInstanceRelease(const struct FFMODEventInstance& EventInstance);
	void STATIC_EventInstancePlay(const struct FFMODEventInstance& EventInstance);
	bool STATIC_EventInstanceIsValid(const struct FFMODEventInstance& EventInstance);
	void STATIC_EventInstanceGetParameterValue(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float* UserValue, float* FinalValue);
	float STATIC_EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name);
	void STATIC_BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode);
	void STATIC_BusSetVolume(class UFMODBus* Bus, float Volume);
	void STATIC_BusSetPaused(class UFMODBus* Bus, bool bPaused);
	void STATIC_BusSetMute(class UFMODBus* Bus, bool bMute);
};

// Class FMODStudio.FMODBus
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UFMODBus : public UFMODAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODBus");
		return ptr;
	}



};

// Class FMODStudio.FMODEvent
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UFMODEvent : public UFMODAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODEvent");
		return ptr;
	}



};

// Class FMODStudio.FMODEventControlSection
// 0x0098 (FullSize[0x0180] - InheritedSize[0x00E8])
class UFMODEventControlSection : public UMovieSceneSection
{
public:
	struct FFMODEventControlChannel                    ControlKeys;                                               // 0x00E8(0x0098) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODEventControlSection");
		return ptr;
	}



};

// Class FMODStudio.FMODEventControlTrack
// 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
class UFMODEventControlTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  ControlSections;                                           // 0x0078(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODEventControlTrack");
		return ptr;
	}



};

// Class FMODStudio.FMODEventParameterTrack
// 0x0018 (FullSize[0x0090] - InheritedSize[0x0078])
class UFMODEventParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData_U0HJ[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0080(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODEventParameterTrack");
		return ptr;
	}



};

// Class FMODStudio.FMODSettings
// 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
class UFMODSettings : public UObject
{
public:
	bool                                               bLoadAllBanks;                                             // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoadAllSampleData;                                        // 0x0029(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableLiveUpdate;                                         // 0x002A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableEditorLiveUpdate;                                   // 0x002B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SKL4[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDirectoryPath                              BankOutputDirectory;                                       // 0x0030(0x0010) (Edit, Config, NativeAccessSpecifierPublic)
	TEnumAsByte<FMODStudio_EFMODSpeakerMode>           OutputFormat;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZDR8[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFMODProjectLocale>                  Locales;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                               bVol0Virtual;                                              // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UUDZ[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Vol0VirtualLevel;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SampleRate;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMatchHardwareSampleRate;                                  // 0x0064(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XYQY[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RealChannelCount;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalChannelCount;                                         // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DSPBufferLength;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DSPBufferCount;                                            // 0x0074(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FileBufferSize;                                            // 0x0078(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StudioUpdatePeriod;                                        // 0x007C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InitialOutputDriverName;                                   // 0x0080(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockAllBuses;                                             // 0x0090(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_17QU[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomPoolSizes                            MemoryPoolSizes;                                           // 0x0094(0x0014) (Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	int                                                LiveUpdatePort;                                            // 0x00A8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EditorLiveUpdatePort;                                      // 0x00AC(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PluginFiles;                                               // 0x00B0(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FString                                     ContentBrowserPrefix;                                      // 0x00C0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ForcePlatformName;                                         // 0x00D0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MasterBankName;                                            // 0x00E0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SkipLoadBankName;                                          // 0x00F0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StudioBankKey;                                             // 0x0100(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WavWriterPath;                                             // 0x0110(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FMODStudio_EFMODLogging>               LoggingLevel;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ANL7[0x7];                                     // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OcclusionParameter;                                        // 0x0128(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AmbientVolumeParameter;                                    // 0x0138(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AmbientLPFParameter;                                       // 0x0148(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODSettings");
		return ptr;
	}



};

// Class FMODStudio.FMODSnapshot
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UFMODSnapshot : public UFMODEvent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODSnapshot");
		return ptr;
	}



};

// Class FMODStudio.FMODSnapshotReverb
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UFMODSnapshotReverb : public UReverbEffect
{
public:
	struct FGuid                                       AssetGuid;                                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODSnapshotReverb");
		return ptr;
	}



};

// Class FMODStudio.FMODVCA
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UFMODVCA : public UFMODAsset
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class FMODStudio.FMODVCA");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
