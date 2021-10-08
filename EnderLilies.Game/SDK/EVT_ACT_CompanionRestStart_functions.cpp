// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_ACT_CompanionRestStart.EVT_ACT_CompanionRestStart_C.SetupSpiritCompanion
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       BindingName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AZenithCompanionCharacter*                   Companion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UEventBlackBoard*                            Blackboard                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bSpineFacingRight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEVT_ACT_CompanionRestStart_C::SetupSpiritCompanion(const struct FName& BindingName, class AZenithCompanionCharacter* Companion, class UEventBlackBoard* Blackboard, const struct FName& Key, bool bSpineFacingRight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CompanionRestStart.EVT_ACT_CompanionRestStart_C.SetupSpiritCompanion");

	UEVT_ACT_CompanionRestStart_C_SetupSpiritCompanion_Params params;
	params.BindingName = BindingName;
	params.Companion = Companion;
	params.Blackboard = Blackboard;
	params.Key = Key;
	params.bSpineFacingRight = bSpineFacingRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_ACT_CompanionRestStart.EVT_ACT_CompanionRestStart_C.OnStartAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Subject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UEventBlackBoard*                            EventBlackBoard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_CompanionRestStart_C::OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CompanionRestStart.EVT_ACT_CompanionRestStart_C.OnStartAction");

	UEVT_ACT_CompanionRestStart_C_OnStartAction_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_ACT_CompanionRestStart.EVT_ACT_CompanionRestStart_C.ExecuteUbergraph_EVT_ACT_CompanionRestStart
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_CompanionRestStart_C::ExecuteUbergraph_EVT_ACT_CompanionRestStart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CompanionRestStart.EVT_ACT_CompanionRestStart_C.ExecuteUbergraph_EVT_ACT_CompanionRestStart");

	UEVT_ACT_CompanionRestStart_C_ExecuteUbergraph_EVT_ACT_CompanionRestStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
