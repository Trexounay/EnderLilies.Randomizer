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

// WidgetBlueprintGeneratedClass WBP_Recollection_BossRush.WBP_Recollection_BossRush_C
// 0x0028 (FullSize[0x0310] - InheritedSize[0x02E8])
class UWBP_Recollection_BossRush_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BossRush_Leaderboard_C*                 WBP_BossRush_Leaderboard;                                  // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DefaultButton_C*                        WBP_DefaultButton_BossRushStart;                           // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnLaunchBossRush;                                          // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Recollection_BossRush.WBP_Recollection_BossRush_C");
		return ptr;
	}



	struct FEventReply OnPressContext(const struct FKeyEvent& KeyEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_Recollection_BossRush_WBP_DefaultButton_BossRushStart_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent);
	void Construct();
	void OnRequestResetRecords();
	void OnResetRecords_Confirm();
	void ExecuteUbergraph_WBP_Recollection_BossRush(int EntryPoint);
	void OnLaunchBossRush__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
