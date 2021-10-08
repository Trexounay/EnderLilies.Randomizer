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

// WidgetBlueprintGeneratedClass WBP_DialogYesNo.WBP_DialogYesNo_C
// 0x00B9 (FullSize[0x03A1] - InheritedSize[0x02E8])
class UWBP_DialogYesNo_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BG;                                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        Button_NO;                                                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        Button_YES;                                                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ErrorMessageTextBlock;                                     // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_Dialog;                                    // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BackgroundMouseBlocker_C*               WBP_BackgroundMouseBlocker;                                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      WBP_MainMenu_Footer;                                       // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0338(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	struct FText                                       Yes;                                                       // 0x0350(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	struct FText                                       No;                                                        // 0x0368(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnClickYES;                                                // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClickNO;                                                 // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsOpen;                                                    // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DialogYesNo.WBP_DialogYesNo_C");
		return ptr;
	}



	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFinish_066E292E42E788874C41348F04FA604E();
	void OnFinish_2071A4134BF576284BB5479CB556246D();
	void OnFinish_066E292E42E788874C41348F962FFF6A();
	void OnFinish_2071A4134BF576284BB5479C2783BB49();
	void OnFinish_066E292E42E788874C41348F9D4D0324();
	void OnFinish_2071A4134BF576284BB5479C2CE14707();
	void BndEvt__Button_YES_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__Button_NO_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void Construct();
	void SetTexts(const struct FText& MessageText, const struct FText& YESText, const struct FText& NOText);
	void OnPressCancelButton();
	void ExecuteUbergraph_WBP_DialogYesNo(int EntryPoint);
	void OnClickNO__DelegateSignature();
	void OnClickYES__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
