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

// BlueprintGeneratedClass AIC_Companion.AIC_Companion_C
// 0x0008 (FullSize[0x03A8] - InheritedSize[0x03A0])
class AAIC_Companion_C : public AZenithAICompanionController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AIC_Companion.AIC_Companion_C");
		return ptr;
	}



	void ReceiveUnPossess(class APawn* UnpossessedPawn);
	void ReceivePossess(class APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_Companion(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
