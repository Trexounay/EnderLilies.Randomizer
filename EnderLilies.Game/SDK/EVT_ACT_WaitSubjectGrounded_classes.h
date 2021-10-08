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

// BlueprintGeneratedClass EVT_ACT_WaitSubjectGrounded.EVT_ACT_WaitSubjectGrounded_C
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UEVT_ACT_WaitSubjectGrounded_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCharacterMovementComponent*                 CharacterComponent;                                        // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_WaitSubjectGrounded.EVT_ACT_WaitSubjectGrounded_C");
		return ptr;
	}



	EventPlugin_EEventActionResult CheckGround();
	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnTickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_WaitSubjectGrounded(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
