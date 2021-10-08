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

// BlueprintGeneratedClass BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C
// 0x00E4 (FullSize[0x0334] - InheritedSize[0x0250])
class ABP_CustomPhysicsVolume_Water_C : public ACustomPhysicsVolumeWater
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               AudioSnapshotTrigger;                                      // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       PostProcess;                                               // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              PostProcessBlend_PostProcessWeight_66B827AB47543EA316845BB35FFB4C15; // 0x0268(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             PostProcessBlend__Direction_66B827AB47543EA316845BB35FFB4C15; // 0x026C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P0LE[0x3];                                     // 0x026D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          PostProcessBlend;                                          // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UParticleSystem*                             EnterSplashFX_Medium;                                      // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             EnterSplashFX_Large;                                       // 0x0280(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ExitSplashFX_Medium;                                       // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ExitSplashFX_Large;                                        // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinVelocityForMedium;                                      // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinVelocityForLarge;                                       // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  EventEnter_Large;                                          // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  EventEnter_Medium;                                         // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          WaterMaterial;                                             // 0x02B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          SplatMaterial;                                             // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          HeightSimulationMaterial;                                  // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                          ComputeNormalMaterial;                                     // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RenderTargetResolution;                                    // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpdateRate;                                                // 0x02D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InteractingActorsLateral;                                  // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PostProcessBlendTime;                                      // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  AudioSnapshot;                                             // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextureRenderTarget2D*>              HeightRenderTargets;                                       // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    WaterMID;                                                  // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    ForceSplatMID;                                             // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    HeightSimulationMID;                                       // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    ComputeNormalMID;                                          // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                      HeightfieldNormalRenderTarget;                             // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeAccumulator;                                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	int                                                HeightRTIndex;                                             // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class APawn*                                       OverlappingPlayerPawn;                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                              AudioSnapshotDepthFromSurface;                             // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C");
		return ptr;
	}



	void SetupAudioSnapshotTrigger();
	struct FVector GetLocationOnSurface(class AActor* Actor, Zenith_EBoxSide* BoxSide);
	struct FName GetAudioSnapshotTag();
	void CheckPlayerExit(class UObject* Actor);
	void CheckPlayerEnter(class UObject* Object);
	void CheckAbilityHitboxEnter(class AActor* Actor);
	void ApplyInteractingActorSplashes();
	void WorldSpaceToUVSpace(const struct FVector& InVec, struct FLinearColor* UV);
	void GetHeightRT(int CurrentHeightIndex, int NumFrameOld, class UTextureRenderTarget2D** Output);
	void GetActorLocationOnWave(class AActor* Target, struct FVector* Location);
	void PlayFXAtActorLocation(class AActor* Actor, bool bLargeFX);
	void UserConstructionScript();
	void PostProcessBlend__FinishedFunc();
	void PostProcessBlend__UpdateFunc();
	void DisableReverb();
	void EnableReverb();
	void BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void BndEvt__FluidMeshComponent_K2Node_ComponentBoundEvent_0_FluidMeshEvent__DelegateSignature(class AActor* Actor, float VelocityZ);
	void BndEvt__BoxComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnActorEnter_Large(class AActor* Actor);
	void OnActorExit_Large(class AActor* Actor);
	void OnActorEnter_Medium(class AActor* Actor);
	void OnActorExit_Medium(class AActor* Actor);
	void ReceiveTick(float DeltaSeconds);
	void splash(const struct FVector& InVec, float Size, float Strength);
	void BndEvt__BoxComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BlendInPostProcess();
	void BlendOutPostProcess();
	void ExecuteUbergraph_BP_CustomPhysicsVolume_Water(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
