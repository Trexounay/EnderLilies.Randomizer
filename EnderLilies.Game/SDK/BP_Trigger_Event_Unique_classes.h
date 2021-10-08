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

// BlueprintGeneratedClass BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C
// 0x0158 (FullSize[0x03C9] - InheritedSize[0x0271])
class ABP_Trigger_Event_Unique_C : public ABP_Trigger_C
{
public:
	unsigned char                                      UnknownData_I859[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UEventAsset*                                 EventToPlay;                                               // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FName, class AActor*>                  ActorBindings;                                             // 0x0288(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<struct FName, class ABP_EnemySpawnPoint_C*>   EnemySpawnerBindings;                                      // 0x02D8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<struct FName, class ABP_ConditionedActorSpawner_C*> ActorSpawnerBindings;                                      // 0x0328(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TMap<struct FName, class AActor*>                  BlackboardActorData;                                       // 0x0378(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               TriggerInEditorMap;                                        // 0x03C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C");
		return ptr;
	}



	void ConfigureEventPlayer(class UEventPlayer* EventPlayer);
	bool AllowTrigger();
	void GenerateActorBindings();
	void OnReady_F16DFAA64BB4A1FBA9BC0FB4399FD005();
	void OnTrigger(class APlayerController* PlayerController);
	void ExecuteUbergraph_BP_Trigger_Event_Unique(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
