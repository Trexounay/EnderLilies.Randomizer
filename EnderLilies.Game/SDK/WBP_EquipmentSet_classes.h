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

// WidgetBlueprintGeneratedClass WBP_EquipmentSet.WBP_EquipmentSet_C
// 0x0080 (FullSize[0x0368] - InheritedSize[0x02E8])
class UWBP_EquipmentSet_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_EquipmentEntry_C*                       WBP_EquipmentEntry_Attack;                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EquipmentEntry_C*                       WBP_EquipmentEntry_Summon1;                                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EquipmentEntry_C*                       WBP_EquipmentEntry_Summon2;                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_SkillSet;                                   // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked_Entry_Attack;                                    // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClicked_Entry_Summon1;                                   // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClicked_Entry_Summon2;                                   // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	Zenith_ESummonSet                                  TargetSummonSet;                                           // 0x0340(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6XS3[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFocusedItem;                                             // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnContextItem;                                             // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EquipmentSet.WBP_EquipmentSet_C");
		return ptr;
	}



	void Set_Target_Summon_Skill_Set(Zenith_ESummonSet TargetSummonSet);
	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void RefreshSet(const struct FSummonSetData& SummonSetData, Zenith_ESummonSet TargetSummonSet);
	void BndEvt__WBP_EquipmentEntry_Attack_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void BndEvt__WBP_EquipmentEntry_Summon1_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void BndEvt__WBP_EquipmentEntry_Summon2_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void BndEvt__WBP_EquipmentEntry_Attack_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void BndEvt__WBP_EquipmentEntry_Summon1_K2Node_ComponentBoundEvent_1_OnFocused__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void BndEvt__WBP_EquipmentEntry_Summon2_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature(class UWBP_Item_C* EquipmentItem);
	void ExecuteUbergraph_WBP_EquipmentSet(int EntryPoint);
	void OnContextItem__DelegateSignature(class UWBP_EquipmentEntry_C* EquipmentEntry);
	void OnFocusedItem__DelegateSignature(class UWBP_Item_C* Item);
	void OnClicked_Entry_Summon1__DelegateSignature();
	void OnClicked_Entry_Summon2__DelegateSignature();
	void OnClicked_Entry_Attack__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
