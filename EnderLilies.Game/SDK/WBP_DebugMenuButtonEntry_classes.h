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

// WidgetBlueprintGeneratedClass WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C
// 0x0060 (FullSize[0x0348] - InheritedSize[0x02E8])
class UWBP_DebugMenuButtonEntry_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Name;                                                      // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FString                                     CommandToExecute;                                          // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       EntryName;                                                 // 0x0308(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               Value;                                                     // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QGWP[0x7];                                     // 0x0321(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                KeyArray;                                                  // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnExecute;                                                 // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C");
		return ptr;
	}



	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Execute();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_DebugMenuButtonEntry(int EntryPoint);
	void OnExecute__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
