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

// BlueprintGeneratedClass CA_Dodge.CA_Dodge_C
// 0x00A8 (FullSize[0x0390] - InheritedSize[0x02E8])
class UCA_Dodge_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFDodgeParams                               CurrDodgeParams;                                           // 0x02F0(0x0030) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, HasGetValueTypeHash)
	struct FFDodgeParams                               GroundDodgeParams;                                         // 0x0320(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFDodgeParams                               AirDodgeParams;                                            // 0x0350(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, HasGetValueTypeHash)
	int                                                MaxAirDodgeCount;                                          // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrAirDodgeCount;                                         // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class ACharacter*                                  CharacterPawn;                                             // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_Dodge.CA_Dodge_C");
		return ptr;
	}



	void ComputeDodgeVector(struct FMoveTimelineEntry* MoveTimelineEntry);
	void SetFacing();
	void StopDodgeAnim();
	void PlayDodgeAnim();
	void InitializeDodgeParams(bool IsGrounded);
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnStartCommandAction();
	void OnLanded();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject);
	void OnHookStart();
	void OnWallgrabStart();
	void ExecuteUbergraph_CA_Dodge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
