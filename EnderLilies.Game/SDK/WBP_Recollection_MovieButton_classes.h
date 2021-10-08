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

// WidgetBlueprintGeneratedClass WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C
// 0x00C8 (FullSize[0x03B0] - InheritedSize[0x02E8])
class UWBP_Recollection_MovieButton_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Focused;                                                   // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                                    FocusedContainer;                                          // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MovieImage;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MovieName;                                                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    NewContainer;                                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FRecollectionMovieData                      MovieData;                                                 // 0x0318(0x0088) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	struct FDataTableRowHandle                         MovieDataHandle;                                           // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C");
		return ptr;
	}



	struct FEventReply OnPressConfirm(const struct FKeyEvent& KeyEvent);
	void Construct();
	void PlayMovie();
	void OnVideoFinished();
	void RefreshDesign(bool bFocused);
	void ExecuteUbergraph_WBP_Recollection_MovieButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
