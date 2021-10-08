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

// Function BTTask_MoveBase.BTTask_MoveBase_C.IsAlreadyAtDestination
struct UBTTask_MoveBase_C_IsAlreadyAtDestination_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TargetLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TargetActor;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Result;                                                    // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.ClampDestination
struct UBTTask_MoveBase_C_ClampDestination_Params
{
	struct FVector                                     Destination;                                               // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ClampedDestination;                                        // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.OnFail_F1A707A84ECFFDEAE2AF4EB36EB48C8A
struct UBTTask_MoveBase_C_OnFail_F1A707A84ECFFDEAE2AF4EB36EB48C8A_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.OnSuccess_F1A707A84ECFFDEAE2AF4EB36EB48C8A
struct UBTTask_MoveBase_C_OnSuccess_F1A707A84ECFFDEAE2AF4EB36EB48C8A_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveFinished_51D1FBAA45E53E8DCB3F09A9336A616B
struct UBTTask_MoveBase_C_OnMoveFinished_51D1FBAA45E53E8DCB3F09A9336A616B_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAIController*                               AIController;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.OnRequestFailed_51D1FBAA45E53E8DCB3F09A9336A616B
struct UBTTask_MoveBase_C_OnRequestFailed_51D1FBAA45E53E8DCB3F09A9336A616B_Params
{
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.ReceiveAbortAI
struct UBTTask_MoveBase_C_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveSuccess
struct UBTTask_MoveBase_C_OnMoveSuccess_Params
{
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.OnMoveFail
struct UBTTask_MoveBase_C_OnMoveFail_Params
{
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.ExecuteMovement
struct UBTTask_MoveBase_C_ExecuteMovement_Params
{
	class AAIController*                               OwnerController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination;                                               // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TargetActor;                                               // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_MoveBase.BTTask_MoveBase_C.ExecuteUbergraph_BTTask_MoveBase
struct UBTTask_MoveBase_C_ExecuteUbergraph_BTTask_MoveBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
