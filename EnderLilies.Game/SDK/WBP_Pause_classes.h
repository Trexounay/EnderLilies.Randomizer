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

// WidgetBlueprintGeneratedClass WBP_Pause.WBP_Pause_C
// 0x0110 (FullSize[0x03F8] - InheritedSize[0x02E8])
class UWBP_Pause_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            HideAllUI;                                                 // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            ShowContent;                                               // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            HideContent;                                               // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Hide;                                                      // 0x0308(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x0310(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        Achievements;                                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        BackToRestpoint;                                           // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        Continue;                                                  // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Holder;                                                    // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      InputBlocker;                                              // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_Pause;                                     // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        QuitGame;                                                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        ReturnToTitle;                                             // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        Settings;                                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBoxContainer;                                      // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      WBP_MainMenu_Footer;                                       // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BackgroundMouseBlocker_C*               WBP_MouseBlocker;                                          // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFMODEvent*                                  InMenuSnapshot;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnResumeGame;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       SoundSnapshotTag;                                          // 0x0390(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUIVisible;                                               // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               LockedNav;                                                 // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_M10D[0x6];                                     // 0x039A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_DefaultButton_C*                        LastButton;                                                // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TMap<class UUserWidget*, UMG_ESlateVisibility>     CachedWidgetVisibilities;                                  // 0x03A8(0x0050) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Pause.WBP_Pause_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTWBP_Pause_1();
	void SetAudioSnapshotEnable(bool Enable);
	void SetBackToRestPointButtonState();
	void SetAchievementsButtonText();
	void UnlockNavigation();
	void LockNavigation();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void ToggleUIVisibility();
	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFinish_066E292E42E788874C41348F56BD7AC1();
	void OnFinish_2071A4134BF576284BB5479CE7113EE2();
	void OnFinish_066E292E42E788874C41348F03CA60C1();
	void OnFinish_2071A4134BF576284BB5479CB26624E2();
	void OnFinish_066E292E42E788874C41348F1FD48603();
	void OnFinish_2071A4134BF576284BB5479CAE78C220();
	void OnFinish_066E292E42E788874C41348FBDDC33EB();
	void OnFinish_2071A4134BF576284BB5479C0C7077C8();
	void OnFinish_066E292E42E788874C41348F43230270();
	void OnFinish_2071A4134BF576284BB5479CF28F4653();
	void OnFinish_2071A4134BF576284BB5479C93B89820();
	void OnFinish_066E292E42E788874C41348F2214DC03();
	void OnHideAllUIAnimEvaluate();
	void BndEvt__ReturnToTitle_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__QuitGame_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__GraphicSettings_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void OnSettingsClose();
	void OnQuitGameClickYES();
	void OnQuitGameClickNO();
	void OnReturnTitleClickYES();
	void OnReturnTitleClickNO();
	void Construct();
	void ResumeGame();
	void ForceClose();
	void BndEvt__Continue_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__Achievements_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void OnAchievementsClose();
	void WidgetAnimationEvt_HideAllUI_K2Node_WidgetAnimationEvent_1();
	void BndEvt__BackToRestpoint_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void OnBackToRestpointYES();
	void OnBackToRestpointNO();
	void Destruct();
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnFadeFinished();
	void ExecuteUbergraph_WBP_Pause(int EntryPoint);
	void OnResumeGame__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
