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

// WidgetBlueprintGeneratedClass WBP_HookTarget.WBP_HookTarget_C
// 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
class UWBP_HookTarget_C : public UUserWidgetFloatingText
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hook;                                                      // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URefreshableRichTextBlock*                   RefreshableRichTextBlock_138;                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AHookPoint*                                  HookPoint;                                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HookTarget.WBP_HookTarget_C");
		return ptr;
	}



	void AttachToHookPoint(class AHookPoint* HookPoint);
	void ClearTarget();
	void PlayHookLock();
	void PlayHookUnlock();
	void Construct();
	void ExecuteUbergraph_WBP_HookTarget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
