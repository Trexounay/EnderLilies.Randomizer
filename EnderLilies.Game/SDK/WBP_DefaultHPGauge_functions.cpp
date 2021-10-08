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
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.CharacterStatesAllowVisibility
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_DefaultHPGauge_C::CharacterStatesAllowVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.CharacterStatesAllowVisibility");

	UWBP_DefaultHPGauge_C_CharacterStatesAllowVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.SetVisible
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_DefaultHPGauge_C::SetVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.SetVisible");

	UWBP_DefaultHPGauge_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.SetGaugesVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_DefaultHPGauge_C::SetGaugesVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.SetGaugesVisibility");

	UWBP_DefaultHPGauge_C_SetGaugesVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetStunRatio
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_DefaultHPGauge_C::GetStunRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetStunRatio");

	UWBP_DefaultHPGauge_C_GetStunRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.UpdateContainerVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_DefaultHPGauge_C::UpdateContainerVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.UpdateContainerVisibility");

	UWBP_DefaultHPGauge_C_UpdateContainerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetStaminaRatio
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_DefaultHPGauge_C::GetStaminaRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetStaminaRatio");

	UWBP_DefaultHPGauge_C_GetStaminaRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetHPRatio
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_DefaultHPGauge_C::GetHPRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.GetHPRatio");

	UWBP_DefaultHPGauge_C_GetHPRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnDeath
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DefaultHPGauge_C::OnDeath(class AActor* From)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnDeath");

	UWBP_DefaultHPGauge_C_OnDeath_Params params;
	params.From = From;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnHPChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DefaultHPGauge_C::OnHPChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnHPChanged");

	UWBP_DefaultHPGauge_C_OnHPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DefaultHPGauge_C::Initialize(class AZenithCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Initialize");

	UWBP_DefaultHPGauge_C_Initialize_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Hide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DefaultHPGauge_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Hide");

	UWBP_DefaultHPGauge_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.RequestRemove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_DefaultHPGauge_C::RequestRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.RequestRemove");

	UWBP_DefaultHPGauge_C_RequestRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStaminaChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DefaultHPGauge_C::OnStaminaChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStaminaChanged");

	UWBP_DefaultHPGauge_C_OnStaminaChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnReceiveDamage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DefaultHPGauge_C::OnReceiveDamage(class AActor* From, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnReceiveDamage");

	UWBP_DefaultHPGauge_C_OnReceiveDamage_Params params;
	params.From = From;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStunChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DefaultHPGauge_C::OnStunChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStunChanged");

	UWBP_DefaultHPGauge_C_OnStunChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStaminaBreak
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DefaultHPGauge_C::OnStaminaBreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStaminaBreak");

	UWBP_DefaultHPGauge_C_OnStaminaBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStunBreak
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DefaultHPGauge_C::OnStunBreak()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnStunBreak");

	UWBP_DefaultHPGauge_C_OnStunBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DefaultHPGauge_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Construct");

	UWBP_DefaultHPGauge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DefaultHPGauge_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.Destruct");

	UWBP_DefaultHPGauge_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnDisplayEnemyFloatingGaugeChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DefaultHPGauge_C::OnDisplayEnemyFloatingGaugeChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.OnDisplayEnemyFloatingGaugeChanged");

	UWBP_DefaultHPGauge_C_OnDisplayEnemyFloatingGaugeChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.ExecuteUbergraph_WBP_DefaultHPGauge
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DefaultHPGauge_C::ExecuteUbergraph_WBP_DefaultHPGauge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DefaultHPGauge.WBP_DefaultHPGauge_C.ExecuteUbergraph_WBP_DefaultHPGauge");

	UWBP_DefaultHPGauge_C_ExecuteUbergraph_WBP_DefaultHPGauge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
