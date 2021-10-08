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

// BlueprintGeneratedClass BP_Interactable_Event.BP_Interactable_Event_C
// 0x0071 (FullSize[0x0382] - InheritedSize[0x0311])
class ABP_Interactable_Event_C : public ABP_Interactable_Base_C
{
public:
	unsigned char                                      UnknownData_LULN[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UEventAsset*                                 EventAsset;                                                // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FName, class AActor*>                  ActorBindings;                                             // 0x0328(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UEventPlayer*                                EventPlayer;                                               // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               InEvent;                                                   // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               PlayedEvent;                                               // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_Event.BP_Interactable_Event_C");
		return ptr;
	}



	bool CanBeMarkedAsCleared();
	void AddActorBinding(const struct FName& Key, class AActor* Value);
	void GetEventAssetToPlay(class UEventAsset** EventAsset);
	void ConfigureEventPlayer(class UEventPlayer* EventPlayer);
	bool OnIsInteractable(class APlayerController* Controller);
	void LaunchEvent();
	void OnInteract(class APlayerController* Controller);
	void OnDialogueOver();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnEventFinished();
	void OnLaunchEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Interactable_Event(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
