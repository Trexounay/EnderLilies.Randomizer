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

// BlueprintGeneratedClass AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C
// 0x0018 (FullSize[0x0410] - InheritedSize[0x03F8])
class AAbilityHitbox_s5050_Pile_C : public AAbilityHitbox_Default_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAE_BreakPileBlocks_C*                       AE_BreakPileBlocks;                                        // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStateComponent*                             SummonerStateComponent;                                    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AbilityHitbox_s5050_Pile.AbilityHitbox_s5050_Pile_C");
		return ptr;
	}



	void GetAttackLevel(int* AttackLevel);
	void OnTick(float DeltaTime);
	void OnLaunch();
	void ExecuteUbergraph_AbilityHitbox_s5050_Pile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
