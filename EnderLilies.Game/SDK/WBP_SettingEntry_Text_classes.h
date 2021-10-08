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

// WidgetBlueprintGeneratedClass WBP_SettingEntry_Text.WBP_SettingEntry_Text_C
// 0x0070 (FullSize[0x0358] - InheritedSize[0x02E8])
class UWBP_SettingEntry_Text_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  SelectedOption;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_C*                         WBP_SettingEntry;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPressedLeft;                                             // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPressedRight;                                            // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FText                                       LabelText;                                                 // 0x0320(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       LabelOption;                                               // 0x0338(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UPaperSprite*                                Custom_Setting_Icon;                                       // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingEntry_Text.WBP_SettingEntry_Text_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void SetLabelText(const struct FText& InText);
	void SetOptionColor(const struct FSlateColor& InColorAndOpacity);
	void SetOptionText(const struct FText& Text);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_0_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void ExecuteUbergraph_WBP_SettingEntry_Text(int EntryPoint);
	void OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
