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
//		Name   -> Function CA_UseHeal.CA_UseHeal_C.GetAnimations
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		TArray<struct FSpineAnimationDefinition>           ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ContainsInstancedReference)
TArray<struct FSpineAnimationDefinition> UCA_UseHeal_C::GetAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_UseHeal.CA_UseHeal_C.GetAnimations");

	UCA_UseHeal_C_GetAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_UseHeal.CA_UseHeal_C.ConsumeHeal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCA_UseHeal_C::ConsumeHeal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_UseHeal.CA_UseHeal_C.ConsumeHeal");

	UCA_UseHeal_C_ConsumeHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_UseHeal.CA_UseHeal_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCA_UseHeal_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_UseHeal.CA_UseHeal_C.OnSampleCommandAction");

	UCA_UseHeal_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_UseHeal.CA_UseHeal_C.GetHealComponent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UHealComponent*                              HealComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_UseHeal_C::GetHealComponent(class UHealComponent** HealComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_UseHeal.CA_UseHeal_C.GetHealComponent");

	UCA_UseHeal_C_GetHealComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HealComponent != nullptr)
		*HealComponent = params.HealComponent;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_UseHeal.CA_UseHeal_C.CanStartCommandAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCA_UseHeal_C::CanStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_UseHeal.CA_UseHeal_C.CanStartCommandAction");

	UCA_UseHeal_C_CanStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_UseHeal.CA_UseHeal_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_UseHeal_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_UseHeal.CA_UseHeal_C.OnStartCommandAction");

	UCA_UseHeal_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_UseHeal.CA_UseHeal_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_UseHeal_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_UseHeal.CA_UseHeal_C.OnEndCommandAction");

	UCA_UseHeal_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_UseHeal.CA_UseHeal_C.ExecuteUbergraph_CA_UseHeal
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_UseHeal_C::ExecuteUbergraph_CA_UseHeal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_UseHeal.CA_UseHeal_C.ExecuteUbergraph_CA_UseHeal");

	UCA_UseHeal_C_ExecuteUbergraph_CA_UseHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
