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

// BlueprintGeneratedClass BP_Character_SpineBase.BP_Character_SpineBase_C
// 0x0038 (FullSize[0x07F8] - InheritedSize[0x07C0])
class ABP_Character_SpineBase_C : public ABP_Character_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULightEmulatorComponent*                     LightEmulator;                                             // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UProceduralRenderMeshProxyComponent*         LightEmulatorMask;                                         // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineSkeletonRendererComponent*             SpineSkeletonRenderer;                                     // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineAnimationComponent*                    SpineAnimation;                                            // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineSkeletonAnimationExComponent*          SpineSkeletonAnimationEx;                                  // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpineBoneComponent*                         SpineBone;                                                 // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_SpineBase.BP_Character_SpineBase_C");
		return ptr;
	}



	void ComputeSortPriority(int* SortPriority);
	void BndEvt__FactionComponent_K2Node_ComponentBoundEvent_2_FactionEvent__DelegateSignature();
	void OnRefreshTranslucentSortPriority(int NewTranslucentSortPriority);
	void OnRespawn();
	void BndEvt__HPComponent_K2Node_ComponentBoundEvent_0_HPDamageEvent__DelegateSignature(class AActor* From, int Damage);
	void ExecuteUbergraph_BP_Character_SpineBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
