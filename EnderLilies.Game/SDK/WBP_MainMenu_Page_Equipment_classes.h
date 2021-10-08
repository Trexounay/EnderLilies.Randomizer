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

// WidgetBlueprintGeneratedClass WBP_MainMenu_Page_Equipment.WBP_MainMenu_Page_Equipment_C
// 0x0008 (FullSize[0x0308] - InheritedSize[0x0300])
class UWBP_MainMenu_Page_Equipment_C : public UWBP_MainMenu_PageBase_C
{
public:
	class UWBP_EquipmentMenu_C*                        WBP_EquipmentMenu;                                         // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_Page_Equipment.WBP_MainMenu_Page_Equipment_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
