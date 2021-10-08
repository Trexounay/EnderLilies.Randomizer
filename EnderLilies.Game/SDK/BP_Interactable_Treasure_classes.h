#pragma once

// Name: enderlilies, Version: 1.1.3_chest


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

// BlueprintGeneratedClass BP_Interactable_Treasure.BP_Interactable_Treasure_C
// 0x005F (FullSize[0x03E1] - InheritedSize[0x0382])
class ABP_Interactable_Treasure_C : public ABP_Interactable_Event_C
{
public:
	unsigned char                                      UnknownData_EL9D[0x6];                                     // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropComponent*                              Drop;                                                      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralRenderMeshProxyComponent*         LightEmulatorMask;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULightEmulatorComponent*                     LightEmulator;                                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpineSkeletonAnimationComponent*            SpineSkeletonAnimation;                                    // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpineSkeletonRendererComponent*             SpineSkeletonRenderer;                                     // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         DropDataHandle;                                            // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         UniqueItem;                                                // 0x03D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	bool                                               AlreadyOpen;                                               // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_Treasure.BP_Interactable_Treasure_C");
		return ptr;
	}



	void SetSpineEnabled(bool bEnabled);
	void ConfigureEventPlayer(class UEventPlayer* EventPlayer);
	bool OnIsInteractable(class APlayerController* Controller);
	void UserConstructionScript();
	void OnFinish_F1BF530347E388EF6B03D09FF02ADE4B();
	void OnFinish_30F3864E4AA553E1799A2B8BC4D1B9C4();
	void OnCloseToOpenAnimEnd(class UTrackEntry* Entry);
	void BndEvt__ClearableComponent_K2Node_ComponentBoundEvent_0_ClearableEvent__DelegateSignature(bool bAlreadyCleared);
	void OnOpenEnd(class UTrackEntry* Entry);
	void OnInteract(class APlayerController* Controller);
	void OnCloseEnd(class UTrackEntry* Entry);
	void ExecuteUbergraph_BP_Interactable_Treasure(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
