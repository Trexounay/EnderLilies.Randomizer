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

// BlueprintGeneratedClass CA_ParryActivation.CA_ParryActivation_C
// 0x0038 (FullSize[0x0320] - InheritedSize[0x02E8])
class UCA_ParryActivation_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FSpineAnimationDefinition>           GroundedAnimations;                                        // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	TArray<struct FSpineAnimationDefinition>           AirborneAnimations;                                        // 0x0300(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	TArray<struct FSpineAnimationDefinition>           UnderwaterAnimations;                                      // 0x0310(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_ParryActivation.CA_ParryActivation_C");
		return ptr;
	}



	void OnStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void ExecuteUbergraph_CA_ParryActivation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
