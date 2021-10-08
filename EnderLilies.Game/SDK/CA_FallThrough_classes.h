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

// BlueprintGeneratedClass CA_FallThrough.CA_FallThrough_C
// 0x0014 (FullSize[0x02FC] - InheritedSize[0x02E8])
class UCA_FallThrough_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AZenithCharacter*                            Character;                                                 // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              IgnoreAutoClimbDuration;                                   // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_FallThrough.CA_FallThrough_C");
		return ptr;
	}



	bool CanStartCommandAction();
	void OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject);
	void OnStartCommandAction();
	void ExecuteUbergraph_CA_FallThrough(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
