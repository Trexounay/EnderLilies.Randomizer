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

// BlueprintGeneratedClass EVT_ACT_CompanionRestStart.EVT_ACT_CompanionRestStart_C
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UEVT_ACT_CompanionRestStart_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_CompanionRestStart.EVT_ACT_CompanionRestStart_C");
		return ptr;
	}



	void SetupSpiritCompanion(const struct FName& BindingName, class AZenithCompanionCharacter* Companion, class UEventBlackBoard* Blackboard, const struct FName& Key, bool bSpineFacingRight);
	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_CompanionRestStart(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
