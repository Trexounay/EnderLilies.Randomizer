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

// BlueprintGeneratedClass BP_Trigger.BP_Trigger_C
// 0x0039 (FullSize[0x0271] - InheritedSize[0x0238])
class ABP_Trigger_C : public ATrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ConditionCheckerComponent_C*             BP_ConditionCheckerComponent;                              // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                 // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               BoxTrigger;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             Pivot;                                                     // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UClass*>                              TriggerConditions;                                         // 0x0260(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<EConditionOperatorType_EConditionOperatorType> ConditionOperator;                                         // 0x0270(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trigger.BP_Trigger_C");
		return ptr;
	}



	bool CanTrigger();
	void Trigger(class APlayerController* PlayerController);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void OnTrigger(class APlayerController* PlayerController);
	void ExecuteUbergraph_BP_Trigger(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
