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
//		Offset -> 0x0082E3D0
//		Name   -> Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
//		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UAnimSharingStateInstance::GetInstancedActors(TArray<class AActor*>* Actors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");

	UAnimSharingStateInstance_GetInstancedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;

}


// Function:
//		Offset -> 0x0082E640
//		Name   -> Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeleton*                                   SharingSkeleton                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnimationSharingManager::RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");

	UAnimationSharingManager_RegisterActorWithSkeletonBP_Params params;
	params.InActor = InActor;
	params.SharingSkeleton = SharingSkeleton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0082E310
//		Name   -> Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimationSharingManager*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAnimationSharingManager* UAnimationSharingManager::STATIC_GetAnimationSharingManager(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");

	UAnimationSharingManager_GetAnimationSharingManager_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0082E240
//		Name   -> Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAnimationSharingSetup*                      Setup                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAnimationSharingManager::STATIC_CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");

	UAnimationSharingManager_CreateAnimationSharingManager_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Setup = Setup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0082E210
//		Name   -> Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAnimationSharingManager::STATIC_AnimationSharingEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");

	UAnimationSharingManager_AnimationSharingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0082E480
//		Name   -> Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		int                                                OutState                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      CurrentState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      OnDemandState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bShouldProcess                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAnimationSharingStateProcessor::ProcessActorState(int* OutState, class AActor* InActor, unsigned char CurrentState, unsigned char OnDemandState, bool* bShouldProcess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");

	UAnimationSharingStateProcessor_ProcessActorState_Params params;
	params.InActor = InActor;
	params.CurrentState = CurrentState;
	params.OnDemandState = OnDemandState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutState != nullptr)
		*OutState = params.OutState;
	if (bShouldProcess != nullptr)
		*bShouldProcess = params.bShouldProcess;

}


// Function:
//		Offset -> 0x0082E3A0
//		Name   -> Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class UEnum*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UEnum* UAnimationSharingStateProcessor::GetAnimationStateEnum()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");

	UAnimationSharingStateProcessor_GetAnimationStateEnum_Params params;

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
