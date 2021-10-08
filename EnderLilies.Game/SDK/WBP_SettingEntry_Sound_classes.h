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

// WidgetBlueprintGeneratedClass WBP_SettingEntry_Sound.WBP_SettingEntry_Sound_C
// 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
class UWBP_SettingEntry_Sound_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DefaultButton_C*                        WBP_DefaultButton_ResetToDefault;                          // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Sound_Entry_C*                 WBP_Settings_Sound_Ambience;                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Sound_Entry_C*                 WBP_Settings_Sound_BGM;                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Settings_Sound_Entry_C*                 WBP_Settings_Sound_SE;                                     // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingEntry_Sound.WBP_SettingEntry_Sound_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_SettingEntry_Sound_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void ExecuteUbergraph_WBP_SettingEntry_Sound(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
