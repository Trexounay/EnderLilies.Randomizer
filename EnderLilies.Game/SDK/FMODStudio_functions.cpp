// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00798680
//		Name   -> Function FMODStudio.FMODAudioComponent.TriggerCue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFMODAudioComponent::TriggerCue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.TriggerCue");

	UFMODAudioComponent_TriggerCue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00798660
//		Name   -> Function FMODStudio.FMODAudioComponent.Stop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFMODAudioComponent::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Stop");

	UFMODAudioComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007985E0
//		Name   -> Function FMODStudio.FMODAudioComponent.SetVolume
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetVolume(float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetVolume");

	UFMODAudioComponent_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00798550
//		Name   -> Function FMODStudio.FMODAudioComponent.SetTimelinePosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetTimelinePosition(int Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetTimelinePosition");

	UFMODAudioComponent_SetTimelinePosition_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00798480
//		Name   -> Function FMODStudio.FMODAudioComponent.SetProperty
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<FMODStudio_EFMODEventProperty>         Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetProperty(TEnumAsByte<FMODStudio_EFMODEventProperty> Property, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetProperty");

	UFMODAudioComponent_SetProperty_Params params;
	params.Property = Property;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00798390
//		Name   -> Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetProgrammerSoundName(const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName");

	UFMODAudioComponent_SetProgrammerSoundName_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00798310
//		Name   -> Function FMODStudio.FMODAudioComponent.SetPitch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetPitch(float Pitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetPitch");

	UFMODAudioComponent_SetPitch_Params params;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00798280
//		Name   -> Function FMODStudio.FMODAudioComponent.SetPaused
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               paused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetPaused(bool paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetPaused");

	UFMODAudioComponent_SetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007981B0
//		Name   -> Function FMODStudio.FMODAudioComponent.SetParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetParameter(const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetParameter");

	UFMODAudioComponent_SetParameter_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00798120
//		Name   -> Function FMODStudio.FMODAudioComponent.SetEvent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UFMODEvent*                                  NewEvent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::SetEvent(class UFMODEvent* NewEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.SetEvent");

	UFMODAudioComponent_SetEvent_Params params;
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00798100
//		Name   -> Function FMODStudio.FMODAudioComponent.Release
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFMODAudioComponent::Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Release");

	UFMODAudioComponent_Release_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007980E0
//		Name   -> Function FMODStudio.FMODAudioComponent.Play
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UFMODAudioComponent::Play()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.Play");

	UFMODAudioComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007980B0
//		Name   -> Function FMODStudio.FMODAudioComponent.IsPlaying
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFMODAudioComponent::IsPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.IsPlaying");

	UFMODAudioComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00798080
//		Name   -> Function FMODStudio.FMODAudioComponent.GetTimelinePosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFMODAudioComponent::GetTimelinePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetTimelinePosition");

	UFMODAudioComponent_GetTimelinePosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00797FF0
//		Name   -> Function FMODStudio.FMODAudioComponent.GetProperty
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<FMODStudio_EFMODEventProperty>         Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFMODAudioComponent::GetProperty(TEnumAsByte<FMODStudio_EFMODEventProperty> Property)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetProperty");

	UFMODAudioComponent_GetProperty_Params params;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00797ED0
//		Name   -> Function FMODStudio.FMODAudioComponent.GetParameterValue
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODAudioComponent::GetParameterValue(const struct FName& Name, float* UserValue, float* FinalValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetParameterValue");

	UFMODAudioComponent_GetParameterValue_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserValue != nullptr)
		*UserValue = params.UserValue;
	if (FinalValue != nullptr)
		*FinalValue = params.FinalValue;

}


// Function:
//		Offset -> 0x00797E30
//		Name   -> Function FMODStudio.FMODAudioComponent.GetParameter
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFMODAudioComponent::GetParameter(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetParameter");

	UFMODAudioComponent_GetParameter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00797E00
//		Name   -> Function FMODStudio.FMODAudioComponent.GetLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UFMODAudioComponent::GetLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODAudioComponent.GetLength");

	UFMODAudioComponent_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079B650
//		Name   -> Function FMODStudio.FMODBlueprintStatics.VCASetVolume
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODVCA*                                    Vca                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_VCASetVolume(class UFMODVCA* Vca, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.VCASetVolume");

	UFMODBlueprintStatics_VCASetVolume_Params params;
	params.Vca = Vca;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079B590
//		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_UnloadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData");

	UFMODBlueprintStatics_UnloadEventSampleData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079B510
//		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_UnloadBankSampleData(class UFMODBank* Bank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData");

	UFMODBlueprintStatics_UnloadBankSampleData_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079B490
//		Name   -> Function FMODStudio.FMODBlueprintStatics.UnloadBank
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_UnloadBank(class UFMODBank* Bank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.UnloadBank");

	UFMODBlueprintStatics_UnloadBank_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079B3B0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     NewDriverName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_SetOutputDriverByName(const struct FString& NewDriverName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName");

	UFMODBlueprintStatics_SetOutputDriverByName_Params params;
	params.NewDriverName = NewDriverName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079B330
//		Name   -> Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                NewDriverIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_SetOutputDriverByIndex(int NewDriverIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex");

	UFMODBlueprintStatics_SetOutputDriverByIndex_Params params;
	params.NewDriverIndex = NewDriverIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079B2A0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.SetLocale
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Locale                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_SetLocale(const struct FString& Locale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetLocale");

	UFMODBlueprintStatics_SetLocale_Params params;
	params.Locale = Locale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079B1E0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_SetGlobalParameterByName(const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName");

	UFMODBlueprintStatics_SetGlobalParameterByName_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079AF60
//		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoDestroy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODAudioComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODAudioComponent* UFMODBlueprintStatics::STATIC_PlayEventAttached(class UFMODEvent* Event, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEventAttached");

	UFMODBlueprintStatics_PlayEventAttached_Params params;
	params.Event = Event;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.bAutoPlay = bAutoPlay;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079ADB0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFMODEventInstance                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FFMODEventInstance UFMODBlueprintStatics::STATIC_PlayEventAtLocation(class UObject* WorldContextObject, class UFMODEvent* Event, const struct FTransform& Location, bool bAutoPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation");

	UFMODBlueprintStatics_PlayEventAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.Location = Location;
	params.bAutoPlay = bAutoPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079ACB0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAutoPlay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FFMODEventInstance                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FFMODEventInstance UFMODBlueprintStatics::STATIC_PlayEvent2D(class UObject* WorldContextObject, class UFMODEvent* Event, bool bAutoPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.PlayEvent2D");

	UFMODBlueprintStatics_PlayEvent2D_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;
	params.bAutoPlay = bAutoPlay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079AC90
//		Name   -> Function FMODStudio.FMODBlueprintStatics.MixerSuspend
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UFMODBlueprintStatics::STATIC_MixerSuspend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.MixerSuspend");

	UFMODBlueprintStatics_MixerSuspend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079AC70
//		Name   -> Function FMODStudio.FMODBlueprintStatics.MixerResume
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UFMODBlueprintStatics::STATIC_MixerResume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.MixerResume");

	UFMODBlueprintStatics_MixerResume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079ABB0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_LoadEventSampleData(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData");

	UFMODBlueprintStatics_LoadEventSampleData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079AB30
//		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_LoadBankSampleData(class UFMODBank* Bank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData");

	UFMODBlueprintStatics_LoadBankSampleData_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079AA20
//		Name   -> Function FMODStudio.FMODBlueprintStatics.LoadBank
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bBlocking                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLoadSampleData                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_LoadBank(class UFMODBank* Bank, bool bBlocking, bool bLoadSampleData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.LoadBank");

	UFMODBlueprintStatics_LoadBank_Params params;
	params.Bank = Bank;
	params.bBlocking = bBlocking;
	params.bLoadSampleData = bLoadSampleData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079A990
//		Name   -> Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBank*                                   Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFMODBlueprintStatics::STATIC_IsBankLoaded(class UFMODBank* Bank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.IsBankLoaded");

	UFMODBlueprintStatics_IsBankLoaded_Params params;
	params.Bank = Bank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079A8B0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UFMODBlueprintStatics::STATIC_GetOutputDrivers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers");

	UFMODBlueprintStatics_GetOutputDrivers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079A790
//		Name   -> Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_GetGlobalParameterValueByName(const struct FName& Name, float* UserValue, float* FinalValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName");

	UFMODBlueprintStatics_GetGlobalParameterValueByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserValue != nullptr)
		*UserValue = params.UserValue;
	if (FinalValue != nullptr)
		*FinalValue = params.FinalValue;

}


// Function:
//		Offset -> 0x0079A700
//		Name   -> Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFMODBlueprintStatics::STATIC_GetGlobalParameterByName(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName");

	UFMODBlueprintStatics_GetGlobalParameterByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079A5F0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.FindEventInstances
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FFMODEventInstance>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FFMODEventInstance> UFMODBlueprintStatics::STATIC_FindEventInstances(class UObject* WorldContextObject, class UFMODEvent* Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindEventInstances");

	UFMODBlueprintStatics_FindEventInstances_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079A550
//		Name   -> Function FMODStudio.FMODBlueprintStatics.FindEventByName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODEvent*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODEvent* UFMODBlueprintStatics::STATIC_FindEventByName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindEventByName");

	UFMODBlueprintStatics_FindEventByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079A4B0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.FindAssetByName
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFMODAsset*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UFMODAsset* UFMODBlueprintStatics::STATIC_FindAssetByName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.FindAssetByName");

	UFMODBlueprintStatics_FindAssetByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0079A440
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceTriggerCue(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue");

	UFMODBlueprintStatics_EventInstanceTriggerCue_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079A380
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               Release                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceStop(const struct FFMODEventInstance& EventInstance, bool Release)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceStop");

	UFMODBlueprintStatics_EventInstanceStop_Params params;
	params.EventInstance = EventInstance;
	params.Release = Release;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079A2C0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetVolume(const struct FFMODEventInstance& EventInstance, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume");

	UFMODBlueprintStatics_EventInstanceSetVolume_Params params;
	params.EventInstance = EventInstance;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079A1B0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FTransform                                  Location                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetTransform(const struct FFMODEventInstance& EventInstance, const struct FTransform& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform");

	UFMODBlueprintStatics_EventInstanceSetTransform_Params params;
	params.EventInstance = EventInstance;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0079A0B0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		TEnumAsByte<FMODStudio_EFMODEventProperty>         Property                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetProperty(const struct FFMODEventInstance& EventInstance, TEnumAsByte<FMODStudio_EFMODEventProperty> Property, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty");

	UFMODBlueprintStatics_EventInstanceSetProperty_Params params;
	params.EventInstance = EventInstance;
	params.Property = Property;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00799FF0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetPitch(const struct FFMODEventInstance& EventInstance, float Pitch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch");

	UFMODBlueprintStatics_EventInstanceSetPitch_Params params;
	params.EventInstance = EventInstance;
	params.Pitch = Pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00799F30
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               paused                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetPaused(const struct FFMODEventInstance& EventInstance, bool paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused");

	UFMODBlueprintStatics_EventInstanceSetPaused_Params params;
	params.EventInstance = EventInstance;
	params.paused = paused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00799E30
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceSetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter");

	UFMODBlueprintStatics_EventInstanceSetParameter_Params params;
	params.EventInstance = EventInstance;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00799DC0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceRelease(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease");

	UFMODBlueprintStatics_EventInstanceRelease_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00799D50
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstancePlay(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstancePlay");

	UFMODBlueprintStatics_EventInstancePlay_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00799CD0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UFMODBlueprintStatics::STATIC_EventInstanceIsValid(const struct FFMODEventInstance& EventInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid");

	UFMODBlueprintStatics_EventInstanceIsValid_Params params;
	params.EventInstance = EventInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00799B70
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              UserValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              FinalValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_EventInstanceGetParameterValue(const struct FFMODEventInstance& EventInstance, const struct FName& Name, float* UserValue, float* FinalValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue");

	UFMODBlueprintStatics_EventInstanceGetParameterValue_Params params;
	params.EventInstance = EventInstance;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserValue != nullptr)
		*UserValue = params.UserValue;
	if (FinalValue != nullptr)
		*FinalValue = params.FinalValue;

}


// Function:
//		Offset -> 0x00799AA0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FFMODEventInstance                          EventInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FName                                       Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFMODBlueprintStatics::STATIC_EventInstanceGetParameter(const struct FFMODEventInstance& EventInstance, const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter");

	UFMODBlueprintStatics_EventInstanceGetParameter_Params params;
	params.EventInstance = EventInstance;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007999E0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE>     stopMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusStopAllEvents(class UFMODBus* Bus, TEnumAsByte<FMODStudio_EFMOD_STUDIO_STOP_MODE> stopMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents");

	UFMODBlueprintStatics_BusStopAllEvents_Params params;
	params.Bus = Bus;
	params.stopMode = stopMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00799920
//		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetVolume
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusSetVolume(class UFMODBus* Bus, float Volume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetVolume");

	UFMODBlueprintStatics_BusSetVolume_Params params;
	params.Bus = Bus;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00799860
//		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetPaused
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPaused                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusSetPaused(class UFMODBus* Bus, bool bPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetPaused");

	UFMODBlueprintStatics_BusSetPaused_Params params;
	params.Bus = Bus;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007997A0
//		Name   -> Function FMODStudio.FMODBlueprintStatics.BusSetMute
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UFMODBus*                                    Bus                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMute                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UFMODBlueprintStatics::STATIC_BusSetMute(class UFMODBus* Bus, bool bMute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function FMODStudio.FMODBlueprintStatics.BusSetMute");

	UFMODBlueprintStatics_BusSetMute_Params params;
	params.Bus = Bus;
	params.bMute = bMute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
