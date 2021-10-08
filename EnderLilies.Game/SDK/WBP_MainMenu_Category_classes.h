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

// WidgetBlueprintGeneratedClass WBP_MainMenu_Category.WBP_MainMenu_Category_C
// 0x0059 (FullSize[0x0341] - InheritedSize[0x02E8])
class UWBP_MainMenu_Category_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FocusIdle;                                                 // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Select;                                                    // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     CategoryButton;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CategoryTextBlock;                                         // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SelectedImage;                                             // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0318(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsSelected;                                                // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MainMenu_Category.WBP_MainMenu_Category_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void SetSelected(bool Selected);
	void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_MainMenu_Category(int EntryPoint);
	void OnClicked__DelegateSignature(class UWBP_MainMenu_Category_C* Category);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
