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

// WidgetBlueprintGeneratedClass WBP_Passive_EquippedList.WBP_Passive_EquippedList_C
// 0x0078 (FullSize[0x02D8] - InheritedSize[0x0260])
class UWBP_Passive_EquippedList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                                    GridHolder;                                                // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleHeader_C*                          HeaderEquipped;                                            // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    LockContainer;                                             // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LockIcon;                                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SlotTextBlock;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Item_C*>                         Slots;                                                     // 0x0290(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class UPassiveEquipComponent*                      PassiveEquipComponent;                                     // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPassiveSelected;                                         // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPassiveFocused;                                          // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_Passive_Dummy_C*>                DummySlots;                                                // 0x02C8(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Passive_EquippedList.WBP_Passive_EquippedList_C");
		return ptr;
	}



	void ClearPassives();
	void SetLockContainerVisibility(UMG_ESlateVisibility Visibility);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Initialize(class UPassiveEquipComponent* PassiveEquipComponent);
	void OnPassiveChanged();
	void OnSelectPassive(class UWBP_Item_C* EquipmentItem);
	void OnFocusPassive(class UWBP_Item_C* EquipmentItem);
	void ExecuteUbergraph_WBP_Passive_EquippedList(int EntryPoint);
	void OnPassiveFocused__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void OnPassiveSelected__DelegateSignature(class UWBP_Item_C* EquipmentItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
