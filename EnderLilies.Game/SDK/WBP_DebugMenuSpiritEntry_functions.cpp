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
//		Name   -> Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.Initalize
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         SpiritDataTableRowHandle                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_DebugMenuSpiritEntry_C::Initalize(const struct FDataTableRowHandle& SpiritDataTableRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.Initalize");

	UWBP_DebugMenuSpiritEntry_C_Initalize_Params params;
	params.SpiritDataTableRowHandle = SpiritDataTableRowHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenuSpiritEntry_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.OnKeyDown");

	UWBP_DebugMenuSpiritEntry_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.Execute
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuSpiritEntry_C::Execute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.Execute");

	UWBP_DebugMenuSpiritEntry_C_Execute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugMenuSpiritEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.PreConstruct");

	UWBP_DebugMenuSpiritEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugMenuSpiritEntry_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.RefreshDesign");

	UWBP_DebugMenuSpiritEntry_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.ExecuteUbergraph_WBP_DebugMenuSpiritEntry
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenuSpiritEntry_C::ExecuteUbergraph_WBP_DebugMenuSpiritEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.ExecuteUbergraph_WBP_DebugMenuSpiritEntry");

	UWBP_DebugMenuSpiritEntry_C_ExecuteUbergraph_WBP_DebugMenuSpiritEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.OnExecute__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenuSpiritEntry_C::OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.OnExecute__DelegateSignature");

	UWBP_DebugMenuSpiritEntry_C_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
