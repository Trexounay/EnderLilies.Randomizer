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

// WidgetBlueprintGeneratedClass WBP_RestMenu.WBP_RestMenu_C
// 0x0110 (FullSize[0x03F8] - InheritedSize[0x02E8])
class UWBP_RestMenu_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            HideUI;                                                    // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            HideTransition;                                            // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Close;                                                     // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BG;                                                        // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ChallengeIcon;                                             // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      HeaderImg;                                                 // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalBox_Challenge;                                   // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      NewPassiveIcon;                                            // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      NewRecollectionIcon;                                       // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      NewSpiritIcon;                                             // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Challenge;                                      // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Equipment;                                      // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Equipment_dummy;                                // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Leave;                                          // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Map;                                            // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Map_dummy;                                      // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Passive;                                        // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Passive_dummy;                                  // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Recollection;                                   // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Save;                                           // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Strengthen;                                     // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       RestButton_Strengthen_dummy;                               // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  RestPointName;                                             // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      WBP_MainMenu_Footer;                                       // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BackgroundMouseBlocker_C*               WBP_MouseBlocker;                                          // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Equipment;                                  // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Passive;                                    // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_RestButton_Map;                             // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Strengthen;                                 // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               IsUIVisible;                                               // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_WAKM[0x7];                                     // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_RestMenuButton_C*                       LastButton;                                                // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     LastWidget;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RestMenu.WBP_RestMenu_C");
		return ptr;
	}



	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ToggleUI();
	void RefreshButtonStates();
	void RefreshNavigationRules();
	void SetStrengthenButtonActive(bool Active);
	void SetPassiveButtonActive(bool Active);
	void SetEquipButtonActive(bool Active);
	void SetActiveFastTravelWidget(bool Active);
	bool CheckAvailableStrengthen();
	bool CheckAvailablePassive();
	bool CheckAvailableEquip();
	void CheckAvailableFastTravel(bool* IsAvaliableFastTravel);
	void SetChallengeIconVisibility();
	void SetRecollectionNewIconVisibility();
	void SetPassiveNewIconVisibility();
	void SetSpiritNewIconVisibility();
	void RefreshRestPointName();
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFinish_066E292E42E788874C41348F18657F70();
	void OnFinish_2071A4134BF576284BB5479CA9C93B53();
	void OnFinish_066E292E42E788874C41348FFFB8C7B3();
	void OnFinish_2071A4134BF576284BB5479C4E148390();
	void OnFinish_066E292E42E788874C41348F17F69077();
	void OnFinish_2071A4134BF576284BB5479CA65AD454();
	void OnFinish_066E292E42E788874C41348F3F09A060();
	void OnFinish_2071A4134BF576284BB5479C8EA5E443();
	void OnFinish_066E292E42E788874C41348F747ABB69();
	void OnFinish_2071A4134BF576284BB5479CC5D6FF4A();
	void OnFinish_066E292E42E788874C41348F7D6DF003();
	void OnFinish_2071A4134BF576284BB5479CCCC1B420();
	void OnFinish_066E292E42E788874C41348FAA067F54();
	void OnFinish_2071A4134BF576284BB5479C1BAA3B77();
	void OnFinish_066E292E42E788874C41348F42B6A853();
	void OnFinish_2071A4134BF576284BB5479CF31AEC70();
	void OnFinish_066E292E42E788874C41348F01D7E1E3();
	void OnFinish_2071A4134BF576284BB5479CB07BA5C0();
	void OnFinish_2071A4134BF576284BB5479CC8EBDD08();
	void OnFinish_066E292E42E788874C41348F52F9E87B();
	void OnFinish_2071A4134BF576284BB5479CE355AC58();
	void OnFinish_2071A4134BF576284BB5479C695AEDBD();
	void OnFinish_066E292E42E788874C41348F7947992B();
	void OnFinish_066E292E42E788874C41348F65BAF5C7();
	void OnFinish_2071A4134BF576284BB5479CD416B1E4();
	void OnFinish_066E292E42E788874C41348FD8F6A99E();
	void OnFinish_066E292E42E788874C41348F9C40240B();
	void OnFinish_2071A4134BF576284BB5479C2DEC6028();
	void OnFinish_B201F08648361695E1BF52BB7F603DFF();
	void Construct();
	void CloseMenu(bool PlayAnimation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnCloseStrengthen();
	void OnCloseEquipment();
	void OnCloseMap();
	void OnRequestFastTravel(const struct FDataTableRowHandle& GameMapHandle);
	void BndEvt__RestButton_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__RestButton_Equipment_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__RestButton_Strengthen_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__RestButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void RemoveMenu();
	void BndEvt__RestButton_Save_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__RestButton_Passive_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void OnClosePassive();
	void OnSaveFinished(bool bSuccess);
	void OnClickedOK();
	void CheckTutorials();
	void WidgetAnimationEvt_HideUI_K2Node_WidgetAnimationEvent_2();
	void BndEvt__WBP_RestMenu_RestButton_Recollection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void OnCloseRecollection();
	void BndEvt__WBP_RestMenu_RestButton_Challenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void OnCloseChallenge();
	void OnRequestMapChange(const struct FDataTableRowHandle& Map);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_RestMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
