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
//		Name   -> Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.PlayAnimations
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UEVT_ACT_CompanionSetBinding_C::PlayAnimations(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.PlayAnimations");

	UEVT_ACT_CompanionSetBinding_C_PlayAnimations_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.SetIdleAnimationOverride
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UEVT_ACT_CompanionSetBinding_C::SetIdleAnimationOverride(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.SetIdleAnimationOverride");

	UEVT_ACT_CompanionSetBinding_C_SetIdleAnimationOverride_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.BindCompanionActor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithCompanionCharacter*                   CompanionActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_CompanionSetBinding_C::BindCompanionActor(class AZenithCompanionCharacter* CompanionActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.BindCompanionActor");

	UEVT_ACT_CompanionSetBinding_C_BindCompanionActor_Params params;
	params.CompanionActor = CompanionActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.OnStartAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Subject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UEventBlackBoard*                            EventBlackBoard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_CompanionSetBinding_C::OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.OnStartAction");

	UEVT_ACT_CompanionSetBinding_C_OnStartAction_Params params;
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
//		Name   -> Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.ExecuteUbergraph_EVT_ACT_CompanionSetBinding
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_CompanionSetBinding_C::ExecuteUbergraph_EVT_ACT_CompanionSetBinding(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CompanionSetBinding.EVT_ACT_CompanionSetBinding_C.ExecuteUbergraph_EVT_ACT_CompanionSetBinding");

	UEVT_ACT_CompanionSetBinding_C_ExecuteUbergraph_EVT_ACT_CompanionSetBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
