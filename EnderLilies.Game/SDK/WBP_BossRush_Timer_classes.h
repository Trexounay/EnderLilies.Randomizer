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

// WidgetBlueprintGeneratedClass WBP_BossRush_Timer.WBP_BossRush_Timer_C
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UWBP_BossRush_Timer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                                    OverlayContainer;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TimerText;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBossRushComponent*                          BossRushComponent;                                         // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BossRush_Timer.WBP_BossRush_Timer_C");
		return ptr;
	}



	void RefreshVisibility();
	void RefreshTimerText();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void OnDisplayPlayerUIChanged();
	void ExecuteUbergraph_WBP_BossRush_Timer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
