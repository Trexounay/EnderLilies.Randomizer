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

// BlueprintGeneratedClass EVT_ACT_FadeIn.EVT_ACT_FadeIn_C
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UEVT_ACT_FadeIn_C : public UEVT_ACT_Fade_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0050(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_FadeIn.EVT_ACT_FadeIn_C");
		return ptr;
	}



	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnFadeFinished(bool bWasFadeIn);
	void ExecuteUbergraph_EVT_ACT_FadeIn(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
