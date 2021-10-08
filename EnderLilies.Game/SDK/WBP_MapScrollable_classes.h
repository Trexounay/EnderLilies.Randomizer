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

// WidgetBlueprintGeneratedClass WBP_MapScrollable.WBP_MapScrollable_C
// 0x0038 (FullSize[0x0320] - InheritedSize[0x02E8])
class UWBP_MapScrollable_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                                    NoMapDataContainer;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Map_C*                                  WBP_Map;                                                   // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Map_Legend_C*                           WBP_Map_Legend;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ShowLegend;                                                // 0x0308(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseMapHightlight;                                          // 0x0309(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V9MS[0x2];                                     // 0x030A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   DefaultScale;                                              // 0x030C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8FWF[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_Map_Level_C*                            HighlightedMapLevelItem;                                   // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MapScrollable.WBP_MapScrollable_C");
		return ptr;
	}



	void ScrollToCurrentMap(bool* Success);
	void ToggleLegendDisplay();
	void Center_to_Map(class UWidget* Widget);
	void ClampSides(const struct FGeometry& Geometry, const struct FVector2D& Clamp_to_, struct FVector2D* Clamped);
	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ScrollToMap(class UWBP_Map_Level_C* MapLevelItem);
	void ScrollToMapID(const struct FName& MapID);
	void ExecuteUbergraph_WBP_MapScrollable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
