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
//		Name   -> Function CA_Parry.CA_Parry_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCA_Parry_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Parry.CA_Parry_C.OnSampleCommandAction");

	UCA_Parry_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Parry.CA_Parry_C.UnbindPawnEvents
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Parry_C::UnbindPawnEvents(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Parry.CA_Parry_C.UnbindPawnEvents");

	UCA_Parry_C_UnbindPawnEvents_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Parry.CA_Parry_C.BindPawnEvents
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Parry_C::BindPawnEvents(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Parry.CA_Parry_C.BindPawnEvents");

	UCA_Parry_C_BindPawnEvents_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Parry.CA_Parry_C.OnFinish_B7F8FF2342C78B61294C59BC4317558C
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UCA_Parry_C::OnFinish_B7F8FF2342C78B61294C59BC4317558C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Parry.CA_Parry_C.OnFinish_B7F8FF2342C78B61294C59BC4317558C");

	UCA_Parry_C_OnFinish_B7F8FF2342C78B61294C59BC4317558C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Parry.CA_Parry_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_Parry_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Parry.CA_Parry_C.OnStartCommandAction");

	UCA_Parry_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Parry.CA_Parry_C.OnParry
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AAbility*                                    Ability                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Invoker                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWillForwardEventToAttacker                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bTriggerParryAbility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCA_Parry_C::OnParry(class AAbility* Ability, class AActor* Invoker, bool bWillForwardEventToAttacker, bool bTriggerParryAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Parry.CA_Parry_C.OnParry");

	UCA_Parry_C_OnParry_Params params;
	params.Ability = Ability;
	params.Invoker = Invoker;
	params.bWillForwardEventToAttacker = bWillForwardEventToAttacker;
	params.bTriggerParryAbility = bTriggerParryAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Parry.CA_Parry_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Parry_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Parry.CA_Parry_C.OnEndCommandAction");

	UCA_Parry_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Parry.CA_Parry_C.ExecuteUbergraph_CA_Parry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Parry_C::ExecuteUbergraph_CA_Parry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Parry.CA_Parry_C.ExecuteUbergraph_CA_Parry");

	UCA_Parry_C_ExecuteUbergraph_CA_Parry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
