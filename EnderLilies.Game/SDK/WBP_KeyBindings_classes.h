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

// WidgetBlueprintGeneratedClass WBP_KeyBindings.WBP_KeyBindings_C
// 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
class UWBP_KeyBindings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                                  KeyBindingSlot;                                            // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        ResetToDefaultButton;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	Zenith_EBindingType                                BindingType;                                               // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8Q6K[0x7];                                     // 0x0279(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UWBP_KeyBindingEntry_C*>              KeyBindingEntries;                                         // 0x0280(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	bool                                               RefreshingBindings;                                        // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               KeyBindingSettings;                                        // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FF2L[0x6];                                     // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnKeyBindingKeyModeChanged;                                // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KeyBindings.WBP_KeyBindings_C");
		return ptr;
	}



	class UWidget* DoCustomNavigation_1(SlateCore_EUINavigation Navigation);
	void CancelAllKeyBindingOperations();
	void SetResetToDefaultButtonVisibility(UMG_ESlateVisibility InVisibility);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void RefreshAllBindings();
	void BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void InitializeKeyBindingEntries(TArray<class UWBP_KeyBindingEntry_C*> TargetArray);
	void OnSelectKeyModeChanged(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey);
	void ExecuteUbergraph_WBP_KeyBindings(int EntryPoint);
	void OnKeyBindingKeyModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
