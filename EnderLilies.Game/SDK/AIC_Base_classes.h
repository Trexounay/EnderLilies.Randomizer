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

// BlueprintGeneratedClass AIC_Base.AIC_Base_C
// 0x0018 (FullSize[0x0378] - InheritedSize[0x0360])
class AAIC_Base_C : public AZenithAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      UIClass;                                                   // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 UIInstance;                                                // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Base.AIC_Base_C");
		return ptr;
	}



	void IncrementTargetFoundCount();
	void RemoveUI();
	void InitializeUI();
	void OnActivate();
	void OnChangeTarget(class AActor* NewTarget);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnPawnSetPaused(bool paused);
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
