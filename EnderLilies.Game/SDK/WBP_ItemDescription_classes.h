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

// WidgetBlueprintGeneratedClass WBP_ItemDescription.WBP_ItemDescription_C
// 0x00E9 (FullSize[0x0349] - InheritedSize[0x0260])
class UWBP_ItemDescription_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URefreshableRichTextBlock*                   ItemDescriptionText;                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URefreshableRichTextBlock*                   ItemExplanationText;                                       // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ScaleBoxDescription;                                       // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_DescriptionContainer;                          // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalContainer;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemDescriptionShort_C*                 WBP_ItemDescriptionShort;                                  // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FBaseItemData                               ItemData;                                                  // 0x0298(0x00A0) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	struct FDataTableRowHandle                         ItemDataHandle;                                            // 0x0338(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay)
	bool                                               ShowDescription;                                           // 0x0348(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemDescription.WBP_ItemDescription_C");
		return ptr;
	}



	void Clear();
	void InitializeForItem();
	void Initialize(const struct FDataTableRowHandle& ItemDataHandle);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_ItemDescription(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
