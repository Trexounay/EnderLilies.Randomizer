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

// BlueprintGeneratedClass BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C
// 0x0014 (FullSize[0x003C] - InheritedSize[0x0028])
class UBP_Passive_RegenHPOnAttack_B_C : public UBP_Passive_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AZenithCharacter*                            ZenithCharacter;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              MaxHpRecovery;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Passive_RegenHPOnAttack_B.BP_Passive_RegenHPOnAttack_B_C");
		return ptr;
	}



	void OnApplyToPawn(class APawn* Pawn, class AController* Controller);
	void OnDamageDone(class AActor* DamagedEnemy, int DamageDone);
	void OnRemoveFromPawn(class APawn* Pawn, class AController* Controller);
	void ExecuteUbergraph_BP_Passive_RegenHPOnAttack_B(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
