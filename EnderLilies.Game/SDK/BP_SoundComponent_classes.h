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

// BlueprintGeneratedClass BP_SoundComponent.BP_SoundComponent_C
// 0x0038 (FullSize[0x00E8] - InheritedSize[0x00B0])
class UBP_SoundComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	Zenith_ESoundHeavinessCategory                     Heaviness;                                                 // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U7YC[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  OnJustGuardSoundEvent;                                     // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFMODEventInstance>                  RemoveOnCancelInstances;                                   // 0x00C8(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	TArray<class UFMODAudioComponent*>                 RemoveOnCancelComponents;                                  // 0x00D8(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SoundComponent.BP_SoundComponent_C");
		return ptr;
	}



	void GetActorTransform(struct FTransform* ActorTransform);
	void GetActorLocation(struct FVector* Location);
	void TriggerJustGuardSE();
	void TriggerLandingSE();
	void TriggerLandingSEWithFloorHit(const struct FHitResult& FloorHit);
	void TriggerSoundEvent(class UFMODEvent* Event);
	void AddInstanceToRemoveOnCancel(const struct FFMODEventInstance& EventInstance);
	void ReceiveBeginPlay();
	void OnEndCommandAction(class UCommandAction* CommandAction, Zenith_ECommandRemoveTypes RemoveType);
	void AddComponentToRemoveOnCancel(class UFMODAudioComponent* AudioComponent);
	void ExecuteUbergraph_BP_SoundComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
