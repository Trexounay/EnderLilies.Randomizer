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

// WidgetBlueprintGeneratedClass WBP_HPGauge.WBP_HPGauge_C
// 0x0430 (FullSize[0x0690] - InheritedSize[0x0260])
class UWBP_HPGauge_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            AnimHeal;                                                  // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            AnimHPUp;                                                  // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            AnimDamage;                                                // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                                HPDelayedGauge;                                            // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                HPGauge;                                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    HPGauges;                                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    HPGaugeSizeBox;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      WBP_PlayerHPCover;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AZenithCharacter*                            Character;                                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               UpdateDelayedHP;                                           // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_VLFB[0x3];                                     // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GaugePixelPerHP;                                           // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProgressBarStyle                           DelayedGaugeStyle;                                         // 0x02B8(0x01A0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FProgressBarStyle                           GaugeStyle;                                                // 0x0458(0x01A0) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 FrameBrush;                                                // 0x05F8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     HPGaugeOffsets;                                            // 0x0680(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HPGauge.WBP_HPGauge_C");
		return ptr;
	}



	void RefreshHPGaugeWidth();
	void SetDelayedGaugeVisible(bool Visible);
	float Get_HPGauge_Percent();
	void OnHPChanged();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMaxHPChanged();
	void OnReceivedDamage(class AActor* From, int Damage);
	void OnReceiveHeal(class AActor* From, int Damage);
	void Initialize(class AZenithCharacter* Character);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_HPGauge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
