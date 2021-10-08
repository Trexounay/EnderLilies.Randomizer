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
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.SequenceEvent__ENTRYPOINTWBP_SummonItem_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::SequenceEvent__ENTRYPOINTWBP_SummonItem_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.SequenceEvent__ENTRYPOINTWBP_SummonItem_1");

	UWBP_SummonItem_C_SequenceEvent__ENTRYPOINTWBP_SummonItem_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.TickSPAttackIdle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SummonItem_C::TickSPAttackIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.TickSPAttackIdle");

	UWBP_SummonItem_C_TickSPAttackIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.TickShadowBG
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SummonItem_C::TickShadowBG()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.TickShadowBG");

	UWBP_SummonItem_C_TickShadowBG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.RefreshInputDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SummonItem_C::RefreshInputDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.RefreshInputDisplay");

	UWBP_SummonItem_C_RefreshInputDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.GetCastLimitType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Zenith_ECommandSummonLimitType                     CastLimitType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonItem_C::GetCastLimitType(Zenith_ECommandSummonLimitType* CastLimitType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.GetCastLimitType");

	UWBP_SummonItem_C_GetCastLimitType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CastLimitType != nullptr)
		*CastLimitType = params.CastLimitType;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.HasReachedCastLimit
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReachedCastLimit                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SummonItem_C::HasReachedCastLimit(bool* ReachedCastLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.HasReachedCastLimit");

	UWBP_SummonItem_C_HasReachedCastLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReachedCastLimit != nullptr)
		*ReachedCastLimit = params.ReachedCastLimit;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.GetRemainingCastValue
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                CastValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonItem_C::GetRemainingCastValue(int* CastValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.GetRemainingCastValue");

	UWBP_SummonItem_C_GetRemainingCastValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CastValue != nullptr)
		*CastValue = params.CastValue;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.GetVisibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UWBP_SummonItem_C::GetVisibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.GetVisibility_1");

	UWBP_SummonItem_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.GetbIsEnabled_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_SummonItem_C::GetbIsEnabled_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.GetbIsEnabled_1");

	UWBP_SummonItem_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.GetPercent_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_SummonItem_C::GetPercent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.GetPercent_1");

	UWBP_SummonItem_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.SetAvatarImages
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SummonItem_C::SetAvatarImages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.SetAvatarImages");

	UWBP_SummonItem_C_SetAvatarImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.CacheCommandAction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_SummonItem_C::CacheCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.CacheCommandAction");

	UWBP_SummonItem_C_CacheCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.RefreshCastCount
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::RefreshCastCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.RefreshCastCount");

	UWBP_SummonItem_C_RefreshCastCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.OnActionEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonItem_C::OnActionEnd(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.OnActionEnd");

	UWBP_SummonItem_C_OnActionEnd_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.OnActionRestored
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::OnActionRestored()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.OnActionRestored");

	UWBP_SummonItem_C_OnActionRestored_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.OnCooldownFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::OnCooldownFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.OnCooldownFinished");

	UWBP_SummonItem_C_OnCooldownFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.Tick");

	UWBP_SummonItem_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.SetGaugePercentage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonItem_C::SetGaugePercentage(float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.SetGaugePercentage");

	UWBP_SummonItem_C_SetGaugePercentage_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.OnReachedCastLimit
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::OnReachedCastLimit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.OnReachedCastLimit");

	UWBP_SummonItem_C_OnReachedCastLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.OnMovementModeChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ACharacter*                                  Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonItem_C::OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<Engine_EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.OnMovementModeChanged");

	UWBP_SummonItem_C_OnMovementModeChanged_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.OnActionStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::OnActionStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.OnActionStart");

	UWBP_SummonItem_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.OnCastLimitChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::OnCastLimitChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.OnCastLimitChanged");

	UWBP_SummonItem_C_OnCastLimitChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_SummonItem_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.Construct");

	UWBP_SummonItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SummonItem_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.PreConstruct");

	UWBP_SummonItem_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.OnMPChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::OnMPChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.OnMPChanged");

	UWBP_SummonItem_C_OnMPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.SPattackIdle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonItem_C::SPattackIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.SPattackIdle");

	UWBP_SummonItem_C_SPattackIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonItem.WBP_SummonItem_C.ExecuteUbergraph_WBP_SummonItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonItem_C::ExecuteUbergraph_WBP_SummonItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonItem.WBP_SummonItem_C.ExecuteUbergraph_WBP_SummonItem");

	UWBP_SummonItem_C_ExecuteUbergraph_WBP_SummonItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
