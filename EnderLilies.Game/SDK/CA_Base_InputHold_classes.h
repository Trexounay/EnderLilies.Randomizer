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

// BlueprintGeneratedClass CA_Base_InputHold.CA_Base_InputHold_C
// 0x0019 (FullSize[0x0301] - InheritedSize[0x02E8])
class UCA_Base_InputHold_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FSpineAnimationDefinition>           ReleaseAnimations;                                         // 0x02F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)
	bool                                               WaitForReleaseAnims;                                       // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_Base_InputHold.CA_Base_InputHold_C");
		return ptr;
	}



	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnStartCommandAction();
	void ExecuteUbergraph_CA_Base_InputHold(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
