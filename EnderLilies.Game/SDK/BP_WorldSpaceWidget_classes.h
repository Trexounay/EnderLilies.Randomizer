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

// BlueprintGeneratedClass BP_WorldSpaceWidget.BP_WorldSpaceWidget_C
// 0x002A (FullSize[0x0252] - InheritedSize[0x0228])
class ABP_WorldSpaceWidget_C : public AReusableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFollowTargetComponent*                      FollowTarget;                                              // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWidgetComponent*                            Widget;                                                    // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      WidgetClass;                                               // 0x0248(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnToPoolOnFinish;                                      // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Finished;                                                  // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldSpaceWidget.BP_WorldSpaceWidget_C");
		return ptr;
	}



	void ForceFinish();
	void IsFinished(bool* Finished);
	void OnWidgetFinished();
	void InitializeWithInstance(class UUserWidget* UserWidget, bool ReturnToPoolOnFinish);
	void Initialize(class UClass* Class, bool ReturnToPoolOnFinish);
	void SetFollowTarget(class USceneComponent* NewFollowTarget, const struct FVector& Offset, bool bSnapToTarget);
	void ExecuteUbergraph_BP_WorldSpaceWidget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
