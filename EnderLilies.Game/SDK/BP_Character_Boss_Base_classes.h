#pragma once

// Name: enderlilies, Version: gerrod_room


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

// BlueprintGeneratedClass BP_Character_Boss_Base.BP_Character_Boss_Base_C
// 0x00F1 (FullSize[0x0A41] - InheritedSize[0x0950])
class ABP_Character_Boss_Base_C : public ABP_Character_Enemy_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0950(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BossAuraOut_BossAura_7458EC1F44ABBF75009BDBBAC79731BA;     // 0x0958(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             BossAuraOut__Direction_7458EC1F44ABBF75009BDBBAC79731BA;   // 0x095C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FA2X[0x3];                                     // 0x095D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BossAuraOut;                                               // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              BossAuraIn_BossAura_9B189807443C542CF3F08397175B7E7C;      // 0x0968(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             BossAuraIn__Direction_9B189807443C542CF3F08397175B7E7C;    // 0x096C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R8WP[0x3];                                     // 0x096D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          BossAuraIn;                                                // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_DissolveValue_D30E50BF49871EC6ED00999E131469A4; // 0x0978(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_D30E50BF49871EC6ED00999E131469A4;    // 0x097C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WT81[0x3];                                     // 0x097D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      FindEnemyClass;                                            // 0x0988(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayIdlePeace;                                             // 0x0990(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EXF7[0x7];                                     // 0x0991(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IdlePeaceAnimName;                                         // 0x0998(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	bool                                               ExecuteDeathSlowMotion;                                    // 0x09A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HBJ8[0x3];                                     // 0x09A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DeathSlowMo_TimeDilation;                                  // 0x09AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathSlowMo_Duration;                                      // 0x09B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathSlowMo_BlendIn;                                       // 0x09B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeathSlowMo_BlendOut;                                      // 0x09B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RZN6[0x4];                                     // 0x09BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UConversationAsset*                          PostDeathConversationData;                                 // 0x09C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LocalSpaceConversationOffset;                              // 0x09C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7Z6I[0x4];                                     // 0x09D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEventAsset*                                 PostDeathEvent;                                            // 0x09D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                                VideoSource;                                               // 0x09E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                                  Subtitles;                                                 // 0x09E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         Item;                                                      // 0x09F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	bool                                               PlayedFindEnemy;                                           // 0x0A00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_3BUS[0x7];                                     // 0x0A01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFBossAuraFX>                        AuraFXs;                                                   // 0x0A08(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                AuraOutlineColor;                                          // 0x0A18(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AuraOutlineSize;                                           // 0x0A28(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JF5J[0x4];                                     // 0x0A2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UParticleSystemComponent*>            AuraFXInstances;                                           // 0x0A30(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	bool                                               AuraEnabled;                                               // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		UClass* ptr = nullptr;
		//if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_Boss_Base.BP_Character_Boss_Base_C");
		return ptr;
	}



	void DisableBossAura();
	void EnableBossAura();
	void SetupDeathEventBlackboard(class UEventPlayer* EventPlayer);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BossAuraIn__FinishedFunc();
	void BossAuraIn__UpdateFunc();
	void BossAuraOut__FinishedFunc();
	void BossAuraOut__UpdateFunc();
	void OnFinish_94D3316D428E3071DF0952A4CFD5AC4B();
	void BndEvt__SpineAnimation_K2Node_ComponentBoundEvent_3_SpineAnimationEvent__DelegateSignature();
	void BndEvt__DeathComponent_K2Node_ComponentBoundEvent_2_DeathEvent__DelegateSignature();
	void OnDeathEventFinished();
	void OnDeathProcessStart();
	void OnDeathAnimationComplete();
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController* NewController);
	void OnEnableBossAura();
	void OnDisableBossAura();
	void ExecuteUbergraph_BP_Character_Boss_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
