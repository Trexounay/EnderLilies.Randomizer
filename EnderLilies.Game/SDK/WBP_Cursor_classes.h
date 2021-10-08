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

// WidgetBlueprintGeneratedClass WBP_Cursor.WBP_Cursor_C
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UWBP_Cursor_C : public UUserWidget
{
public:
	class UImage*                                      CursorImage;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Cursor.WBP_Cursor_C");
		return ptr;
	}



	UMG_ESlateVisibility GetVisibility_1();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
