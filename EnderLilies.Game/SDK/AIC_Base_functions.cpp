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
//		Name   -> Function AIC_Base.AIC_Base_C.IncrementTargetFoundCount
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void AAIC_Base_C::IncrementTargetFoundCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.IncrementTargetFoundCount");

	AAIC_Base_C_IncrementTargetFoundCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Base.AIC_Base_C.RemoveUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AAIC_Base_C::RemoveUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.RemoveUI");

	AAIC_Base_C_RemoveUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Base.AIC_Base_C.InitializeUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AAIC_Base_C::InitializeUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.InitializeUI");

	AAIC_Base_C_InitializeUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Base.AIC_Base_C.OnActivate
//		Flags  -> (Event, Public, BlueprintEvent)
void AAIC_Base_C::OnActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.OnActivate");

	AAIC_Base_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Base.AIC_Base_C.OnChangeTarget
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      NewTarget                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Base_C::OnChangeTarget(class AActor* NewTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.OnChangeTarget");

	AAIC_Base_C_OnChangeTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Base.AIC_Base_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.ReceiveEndPlay");

	AAIC_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Base.AIC_Base_C.OnPawnSetPaused
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               paused                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AAIC_Base_C::OnPawnSetPaused(bool paused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.OnPawnSetPaused");

	AAIC_Base_C_OnPawnSetPaused_Params params;
	params.paused = paused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Base.AIC_Base_C.ReceivePossess
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Base_C::ReceivePossess(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.ReceivePossess");

	AAIC_Base_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Base.AIC_Base_C.ExecuteUbergraph_AIC_Base
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Base_C::ExecuteUbergraph_AIC_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Base.AIC_Base_C.ExecuteUbergraph_AIC_Base");

	AAIC_Base_C_ExecuteUbergraph_AIC_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
