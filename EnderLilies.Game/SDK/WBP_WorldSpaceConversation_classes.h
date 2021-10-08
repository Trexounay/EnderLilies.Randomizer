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

// WidgetBlueprintGeneratedClass WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C
// 0x0091 (FullSize[0x0301] - InheritedSize[0x0270])
class UWBP_WorldSpaceConversation_C : public UWBP_WorldSpaceWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            SkipIconIdle;                                              // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            SkipIconShow;                                              // 0x0280(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeOut;                                                   // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      AllowSkipIcon;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ConversationTextBlock;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FConversationData                           ConversationData;                                          // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	int                                                CurrIndex;                                                 // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S2J0[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TimerHandle;                                               // 0x02C0(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FConversationEntry                          CurrEntry;                                                 // 0x02C8(0x0038) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	bool                                               WaitForInput;                                              // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C");
		return ptr;
	}



	void Construct();
	void ShowText();
	void FadeOutText();
	void OnViewportKeyDown(const struct FKeyEvent& KeyEvent);
	void Destruct();
	void ExecuteUbergraph_WBP_WorldSpaceConversation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
