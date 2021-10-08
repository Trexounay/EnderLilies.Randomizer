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

// WidgetBlueprintGeneratedClass WBP_MainMenu_Footer.WBP_MainMenu_Footer_C
// 0x0058 (FullSize[0x02B8] - InheritedSize[0x0260])
class UWBP_MainMenu_Footer_C : public UFooterUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      FooterBG_Dark;                                             // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              FooterEntryContainer;                                      // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_BG;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               RegisterAsCurrentFooter;                                   // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseDarkBG;                                                 // 0x0281(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9NIJ[0x6];                                     // 0x0282(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFRichTextInputPair>                 DefaultFooterEntries;                                      // 0x0288(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFRichTextInputPair>                 TemporaryEntries;                                          // 0x0298(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	TArray<class UWBP_MainMenu_FooterEntry_C*>         TemporaryEntryInstances;                                   // 0x02A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_Footer.WBP_MainMenu_Footer_C");
		return ptr;
	}



	void AddEntry(const struct FFRichTextInputPair& RichTextData, bool Temporary);
	void ClearEntries();
	void AddEntries(TArray<struct FFRichTextInputPair> RichTextDataArray, bool Temporary);
	void InitializeWithEntries(TArray<struct FFRichTextInputPair> RichTextDataArray);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ClearTemporaryEntries();
	void InitializeWithDefaultEntries();
	void ExecuteUbergraph_WBP_MainMenu_Footer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
