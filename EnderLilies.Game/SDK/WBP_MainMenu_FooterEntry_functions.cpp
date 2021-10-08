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
//		Name   -> Function WBP_MainMenu_FooterEntry.WBP_MainMenu_FooterEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MainMenu_FooterEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_FooterEntry.WBP_MainMenu_FooterEntry_C.Construct");

	UWBP_MainMenu_FooterEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_FooterEntry.WBP_MainMenu_FooterEntry_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MainMenu_FooterEntry_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_FooterEntry.WBP_MainMenu_FooterEntry_C.PreConstruct");

	UWBP_MainMenu_FooterEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_FooterEntry.WBP_MainMenu_FooterEntry_C.ExecuteUbergraph_WBP_MainMenu_FooterEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_FooterEntry_C::ExecuteUbergraph_WBP_MainMenu_FooterEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_FooterEntry.WBP_MainMenu_FooterEntry_C.ExecuteUbergraph_WBP_MainMenu_FooterEntry");

	UWBP_MainMenu_FooterEntry_C_ExecuteUbergraph_WBP_MainMenu_FooterEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
