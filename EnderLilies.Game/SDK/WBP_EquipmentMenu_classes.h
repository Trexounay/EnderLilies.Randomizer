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

// WidgetBlueprintGeneratedClass WBP_EquipmentMenu.WBP_EquipmentMenu_C
// 0x0100 (FullSize[0x03E8] - InheritedSize[0x02E8])
class UWBP_EquipmentMenu_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      LockIcon;                                                  // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              SetContainer;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    SetLockContainer;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BackgroundMouseBlocker_C*               WBP_BackgroundMouseBlocker;                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EquipmentSet_C*                         WBP_EquipmentSet_A;                                        // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EquipmentSet_C*                         WBP_EquipmentSet_B;                                        // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemDescription_C*                      WBP_ItemDescription;                                       // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemList_C*                             WBP_ItemList;                                              // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleHeader_C*                          WBP_TitleHeader;                                           // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnCancel;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USummonerComponent*                          SummonerComponent;                                         // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class USpiritEquipComponent*                       SpiritEquipComponent;                                      // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      Footer;                                                    // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<struct FFRichTextInputPair>                 FooterEntries_Unavailable;                                 // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFRichTextInputPair>                 FooterEntries_SelectEntry;                                 // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFRichTextInputPair>                 FooterEntries_FocusEquipmentEntry;                         // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFRichTextInputPair>                 FooterEntries_FocusItemEntry;                              // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UFMODEvent*                                  EventConfirmSetEntry;                                      // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  EventCancelSpiritSelection;                                // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  EventValidateSpiritSelection;                              // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  EventConfirmUnequip;                                       // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_EquipmentEntry_C*                       CurrentEquipmentEntry;                                     // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWBP_Item_C*                                 CurrentItemEntry;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFRichTextInputPair>                 CurrFooterEntries;                                         // 0x03D0(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	class UWidget*                                     PostErrorWidgetToFocus;                                    // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EquipmentMenu.WBP_EquipmentMenu_C");
		return ptr;
	}



	void RefreshLockVisibility();
	void UnequipFromEquipmentEntry(class UWBP_EquipmentEntry_C* EquipmentEntry);
	bool CanUnequip();
	void RefreshFooter(TArray<struct FFRichTextInputPair> RichTextDataArray, bool IgnoreCache);
	void EquipItemToSlot(class UWBP_Item_C* ItemEntry, class UWBP_EquipmentEntry_C* EquipmentEntry);
	void TryUnequipFromSet(class UWBP_EquipmentEntry_C* EquipmentEntry, Zenith_ESummonSet Set);
	bool CanChangeEquipment();
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	void RefreshEquipmentSlots();
	void SetFooter(class UWBP_MainMenu_Footer_C* Footer);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_1_OnClicked_Entry_Attack__DelegateSignature();
	void BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_4_OnClicked_Entry_Summon2__DelegateSignature();
	void BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_7_OnClicked_Entry_Summon1__DelegateSignature();
	void BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_0_OnClicked_Entry_Attack__DelegateSignature();
	void BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_2_OnClicked_Entry_Summon1__DelegateSignature();
	void BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_3_OnClicked_Entry_Summon2__DelegateSignature();
	void BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature(class UWBP_Item_C* Item);
	void BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_12_OnSelect__DelegateSignature(class UWBP_Item_C* Item);
	void OnCancelItemEntrySelection();
	void BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_10_OnFocusedItem__DelegateSignature(class UWBP_Item_C* Item);
	void BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_13_OnFocusedItem__DelegateSignature(class UWBP_Item_C* Item);
	void BndEvt__WBP_EquipmentSet_A_K2Node_ComponentBoundEvent_5_OnContextItem__DelegateSignature(class UWBP_EquipmentEntry_C* EquipmentEntry);
	void BndEvt__WBP_EquipmentSet_B_K2Node_ComponentBoundEvent_8_OnContextItem__DelegateSignature(class UWBP_EquipmentEntry_C* EquipmentEntry);
	void Reset();
	void OpenErrorDialog();
	void OnClickedOK();
	void ActivateEquipmentEntrySelection();
	void OnConfirmEquipmentEntry(class UWBP_EquipmentEntry_C* CurrentEquipmentEntry, Zenith_ESummonSet CurrentSetTarget);
	void ActivateItemEntrySelection();
	void DeactivateItemEntrySelection();
	void DeactivateEquipmentEntrySelection();
	void OnCancelEquipmentEntrySelection();
	void CancelPendingEquipActions();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_EquipmentMenu(int EntryPoint);
	void OnCancel__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
