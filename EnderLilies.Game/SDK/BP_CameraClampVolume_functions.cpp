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
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CameraClampVolume.BP_CameraClampVolume_C.RefreshBlockerVolumes
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_CameraClampVolume_C::RefreshBlockerVolumes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CameraClampVolume.BP_CameraClampVolume_C.RefreshBlockerVolumes");

	ABP_CameraClampVolume_C_RefreshBlockerVolumes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CameraClampVolume.BP_CameraClampVolume_C.SetupBlockerVolume
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Activate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UBoxComponent*                               Box                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     B1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     B2                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Invert                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CameraClampVolume_C::SetupBlockerVolume(bool Activate, class UBoxComponent* Box, const struct FVector& B1, const struct FVector& B2, bool Invert)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CameraClampVolume.BP_CameraClampVolume_C.SetupBlockerVolume");

	ABP_CameraClampVolume_C_SetupBlockerVolume_Params params;
	params.Activate = Activate;
	params.Box = Box;
	params.B1 = B1;
	params.B2 = B2;
	params.Invert = Invert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CameraClampVolume.BP_CameraClampVolume_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CameraClampVolume_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CameraClampVolume.BP_CameraClampVolume_C.UserConstructionScript");

	ABP_CameraClampVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
