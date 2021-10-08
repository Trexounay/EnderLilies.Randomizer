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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EVT_SKIP.EVT_SKIP_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UEVT_SKIP_C : public USkipEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_SKIP.EVT_SKIP_C");
		return ptr;
	}



	void ResetActorRunningFXs(class AActor* Actor);
	void ResetAllBoundActors(class UEventPlayer* EventPlayer);
	void ResetGameplayCameraLocation();
	void ActivateEnemySpawnPoint(class UEventPlayer* EventPlayer, const struct FName& EnemySpawnPointBBKey);
	void TeleportActorToBinding(class UEventPlayer* Target, const struct FName& ActorBindingToTeleport, const struct FName& TargetBinding);
	void TeleportActor(class UEventPlayer* Target, const struct FName& Binding, const struct FVector& DestLocation, const struct FRotator& DestRotation);
	void TeleportPlayerToBinding(class UEventPlayer* EventPlayer, const struct FName& Binding, const struct FVector& WorldLocationOffset);
	void TeleportPlayer(class UEventPlayer* EventPlayer, const struct FVector& DestLocation, const struct FRotator& DestRotation);
	void OnPostSkip(class UEventPlayer* EventPlayer);
	void OnSkip(class UEventPlayer* EventPlayer);
	void ExecuteUbergraph_EVT_SKIP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
