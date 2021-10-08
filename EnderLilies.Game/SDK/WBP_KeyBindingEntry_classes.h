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

// WidgetBlueprintGeneratedClass WBP_KeyBindingEntry.WBP_KeyBindingEntry_C
// 0x00B0 (FullSize[0x0398] - InheritedSize[0x02E8])
class UWBP_KeyBindingEntry_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            WaitInputIdle;                                             // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      FullScreenMouseCapture;                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MouseButton;                                               // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  PressButtonText;                                           // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*                   RefreshableRichTextBlock_432;                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_C*                         WBP_SettingEntry;                                          // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       KeyBindingName;                                            // 0x0320(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ActionName;                                                // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnOverrideActionMapping;                                   // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       AxisName;                                                  // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AxisScale;                                                 // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_EUIInputTypes                               UIInputType;                                               // 0x035C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseGamepadKey;                                             // 0x035D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllowMouseKey;                                             // 0x035E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WaitingForKey;                                             // 0x035F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	class UFMODEvent*                                  EventBindingCancel;                                        // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  EventBindingConfirmed;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  EventBindingStarted;                                       // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                                UnregisterableKey;                                         // 0x0378(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnSelectKeyModeChanged;                                    // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KeyBindingEntry.WBP_KeyBindingEntry_C");
		return ptr;
	}



	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void Cancel_Binding_Operation();
	void ChangeSelectKeyMode(bool WaitingForKey);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnPressConfirm(const struct FKeyEvent& KeyEvent);
	void GetInputChord(struct FInputChord* InputChord);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OverrideActionBinding(const struct FInputChord& InputChord);
	void RefreshDisplay();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnNewKeySelected(const struct FInputChord& InputChord);
	void OnSelectKeyModeChange(bool IsSelectingKey);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void ExecuteUbergraph_WBP_KeyBindingEntry(int EntryPoint);
	void OnSelectKeyModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey);
	void OnOverrideActionMapping__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
