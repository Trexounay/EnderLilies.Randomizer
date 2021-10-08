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

// BlueprintGeneratedClass CA_Stumble.CA_Stumble_C
// 0x0139 (FullSize[0x0421] - InheritedSize[0x02E8])
class UCA_Stumble_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              StumbleDuration;                                           // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UWA6[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCommandSettings                            StumbleRecoveryCommandSettings;                            // 0x02F8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FCommandSettings                            StumbleAirRecoveryCommandSettings;                         // 0x0380(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              TimeForImmobility;                                         // 0x0408(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WaitingForRecoveryTrigger;                                 // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               WasFalling;                                                // 0x040D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_K705[0x2];                                     // 0x040E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LastActorLocation;                                         // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              ImmobileTime;                                              // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               UncrouchOnEnd;                                             // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_Stumble.CA_Stumble_C");
		return ptr;
	}



	void SetFacing();
	bool CheckImmobility(float DeltaTime);
	bool ShouldTriggerRecoveryCommand();
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void ExecuteUbergraph_CA_Stumble(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
