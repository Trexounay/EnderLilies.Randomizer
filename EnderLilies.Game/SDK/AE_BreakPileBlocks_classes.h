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

// BlueprintGeneratedClass AE_BreakPileBlocks.AE_BreakPileBlocks_C
// 0x000C (FullSize[0x010C] - InheritedSize[0x0100])
class UAE_BreakPileBlocks_C : public UAbilityEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                AttackLevel;                                               // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AE_BreakPileBlocks.AE_BreakPileBlocks_C");
		return ptr;
	}



	void OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos);
	void ExecuteUbergraph_AE_BreakPileBlocks(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
