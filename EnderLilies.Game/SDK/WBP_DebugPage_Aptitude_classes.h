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

// WidgetBlueprintGeneratedClass WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C
// 0x00F0 (FullSize[0x03D8] - InheritedSize[0x02E8])
class UWBP_DebugPage_Aptitude_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DebugMenuToggleEntry_C*                 dash;                                                      // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 DashAttack;                                                // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 dive;                                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 Dodge;                                                     // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 DoubleJump;                                                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 Hook;                                                      // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 PoundAttack;                                               // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 UnlockDoors;                                               // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 wallgrab;                                                  // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_DebugMenuToggleEntry_C*>         Entries;                                                   // 0x0338(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	struct FDataTableRowHandle                         DashItemData;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         DashAttackItemData;                                        // 0x0358(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         DiveItemData;                                              // 0x0368(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         DodgeItemData;                                             // 0x0378(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         DoubleJumpItemData;                                        // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         HookItemData;                                              // 0x0398(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         PoundAttackItemData;                                       // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         WallgrabItemData;                                          // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FDataTableRowHandle                         UnlockDoorsItemData;                                       // 0x03C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C");
		return ptr;
	}



	void SetInitialToggle(class UWBP_DebugMenuToggleEntry_C* ToggleEntry, const struct FDataTableRowHandle& ItemData);
	void ToggleAptitude(class UWBP_DebugMenuToggleEntry_C* ToggleEntry, const struct FDataTableRowHandle& ItemData);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__DoubleJump_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature();
	void BndEvt__Dash_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature();
	void BndEvt__DashAttack_K2Node_ComponentBoundEvent_8_OnToggle__DelegateSignature();
	void BndEvt__Dive_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature();
	void BndEvt__Dodge_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature();
	void BndEvt__Hook_K2Node_ComponentBoundEvent_11_OnToggle__DelegateSignature();
	void BndEvt__PoundAttack_K2Node_ComponentBoundEvent_12_OnToggle__DelegateSignature();
	void BndEvt__Wallgrab_K2Node_ComponentBoundEvent_13_OnToggle__DelegateSignature();
	void BndEvt__WBP_DebugPage_Aptitude_UnlockDoors_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature();
	void ExecuteUbergraph_WBP_DebugPage_Aptitude(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
