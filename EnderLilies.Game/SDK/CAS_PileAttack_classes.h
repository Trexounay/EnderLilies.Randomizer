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

// BlueprintGeneratedClass CAS_PileAttack.CAS_PileAttack_C
// 0x0060 (FullSize[0x03E0] - InheritedSize[0x0380])
class UCAS_PileAttack_C : public UCASummon_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DiveSpeed;                                                 // 0x0388(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChargePhaseTime;                                           // 0x038C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              ChargePhaseStates;                                         // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	int                                                Phase;                                                     // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J13T[0x4];                                     // 0x03A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FFChargeCommandEntry>                ChargeLevels;                                              // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UParticleSystem*                             DiveFX;                                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    RuntimeDiveFX;                                             // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               IsDivePhaseStarted;                                        // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               ChargePhaseStateAdded;                                     // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_8FDR[0x2];                                     // 0x03CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrChargeLevel;                                           // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UClass*>                              CurrChargeStates;                                          // 0x03D0(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CAS_PileAttack.CAS_PileAttack_C");
		return ptr;
	}



	bool IsInValidMovementMode();
	void RemoveChargeStates();
	void AddChargeStates();
	void GetGroundCommandAction(class UCommandSettingsData** CommandSettings);
	void SampleChargeLevel();
	void RemoveChargePhaseStates();
	void AddChargePhaseStates();
	void SampleDivePhase(float DeltaTime, bool* PhaseCompleted);
	void SampleChargePhase(float DeltaTime, bool* PhaseCompleted);
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	bool CanStartCommandAction();
	bool IsOverridenByActionType(Zenith_ECommandInputTypes commandType);
	void OnStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void TryStartDivePhase();
	void TryEndDivePhase();
	void OnChargeLevelChange();
	void ExecuteUbergraph_CAS_PileAttack(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
