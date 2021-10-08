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
//		Name   -> Function WBP_BossRush_Time.WBP_BossRush_Time_C.IsBossRecordDataValid
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FBossRushRecordData                         BossRushRecordData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_BossRush_Time_C::IsBossRecordDataValid(const struct FBossRushRecordData& BossRushRecordData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Time.WBP_BossRush_Time_C.IsBossRecordDataValid");

	UWBP_BossRush_Time_C_IsBossRecordDataValid_Params params;
	params.BossRushRecordData = BossRushRecordData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Time.WBP_BossRush_Time_C.SetNewFlag
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShowNewFlag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BossRush_Time_C::SetNewFlag(bool ShowNewFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Time.WBP_BossRush_Time_C.SetNewFlag");

	UWBP_BossRush_Time_C_SetNewFlag_Params params;
	params.ShowNewFlag = ShowNewFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Time.WBP_BossRush_Time_C.SetTexts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBossRushRecordData                         RecordData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_BossRush_Time_C::SetTexts(const struct FBossRushRecordData& RecordData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Time.WBP_BossRush_Time_C.SetTexts");

	UWBP_BossRush_Time_C_SetTexts_Params params;
	params.RecordData = RecordData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Time.WBP_BossRush_Time_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_BossRush_Time_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Time.WBP_BossRush_Time_C.PreConstruct");

	UWBP_BossRush_Time_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Time.WBP_BossRush_Time_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BossRush_Time_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Time.WBP_BossRush_Time_C.Construct");

	UWBP_BossRush_Time_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Time.WBP_BossRush_Time_C.ExecuteUbergraph_WBP_BossRush_Time
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BossRush_Time_C::ExecuteUbergraph_WBP_BossRush_Time(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Time.WBP_BossRush_Time_C.ExecuteUbergraph_WBP_BossRush_Time");

	UWBP_BossRush_Time_C_ExecuteUbergraph_WBP_BossRush_Time_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
