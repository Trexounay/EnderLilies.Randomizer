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

// BlueprintGeneratedClass AE_PlaySE.AE_PlaySE_C
// 0x000A (FullSize[0x010A] - InheritedSize[0x0100])
class UAE_PlaySE_C : public UAbilityEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	Zenith_ESoundMaterial                              Material;                                                  // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ESoundAction                                Action;                                                    // 0x0109(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AE_PlaySE.AE_PlaySE_C");
		return ptr;
	}



	void OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos);
	void ExecuteUbergraph_AE_PlaySE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
