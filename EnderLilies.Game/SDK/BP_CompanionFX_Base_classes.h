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

// BlueprintGeneratedClass BP_CompanionFX_Base.BP_CompanionFX_Base_C
// 0x0100 (FullSize[0x07B0] - InheritedSize[0x06B0])
class ABP_CompanionFX_Base_C : public AZenithCompanionCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ULightEmulatorComponent*                     LightEmulator;                                             // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralRenderMeshProxyComponent*         LightEmulatorMask;                                         // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FadeOut_FadeOut_720AA557491060F9698C529143D0BA97;          // 0x06C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeOut__Direction_720AA557491060F9698C529143D0BA97;       // 0x06CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_94OZ[0x3];                                     // 0x06CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeOut;                                                   // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FadeIn_FadeIn_E8B37EC94606F221B3FB6EAB61B2E95E;            // 0x06D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeIn__Direction_E8B37EC94606F221B3FB6EAB61B2E95E;        // 0x06DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4T7J[0x3];                                     // 0x06DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeIn;                                                    // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FString                                     IdleAnimationName;                                         // 0x06E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	TMap<Zenith_ECommandInputTypes, struct FVector>    LeaderOffsetForAssociatedInput;                            // 0x06F8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                           // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystemComponent*                    FX;                                                        // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               UseFXManualPooling;                                        // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_LW0P[0x7];                                     // 0x0761(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     IdleAnimationOverrideName;                                 // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               RequestMeatActionTrack;                                    // 0x0778(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7EH2[0x7];                                     // 0x0779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MeatActionAnimationName;                                   // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsAppearing;                                               // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_ZVHI[0x7];                                     // 0x0791(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCommandAction*                              CachedCommandAction;                                       // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               CheckCommandCooldown;                                      // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_J307[0x7];                                     // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       LeaderPawn;                                                // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_CompanionFX_Base.BP_CompanionFX_Base_C");
		return ptr;
	}



	void ResetAndUnbindCommandAction();
	void RefreshCommandActionCache();
	void TeleportToAssociatedLocation();
	void TriggerWorldSpaceUI();
	void Set_FXVisibility(bool Visible);
	struct FVector GetDesiredUIOffset();
	void GetDesiredFXColor(struct FLinearColor* DesiredColor);
	void SetDissolveValue(float DissolveValue);
	void GetIdleAnimationName(struct FString* IdleAnimationName);
	void ClearIdleAnimationOverride();
	void SetIdleAnimationOverride(const struct FString& IdleAnimationOverrideName);
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void OnShowSpine();
	void OnHideSpine();
	void OnSetMeshComponentsHiddenInGame(bool bHiddenInGame);
	void SetPoseFadePlaneAlpha(float Alpha);
	void OnSetTranslucencyPriority(int Priority);
	void OnActivate();
	void OnDeactivate();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnEventStop();
	void OnAssociatedCommandStart();
	void ReceiveTick(float DeltaSeconds);
	void OnSetAssociatedSpiritData();
	void OnLeaderPawnChanged(class APawn* NewLeaderPawn);
	void ExecuteUbergraph_BP_CompanionFX_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
