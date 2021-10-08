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
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.RefreshHPGaugeWidth
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_HPGauge_C::RefreshHPGaugeWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.RefreshHPGaugeWidth");

	UWBP_HPGauge_C_RefreshHPGaugeWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.SetDelayedGaugeVisible
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
void UWBP_HPGauge_C::SetDelayedGaugeVisible(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.SetDelayedGaugeVisible");

	UWBP_HPGauge_C_SetDelayedGaugeVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.Get_HPGauge_Percent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_HPGauge_C::Get_HPGauge_Percent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.Get_HPGauge_Percent");

	UWBP_HPGauge_C_Get_HPGauge_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.OnHPChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HPGauge_C::OnHPChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.OnHPChanged");

	UWBP_HPGauge_C_OnHPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HPGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.Tick");

	UWBP_HPGauge_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.OnMaxHPChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_HPGauge_C::OnMaxHPChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.OnMaxHPChanged");

	UWBP_HPGauge_C_OnMaxHPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.OnReceivedDamage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HPGauge_C::OnReceivedDamage(class AActor* From, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.OnReceivedDamage");

	UWBP_HPGauge_C_OnReceivedDamage_Params params;
	params.From = From;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.OnReceiveHeal
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HPGauge_C::OnReceiveHeal(class AActor* From, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.OnReceiveHeal");

	UWBP_HPGauge_C_OnReceiveHeal_Params params;
	params.From = From;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HPGauge_C::Initialize(class AZenithCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.Initialize");

	UWBP_HPGauge_C_Initialize_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_HPGauge_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.PreConstruct");

	UWBP_HPGauge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_HPGauge.WBP_HPGauge_C.ExecuteUbergraph_WBP_HPGauge
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_HPGauge_C::ExecuteUbergraph_WBP_HPGauge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_HPGauge.WBP_HPGauge_C.ExecuteUbergraph_WBP_HPGauge");

	UWBP_HPGauge_C_ExecuteUbergraph_WBP_HPGauge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
