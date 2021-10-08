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
//		Name   -> Function WBP_Experience.WBP_Experience_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UParameterPlayerComponent*                   ParameterComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Experience_C::Initialize(class UParameterPlayerComponent* ParameterComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Experience.WBP_Experience_C.Initialize");

	UWBP_Experience_C_Initialize_Params params;
	params.ParameterComponent = ParameterComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Experience.WBP_Experience_C.RefreshExpPoints
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Experience_C::RefreshExpPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Experience.WBP_Experience_C.RefreshExpPoints");

	UWBP_Experience_C_RefreshExpPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Experience.WBP_Experience_C.RefreshAll
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Experience_C::RefreshAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Experience.WBP_Experience_C.RefreshAll");

	UWBP_Experience_C_RefreshAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Experience.WBP_Experience_C.RefreshLevel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Experience_C::RefreshLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Experience.WBP_Experience_C.RefreshLevel");

	UWBP_Experience_C_RefreshLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Experience.WBP_Experience_C.OnAddExpPoint
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Experience_C::OnAddExpPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Experience.WBP_Experience_C.OnAddExpPoint");

	UWBP_Experience_C_OnAddExpPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Experience.WBP_Experience_C.OnLevelUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ExecuteVisuals                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Experience_C::OnLevelUp(bool ExecuteVisuals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Experience.WBP_Experience_C.OnLevelUp");

	UWBP_Experience_C_OnLevelUp_Params params;
	params.ExecuteVisuals = ExecuteVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Experience.WBP_Experience_C.ExecuteUbergraph_WBP_Experience
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Experience_C::ExecuteUbergraph_WBP_Experience(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Experience.WBP_Experience_C.ExecuteUbergraph_WBP_Experience");

	UWBP_Experience_C_ExecuteUbergraph_WBP_Experience_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
