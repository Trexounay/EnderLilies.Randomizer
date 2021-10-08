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

// WidgetBlueprintGeneratedClass WBP_Map.WBP_Map_C
// 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
class UWBP_Map_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      MapImg;                                                    // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapLayout_Widget_C*                         MapLayout_Widget;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ShowMapBG;                                                 // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IPR1[0x3];                                     // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScrollSpeed;                                               // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_Map_Level_C*>                    MapLevelItems;                                             // 0x0280(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	TArray<class UWBP_Map_Link_C*>                     MapLinks;                                                  // 0x0290(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	class UWBP_Map_Level_C*                            CurrMap;                                                   // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnMapItemConfirmed;                                        // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnMapItemGotFocused;                                       // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Map_Level_C*                            FocusedMap;                                                // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Map.WBP_Map_C");
		return ptr;
	}



	void FindMapItem(const struct FName& MapID, class UWBP_Map_Level_C** MapLevelItem);
	void GenerateMapLinkList();
	void GenerateMapLevelItemList();
	void GetCurrentMapItem(class UWBP_Map_Level_C** MapItem);
	void Construct();
	void OnMapItemConfirm(class UWBP_Map_Level_C* MapLevel);
	void SetupMap();
	void RefreshCurrentMap();
	void OnPlayerOpenWorld();
	void OnGameMapSwitch();
	void OnMapItemFocused(class UWBP_Map_Level_C* MapLevelItem);
	void PreConstruct(bool IsDesignTime);
	void SetMapBGVisibility(UMG_ESlateVisibility InVisibility);
	void OnMapCompletionUpdated();
	void OnClearedObjectManagerReady();
	void ExecuteUbergraph_WBP_Map(int EntryPoint);
	void OnMapItemGotFocused__DelegateSignature(class UWBP_Map_Level_C* MapLevelItem);
	void OnMapItemConfirmed__DelegateSignature(class UWBP_Map_Level_C* MapLevelItem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
