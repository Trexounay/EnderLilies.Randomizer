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

// WidgetBlueprintGeneratedClass WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C
// 0x0040 (FullSize[0x0328] - InheritedSize[0x02E8])
class UWBP_Settings_Graphics_Resolution_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SettingEntry_Text_C*                    WBP_SettingRow;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFMODEvent*                                  EventOptionChanged;                                        // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntPoint>                           Resolutions;                                               // 0x0300(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	int                                                CurrIndex;                                                 // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PYON[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnOptionChanged;                                           // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Settings_Graphics_Resolution.WBP_Settings_Graphics_Resolution_C");
		return ptr;
	}



	void GetSelectedResolution(struct FIntPoint* SelectedResolution);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void RefreshResolutionText();
	void RefreshResolutionChoices(TEnumAsByte<Engine_EWindowMode> WindowMode);
	void RefreshVisibility(TEnumAsByte<Engine_EWindowMode> Index);
	void BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_2_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_SettingRow_K2Node_ComponentBoundEvent_3_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void ExecuteUbergraph_WBP_Settings_Graphics_Resolution(int EntryPoint);
	void OnOptionChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
