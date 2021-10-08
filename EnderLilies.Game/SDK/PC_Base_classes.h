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

// BlueprintGeneratedClass PC_Base.PC_Base_C
// 0x0068 (FullSize[0x07A8] - InheritedSize[0x0740])
class APC_Base_C : public AZenithPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	Zenith_EFaction                                    Faction;                                                   // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WEKD[0x7];                                     // 0x0749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_Character_Base_C*                        PawnCharacter;                                             // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWBP_MainMenu_C*                             MainMenu;                                                  // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWBP_PlayerUI_C*                             PlayerUI;                                                  // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWBP_Pause_C*                                PauseMenu;                                                 // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UWBP_AchievementNotificationScreen_C*        AchievementsUI;                                            // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               RequestPauseOnGameMapReady;                                // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               IsDebugModifierPressed;                                    // 0x0779(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_P4B0[0x6];                                     // 0x077A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKey                                        DebugModifierKey;                                          // 0x0780(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash)
	int                                                LastMainMenuPageIndex;                                     // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7X55[0x4];                                     // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  LevelUpSoundEvent;                                         // 0x07A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PC_Base.PC_Base_C");
		return ptr;
	}



	bool CanOpenMenu();
	void RefreshPawnSpineData();
	void ActivateInputActionSet(Zenith_EInputActionSet ActionSet);
	void GetPlayerUI(class UWBP_PlayerUI_C** PlayerUI);
	void EquipDefaultSpirits();
	void Equip_from_Spirit_Index(int Index, Zenith_ESummonSet SummonSet, Zenith_ECommandInputTypes CommandInputType);
	void InitializeUI();
	void UnregisterPawn();
	void RegisterPawn();
	void InpActEvt_MainMenu_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Pause_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_DEBUG_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Minimap_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OnGameMapSwitch();
	void OnResumeGameFromMainMenu();
	void OnPawnRespawn();
	void OnGameDataLoaded();
	void OnResumeGameFromPause();
	void OnOpenNewArea(const struct FAreaData& AreaData);
	void TryPause();
	void BndEvt__ParameterPlayerComponent_K2Node_ComponentBoundEvent_0_ParameterPlayerEvent__DelegateSignature(bool bExecuteVisuals);
	void OnPawnChanged();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnEventStarted(class UEventAsset* EventAsset);
	void OnEventStopped(class UEventAsset* EventAsset);
	void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_BaseInventoryEvent__DelegateSignature(const struct FInventoryBaseItemData& InventoryItemData);
	void OnAchievementUnlocked(Zenith_EZenithAchievement Achievement);
	void ReceiveTick(float DeltaSeconds);
	void TriggerOrDeferPause();
	void OnGameMapReadyPostFade();
	void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_CurrencyEvent__DelegateSignature(Zenith_ECurrencyType CurrencyType, int AddedCurrency);
	void OnApplicationWillDeactivate(bool bApplicationWillBeSuspended);
	void BndEvt__PC_Base_ParameterPlayerComponent_K2Node_ComponentBoundEvent_2_ParameterPlayerEvent__DelegateSignature();
	void ExecuteUbergraph_PC_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
