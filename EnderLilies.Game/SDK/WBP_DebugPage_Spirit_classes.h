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

// WidgetBlueprintGeneratedClass WBP_DebugPage_Spirit.WBP_DebugPage_Spirit_C
// 0x0018 (FullSize[0x0300] - InheritedSize[0x02E8])
class UWBP_DebugPage_Spirit_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                           UniformGridPanel_89;                                       // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                ColumnLimit;                                               // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WidgetNumber;                                              // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugPage_Spirit.WBP_DebugPage_Spirit_C");
		return ptr;
	}



	void UnlockAchievement(Zenith_EZenithAchievement Achievement);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_DebugPage_Spirit(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
