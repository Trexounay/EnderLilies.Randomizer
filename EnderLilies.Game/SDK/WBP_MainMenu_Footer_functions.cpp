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
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.AddEntry
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FFRichTextInputPair                         RichTextData                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               Temporary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MainMenu_Footer_C::AddEntry(const struct FFRichTextInputPair& RichTextData, bool Temporary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.AddEntry");

	UWBP_MainMenu_Footer_C_AddEntry_Params params;
	params.RichTextData = RichTextData;
	params.Temporary = Temporary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ClearEntries
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_Footer_C::ClearEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ClearEntries");

	UWBP_MainMenu_Footer_C_ClearEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.AddEntries
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FFRichTextInputPair>                 RichTextDataArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               Temporary                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MainMenu_Footer_C::AddEntries(TArray<struct FFRichTextInputPair> RichTextDataArray, bool Temporary)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.AddEntries");

	UWBP_MainMenu_Footer_C_AddEntries_Params params;
	params.RichTextDataArray = RichTextDataArray;
	params.Temporary = Temporary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.InitializeWithEntries
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FFRichTextInputPair>                 RichTextDataArray                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_MainMenu_Footer_C::InitializeWithEntries(TArray<struct FFRichTextInputPair> RichTextDataArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.InitializeWithEntries");

	UWBP_MainMenu_Footer_C_InitializeWithEntries_Params params;
	params.RichTextDataArray = RichTextDataArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MainMenu_Footer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.Construct");

	UWBP_MainMenu_Footer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MainMenu_Footer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.PreConstruct");

	UWBP_MainMenu_Footer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ClearTemporaryEntries
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_Footer_C::ClearTemporaryEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ClearTemporaryEntries");

	UWBP_MainMenu_Footer_C_ClearTemporaryEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.InitializeWithDefaultEntries
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_Footer_C::InitializeWithDefaultEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.InitializeWithDefaultEntries");

	UWBP_MainMenu_Footer_C_InitializeWithDefaultEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ExecuteUbergraph_WBP_MainMenu_Footer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_Footer_C::ExecuteUbergraph_WBP_MainMenu_Footer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ExecuteUbergraph_WBP_MainMenu_Footer");

	UWBP_MainMenu_Footer_C_ExecuteUbergraph_WBP_MainMenu_Footer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
