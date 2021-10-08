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

// WidgetBlueprintGeneratedClass WBP_RecollectionMenu.WBP_RecollectionMenu_C
// 0x00E1 (FullSize[0x03C9] - InheritedSize[0x02E8])
class UWBP_RecollectionMenu_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            HideBossRush;                                              // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowBossRush;                                              // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            AnimPrevPage;                                              // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            AnimNextPage;                                              // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Hide;                                                      // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                             ContentWidgetSwitcher;                                     // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*                   NextPage;                                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*                   PrevPage;                                                  // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsTab_C*                          Tab_Bosses;                                                // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsTab_C*                          Tab_BossRush;                                              // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingsTab_C*                          Tab_Movies;                                                // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultScrollView_C*                    WBP_DefaultScrollView;                                     // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      WBP_MainMenu_Footer;                                       // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BackgroundMouseBlocker_C*               WBP_MouseBlocker;                                          // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Recollection_BossList_C*                WBP_Recollection_BossList;                                 // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Recollection_BossRush_C*                WBP_Recollection_BossRush_C_3;                             // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Recollection_MovieList_C*               WBP_Recollection_MovieList;                                // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClose;                                                   // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                CurrTabIndex;                                              // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A0FJ[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWBP_SettingsTab_C*>                  TabArray;                                                  // 0x0398(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	struct FScriptMulticastDelegate                    OnRequestMapChange;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                         NextMap;                                                   // 0x03B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                               AllowBossRushDisplay;                                      // 0x03C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RecollectionMenu.WBP_RecollectionMenu_C");
		return ptr;
	}



	void GoToSideTab(bool NextTab);
	void SelectTab(int TabIndex);
	void IsBossRushMenuVisible(bool* Result);
	void IsBossMenuVisible(bool* Result);
	void SetupMenuTabs();
	struct FEventReply OnPressNextPage(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressPrevPage(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	void OnFinish_2071A4134BF576284BB5479CEB53F866();
	void OnFinish_066E292E42E788874C41348F5D2F02F2();
	void OnFinish_2071A4134BF576284BB5479CEC8346D1();
	void OnFinish_066E292E42E788874C41348F5AFFBC45();
	void Construct();
	void CloseMenu();
	void BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_0_OnRequestMapChange__DelegateSignature(const struct FDataTableRowHandle& Map);
	void OnFadeFinished();
	void OnBossRushFadeFinished();
	void BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_1_OnRequestBossRush__DelegateSignature();
	void BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossRush_C_2_K2Node_ComponentBoundEvent_3_OnLaunchBossRush__DelegateSignature();
	void BndEvt__WBP_RecollectionMenu_Tab_BossRush_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_RecollectionMenu_Tab_Bosses_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__WBP_RecollectionMenu_Tab_Movies_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_RecollectionMenu(int EntryPoint);
	void OnRequestMapChange__DelegateSignature(const struct FDataTableRowHandle& Map);
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
