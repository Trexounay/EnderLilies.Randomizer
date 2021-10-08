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

// WidgetBlueprintGeneratedClass WBP_PassiveMenu.WBP_PassiveMenu_C
// 0x0078 (FullSize[0x0360] - InheritedSize[0x02E8])
class UWBP_PassiveMenu_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BackgroundMouseBlocker_C*               WBP_BackgroundMouseBlocker;                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemDescription_C*                      WBP_ItemDescription;                                       // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemList_C*                             WBP_ItemList;                                              // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Passive_EquippedList_C*                 WBP_Passive_EquippedList;                                  // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FFRichTextInputPair>                 FooterEntries_Unavailable;                                 // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFRichTextInputPair>                 FooterEntries_Equip;                                       // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFRichTextInputPair>                 FooterEntries_Unequip;                                     // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UWBP_Item_C*                                 CurrentItem;                                               // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      Footer;                                                    // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FFRichTextInputPair>                 FooterEntries_Current;                                     // 0x0350(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PassiveMenu.WBP_PassiveMenu_C");
		return ptr;
	}



	int GetWrappedDownItemIndex(int SlotIndex, int ItemCount, int SlotPerLine);
	void ScrollItemListToStart();
	class UWidget* DoCustomNavigation_EquippedList(SlateCore_EUINavigation Navigation);
	class UWidget* DoCustomNavigation_ItemList(SlateCore_EUINavigation Navigation);
	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	void RefreshFooterForItemEntry(class UWBP_Item_C* ItemEntry);
	void RefreshFooter(bool IgnoreCache, TArray<struct FFRichTextInputPair> RichTextDataArray);
	bool IsPassiveItemEquipped(class UWBP_Item_C* Item);
	bool CanChangeEquipment();
	void UnequipPassiveFromItem(class UWBP_Item_C* Item);
	void UnequipFromPassiveEquippedList(class UWBP_Item_C* InputPin);
	void SetFooter(class UWBP_MainMenu_Footer_C* Footer);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature(class UWBP_Item_C* Item);
	void BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature(class UWBP_Item_C* Item);
	void Construct();
	void BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_2_OnPassiveFocused__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void BndEvt__WBP_Passive_EquippedList_K2Node_ComponentBoundEvent_3_OnPassiveSelected__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void OpenErrorDialog_RestPoint();
	void OpenErrorDialog_SlotCount();
	void OnClickedOK_Error();
	void OnContext();
	void OpenErrorDialog_PassiveLimit();
	void ExecuteUbergraph_WBP_PassiveMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
