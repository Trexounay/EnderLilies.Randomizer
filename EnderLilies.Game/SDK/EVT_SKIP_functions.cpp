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
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.ResetActorRunningFXs
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_C::ResetActorRunningFXs(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.ResetActorRunningFXs");

	UEVT_SKIP_C_ResetActorRunningFXs_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.ResetAllBoundActors
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_C::ResetAllBoundActors(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.ResetAllBoundActors");

	UEVT_SKIP_C_ResetAllBoundActors_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.ResetGameplayCameraLocation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UEVT_SKIP_C::ResetGameplayCameraLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.ResetGameplayCameraLocation");

	UEVT_SKIP_C_ResetGameplayCameraLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.ActivateEnemySpawnPoint
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       EnemySpawnPointBBKey                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_C::ActivateEnemySpawnPoint(class UEventPlayer* EventPlayer, const struct FName& EnemySpawnPointBBKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.ActivateEnemySpawnPoint");

	UEVT_SKIP_C_ActivateEnemySpawnPoint_Params params;
	params.EventPlayer = EventPlayer;
	params.EnemySpawnPointBBKey = EnemySpawnPointBBKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.TeleportActorToBinding
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ActorBindingToTeleport                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       TargetBinding                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_C::TeleportActorToBinding(class UEventPlayer* Target, const struct FName& ActorBindingToTeleport, const struct FName& TargetBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.TeleportActorToBinding");

	UEVT_SKIP_C_TeleportActorToBinding_Params params;
	params.Target = Target;
	params.ActorBindingToTeleport = ActorBindingToTeleport;
	params.TargetBinding = TargetBinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.TeleportActor
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       Binding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     DestLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    DestRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEVT_SKIP_C::TeleportActor(class UEventPlayer* Target, const struct FName& Binding, const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.TeleportActor");

	UEVT_SKIP_C_TeleportActor_Params params;
	params.Target = Target;
	params.Binding = Binding;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.TeleportPlayerToBinding
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       Binding                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     WorldLocationOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_C::TeleportPlayerToBinding(class UEventPlayer* EventPlayer, const struct FName& Binding, const struct FVector& WorldLocationOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.TeleportPlayerToBinding");

	UEVT_SKIP_C_TeleportPlayerToBinding_Params params;
	params.EventPlayer = EventPlayer;
	params.Binding = Binding;
	params.WorldLocationOffset = WorldLocationOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.TeleportPlayer
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     DestLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    DestRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEVT_SKIP_C::TeleportPlayer(class UEventPlayer* EventPlayer, const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.TeleportPlayer");

	UEVT_SKIP_C_TeleportPlayer_Params params;
	params.EventPlayer = EventPlayer;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.OnPostSkip
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_C::OnPostSkip(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.OnPostSkip");

	UEVT_SKIP_C_OnPostSkip_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.OnSkip
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_C::OnSkip(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.OnSkip");

	UEVT_SKIP_C_OnSkip_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP.EVT_SKIP_C.ExecuteUbergraph_EVT_SKIP
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_C::ExecuteUbergraph_EVT_SKIP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP.EVT_SKIP_C.ExecuteUbergraph_EVT_SKIP");

	UEVT_SKIP_C_ExecuteUbergraph_EVT_SKIP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
