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
//		Name   -> Function CA_FallThrough.CA_FallThrough_C.CanStartCommandAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCA_FallThrough_C::CanStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_FallThrough.CA_FallThrough_C.CanStartCommandAction");

	UCA_FallThrough_C_CanStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_FallThrough.CA_FallThrough_C.OnChangePawn
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       OldPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       NewPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_FallThrough_C::OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_FallThrough.CA_FallThrough_C.OnChangePawn");

	UCA_FallThrough_C_OnChangePawn_Params params;
	params.OldPawnSubject = OldPawnSubject;
	params.NewPawnSubject = NewPawnSubject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_FallThrough.CA_FallThrough_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_FallThrough_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_FallThrough.CA_FallThrough_C.OnStartCommandAction");

	UCA_FallThrough_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_FallThrough.CA_FallThrough_C.ExecuteUbergraph_CA_FallThrough
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_FallThrough_C::ExecuteUbergraph_CA_FallThrough(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_FallThrough.CA_FallThrough_C.ExecuteUbergraph_CA_FallThrough");

	UCA_FallThrough_C_ExecuteUbergraph_CA_FallThrough_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
