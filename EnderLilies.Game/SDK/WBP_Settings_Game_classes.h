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

// WidgetBlueprintGeneratedClass WBP_Settings_Game.WBP_Settings_Game_C
// 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
class UWBP_Settings_Game_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DefaultButton_C*                        WBP_DefaultButton_ResetToDefault;                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_DisplayDamageValues;                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_DisplayEnemyFloatingGauges;                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_DisplayHealValues;                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_DisplayPlayerUI;                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_EnableCameraShake;                            // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_EnableDamageAreaPostProcess;                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_EnableForceFeedback;                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_EnableInternalAchievementNotification;        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_HoldForSummonSetSwitch;                       // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_LanguageSelection_C*           WBP_Settings_LanguageSelection;                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  WBP_Settings_NoAutoclimbWhilePressingDown;                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Settings_Game.WBP_Settings_Game_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__WBP_Settings_DisplayDamageValues_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_DisplayHealValues_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_EnableForceFeedback_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_EnableCameraShake_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_EnableInternalAchievementNotification_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_HoldForSummonSetSwitch_K2Node_ComponentBoundEvent_5_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_DisplayPlayerUI_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_DisplayEnemyFloatingGauges_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Game_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void InitializeValues();
	void BndEvt__WBP_Settings_Game_WBP_Settings_EnableDamageAreaPostProcess_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Game_WBP_Settings_NoAutoclimbWhilePressingDown_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature(bool ToggleValue);
	void ExecuteUbergraph_WBP_Settings_Game(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
