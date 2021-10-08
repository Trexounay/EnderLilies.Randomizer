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

// BlueprintGeneratedClass CA_Parry.CA_Parry_C
// 0x00B0 (FullSize[0x0398] - InheritedSize[0x02E8])
class UCA_Parry_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      ParryActiveCommandActionClass;                             // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      ParryActiveNoAbilityCommandActionClass;                    // 0x02F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ExecutedParry;                                             // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_IMNI[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSpineAnimationDefinition>           GroundedAnimations;                                        // 0x0308(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	TArray<struct FSpineAnimationDefinition>           AirborneAnimations;                                        // 0x0318(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	TArray<struct FSpineAnimationDefinition>           UnderwaterAnimations;                                      // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	TArray<class UClass*>                              OnParryStates;                                             // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              OnParryStatesDuration;                                     // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MM0V[0x4];                                     // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  OnParry_SoundEvent;                                        // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             OnParry_FX;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  OnParry_FXOffset;                                          // 0x0360(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor)
	float                                              OnParry_TimeStopDuration;                                  // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AllowDodgeConversionMaxTime;                               // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_Parry.CA_Parry_C");
		return ptr;
	}



	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void UnbindPawnEvents(class APawn* Pawn);
	void BindPawnEvents(class APawn* Pawn);
	void OnFinish_B7F8FF2342C78B61294C59BC4317558C();
	void OnStartCommandAction();
	void OnParry(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker, bool bTriggerParryAbility);
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void ExecuteUbergraph_CA_Parry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
