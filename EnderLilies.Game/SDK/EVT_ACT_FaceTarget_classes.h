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

// BlueprintGeneratedClass EVT_ACT_FaceTarget.EVT_ACT_FaceTarget_C
// 0x0058 (FullSize[0x0098] - InheritedSize[0x0040])
class UEVT_ACT_FaceTarget_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               PlayTurnAnimation;                                         // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C6P8[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpineAnimationDefinition                   TurnAnimationDefinition;                                   // 0x0050(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_FaceTarget.EVT_ACT_FaceTarget_C");
		return ptr;
	}



	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnTickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_FaceTarget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
