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

// WidgetBlueprintGeneratedClass WBP_MainMenu_FooterEntry.WBP_MainMenu_FooterEntry_C
// 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
class UWBP_MainMenu_FooterEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URefreshableRichTextBlock*                   RichText;                                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFRichTextInputPair                         RichTextData;                                              // 0x0270(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_FooterEntry.WBP_MainMenu_FooterEntry_C");
		return ptr;
	}



	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_MainMenu_FooterEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
