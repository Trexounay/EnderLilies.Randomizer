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

// WidgetBlueprintGeneratedClass WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C
// 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
class UWBP_BossRush_Leaderboard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_BossRush_Time_C*                        WBP_BossRushResultTime_2;                                  // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossRush_Time_C*                        WBP_BossRushResultTime_3;                                  // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BossRush_Time_C*                        WBP_BossRushResultTime_4;                                  // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_BossRush_Time_C*>                ResultTimes;                                               // 0x0280(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BossRush_Leaderboard.WBP_BossRush_Leaderboard_C");
		return ptr;
	}



	void SetNewFlagAtIndex(int Index, bool ShowNewFlag);
	void SetTextsAtIndex(int Index, const struct FBossRushRecordData& RecordData);
	void SetLeaderboardTexts();
	int GetLeaderboardLength();
	void Construct();
	void ExecuteUbergraph_WBP_BossRush_Leaderboard(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
