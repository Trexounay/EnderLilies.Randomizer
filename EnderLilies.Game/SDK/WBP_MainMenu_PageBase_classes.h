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

// WidgetBlueprintGeneratedClass WBP_MainMenu_PageBase.WBP_MainMenu_PageBase_C
// 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
class UWBP_MainMenu_PageBase_C : public UUserWidgetNavigable
{
public:
	class UWBP_MainMenu_Footer_C*                      Footer;                                                    // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFRichTextInputPair>                 FooterDataEntries;                                         // 0x02F0(0x0010) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_PageBase.WBP_MainMenu_PageBase_C");
		return ptr;
	}



	void GetFooter(class UWBP_MainMenu_Footer_C** Footer);
	void SetFooter(class UWBP_MainMenu_Footer_C* Footer, TArray<struct FFRichTextInputPair>* FooterDataEntries);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
