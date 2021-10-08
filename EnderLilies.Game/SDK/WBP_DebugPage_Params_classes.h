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

// WidgetBlueprintGeneratedClass WBP_DebugPage_Params.WBP_DebugPage_Params_C
// 0x00C8 (FullSize[0x03B0] - InheritedSize[0x02E8])
class UWBP_DebugPage_Params_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DebugMenuButtonEntry_C*                 AddHPUpLv1;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 AddHPUpLv2;                                                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 AddHPUpLv3;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 AddSpiritCurrencyLv1;                                      // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 AddSpiritCurrencyLv2;                                      // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 AddSpiritCurrencyLv3;                                      // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  DifficultyLevel;                                           // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  FinalPassivePartCount;                                     // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  HealCountLevel;                                            // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  HealPowerLevel;                                            // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  NGGeneration;                                              // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  playerlevel;                                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  PlayerSkinLevel;                                           // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 RestoreAllHeals;                                           // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 SimulateEndingA;                                           // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 SimulateEndingB;                                           // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 SimulateEndingC;                                           // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  SlotCount;                                                 // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                         HpUpLv1;                                                   // 0x0380(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                         HpLvUp2;                                                   // 0x0390(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                         HpLvUp3;                                                   // 0x03A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugPage_Params.WBP_DebugPage_Params_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__DifficultyLevel_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(int NewValue);
	void BndEvt__PlayerLevel_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int NewValue);
	void BndEvt__HealCountLevel_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int NewValue);
	void BndEvt__HealPowerLevel_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int NewValue);
	void Construct();
	void BndEvt__WBP_DebugMenuButtonEntry_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature();
	void BndEvt__AddHPUpLv2_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature();
	void BndEvt__AddHPUpLv3_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature();
	void BndEvt__AddSpiritCurrencyLv1_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature();
	void BndEvt__AddSpiritCurrencyLv2_K2Node_ComponentBoundEvent_8_OnExecute__DelegateSignature();
	void BndEvt__RestoreAllHeals_K2Node_ComponentBoundEvent_9_OnExecute__DelegateSignature();
	void BndEvt__HealPowerLevel_1_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature(int NewValue);
	void BndEvt__AddSpiritCurrencyLv3_K2Node_ComponentBoundEvent_11_OnExecute__DelegateSignature();
	void BndEvt__PlayerSkinLevel_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(int NewValue);
	void BndEvt__WBP_DebugPage_Params_FinalPassivePartCount_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(int NewValue);
	void BndEvt__WBP_DebugPage_Params_SimulateEndingA_K2Node_ComponentBoundEvent_14_OnExecute__DelegateSignature();
	void BndEvt__WBP_DebugPage_Params_SimulateEndingB_K2Node_ComponentBoundEvent_15_OnExecute__DelegateSignature();
	void BndEvt__WBP_DebugPage_Params_SimulateEndingC_K2Node_ComponentBoundEvent_16_OnExecute__DelegateSignature();
	void BndEvt__WBP_DebugPage_Params_NGGeneration_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(int NewValue);
	void ExecuteUbergraph_WBP_DebugPage_Params(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
