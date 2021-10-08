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
//		Name   -> Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.GetSpawnedActor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ConditionedActorSpawner_C::GetSpawnedActor(class AActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.GetSpawnedActor");

	ABP_ConditionedActorSpawner_C_GetSpawnedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.OnLoaded_18DE97F54AC02915B0749396618A982F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_ConditionedActorSpawner_C::OnLoaded_18DE97F54AC02915B0749396618A982F(class UClass* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.OnLoaded_18DE97F54AC02915B0749396618A982F");

	ABP_ConditionedActorSpawner_C_OnLoaded_18DE97F54AC02915B0749396618A982F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.OnLoaded_140E7CF84C8078CECA4CEBBEFFEC932F
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_ConditionedActorSpawner_C::OnLoaded_140E7CF84C8078CECA4CEBBEFFEC932F()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.OnLoaded_140E7CF84C8078CECA4CEBBEFFEC932F");

	ABP_ConditionedActorSpawner_C_OnLoaded_140E7CF84C8078CECA4CEBBEFFEC932F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_ConditionedActorSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.ReceiveBeginPlay");

	ABP_ConditionedActorSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.ExecuteUbergraph_BP_ConditionedActorSpawner
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ConditionedActorSpawner_C::ExecuteUbergraph_BP_ConditionedActorSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C.ExecuteUbergraph_BP_ConditionedActorSpawner");

	ABP_ConditionedActorSpawner_C_ExecuteUbergraph_BP_ConditionedActorSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
