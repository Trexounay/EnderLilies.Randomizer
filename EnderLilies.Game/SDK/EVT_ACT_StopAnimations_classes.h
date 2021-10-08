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

// BlueprintGeneratedClass EVT_ACT_StopAnimations.EVT_ACT_StopAnimations_C
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UEVT_ACT_StopAnimations_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               OverrideBlend;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AIPJ[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendOut;                                                  // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_StopAnimations.EVT_ACT_StopAnimations_C");
		return ptr;
	}



	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_StopAnimations(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
