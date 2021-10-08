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

// BlueprintGeneratedClass BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C
// 0x0070 (FullSize[0x03C4] - InheritedSize[0x0354])
class ABP_BreakableBlock_Spine_C : public ABP_BreakableBlock_C
{
public:
	unsigned char                                      UnknownData_Z8YH[0x4];                                     // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpineSkeletonRendererComponent*             SpineSkeletonRenderer;                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineSkeletonAnimationExComponent*          SpineSkeletonAnimationEx;                                  // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FString                                     Idle;                                                      // 0x0370(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Damage;                                                    // 0x0380(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     DamageInsufficientLevel_2;                                 // 0x0390(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     DamageInsufficientLevel_3;                                 // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Break;                                                     // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                              PostBreakDestroyDelay;                                     // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableBlock_Spine.BP_BreakableBlock_Spine_C");
		return ptr;
	}



	void OnBreak();
	void BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature(class AActor* From, int Damage);
	void ReceiveBeginPlay();
	void OnAttackLevelInsufficient(int AttackLevel, int NecessaryAttackLevel);
	void PostBreakDestroy();
	void ExecuteUbergraph_BP_BreakableBlock_Spine(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
