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

// WidgetBlueprintGeneratedClass WBP_DebugPage_Default.WBP_DebugPage_Default_C
// 0x0090 (FullSize[0x0378] - InheritedSize[0x02E8])
class UWBP_DebugPage_Default_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DebugMenuToggleEntry_C*                 AllowFastTravel;                                           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 AutoReggenerateMP;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 EquipMenu;                                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 IgnoreContactDamage;                                       // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 IgnoreDamage;                                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 OnShotEnemies;                                             // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 OpenAllMaps;                                               // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 PlayerInvincible;                                          // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 Reset;                                                     // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 Save;                                                      // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 SkipCastCounts;                                            // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 SkipCooldowns;                                             // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 SlowMotion;                                                // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 TeleportMenu;                                              // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 UnlockAllPassives;                                         // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 UnlockAllSpirits;                                          // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 UnlockAllTips;                                             // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugPage_Default.WBP_DebugPage_Default_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void Construct();
	void BndEvt__SAVE_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature();
	void BndEvt__UnlockAllSpirits_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature();
	void BndEvt__UnlockAllPassives_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature();
	void BndEvt__TeleportMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature();
	void OnCloseFastTravel();
	void OnRequestFastTravel(const struct FDataTableRowHandle& GameMapHandle);
	void BndEvt__UnlockAllTips_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature();
	void BndEvt__OpenAllMaps_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature();
	void BndEvt__EquipMenu_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature();
	void OnCloseMainMenu();
	void OnSaveFinished(bool bSuccess);
	void ExecuteUbergraph_WBP_DebugPage_Default(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
