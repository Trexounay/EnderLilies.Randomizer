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

// BlueprintGeneratedClass CA_Jump.CA_Jump_C
// 0x0040 (FullSize[0x0328] - InheritedSize[0x02E8])
class UCA_Jump_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                MaxJumpCount;                                              // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0MGM[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AZenithCharacter*                            CharacterPawn;                                             // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                CurrJumpCount;                                             // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              MaxInputLengthForVelocityClear;                            // 0x0304(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bExecutedJump;                                             // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_CV90[0x3];                                     // 0x0309(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeBeforeJump;                                            // 0x030C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SafeFallTime;                                              // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UA0R[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<Engine_EMovementMode>>          NoResetMovementModes;                                      // 0x0318(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_Jump.CA_Jump_C");
		return ptr;
	}



	void ResetJumpCount();
	void IsGroundedJump(bool* IsDoubleJump);
	void IsWallJump(bool* IsWallJump);
	void ShouldClearVelocities(bool* bShouldClear);
	void ClearVelocities(class ACharacter* Character);
	bool CanStartCommandAction();
	void ExecuteJump(class AZenithCharacter* Character);
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject);
	void OnLanded();
	void OnHookStart();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void OnMovementModeUpdated(TEnumAsByte<Engine_EMovementMode> NewMovementMode, TEnumAsByte<Engine_EMovementMode> PrevMovementMode);
	void OnWallgrabStart();
	void OnStartCommandAction();
	void ExecuteUbergraph_CA_Jump(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
