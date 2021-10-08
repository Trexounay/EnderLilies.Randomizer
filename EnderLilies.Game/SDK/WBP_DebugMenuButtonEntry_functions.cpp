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
//		Name   -> Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenuButtonEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.OnKeyDown");

	UWBP_DebugMenuButtonEntry_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.Execute
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuButtonEntry_C::Execute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.Execute");

	UWBP_DebugMenuButtonEntry_C_Execute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugMenuButtonEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.PreConstruct");

	UWBP_DebugMenuButtonEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenuButtonEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.Tick");

	UWBP_DebugMenuButtonEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.ExecuteUbergraph_WBP_DebugMenuButtonEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenuButtonEntry_C::ExecuteUbergraph_WBP_DebugMenuButtonEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.ExecuteUbergraph_WBP_DebugMenuButtonEntry");

	UWBP_DebugMenuButtonEntry_C_ExecuteUbergraph_WBP_DebugMenuButtonEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.OnExecute__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuButtonEntry_C::OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.OnExecute__DelegateSignature");

	UWBP_DebugMenuButtonEntry_C_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
