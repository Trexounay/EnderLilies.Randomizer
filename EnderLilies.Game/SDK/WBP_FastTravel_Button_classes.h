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

// WidgetBlueprintGeneratedClass WBP_FastTravel_Button.WBP_FastTravel_Button_C
// 0x0048 (FullSize[0x0330] - InheritedSize[0x02E8])
class UWBP_FastTravel_Button_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Marker;                                                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RestMenuButton_C*                       WBP_RestMenuButton;                                        // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                         GameMapData;                                               // 0x0300(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnConfirmed;                                               // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFocused;                                                 // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FastTravel_Button.WBP_FastTravel_Button_C");
		return ptr;
	}



	bool IsCurrentMap();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void RefreshDesign(bool bFocused);
	void BndEvt__WBP_RestMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_FastTravel_Button(int EntryPoint);
	void OnFocused__DelegateSignature(class UWBP_FastTravel_Button_C* FastTravelButton);
	void OnConfirmed__DelegateSignature(class UWBP_FastTravel_Button_C* FastTravelButton);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
