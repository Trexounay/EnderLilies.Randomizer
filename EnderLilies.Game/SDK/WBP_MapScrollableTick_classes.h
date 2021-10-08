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

// WidgetBlueprintGeneratedClass WBP_MapScrollableTick.WBP_MapScrollableTick_C
// 0x0054 (FullSize[0x0374] - InheritedSize[0x0320])
class UWBP_MapScrollableTick_C : public UWBP_MapScrollable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               AllowScroll;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X1L5[0x3];                                     // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ZoomSpeed;                                                 // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      ScrollSpeedForZoomLevels;                                  // 0x0330(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<float>                                      ZoomLevels;                                                // 0x0340(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              MousePanSpeed;                                             // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsZoomInitalized;                                          // 0x0354(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_XPEN[0x3];                                     // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LastRenderTransformScale;                                  // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector2D                                   LastRenderTransformTranslation;                            // 0x035C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              CurrentScalingFactor;                                      // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              TargetScalingFactor;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               IsDraggingMap;                                             // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               IsZooming;                                                 // 0x036D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_QH68[0x2];                                     // 0x036E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZoomLevel;                                                 // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MapScrollableTick.WBP_MapScrollableTick_C");
		return ptr;
	}



	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void InitializeMapZoom(const struct FGeometry& Geometry);
	void GetScrollSpeed(float* ScrollSpeed);
	void UpdateMapZoom(float DeltaTime, const struct FGeometry& Geometry);
	void UpdateMapScroll(const struct FGeometry& Geometry, const struct FVector2D& ScrollValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnRequestZoom();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ZoomToLevel(int NewZoomLevel);
	void ExecuteUbergraph_WBP_MapScrollableTick(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
