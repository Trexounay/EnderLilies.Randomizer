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

// Function EVT_ACT_MoveToTarget.EVT_ACT_MoveToTarget_C.OnFail_70926ABF4DB07E123F6736BA1088FAA8
struct UEVT_ACT_MoveToTarget_C_OnFail_70926ABF4DB07E123F6736BA1088FAA8_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_ACT_MoveToTarget.EVT_ACT_MoveToTarget_C.OnSuccess_70926ABF4DB07E123F6736BA1088FAA8
struct UEVT_ACT_MoveToTarget_C_OnSuccess_70926ABF4DB07E123F6736BA1088FAA8_Params
{
	TEnumAsByte<AIModule_EPathFollowingResult>         MovementResult;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_ACT_MoveToTarget.EVT_ACT_MoveToTarget_C.OnFinished_8C53479746FD89DD406AECABB58AC1EE
struct UEVT_ACT_MoveToTarget_C_OnFinished_8C53479746FD89DD406AECABB58AC1EE_Params
{
};

// Function EVT_ACT_MoveToTarget.EVT_ACT_MoveToTarget_C.OnStartAction
struct UEVT_ACT_MoveToTarget_C_OnStartAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_ACT_MoveToTarget.EVT_ACT_MoveToTarget_C.OnAbortAction
struct UEVT_ACT_MoveToTarget_C_OnAbortAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_ACT_MoveToTarget.EVT_ACT_MoveToTarget_C.ExecuteUbergraph_EVT_ACT_MoveToTarget
struct UEVT_ACT_MoveToTarget_C_ExecuteUbergraph_EVT_ACT_MoveToTarget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
