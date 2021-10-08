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
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.GoToSideTab
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               NextTab                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RecollectionMenu_C::GoToSideTab(bool NextTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.GoToSideTab");

	UWBP_RecollectionMenu_C_GoToSideTab_Params params;
	params.NextTab = NextTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.SelectTab
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RecollectionMenu_C::SelectTab(int TabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.SelectTab");

	UWBP_RecollectionMenu_C_SelectTab_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.IsBossRushMenuVisible
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RecollectionMenu_C::IsBossRushMenuVisible(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.IsBossRushMenuVisible");

	UWBP_RecollectionMenu_C_IsBossRushMenuVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.IsBossMenuVisible
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RecollectionMenu_C::IsBossMenuVisible(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.IsBossMenuVisible");

	UWBP_RecollectionMenu_C_IsBossMenuVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.SetupMenuTabs
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RecollectionMenu_C::SetupMenuTabs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.SetupMenuTabs");

	UWBP_RecollectionMenu_C_SetupMenuTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressNextPage
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RecollectionMenu_C::OnPressNextPage(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressNextPage");

	UWBP_RecollectionMenu_C_OnPressNextPage_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressPrevPage
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RecollectionMenu_C::OnPressPrevPage(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressPrevPage");

	UWBP_RecollectionMenu_C_OnPressPrevPage_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RecollectionMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFocusReceived");

	UWBP_RecollectionMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RecollectionMenu_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressCancel");

	UWBP_RecollectionMenu_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_2071A4134BF576284BB5479CEB53F866
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RecollectionMenu_C::OnFinish_2071A4134BF576284BB5479CEB53F866()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_2071A4134BF576284BB5479CEB53F866");

	UWBP_RecollectionMenu_C_OnFinish_2071A4134BF576284BB5479CEB53F866_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_066E292E42E788874C41348F5D2F02F2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RecollectionMenu_C::OnFinish_066E292E42E788874C41348F5D2F02F2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_066E292E42E788874C41348F5D2F02F2");

	UWBP_RecollectionMenu_C_OnFinish_066E292E42E788874C41348F5D2F02F2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_2071A4134BF576284BB5479CEC8346D1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RecollectionMenu_C::OnFinish_2071A4134BF576284BB5479CEC8346D1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_2071A4134BF576284BB5479CEC8346D1");

	UWBP_RecollectionMenu_C_OnFinish_2071A4134BF576284BB5479CEC8346D1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_066E292E42E788874C41348F5AFFBC45
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RecollectionMenu_C::OnFinish_066E292E42E788874C41348F5AFFBC45()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_066E292E42E788874C41348F5AFFBC45");

	UWBP_RecollectionMenu_C_OnFinish_066E292E42E788874C41348F5AFFBC45_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RecollectionMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.Construct");

	UWBP_RecollectionMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.CloseMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RecollectionMenu_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.CloseMenu");

	UWBP_RecollectionMenu_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_0_OnRequestMapChange__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_RecollectionMenu_C::BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_0_OnRequestMapChange__DelegateSignature(const struct FDataTableRowHandle& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_0_OnRequestMapChange__DelegateSignature");

	UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_0_OnRequestMapChange__DelegateSignature_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFadeFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RecollectionMenu_C::OnFadeFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFadeFinished");

	UWBP_RecollectionMenu_C_OnFadeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnBossRushFadeFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RecollectionMenu_C::OnBossRushFadeFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnBossRushFadeFinished");

	UWBP_RecollectionMenu_C_OnBossRushFadeFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_1_OnRequestBossRush__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RecollectionMenu_C::BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_1_OnRequestBossRush__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_1_OnRequestBossRush__DelegateSignature");

	UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_1_OnRequestBossRush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossRush_C_2_K2Node_ComponentBoundEvent_3_OnLaunchBossRush__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RecollectionMenu_C::BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossRush_C_2_K2Node_ComponentBoundEvent_3_OnLaunchBossRush__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossRush_C_2_K2Node_ComponentBoundEvent_3_OnLaunchBossRush__DelegateSignature");

	UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossRush_C_2_K2Node_ComponentBoundEvent_3_OnLaunchBossRush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_BossRush_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RecollectionMenu_C::BndEvt__WBP_RecollectionMenu_Tab_BossRush_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_BossRush_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_Tab_BossRush_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_Bosses_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RecollectionMenu_C::BndEvt__WBP_RecollectionMenu_Tab_Bosses_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_Bosses_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_Tab_Bosses_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_Movies_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RecollectionMenu_C::BndEvt__WBP_RecollectionMenu_Tab_Movies_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_Movies_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_Tab_Movies_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.ExecuteUbergraph_WBP_RecollectionMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RecollectionMenu_C::ExecuteUbergraph_WBP_RecollectionMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.ExecuteUbergraph_WBP_RecollectionMenu");

	UWBP_RecollectionMenu_C_ExecuteUbergraph_WBP_RecollectionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnRequestMapChange__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_RecollectionMenu_C::OnRequestMapChange__DelegateSignature(const struct FDataTableRowHandle& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnRequestMapChange__DelegateSignature");

	UWBP_RecollectionMenu_C_OnRequestMapChange__DelegateSignature_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_RecollectionMenu_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnClose__DelegateSignature");

	UWBP_RecollectionMenu_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
