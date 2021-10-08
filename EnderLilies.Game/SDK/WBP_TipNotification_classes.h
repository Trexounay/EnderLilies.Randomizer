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

// WidgetBlueprintGeneratedClass WBP_TipNotification.WBP_TipNotification_C
// 0x0031 (FullSize[0x0291] - InheritedSize[0x0260])
class UWBP_TipNotification_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BG;                                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TipText;                                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>                 Queue;                                                     // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsProcessing;                                              // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TipNotification.WBP_TipNotification_C");
		return ptr;
	}



	void LaunchNewTipAnim();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void QueueTipNotification(const struct FDataTableRowHandle& TipDataHandle);
	void Construct();
	void ExecuteUbergraph_WBP_TipNotification(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
