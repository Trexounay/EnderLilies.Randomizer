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

// WidgetBlueprintGeneratedClass WBP_PlayerUI.WBP_PlayerUI_C
// 0x00AC (FullSize[0x030C] - InheritedSize[0x0260])
class UWBP_PlayerUI_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerConversation_C*                   ConversationUI;                                            // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                            InvalidationBox_PlayerUI;                                  // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                PlayerUIContainer;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HealingItems_C*                         WBP_HealingItems;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_HPGauge_C*                              WBP_HPGauge;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Experience_C*                           WBP_Level;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LowHPFeedback_C*                        WBP_LowHPFeedback;                                         // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Map_Autocentered_C*                     WBP_Minimap;                                               // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MPGauge_C*                              WBP_MPGauge;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SummonDecks_C*                          WBP_SummonDecks;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TipNotification_C*                      WBP_TipNotification;                                       // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AZenithCharacter*                            Character;                                                 // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class AZenithPlayerController*                     Controller;                                                // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	UMG_ESlateVisibility                               LastPlayerUIVisibility;                                    // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DJQD[0x7];                                     // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           MinimapSizes;                                              // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FAnchorData>                         MinimapLayouts;                                            // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                MinimapCurrSizeIndex;                                      // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerUI.WBP_PlayerUI_C");
		return ptr;
	}



	void OnPaint(struct FPaintContext* Context);
	void PlayAnimationWithTime(class UWidgetAnimation* Animation, float Time);
	void SetMinimapSize(int MinimapSizeIndex);
	void ToggleMinimap();
	void ShowUIWithTime(float Time);
	void ShowUI();
	void HideUIWithTime(float Time);
	void HideUI();
	void RefreshPlayerUIContainerVisibility();
	void OnFinish_EF5570CD41D995E70BC60EAC4CF2DD0D();
	void Initialize(class AZenithPlayerController* Controller, class AZenithCharacter* Character);
	void DelayedInvalidate();
	void Construct();
	void Destruct();
	void OnPlayerUIVisibilitySettingsChanged();
	void ExecuteUbergraph_WBP_PlayerUI(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
