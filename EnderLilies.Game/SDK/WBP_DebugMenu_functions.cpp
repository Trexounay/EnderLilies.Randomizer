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
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.SetNewGamePlusText
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_DebugMenu_C::SetNewGamePlusText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.SetNewGamePlusText");

	UWBP_DebugMenu_C_SetNewGamePlusText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.SetMapDifficultyText
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_DebugMenu_C::SetMapDifficultyText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.SetMapDifficultyText");

	UWBP_DebugMenu_C_SetMapDifficultyText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.Get_MapNameText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_DebugMenu_C::Get_MapNameText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.Get_MapNameText");

	UWBP_DebugMenu_C_Get_MapNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.Get_RHIText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_DebugMenu_C::Get_RHIText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.Get_RHIText");

	UWBP_DebugMenu_C_Get_RHIText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.Get_BuildText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_DebugMenu_C::Get_BuildText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.Get_BuildText");

	UWBP_DebugMenu_C_Get_BuildText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.Get_VersionText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UWBP_DebugMenu_C::Get_VersionText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.Get_VersionText");

	UWBP_DebugMenu_C_Get_VersionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.OnFocusReceived");

	UWBP_DebugMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.ToggleOpacity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_DebugMenu_C::ToggleOpacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.ToggleOpacity");

	UWBP_DebugMenu_C_ToggleOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.OnKeyDown");

	UWBP_DebugMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.OnOpenMenu
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_DebugMenu_C::OnOpenMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.OnOpenMenu");

	UWBP_DebugMenu_C_OnOpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.OnCloseMenu
//		Flags  -> (Event, Protected, BlueprintEvent)
void UWBP_DebugMenu_C::OnCloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.OnCloseMenu");

	UWBP_DebugMenu_C_OnCloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.SwitchMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               GoingRight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugMenu_C::SwitchMenu(bool GoingRight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.SwitchMenu");

	UWBP_DebugMenu_C_SwitchMenu_Params params;
	params.GoingRight = GoingRight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.RefreshPageText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugMenu_C::RefreshPageText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.RefreshPageText");

	UWBP_DebugMenu_C_RefreshPageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DebugMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.Construct");

	UWBP_DebugMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugMenu.WBP_DebugMenu_C.ExecuteUbergraph_WBP_DebugMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugMenu_C::ExecuteUbergraph_WBP_DebugMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugMenu.WBP_DebugMenu_C.ExecuteUbergraph_WBP_DebugMenu");

	UWBP_DebugMenu_C_ExecuteUbergraph_WBP_DebugMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
