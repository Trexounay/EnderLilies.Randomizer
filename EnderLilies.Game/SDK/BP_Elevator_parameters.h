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

// Function BP_Elevator.BP_Elevator_C.IsPlayerInPlayerDetector
struct ABP_Elevator_C_IsPlayerInPlayerDetector_Params
{
	bool                                               PlayerFound;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Elevator.BP_Elevator_C.SetSpeedFactor
struct ABP_Elevator_C_SetSpeedFactor_Params
{
	bool                                               bFastFactor;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Elevator.BP_Elevator_C.StopMoveSound
struct ABP_Elevator_C_StopMoveSound_Params
{
};

// Function BP_Elevator.BP_Elevator_C.GetInnerRadius
struct ABP_Elevator_C_GetInnerRadius_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Elevator.BP_Elevator_C.IsActorTopBelowOneWay
struct ABP_Elevator_C_IsActorTopBelowOneWay_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Elevator.BP_Elevator_C.OnFinish_0BBBFB064A8ECC47C8B7C0BA615D00B7
struct ABP_Elevator_C_OnFinish_0BBBFB064A8ECC47C8B7C0BA615D00B7_Params
{
};

// Function BP_Elevator.BP_Elevator_C.CallToDestination
struct ABP_Elevator_C_CallToDestination_Params
{
};

// Function BP_Elevator.BP_Elevator_C.OnInteract
struct ABP_Elevator_C_OnInteract_Params
{
	class AInteractable*                               Interactable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Elevator.BP_Elevator_C.BndEvt__OneWayBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Elevator_C_BndEvt__OneWayBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Elevator.BP_Elevator_C.MarkAsIgnoreForActor
struct ABP_Elevator_C_MarkAsIgnoreForActor_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Elevator.BP_Elevator_C.CallToOrigin
struct ABP_Elevator_C_CallToOrigin_Params
{
};

// Function BP_Elevator.BP_Elevator_C.UnmarkAsIgnoreForActor
struct ABP_Elevator_C_UnmarkAsIgnoreForActor_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Elevator.BP_Elevator_C.BndEvt__OneWayBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Elevator_C_BndEvt__OneWayBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Elevator.BP_Elevator_C.BndEvt__ElevatorMovement_K2Node_ComponentBoundEvent_2_ElevatorMovementEvent__DelegateSignature
struct ABP_Elevator_C_BndEvt__ElevatorMovement_K2Node_ComponentBoundEvent_2_ElevatorMovementEvent__DelegateSignature_Params
{
};

// Function BP_Elevator.BP_Elevator_C.BndEvt__ElevatorMovement_K2Node_ComponentBoundEvent_3_ElevatorMovementEvent__DelegateSignature
struct ABP_Elevator_C_BndEvt__ElevatorMovement_K2Node_ComponentBoundEvent_3_ElevatorMovementEvent__DelegateSignature_Params
{
};

// Function BP_Elevator.BP_Elevator_C.ReceiveEndPlay
struct ABP_Elevator_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Elevator.BP_Elevator_C.ReceiveBeginPlay
struct ABP_Elevator_C_ReceiveBeginPlay_Params
{
};

// Function BP_Elevator.BP_Elevator_C.TriggerElevator
struct ABP_Elevator_C_TriggerElevator_Params
{
};

// Function BP_Elevator.BP_Elevator_C.BndEvt__BP_Elevator_PlayerDetector_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Elevator_C_BndEvt__BP_Elevator_PlayerDetector_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Elevator.BP_Elevator_C.BndEvt__BP_Elevator_PlayerDetector_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Elevator_C_BndEvt__BP_Elevator_PlayerDetector_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Elevator.BP_Elevator_C.ExecuteUbergraph_BP_Elevator
struct ABP_Elevator_C_ExecuteUbergraph_BP_Elevator_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
