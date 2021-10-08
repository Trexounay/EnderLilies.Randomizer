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
// Parameters
//---------------------------------------------------------------------------

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.SetupAudioSnapshotTrigger
struct ABP_CustomPhysicsVolume_Water_C_SetupAudioSnapshotTrigger_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetLocationOnSurface
struct ABP_CustomPhysicsVolume_Water_C_GetLocationOnSurface_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_EBoxSide                                    BoxSide;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetAudioSnapshotTag
struct ABP_CustomPhysicsVolume_Water_C_GetAudioSnapshotTag_Params
{
	struct FName                                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckPlayerExit
struct ABP_CustomPhysicsVolume_Water_C_CheckPlayerExit_Params
{
	class UObject*                                     Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckPlayerEnter
struct ABP_CustomPhysicsVolume_Water_C_CheckPlayerEnter_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.CheckAbilityHitboxEnter
struct ABP_CustomPhysicsVolume_Water_C_CheckAbilityHitboxEnter_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ApplyInteractingActorSplashes
struct ABP_CustomPhysicsVolume_Water_C_ApplyInteractingActorSplashes_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.WorldSpaceToUVSpace
struct ABP_CustomPhysicsVolume_Water_C_WorldSpaceToUVSpace_Params
{
	struct FVector                                     InVec;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UV;                                                        // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetHeightRT
struct ABP_CustomPhysicsVolume_Water_C_GetHeightRT_Params
{
	int                                                CurrentHeightIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumFrameOld;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                      Output;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.GetActorLocationOnWave
struct ABP_CustomPhysicsVolume_Water_C_GetActorLocationOnWave_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PlayFXAtActorLocation
struct ABP_CustomPhysicsVolume_Water_C_PlayFXAtActorLocation_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLargeFX;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.UserConstructionScript
struct ABP_CustomPhysicsVolume_Water_C_UserConstructionScript_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PostProcessBlend__FinishedFunc
struct ABP_CustomPhysicsVolume_Water_C_PostProcessBlend__FinishedFunc_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.PostProcessBlend__UpdateFunc
struct ABP_CustomPhysicsVolume_Water_C_PostProcessBlend__UpdateFunc_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.DisableReverb
struct ABP_CustomPhysicsVolume_Water_C_DisableReverb_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.EnableReverb
struct ABP_CustomPhysicsVolume_Water_C_EnableReverb_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CustomPhysicsVolume_Water_C_BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CustomPhysicsVolume_Water_C_BndEvt__AudioSnapshotTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ReceiveBeginPlay
struct ABP_CustomPhysicsVolume_Water_C_ReceiveBeginPlay_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__FluidMeshComponent_K2Node_ComponentBoundEvent_0_FluidMeshEvent__DelegateSignature
struct ABP_CustomPhysicsVolume_Water_C_BndEvt__FluidMeshComponent_K2Node_ComponentBoundEvent_0_FluidMeshEvent__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VelocityZ;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__BoxComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_CustomPhysicsVolume_Water_C_BndEvt__BoxComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorEnter_Large
struct ABP_CustomPhysicsVolume_Water_C_OnActorEnter_Large_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorExit_Large
struct ABP_CustomPhysicsVolume_Water_C_OnActorExit_Large_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorEnter_Medium
struct ABP_CustomPhysicsVolume_Water_C_OnActorEnter_Medium_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.OnActorExit_Medium
struct ABP_CustomPhysicsVolume_Water_C_OnActorExit_Medium_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ReceiveTick
struct ABP_CustomPhysicsVolume_Water_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.splash
struct ABP_CustomPhysicsVolume_Water_C_splash_Params
{
	struct FVector                                     InVec;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Size;                                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Strength;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BndEvt__BoxComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
struct ABP_CustomPhysicsVolume_Water_C_BndEvt__BoxComponent_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BlendInPostProcess
struct ABP_CustomPhysicsVolume_Water_C_BlendInPostProcess_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.BlendOutPostProcess
struct ABP_CustomPhysicsVolume_Water_C_BlendOutPostProcess_Params
{
};

// Function BP_CustomPhysicsVolume_Water.BP_CustomPhysicsVolume_Water_C.ExecuteUbergraph_BP_CustomPhysicsVolume_Water
struct ABP_CustomPhysicsVolume_Water_C_ExecuteUbergraph_BP_CustomPhysicsVolume_Water_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
