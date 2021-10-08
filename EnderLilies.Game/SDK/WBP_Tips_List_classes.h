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

// WidgetBlueprintGeneratedClass WBP_Tips_List.WBP_Tips_List_C
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UWBP_Tips_List_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                TipsVerticalBox;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Tips_Item_C*>                    TipsItems;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	struct FScriptMulticastDelegate                    OnFocusedTipItem;                                          // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Tips_List.WBP_Tips_List_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusTipItem(class UWBP_Tips_Item_C* TipItem);
	void AddTips(const struct FDataTableRowHandle& handle);
	void ExecuteUbergraph_WBP_Tips_List(int EntryPoint);
	void OnFocusedTipItem__DelegateSignature(class UWBP_Tips_Item_C* TipItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
