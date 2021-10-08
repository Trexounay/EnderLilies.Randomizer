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

// BlueprintGeneratedClass AE_PlaySpecificSE.AE_PlaySpecificSE_C
// 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
class UAE_PlaySpecificSE_C : public UAbilityEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFMODEvent*                                  SoundEvent;                                                // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AE_PlaySpecificSE.AE_PlaySpecificSE_C");
		return ptr;
	}



	void OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos);
	void ExecuteUbergraph_AE_PlaySpecificSE(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
