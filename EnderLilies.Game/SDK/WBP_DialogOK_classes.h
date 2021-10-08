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

// WidgetBlueprintGeneratedClass WBP_DialogOK.WBP_DialogOK_C
// 0x008A (FullSize[0x037A] - InheritedSize[0x02F0])
class UWBP_DialogOK_C : public UUserWidgetError
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BG;                                                        // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        Button_OK;                                                 // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ErrorMessageTextBlock;                                     // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_Dialog;                                    // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BackgroundMouseBlocker_C*               WBP_BackgroundMouseBlocker;                                // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      WBP_MainMenu_Footer;                                       // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Message;                                                   // 0x0338(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FText                                       OK;                                                        // 0x0350(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnClickOK;                                                 // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               AutoManagePause;                                           // 0x0378(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               IsOpen;                                                    // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DialogOK.WBP_DialogOK_C");
		return ptr;
	}



	void SetTexts(const struct FText& MessageText, const struct FText& OKText);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFinish_066E292E42E788874C41348F1CA5C6C8();
	void OnFinish_2071A4134BF576284BB5479CAD0982EB();
	void OnFinish_066E292E42E788874C41348FFB4E85B5();
	void OnFinish_2071A4134BF576284BB5479C4AE2C196();
	void Construct();
	void BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void SetErrorMessage(const struct FText& Title, const struct FText& Message);
	void ExecuteUbergraph_WBP_DialogOK(int EntryPoint);
	void OnClickOK__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
