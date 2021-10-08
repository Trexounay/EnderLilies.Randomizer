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

// WidgetBlueprintGeneratedClass WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C
// 0x0078 (FullSize[0x0360] - InheritedSize[0x02E8])
class UWBP_DebugMenuToggleEntry_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Name;                                                      // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ToggleValue;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     CommandToExecuteToTurnOn;                                  // 0x0300(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CommandToExecuteToTurnOff;                                 // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       EntryName;                                                 // 0x0320(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     ConsoleVarNameForGetter;                                   // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Value;                                                     // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6D56[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnToggle;                                                  // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugMenuToggleEntry.WBP_DebugMenuToggleEntry_C");
		return ptr;
	}



	struct FEventReply OnPressRight(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressLeft(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnPressConfirm(const struct FKeyEvent& KeyEvent);
	void RefreshStatusText();
	void Toggle();
	void PreConstruct(bool IsDesignTime);
	void RefreshDesign(bool bFocused);
	void Construct();
	void OnInitialized();
	void SetToggleValue(bool Value);
	void ExecuteUbergraph_WBP_DebugMenuToggleEntry(int EntryPoint);
	void OnToggle__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
