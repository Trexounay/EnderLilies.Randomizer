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

// Function EVT_SKIP.EVT_SKIP_C.ResetActorRunningFXs
struct UEVT_SKIP_C_ResetActorRunningFXs_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_SKIP.EVT_SKIP_C.ResetAllBoundActors
struct UEVT_SKIP_C_ResetAllBoundActors_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_SKIP.EVT_SKIP_C.ResetGameplayCameraLocation
struct UEVT_SKIP_C_ResetGameplayCameraLocation_Params
{
};

// Function EVT_SKIP.EVT_SKIP_C.ActivateEnemySpawnPoint
struct UEVT_SKIP_C_ActivateEnemySpawnPoint_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       EnemySpawnPointBBKey;                                      // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_SKIP.EVT_SKIP_C.TeleportActorToBinding
struct UEVT_SKIP_C_TeleportActorToBinding_Params
{
	class UEventPlayer*                                Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ActorBindingToTeleport;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TargetBinding;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_SKIP.EVT_SKIP_C.TeleportActor
struct UEVT_SKIP_C_TeleportActor_Params
{
	class UEventPlayer*                                Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Binding;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DestLocation;                                              // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    DestRotation;                                              // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EVT_SKIP.EVT_SKIP_C.TeleportPlayerToBinding
struct UEVT_SKIP_C_TeleportPlayerToBinding_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Binding;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     WorldLocationOffset;                                       // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_SKIP.EVT_SKIP_C.TeleportPlayer
struct UEVT_SKIP_C_TeleportPlayer_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DestLocation;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    DestRotation;                                              // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function EVT_SKIP.EVT_SKIP_C.OnPostSkip
struct UEVT_SKIP_C_OnPostSkip_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_SKIP.EVT_SKIP_C.OnSkip
struct UEVT_SKIP_C_OnSkip_Params
{
	class UEventPlayer*                                EventPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_SKIP.EVT_SKIP_C.ExecuteUbergraph_EVT_SKIP
struct UEVT_SKIP_C_ExecuteUbergraph_EVT_SKIP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
