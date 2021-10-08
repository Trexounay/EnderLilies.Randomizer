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

// BlueprintGeneratedClass CA_DiveDodge.CA_DiveDodge_C
// 0x01C3 (FullSize[0x04C4] - InheritedSize[0x0301])
class UCA_DiveDodge_C : public UCA_Base_InputHold_C
{
public:
	unsigned char                                      UnknownData_H0YF[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FSpineAnimationDefinition                   DodgeFront;                                                // 0x0310(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	struct FSpineAnimationDefinition                   DodgeFowardUp;                                             // 0x0358(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	struct FSpineAnimationDefinition                   DodgeUp;                                                   // 0x03A0(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	struct FSpineAnimationDefinition                   DodgeFowardDown;                                           // 0x03E8(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	struct FSpineAnimationDefinition                   DodgeDown;                                                 // 0x0430(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	struct FMoveTimelineEntry                          DodgeMovement;                                             // 0x0478(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FMoveTimelineEntry                          CurrMovement;                                              // 0x0498(0x0020) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay)
	float                                              MinZVelocityForUp;                                         // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxZVelocityForDown;                                       // 0x04BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Blend;                                                     // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_DiveDodge.CA_DiveDodge_C");
		return ptr;
	}



	void IsSwimmingOrDiving(bool* IsDiving);
	bool CanStartCommandAction();
	void PlayDodgeAnim();
	void InitializeDodgeParams();
	void ComputeDodgeVector(struct FMoveTimelineEntry* MoveTimelineEntry);
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void ExecuteUbergraph_CA_DiveDodge(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
