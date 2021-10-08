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
//		Offset -> 0x00C1C710
//		Name   -> Function CableComponent.CableComponent.SetAttachEndToComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCableComponent::SetAttachEndToComponent(class USceneComponent* Component, const struct FName& SocketName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndToComponent");

	UCableComponent_SetAttachEndToComponent_Params params;
	params.Component = Component;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C1C600
//		Name   -> Function CableComponent.CableComponent.SetAttachEndTo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       ComponentProperty                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCableComponent::SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");

	UCableComponent_SetAttachEndTo_Params params;
	params.Actor = Actor;
	params.ComponentProperty = ComponentProperty;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00C1C550
//		Name   -> Function CableComponent.CableComponent.GetCableParticleLocations
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UCableComponent::GetCableParticleLocations(TArray<struct FVector>* Locations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");

	UCableComponent_GetCableParticleLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Locations != nullptr)
		*Locations = params.Locations;

}


// Function:
//		Offset -> 0x00C1C520
//		Name   -> Function CableComponent.CableComponent.GetAttachedComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class USceneComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UCableComponent::GetAttachedComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");

	UCableComponent_GetAttachedComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00C1C4F0
//		Name   -> Function CableComponent.CableComponent.GetAttachedActor
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UCableComponent::GetAttachedActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");

	UCableComponent_GetAttachedActor_Params params;

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
