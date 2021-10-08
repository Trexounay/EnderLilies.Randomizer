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

// BlueprintGeneratedClass CAS_Dash.CAS_Dash_C
// 0x0060 (FullSize[0x03E0] - InheritedSize[0x0380])
class UCAS_Dash_C : public UCASummon_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                              AirDashStates;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FFDashChargeEntry>                   ChargeLevels;                                              // 0x0398(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TimeBeforeVelocityCheck;                                   // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsAirDashing;                                              // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_9YMW[0x3];                                     // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrChargeLevel;                                           // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BSZB[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              CurrChargeStates;                                          // 0x03B8(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	class UFMODEvent*                                  SoundEventDash;                                            // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    DashLoopFXInstance;                                        // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystem*                             DashLoopFX;                                                // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CAS_Dash.CAS_Dash_C");
		return ptr;
	}



	void SampleDashCharge();
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnChargeLevelUp();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void OnStartCommandAction();
	void ExecuteUbergraph_CAS_Dash(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
