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
//		Offset -> 0x021213D0
//		Name   -> Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class USplineComponent*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent");

	ACameraRig_Rail_GetRailSplineComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02121000
//		Name   -> Function CinematicCamera.CineCameraActor.GetCineCameraComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UCineCameraComponent*                        ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraActor.GetCineCameraComponent");

	ACineCameraActor_GetCineCameraComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02121540
//		Name   -> Function CinematicCamera.CineCameraComponent.SetLensPresetByName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetLensPresetByName(const struct FString& InPresetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetLensPresetByName");

	UCineCameraComponent_SetLensPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x021214A0
//		Name   -> Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InPresetName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetFilmbackPresetByName(const struct FString& InPresetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName");

	UCineCameraComponent_SetFilmbackPresetByName_Params params;
	params.InPresetName = InPresetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02121420
//		Name   -> Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InFocalLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength");

	UCineCameraComponent_SetCurrentFocalLength_Params params;
	params.InFocalLength = InFocalLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x021213F0
//		Name   -> Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetVerticalFieldOfView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView");

	UCineCameraComponent_GetVerticalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x021212F0
//		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FNamedLensPreset>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FNamedLensPreset> UCineCameraComponent::STATIC_GetLensPresetsCopy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy");

	UCineCameraComponent_GetLensPresetsCopy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02121270
//		Name   -> Function CinematicCamera.CineCameraComponent.GetLensPresetName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetLensPresetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetLensPresetName");

	UCineCameraComponent_GetLensPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02121240
//		Name   -> Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UCineCameraComponent::GetHorizontalFieldOfView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView");

	UCineCameraComponent_GetHorizontalFieldOfView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02121160
//		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FNamedFilmbackPreset>                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FNamedFilmbackPreset> UCineCameraComponent::STATIC_GetFilmbackPresetsCopy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy");

	UCineCameraComponent_GetFilmbackPresetsCopy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x021210E0
//		Name   -> Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetFilmbackPresetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName");

	UCineCameraComponent_GetFilmbackPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02121020
//		Name   -> Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UCineCameraComponent::GetDefaultFilmbackPresetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName");

	UCineCameraComponent_GetDefaultFilmbackPresetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
