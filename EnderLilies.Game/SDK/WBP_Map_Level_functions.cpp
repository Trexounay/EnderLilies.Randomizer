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
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.RefreshCompletion
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Map_Level_C::RefreshCompletion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.RefreshCompletion");

	UWBP_Map_Level_C_RefreshCompletion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.SetEnable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Map_Level_C::SetEnable(bool Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.SetEnable");

	UWBP_Map_Level_C_SetEnable_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.ContainsRestPoint
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ContainsRestPoint                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Map_Level_C::ContainsRestPoint(bool* ContainsRestPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.ContainsRestPoint");

	UWBP_Map_Level_C_ContainsRestPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContainsRestPoint != nullptr)
		*ContainsRestPoint = params.ContainsRestPoint;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.GetIsCurrentMap
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               IsCurrentMap                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Map_Level_C::GetIsCurrentMap(bool* IsCurrentMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.GetIsCurrentMap");

	UWBP_Map_Level_C_GetIsCurrentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsCurrentMap != nullptr)
		*IsCurrentMap = params.IsCurrentMap;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.GetGameMapID
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FName                                       GameMapID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_Level_C::GetGameMapID(struct FName* GameMapID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.GetGameMapID");

	UWBP_Map_Level_C_GetGameMapID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameMapID != nullptr)
		*GameMapID = params.GameMapID;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Map_Level_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.PreConstruct");

	UWBP_Map_Level_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Map_Level_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.Construct");

	UWBP_Map_Level_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.RefreshCurrentMap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_Level_C::RefreshCurrentMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.RefreshCurrentMap");

	UWBP_Map_Level_C_RefreshCurrentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.SetHighlightEnabled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Map_Level_C::SetHighlightEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.SetHighlightEnabled");

	UWBP_Map_Level_C_SetHighlightEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Level.WBP_Map_Level_C.ExecuteUbergraph_WBP_Map_Level
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_Level_C::ExecuteUbergraph_WBP_Map_Level(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Level.WBP_Map_Level_C.ExecuteUbergraph_WBP_Map_Level");

	UWBP_Map_Level_C_ExecuteUbergraph_WBP_Map_Level_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
