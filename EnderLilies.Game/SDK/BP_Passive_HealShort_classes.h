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

// BlueprintGeneratedClass BP_Passive_HealShort.BP_Passive_HealShort_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UBP_Passive_HealShort_C : public UBP_Passive_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Passive_HealShort.BP_Passive_HealShort_C");
		return ptr;
	}



	void OnApplyToPawn(class APawn* Pawn, class AController* Controller);
	void OnRemoveFromPawn(class APawn* Pawn, class AController* Controller);
	void ExecuteUbergraph_BP_Passive_HealShort(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
