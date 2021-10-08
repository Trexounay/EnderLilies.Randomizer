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

// WidgetBlueprintGeneratedClass WBP_DebugPage_Action.WBP_DebugPage_Action_C
// 0x0030 (FullSize[0x0318] - InheritedSize[0x02E8])
class UWBP_DebugPage_Action_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DebugMenuButtonEntry_C*                 KillPlayer;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 OpenChallengeMenu;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 OpenRecollectionMenu;                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 OpenStrengthenMenu;                                        // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 ResetAchievements;                                         // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugPage_Action.WBP_DebugPage_Action_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__KillPlayer_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature();
	void BndEvt__OpenStrengthenMenu_K2Node_ComponentBoundEvent_0_OnExecute__DelegateSignature();
	void OnStrengthenClose();
	void BndEvt__ResetAchievements_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature();
	void BndEvt__WBP_DebugPage_Action_OpenChallengeMenu_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature();
	void OnChallengeMenuClosed();
	void BndEvt__WBP_DebugPage_Action_OpenRecollectionMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature();
	void OnRecollectionMenuClosed();
	void ExecuteUbergraph_WBP_DebugPage_Action(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
