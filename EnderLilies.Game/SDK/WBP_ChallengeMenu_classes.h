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

// WidgetBlueprintGeneratedClass WBP_ChallengeMenu.WBP_ChallengeMenu_C
// 0x00E4 (FullSize[0x03CC] - InheritedSize[0x02E8])
class UWBP_ChallengeMenu_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_BackButton_C*                           WBP_BackButton;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BackgroundMouseBlocker_C*               WBP_BackgroundMouseBlocker;                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Text_C*                  WBP_ChallengeEntry_ContactDamageFactor;                    // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Text_C*                  WBP_ChallengeEntry_EnemyAttackFactor;                      // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Text_C*                  WBP_ChallengeEntry_EnemyMaxHPFactor;                       // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Toggle_C*                WBP_ChallengeEntry_OneHitKO;                               // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Toggle_C*                WBP_ChallengeEntry_PlayerCantHeal;                         // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Text_C*                  WBP_ChallengeEntry_PlayerLevelClamp;                       // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChallengeEntry_Text_C*                  WBP_ChallengeEntry_SpiritLevelClamp;                       // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        WBP_DefaultButton_Reset;                                   // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultScrollView_C*                    WBP_DefaultScrollView;                                     // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      WBP_MainMenu_Footer;                                       // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ManagePause;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_WLP4[0x7];                                     // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSlateColor                                 DefaultOptionColor;                                        // 0x0378(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 OtherOptionColor;                                          // 0x03A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                InitialMaxSpiritLevel;                                     // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ChallengeMenu.WBP_ChallengeMenu_C");
		return ptr;
	}



	void RefreshTextOptionColor(class UWBP_ChallengeEntry_Text_C* ChallengeTextEntry, bool UseDefaultColor);
	void RefreshToggleOptionColor(class UWBP_SettingEntry_Toggle_C* ChallengeToggleEntry, bool UseDefaultColor);
	void GetFactorText(float Value, struct FText* Result);
	void SetPauseIfNecessary(bool bPaused);
	void ReequipSpiritsIfNecessary();
	void AddSpiritMaxLevelClamp(int OffsetToAdd, bool AllowLoop);
	void AddPlayerMaxLevelClamp(int OffsetToAdd, bool AllowLoop);
	void AddContactDamageFactor(float FactorToAdd, bool AllowLoop);
	void AddEnemyMaxHPFactor(float FactorToAdd, bool AllowLoop);
	void AddEnemyAttackFactor(float FactorToAdd, bool AllowLoop);
	void RefreshDisplay();
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFinish_066E292E42E788874C41348FA3822509();
	void OnFinish_2071A4134BF576284BB5479C122E612A();
	void OnFinish_066E292E42E788874C41348F40D6FDB1();
	void OnFinish_2071A4134BF576284BB5479CF17AB992();
	void Construct();
	void BndEvt__NewWidgetBlueprint_WBP_ChallengeEntry_Values_K2Node_ComponentBoundEvent_0_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void Close();
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_OneHitKO_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_ChallengeMenu_WBP_DefaultButton_Reset_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyDamageFactor_K2Node_ComponentBoundEvent_5_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_6_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_7_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_8_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_9_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerCantHeal_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_ChallengeMenu_WBP_BackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_12_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_13_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_1_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_14_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void ExecuteUbergraph_WBP_ChallengeMenu(int EntryPoint);
	void OnClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
