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

// WidgetBlueprintGeneratedClass WBP_FastTravel.WBP_FastTravel_C
// 0x00A8 (FullSize[0x0390] - InheritedSize[0x02E8])
class UWBP_FastTravel_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BGLeftSide;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BackgroundMouseBlocker_C*               WBP_BackgroundMouseBlocker;                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultScrollView_C*                    WBP_DefaultScrollView;                                     // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MainMenu_Footer_C*                      WBP_FastTravel_Footer;                                     // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapScrollableTick_C*                    WBP_MapScrollableTick;                                     // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleHeader_C*                          WBP_TitleHeader;                                           // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                                    WrapBox_66;                                                // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClose;                                                   // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               EnableCheatMode;                                           // 0x0348(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_B9BV[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnRequestFastTravel;                                       // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FFRichTextInputPair>                 FooterEntries;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UWBP_FastTravel_Button_C*                    CurrentMapButton;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PageScrollCount;                                           // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F6A9[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  SoundEventOnPageChange;                                    // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  SoundEventOnCancelTravelToSameMap;                         // 0x0388(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FastTravel.WBP_FastTravel_C");
		return ptr;
	}



	void SetupWrapNavigationRules();
	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressPrevPage(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressNextPage(const struct FKeyEvent& KeyEvent);
	void CreateMapItemList();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	void OnFinish_066E292E42E788874C41348FD992F285();
	void OnFinish_2071A4134BF576284BB5479C683EB6A6();
	void OnFinish_066E292E42E788874C41348FC5F08AB2();
	void OnFinish_2071A4134BF576284BB5479C745CCE91();
	void Construct();
	void CloseMenu();
	void OnFastTravelButtonConfirmed(class UWBP_FastTravel_Button_C* FastTravelButton);
	void OnFastTravelButtonFocused(class UWBP_FastTravel_Button_C* FastTravelButton);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_FastTravel(int EntryPoint);
	void OnRequestFastTravel__DelegateSignature(const struct FDataTableRowHandle& GameMapHandle);
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
