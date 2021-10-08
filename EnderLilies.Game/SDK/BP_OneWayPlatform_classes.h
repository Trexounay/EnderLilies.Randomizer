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

// BlueprintGeneratedClass BP_OneWayPlatform.BP_OneWayPlatform_C
// 0x0028 (FullSize[0x0258] - InheritedSize[0x0230])
class ABP_OneWayPlatform_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Visual;                                                    // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               Box;                                                       // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class AActor*>                              IgnoringActors;                                            // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_OneWayPlatform.BP_OneWayPlatform_C");
		return ptr;
	}



	void CleanupActors();
	void IsComponentAboveTrigger(class UPrimitiveComponent* OverlappedComponent, bool* bIsAbove);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void UnmarkAsIgnoreForActor(class AActor* Target);
	void MarkAsIgnoreForActor(class AActor* Target);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_OneWayPlatform(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
