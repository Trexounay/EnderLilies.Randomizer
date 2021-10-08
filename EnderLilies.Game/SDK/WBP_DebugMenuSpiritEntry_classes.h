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

// WidgetBlueprintGeneratedClass WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C
// 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
class UWBP_DebugMenuSpiritEntry_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Name;                                                      // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnExecute;                                                 // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                         SpritDataTableRowHandle;                                   // 0x0308(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C");
		return ptr;
	}



	void Initalize(const struct FDataTableRowHandle& SpiritDataTableRowHandle);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Execute();
	void PreConstruct(bool IsDesignTime);
	void RefreshDesign(bool bFocused);
	void ExecuteUbergraph_WBP_DebugMenuSpiritEntry(int EntryPoint);
	void OnExecute__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
