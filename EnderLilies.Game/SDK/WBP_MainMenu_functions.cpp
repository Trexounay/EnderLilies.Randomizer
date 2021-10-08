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
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.InstantiatePage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_MainMenu_PageBase_C*                    Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_C::InstantiatePage(int PageIndex, class UWBP_MainMenu_PageBase_C** Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.InstantiatePage");

	UWBP_MainMenu_C_InstantiatePage_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.IsPageCached
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_MainMenu_C::IsPageCached(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.IsPageCached");

	UWBP_MainMenu_C_IsPageCached_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.GetPageIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                CurrPageIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_C::GetPageIndex(int* CurrPageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GetPageIndex");

	UWBP_MainMenu_C_GetPageIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrPageIndex != nullptr)
		*CurrPageIndex = params.CurrPageIndex;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MainMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnKeyDown");

	UWBP_MainMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.StartSoundSnapshot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::StartSoundSnapshot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.StartSoundSnapshot");

	UWBP_MainMenu_C_StartSoundSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.StopSoundSnapshot
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::StopSoundSnapshot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.StopSoundSnapshot");

	UWBP_MainMenu_C_StopSoundSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MainMenu_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnPressCancel");

	UWBP_MainMenu_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnPressPrevPage
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MainMenu_C::OnPressPrevPage(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnPressPrevPage");

	UWBP_MainMenu_C_OnPressPrevPage_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnPressNextPage
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MainMenu_C::OnPressNextPage(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnPressNextPage");

	UWBP_MainMenu_C_OnPressNextPage_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MainMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnFocusReceived");

	UWBP_MainMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnFinish_066E292E42E788874C41348F8B0EB052
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::OnFinish_066E292E42E788874C41348F8B0EB052()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnFinish_066E292E42E788874C41348F8B0EB052");

	UWBP_MainMenu_C_OnFinish_066E292E42E788874C41348F8B0EB052_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnFinish_2071A4134BF576284BB5479C3AA2F471
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::OnFinish_2071A4134BF576284BB5479C3AA2F471()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnFinish_2071A4134BF576284BB5479C3AA2F471");

	UWBP_MainMenu_C_OnFinish_2071A4134BF576284BB5479C3AA2F471_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MainMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.Construct");

	UWBP_MainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ResumeGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::ResumeGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ResumeGame");

	UWBP_MainMenu_C_ResumeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ForceClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::ForceClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ForceClose");

	UWBP_MainMenu_C_ForceClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.GoToNextPage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::GoToNextPage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GoToNextPage");

	UWBP_MainMenu_C_GoToNextPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.GoToPrevPage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::GoToPrevPage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GoToPrevPage");

	UWBP_MainMenu_C_GoToPrevPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.GoToPage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_C::GoToPage(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.GoToPage");

	UWBP_MainMenu_C_GoToPage_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnCategoryClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_MainMenu_Category_C*                    Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_C::OnCategoryClicked(class UWBP_MainMenu_Category_C* Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnCategoryClicked");

	UWBP_MainMenu_C_OnCategoryClicked_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_C::ExecuteUbergraph_WBP_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu");

	UWBP_MainMenu_C_ExecuteUbergraph_WBP_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnClose__DelegateSignature");

	UWBP_MainMenu_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu.WBP_MainMenu_C.OnResumeGame__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_MainMenu_C::OnResumeGame__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu.WBP_MainMenu_C.OnResumeGame__DelegateSignature");

	UWBP_MainMenu_C_OnResumeGame__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
