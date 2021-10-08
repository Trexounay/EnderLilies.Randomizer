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

// BlueprintGeneratedClass AE_SetFacing.AE_SetFacing_C
// 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
class UAE_SetFacing_C : public UAbilityEffectComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0100(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AE_SetFacing.AE_SetFacing_C");
		return ptr;
	}



	void OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos);
	void ExecuteUbergraph_AE_SetFacing(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
