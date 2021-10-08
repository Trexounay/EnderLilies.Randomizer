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

// BlueprintGeneratedClass BP_Interactable_Item.BP_Interactable_Item_C
// 0x0027 (FullSize[0x03A9] - InheritedSize[0x0382])
class ABP_Interactable_Item_C : public ABP_Interactable_Event_C
{
public:
	unsigned char                                      UnknownData_1379[0x6];                                     // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         Item;                                                      // 0x0398(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	bool                                               DestroyAfterPickUp;                                        // 0x03A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		UClass* ptr = nullptr;
		//if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_Item.BP_Interactable_Item_C");
		return ptr;
	}

	void EnsureItemObtained();
	void ConfigureEventPlayer(class UEventPlayer* EventPlayer);
	struct FText GetInteractionText();
	void OnInteract(class APlayerController* Controller);
	void OnEventFinished();
	void OnInteractableAlreadyCleared();
	void ExecuteUbergraph_BP_Interactable_Item(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
