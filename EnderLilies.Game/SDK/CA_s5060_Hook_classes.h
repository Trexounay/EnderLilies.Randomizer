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

// BlueprintGeneratedClass CA_s5060_Hook.CA_s5060_Hook_C
// 0x0040 (FullSize[0x0360] - InheritedSize[0x0320])
class UCA_s5060_Hook_C : public UCA_Spirit_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	SpineExtensionPlugin_ESpineBone                    WireBone;                                                  // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P3M1[0x3];                                     // 0x0329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxExecutionTime;                                          // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpineSkeletonAnimationComponent*            AnimationComponent;                                        // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	TArray<class UTrackEntry*>                         BlendTracks;                                               // 0x0338(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	class AHookPoint*                                  HookPoint;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystemComponent*                    WireEffect;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpineBoneComponent*                         BoneComponent;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_s5060_Hook.CA_s5060_Hook_C");
		return ptr;
	}



	void UpdateWireEffectEndLocation();
	void GetWireStartLocation(struct FVector* Location);
	void UpdateWireEffectStartLocation();
	void PlayBlendAnims(TArray<struct FString>* Array, int TrackIndex);
	void SetAnimationBlend(float BlendValue);
	void GetBlendValue(float* BlendValue);
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject);
	void ExecuteUbergraph_CA_s5060_Hook(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
