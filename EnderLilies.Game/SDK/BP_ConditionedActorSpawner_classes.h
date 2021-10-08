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

// BlueprintGeneratedClass BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C
// 0x0060 (FullSize[0x0280] - InheritedSize[0x0220])
class ABP_ConditionedActorSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ConditionCheckerComponent_C*             BP_ConditionCheckerComponent;                              // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UClass*>                              Conditions;                                                // 0x0238(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<EConditionOperatorType_EConditionOperatorType> ConditionOperator;                                         // 0x0248(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4HV4[0x7];                                     // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ActorClass[0x28];                                          // 0x0249(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	class AActor*                                      SpawnedActor;                                              // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConditionedActorSpawner.BP_ConditionedActorSpawner_C");
		return ptr;
	}



	void GetSpawnedActor(class AActor** SpawnedActor);
	void OnLoaded_18DE97F54AC02915B0749396618A982F(class UClass* Loaded);
	void OnLoaded_140E7CF84C8078CECA4CEBBEFFEC932F();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ConditionedActorSpawner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
