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

// WidgetBlueprintGeneratedClass WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C
// 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
class UWBP_Settings_Graphics_DisplayMode_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_SettingEntry_Text_C*                    SettingRow;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFMODEvent*                                  EventOptionChanged;                                        // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EWindowMode>                    CurrMode;                                                  // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PEK9[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnOptionChanged;                                           // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Settings_Graphics_DisplayMode.WBP_Settings_Graphics_DisplayMode_C");
		return ptr;
	}



	void GetSelectedDisplayMode(TEnumAsByte<Engine_EWindowMode>* CurrMode);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void RefreshVisual(TEnumAsByte<Engine_EWindowMode> WindowMode);
	void ChangeMode(bool bRight);
	void BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__NewWidgetBlueprint_K2Node_ComponentBoundEvent_3_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void Construct();
	void ExecuteUbergraph_WBP_Settings_Graphics_DisplayMode(int EntryPoint);
	void OnOptionChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
