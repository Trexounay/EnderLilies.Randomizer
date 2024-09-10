// Name: enderlilies, Version: 1.1.3

#include "pch.h"

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
//		Offset -> 0x02BD7A40
//		Name   -> Function GameplayTasks.GameplayTask.ReadyForActivation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameplayTask::ReadyForActivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.ReadyForActivation");

	UGameplayTask_ReadyForActivation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature");

	UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD76E0
//		Name   -> Function GameplayTasks.GameplayTask.EndTask
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UGameplayTask::EndTask()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask.EndTask");

	UGameplayTask_EndTask_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD7520
//		Name   -> Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<class UClass*>                              ResourceClasses                                            (Parm, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
//		unsigned char                                      Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       TaskInstanceName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGameplayTask_ClaimResource*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::STATIC_ClaimResources(TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources");

	UGameplayTask_ClaimResource_ClaimResources_Params params;
	params.ResourceClasses = ResourceClasses;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BD73B0
//		Name   -> Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      ResourceClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       TaskInstanceName                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGameplayTask_ClaimResource*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::STATIC_ClaimResource(class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource");

	UGameplayTask_ClaimResource_ClaimResource_Params params;
	params.ResourceClass = ResourceClass;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BD7A60
//		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     SpawnLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    SpawnRotation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSpawnOnlyOnAuthority                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGameplayTask_SpawnActor*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::STATIC_SpawnActor(const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor");

	UGameplayTask_SpawnActor_SpawnActor_Params params;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.Class = Class;
	params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BD7700
//		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor");

	UGameplayTask_SpawnActor_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD72D0
//		Name   -> Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor");

	UGameplayTask_SpawnActor_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BD7C30
//		Name   -> Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Priority                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGameplayTask_WaitDelay*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::STATIC_TaskWaitDelay(float Time, unsigned char Priority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay");

	UGameplayTask_WaitDelay_TaskWaitDelay_Params params;
	params.Time = Time;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature");

	UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD7A20
//		Name   -> Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
//		Flags  -> (Final, Native, Public)
void UGameplayTasksComponent::OnRep_SimulatedTasks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks");

	UGameplayTasksComponent_OnRep_SimulatedTasks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD77D0
//		Name   -> Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UGameplayTask*                               Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		unsigned char                                      Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UClass*>                              AdditionalRequiredResources                                (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
//		TArray<class UClass*>                              AdditionalClaimedResources                                 (Parm, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
//		GameplayTasks_EGameplayTaskRunResult               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GameplayTasks_EGameplayTaskRunResult UGameplayTasksComponent::STATIC_K2_RunGameplayTask(class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask");

	UGameplayTasksComponent_K2_RunGameplayTask_Params params;
	params.Task = Task;
	params.Priority = Priority;
	params.AdditionalRequiredResources = AdditionalRequiredResources;
	params.AdditionalClaimedResources = AdditionalClaimedResources;

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
