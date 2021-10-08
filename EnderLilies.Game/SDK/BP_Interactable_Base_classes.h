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

// BlueprintGeneratedClass BP_Interactable_Base.BP_Interactable_Base_C
// 0x0099 (FullSize[0x0311] - InheritedSize[0x0278])
class ABP_Interactable_Base_C : public AInteractable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_ConditionCheckerComponent_C*             BP_ConditionCheckerComponent;                              // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0288(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                 // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USphereComponent*                            Collider;                                                  // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCommandSettingsData*                        DirectionInputCommand;                                     // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  EventOnInteract;                                           // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 WidgetInstance;                                            // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                CommandID;                                                 // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A5TT[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCommandSet*                                 TargetRuntimeCommandSet;                                   // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FDirectionInputProfile                      UpDirectionProfile;                                        // 0x02D0(0x0009) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay)
	struct FDirectionInputProfile                      DownDirectionProfile;                                      // 0x02D9(0x0009) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay)
	bool                                               DisplaySystemMessage;                                      // 0x02E2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1MCJ[0x5];                                     // 0x02E3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SystemMessageOnInteract;                                   // 0x02E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class UClass*>                              Conditions;                                                // 0x0300(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<EConditionOperatorType_EConditionOperatorType> ConditionOperator;                                         // 0x0310(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_Base.BP_Interactable_Base_C");
		return ptr;
	}



	void LaunchSystemMessage();
	void RefreshUIText();
	void ReceiveBeginPlay();
	void OnActivateInteractable(class APlayerController* Controller);
	void OnDeactivateInteractable(class APlayerController* Controller);
	void AddCommand();
	void RemoveCommand();
	void OnInteract(class APlayerController* Controller);
	void BndEvt__BP_Interactable_Base_ClearableComponent_K2Node_ComponentBoundEvent_0_ClearableEvent__DelegateSignature(bool bAlreadyCleared);
	void ExecuteUbergraph_BP_Interactable_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
