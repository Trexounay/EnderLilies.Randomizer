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

// WidgetBlueprintGeneratedClass WBP_Settings_Graphics.WBP_Settings_Graphics_C
// 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
class UWBP_Settings_Graphics_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SettingEntry_Toggle_C*                  AntiAliasing;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        Apply;                                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Border;                                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Graphics_DisplayMode_C*        DisplayMode;                                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      DisplayWarningIcon;                                        // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  EffectQuality;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        Gamma;                                                     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  PostProcessQuality;                                        // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Graphics_Resolution_C*         Resolution;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_Toggle_C*                  VSync;                                                     // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        WBP_DefaultButton_ResetToDefault;                          // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Graphics_FPSLimit_C*           WBP_Settings_Graphics_FPSLimit;                            // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Graphics_ResolutionScale_C*    WBP_Settings_Graphics_ResolutionScale;                     // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Settings_Graphics.WBP_Settings_Graphics_C");
		return ptr;
	}



	void RevertToDefault();
	void SetVideoApplyEnabled(bool bInIsEnabled);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_Settings_Toggle_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__DisplayMode_K2Node_ComponentBoundEvent_2_OnOptionChanged__DelegateSignature();
	void Destruct();
	void BndEvt__Gamma_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void OnCloseGamma();
	void BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature(bool ToggleValue);
	void Construct();
	void BndEvt__Resolution_K2Node_ComponentBoundEvent_5_OnOptionChanged__DelegateSignature();
	void BndEvt__PostProcessQuality_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__EffectQuality_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature(bool ToggleValue);
	void BndEvt__WBP_Settings_Graphics_ResolutionScale_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float Value);
	void BndEvt__WBP_Settings_Graphics_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void RefreshDisplay();
	void ExecuteUbergraph_WBP_Settings_Graphics(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
