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
// Parameters
//---------------------------------------------------------------------------

// Function FMODStudio.FMODAudioComponent.TriggerCue
struct UFMODAudioComponent_TriggerCue_Params
{
};

// Function FMODStudio.FMODAudioComponent.Stop
struct UFMODAudioComponent_Stop_Params
{
};

// Function FMODStudio.FMODAudioComponent.SetVolume
struct UFMODAudioComponent_SetVolume_Params
{
	float                                              Volume;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetTimelinePosition
struct UFMODAudioComponent_SetTimelinePosition_Params
{
	int                                                Time;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetProperty
struct UFMODAudioComponent_SetProperty_Params
{
	TEnumAsByte<FMODStudio_EFMODEventProperty>         Property;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
struct UFMODAudioComponent_SetProgrammerSoundName_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetPitch
struct UFMODAudioComponent_SetPitch_Params
{
	float                                              Pitch;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetPaused
struct UFMODAudioComponent_SetPaused_Params
{
	bool                                               paused;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetParameter
struct UFMODAudioComponent_SetParameter_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.SetEvent
struct UFMODAudioComponent_SetEvent_Params
{
	class UFMODEvent*                                  NewEvent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.Release
struct UFMODAudioComponent_Release_Params
{
};

// Function FMODStudio.FMODAudioComponent.Play
struct UFMODAudioComponent_Play_Params
{
};

// Function FMODStudio.FMODAudioComponent.IsPlaying
struct UFMODAudioComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.GetTimelinePosition
struct UFMODAudioComponent_GetTimelinePosition_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.GetProperty
struct UFMODAudioComponent_GetProperty_Params
{
	TEnumAsByte<FMODStudio_EFMODEventProperty>         Property;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.GetParameterValue
struct UFMODAudioComponent_GetParameterValue_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UserValue;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FinalValue;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.GetParameter
struct UFMODAudioComponent_GetParameter_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODAudioComponent.GetLength
struct UFMODAudioComponent_GetLength_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.VCASetVolume
struct UFMODBlueprintStatics_VCASetVolume_Params
{
	class UFMODVCA*                                    Vca;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
struct UFMODBlueprintStatics_UnloadEventSampleData_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  Event;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
struct UFMODBlueprintStatics_UnloadBankSampleData_Params
{
	class UFMODBank*                                   Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.UnloadBank
struct UFMODBlueprintStatics_UnloadBank_Params
{
	class UFMODBank*                                   Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
struct UFMODBlueprintStatics_SetOutputDriverByName_Params
{
	struct FString                                     NewDriverName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
struct UFMODBlueprintStatics_SetOutputDriverByIndex_Params
{
	int                                                NewDriverIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.SetLocale
struct UFMODBlueprintStatics_SetLocale_Params
{
	struct FString                                     Locale;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName
struct UFMODBlueprintStatics_SetGlobalParameterByName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
struct UFMODBlueprintStatics_PlayEventAttached_Params
{
	class UFMODEvent*                                  Event;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                             AttachToComponent;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoPlay;                                                 // 0x0026(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoDestroy;                                              // 0x0027(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODAudioComponent*                         ReturnValue;                                               // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
struct UFMODBlueprintStatics_PlayEventAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  Event;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Location;                                                  // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bAutoPlay;                                                 // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventInstance                          ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
struct UFMODBlueprintStatics_PlayEvent2D_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  Event;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoPlay;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFMODEventInstance                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.MixerSuspend
struct UFMODBlueprintStatics_MixerSuspend_Params
{
};

// Function FMODStudio.FMODBlueprintStatics.MixerResume
struct UFMODBlueprintStatics_MixerResume_Params
{
};

// Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
struct UFMODBlueprintStatics_LoadEventSampleData_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  Event;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
struct UFMODBlueprintStatics_LoadBankSampleData_Params
{
	class UFMODBank*                                   Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.LoadBank
struct UFMODBlueprintStatics_LoadBank_Params
{
	class UFMODBank*                                   Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBlocking;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLoadSampleData;                                           // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
struct UFMODBlueprintStatics_IsBankLoaded_Params
{
	class UFMODBank*                                   Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
struct UFMODBlueprintStatics_GetOutputDrivers_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName
struct UFMODBlueprintStatics_GetGlobalParameterValueByName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UserValue;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FinalValue;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName
struct UFMODBlueprintStatics_GetGlobalParameterByName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.FindEventInstances
struct UFMODBlueprintStatics_FindEventInstances_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  Event;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFMODEventInstance>                  ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.FindEventByName
struct UFMODBlueprintStatics_FindEventByName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODEvent*                                  ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.FindAssetByName
struct UFMODBlueprintStatics_FindAssetByName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFMODAsset*                                  ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue
struct UFMODBlueprintStatics_EventInstanceTriggerCue_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
struct UFMODBlueprintStatics_EventInstanceStop_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               Release;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
struct UFMODBlueprintStatics_EventInstanceSetVolume_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
struct UFMODBlueprintStatics_EventInstanceSetTransform_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  Location;                                                  // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
struct UFMODBlueprintStatics_EventInstanceSetProperty_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<FMODStudio_EFMODEventProperty>         Property;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
struct UFMODBlueprintStatics_EventInstanceSetPitch_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Pitch;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
struct UFMODBlueprintStatics_EventInstanceSetPaused_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               paused;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
struct UFMODBlueprintStatics_EventInstanceSetParameter_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease
struct UFMODBlueprintStatics_EventInstanceRelease_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
struct UFMODBlueprintStatics_EventInstancePlay_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
struct UFMODBlueprintStatics_EventInstanceIsValid_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue
struct UFMODBlueprintStatics_EventInstanceGetParameterValue_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              UserValue;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FinalValue;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
struct UFMODBlueprintStatics_EventInstanceGetParameter_Params
{
	struct FFMODEventInstance                          EventInstance;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
struct UFMODBlueprintStatics_BusStopAllEvents_Params
{
	class UFMODBus*                                    Bus;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE>     stopMode;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetVolume
struct UFMODBlueprintStatics_BusSetVolume_Params
{
	class UFMODBus*                                    Bus;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetPaused
struct UFMODBlueprintStatics_BusSetPaused_Params
{
	class UFMODBus*                                    Bus;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPaused;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function FMODStudio.FMODBlueprintStatics.BusSetMute
struct UFMODBlueprintStatics_BusSetMute_Params
{
	class UFMODBus*                                    Bus;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMute;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
