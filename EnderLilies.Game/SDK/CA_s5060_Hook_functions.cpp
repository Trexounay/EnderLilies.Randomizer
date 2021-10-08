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
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.UpdateWireEffectEndLocation
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCA_s5060_Hook_C::UpdateWireEffectEndLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.UpdateWireEffectEndLocation");

	UCA_s5060_Hook_C_UpdateWireEffectEndLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.GetWireStartLocation
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_s5060_Hook_C::GetWireStartLocation(struct FVector* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.GetWireStartLocation");

	UCA_s5060_Hook_C_GetWireStartLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.UpdateWireEffectStartLocation
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UCA_s5060_Hook_C::UpdateWireEffectStartLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.UpdateWireEffectStartLocation");

	UCA_s5060_Hook_C_UpdateWireEffectStartLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.PlayBlendAnims
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                TrackIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_s5060_Hook_C::PlayBlendAnims(TArray<struct FString>* Array, int TrackIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.PlayBlendAnims");

	UCA_s5060_Hook_C_PlayBlendAnims_Params params;
	params.TrackIndex = TrackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.SetAnimationBlend
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              BlendValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_s5060_Hook_C::SetAnimationBlend(float BlendValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.SetAnimationBlend");

	UCA_s5060_Hook_C_SetAnimationBlend_Params params;
	params.BlendValue = BlendValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.GetBlendValue
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              BlendValue                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_s5060_Hook_C::GetBlendValue(float* BlendValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.GetBlendValue");

	UCA_s5060_Hook_C_GetBlendValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BlendValue != nullptr)
		*BlendValue = params.BlendValue;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.OnSampleCommandAction
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandResult                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
Zenith_ECommandResult UCA_s5060_Hook_C::OnSampleCommandAction(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.OnSampleCommandAction");

	UCA_s5060_Hook_C_OnSampleCommandAction_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_s5060_Hook_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.OnStartCommandAction");

	UCA_s5060_Hook_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_s5060_Hook_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.OnEndCommandAction");

	UCA_s5060_Hook_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.OnChangePawn
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       OldPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       NewPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_s5060_Hook_C::OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.OnChangePawn");

	UCA_s5060_Hook_C_OnChangePawn_Params params;
	params.OldPawnSubject = OldPawnSubject;
	params.NewPawnSubject = NewPawnSubject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_s5060_Hook.CA_s5060_Hook_C.ExecuteUbergraph_CA_s5060_Hook
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_s5060_Hook_C::ExecuteUbergraph_CA_s5060_Hook(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_s5060_Hook.CA_s5060_Hook_C.ExecuteUbergraph_CA_s5060_Hook");

	UCA_s5060_Hook_C_ExecuteUbergraph_CA_s5060_Hook_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
