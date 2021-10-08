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

// WidgetBlueprintGeneratedClass WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C
// 0x0080 (FullSize[0x02E0] - InheritedSize[0x0260])
class UWBP_KeyBindings_Gamepad_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C;                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C_2;                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C_3;                                   // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C_4;                                   // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C_5;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C_6;                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C_7;                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C_8;                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindingEntry_C*                      WBP_KeyBindingEntry_C_9;                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyBindings_C*                          WBP_KeyBindings;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                          // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                                GamepadCheckHandle;                                        // 0x02C8(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnKeyBindingModeChanged;                                   // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void GamepadCheck();
	void Destruct();
	void BndEvt__WBP_KeyBindings_K2Node_ComponentBoundEvent_0_OnKeyBindingKeyModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey);
	void ExecuteUbergraph_WBP_KeyBindings_Gamepad(int EntryPoint);
	void OnKeyBindingModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
