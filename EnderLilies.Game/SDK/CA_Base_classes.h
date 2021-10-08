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

// BlueprintGeneratedClass CA_Base.CA_Base_C
// 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
class UCA_Base_C : public UCommandActionGameplay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_Base.CA_Base_C");
		return ptr;
	}



	void ClearSpineColor(class APawn* Pawn);
	void SetSpineColor(class APawn* Pawn, const struct FLinearColor& Color);
	void UnbindPawnEvents(class APawn* Pawn);
	void BindPawnEvents(class APawn* Pawn);
	void OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject);
	void ExecuteUbergraph_CA_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
