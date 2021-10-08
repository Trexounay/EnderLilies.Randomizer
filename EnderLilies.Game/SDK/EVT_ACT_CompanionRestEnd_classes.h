﻿#pragma once

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

// BlueprintGeneratedClass EVT_ACT_CompanionRestEnd.EVT_ACT_CompanionRestEnd_C
// 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
class UEVT_ACT_CompanionRestEnd_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_CompanionRestEnd.EVT_ACT_CompanionRestEnd_C");
		return ptr;
	}



	void UnregisterSpiritCompanion(class UEventPlayer* EventPlayer, const struct FName& Binding);
	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_CompanionRestEnd(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
