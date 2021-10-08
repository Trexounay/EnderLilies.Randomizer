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

// WidgetBlueprintGeneratedClass WBP_SummonSet.WBP_SummonSet_C
// 0x00B0 (FullSize[0x0310] - InheritedSize[0x0260])
class UWBP_SummonSet_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNamedSlot*                                  Slot_Attack;                                               // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Slot_Summon1;                                              // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  Slot_Summon2;                                              // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SummonItem_Dummy_C*                     WBP_SummonItem_Dummy;                                      // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SummonItem_Dummy_C*                     WBP_SummonItem_Dummy_2;                                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SummonItem_Dummy_C*                     WBP_SummonItem_Dummy_3;                                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_2;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Attack;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_Summon1;                                    // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class AZenithSpirit*, class UWBP_SummonItem_C*> SummonItemForSpirit;                                       // 0x02B0(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LLAK[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZenithPlayerController*                     Controller;                                                // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SummonSet.WBP_SummonSet_C");
		return ptr;
	}



	void GetWidgetSwitcherFromCommandInput(Zenith_ECommandInputTypes CommandInput, class UWidgetSwitcher** WidgetSwitcher_2);
	void GetSlotFromCommandInput(Zenith_ECommandInputTypes Index, class UNamedSlot** Slot);
	void GetGridIndexForCommandInput(Zenith_ECommandInputTypes Index, int* GridIndex);
	void Initialize(class AZenithPlayerController* Controller);
	void BuildSummonItem(const struct FSpiritData& SpiritData);
	void BuildEquippedSpirits();
	void RemoveSummonSpirit(const struct FSpiritData& SpiritData);
	void OnEquipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData);
	void OnUnequipSpirit(Zenith_ESummonSet SummonSet, const struct FSpiritData& SpiritData);
	void ExecuteUbergraph_WBP_SummonSet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
