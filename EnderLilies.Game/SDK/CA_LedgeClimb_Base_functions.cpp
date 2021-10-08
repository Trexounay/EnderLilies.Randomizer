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
//		Name   -> Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.RefreshIKBoneLocation
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCA_LedgeClimb_Base_C::RefreshIKBoneLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.RefreshIKBoneLocation");

	UCA_LedgeClimb_Base_C_RefreshIKBoneLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.CacheClimbTargetLocation
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCA_LedgeClimb_Base_C::CacheClimbTargetLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.CacheClimbTargetLocation");

	UCA_LedgeClimb_Base_C_CacheClimbTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCA_LedgeClimb_Base_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnSampleCommandAction");

	UCA_LedgeClimb_Base_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_LedgeClimb_Base_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnEndCommandAction");

	UCA_LedgeClimb_Base_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_LedgeClimb_Base_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnStartCommandAction");

	UCA_LedgeClimb_Base_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnChangePawn
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       OldPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       NewPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_LedgeClimb_Base_C::OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnChangePawn");

	UCA_LedgeClimb_Base_C_OnChangePawn_Params params;
	params.OldPawnSubject = OldPawnSubject;
	params.NewPawnSubject = NewPawnSubject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.ExecuteUbergraph_CA_LedgeClimb_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_LedgeClimb_Base_C::ExecuteUbergraph_CA_LedgeClimb_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.ExecuteUbergraph_CA_LedgeClimb_Base");

	UCA_LedgeClimb_Base_C_ExecuteUbergraph_CA_LedgeClimb_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
