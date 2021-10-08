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

// BlueprintGeneratedClass BP_BreakableBlock_Spine_PileAttack.BP_BreakableBlock_Spine_PileAttack_C
// 0x0024 (FullSize[0x03E8] - InheritedSize[0x03C4])
class ABP_BreakableBlock_Spine_PileAttack_C : public ABP_BreakableBlock_Spine_C
{
public:
	unsigned char                                      UnknownData_DJTQ[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               PlayerDetector;                                            // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FString                                     PlayerTouchAnimation;                                      // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableBlock_Spine_PileAttack.BP_BreakableBlock_Spine_PileAttack_C");
		return ptr;
	}



	void BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ExecuteUbergraph_BP_BreakableBlock_Spine_PileAttack(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
