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

// BlueprintGeneratedClass BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C
// 0x004E (FullSize[0x03D0] - InheritedSize[0x0382])
class ABP_Interactable_RestingPoint_C : public ABP_Interactable_Event_C
{
public:
	unsigned char                                      UnknownData_E9CB[0x6];                                     // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             SpiritLocation_4;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             SpiritLocation_3;                                          // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             SpiritLocation_2;                                          // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             PlayerStartLocation;                                       // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      PlayerStartClass;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                                PlayerStart;                                               // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class AZenithPlayerController*                     PlayerController;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C");
		return ptr;
	}



	void ReplaceRestingCompanion(const struct FCompanionData& CompanionData);
	void ConfigureEventPlayer(class UEventPlayer* EventPlayer);
	void OnInteract(class APlayerController* Controller);
	void ReceiveBeginPlay();
	void OnSpawnCompanion(const struct FCompanionData& CompanionData);
	void OnEventFinished();
	void ExecuteUbergraph_BP_Interactable_RestingPoint(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
