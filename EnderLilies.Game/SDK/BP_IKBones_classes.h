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

// BlueprintGeneratedClass BP_IKBones.BP_IKBones_C
// 0x0068 (FullSize[0x0118] - InheritedSize[0x00B0])
class UBP_IKBones_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<class USceneComponent*, struct FVector>       DefaultLocations;                                          // 0x00B8(0x0050) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	TArray<struct FFVectorBlend>                       Blends;                                                    // 0x0108(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_IKBones.BP_IKBones_C");
		return ptr;
	}



	void RemoveFinishedBlends();
	void UpdateBlends(float DelatTime);
	void ResetIKBoneByTag(const struct FName& Tag, float BlendTime);
	void GetIKBoneByTag(const struct FName& Tag, class USceneComponent** IKBone);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_IKBones(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
