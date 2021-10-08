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

// WidgetBlueprintGeneratedClass WBP_ItemList.WBP_ItemList_C
// 0x006A (FullSize[0x0352] - InheritedSize[0x02E8])
class UWBP_ItemList_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG;                                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                           GridHolder;                                                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultScrollView_C*                    WBP_DefaultScrollView;                                     // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_Item_C*>                         EquipmentItems;                                            // 0x0308(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	struct FScriptMulticastDelegate                    OnCancel;                                                  // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSelect;                                                  // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFocused;                                                 // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                MaxColumnCount;                                            // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoSize;                                                  // 0x034C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SpiritDisplaySet;                                          // 0x034D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PassiveDisplaySet;                                         // 0x034E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisplayNewState;                                           // 0x034F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisplayShadowArrows;                                       // 0x0350(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SpiritIgnoreLevelOverride;                                 // 0x0351(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemList.WBP_ItemList_C");
		return ptr;
	}



	void FocusFirstChild();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void AddEntry(const struct FDataTableRowHandle& ItemDataHandle);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Clear();
	void Initialize(class UBaseInventory* Inventory);
	void OnEntrySelected(class UWBP_Item_C* EquipmentItem);
	void OnItemFocused(class UWBP_Item_C* Item);
	void ExecuteUbergraph_WBP_ItemList(int EntryPoint);
	void OnFocused__DelegateSignature(class UWBP_Item_C* Item);
	void OnSelect__DelegateSignature(class UWBP_Item_C* Item);
	void OnCancel__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
