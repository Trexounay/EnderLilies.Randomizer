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

// WidgetBlueprintGeneratedClass WBP_Map_Autocentered.WBP_Map_Autocentered_C
// 0x0035 (FullSize[0x0295] - InheritedSize[0x0260])
class UWBP_Map_Autocentered_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URetainerBox*                                RetainerBox_MapAutoCentered;                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    SizeBox_1;                                                 // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MapScrollable_C*                        WBP_MapScrollable;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FVector2D>                           Sizes;                                                     // 0x0280(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                CurrSize;                                                  // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               HasMapData;                                                // 0x0294(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Map_Autocentered.WBP_Map_Autocentered_C");
		return ptr;
	}



	void AllowSizeChange(bool* HasMapData);
	void SetSize(const struct FVector2D& NewSize);
	void ToggleSize();
	void RequestRender();
	void OnFinish_D4E38B4E43C149E49A4E4D93E7C809D8();
	void OnFinish_C7FB21BE4A6F8FF4990BD59254EF849B();
	void Construct();
	void OnGameMapSwitch();
	void Destruct();
	void OnViewportOverlayRenderOpacityChanged(float RenderOpacity);
	void OnMapCompletionUpdated();
	void ExecuteUbergraph_WBP_Map_Autocentered(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
