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

// WidgetBlueprintGeneratedClass WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C
// 0x0078 (FullSize[0x0360] - InheritedSize[0x02E8])
class UWBP_SettingEntry_Toggle_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SettingEntry_Text_C*                    WBP_SettingRow;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnToggle;                                                  // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ToggleValue;                                               // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G2LF[0x7];                                     // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Label;                                                     // 0x0310(0x0018) (Edit, BlueprintVisible)
	class UFMODEvent*                                  EventValueChange;                                          // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Option_OFF;                                                // 0x0330(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Option_ON;                                                 // 0x0348(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingEntry_Toggle.WBP_SettingEntry_Toggle_C");
		return ptr;
	}



	void SetOptionColor(const struct FSlateColor& ColorAndOpacity);
	void SetLabelText(const struct FText& InText);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void SetToggle(bool ToggleValue);
	void BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void RefreshText();
	void ExecuteUbergraph_WBP_SettingEntry_Toggle(int EntryPoint);
	void OnToggle__DelegateSignature(bool ToggleValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
