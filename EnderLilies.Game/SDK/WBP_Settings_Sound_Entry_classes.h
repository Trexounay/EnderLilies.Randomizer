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

// WidgetBlueprintGeneratedClass WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C
// 0x0058 (FullSize[0x0340] - InheritedSize[0x02E8])
class UWBP_Settings_Sound_Entry_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                                ProgressBar_289;                                           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                     VolumeSlider;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SettingEntry_C*                         WBP_SettingEntry;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Label;                                                     // 0x0308(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	Zenith_ESoundFamily                                SoundFamily;                                               // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RT8U[0x3];                                     // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              VolumeStep;                                                // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  TestSoundEvent;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  TestLoopSoundEvent;                                        // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                          LoopSoundEventInstance;                                    // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Settings_Sound_Entry.WBP_Settings_Sound_Entry_C");
		return ptr;
	}



	struct FEventReply OnPressCancel(const struct FKeyEvent& KeyEvent);
	float Get_VolumeSlider_Value_1();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__Slider_45_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_1_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void BndEvt__WBP_SettingEntry_K2Node_ComponentBoundEvent_2_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void SetVolume(float NewVolume);
	void PlayTestLoop();
	void StopTestLoop();
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void RefreshDisplay();
	void ExecuteUbergraph_WBP_Settings_Sound_Entry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
