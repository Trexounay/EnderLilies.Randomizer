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
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RestMenu_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnPreviewKeyDown");

	UWBP_RestMenu_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.ToggleUI
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RestMenu_C::ToggleUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.ToggleUI");

	UWBP_RestMenu_C_ToggleUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.RefreshButtonStates
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RestMenu_C::RefreshButtonStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.RefreshButtonStates");

	UWBP_RestMenu_C_RefreshButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.RefreshNavigationRules
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RestMenu_C::RefreshNavigationRules()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.RefreshNavigationRules");

	UWBP_RestMenu_C_RefreshNavigationRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.SetStrengthenButtonActive
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenu_C::SetStrengthenButtonActive(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.SetStrengthenButtonActive");

	UWBP_RestMenu_C_SetStrengthenButtonActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.SetPassiveButtonActive
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenu_C::SetPassiveButtonActive(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.SetPassiveButtonActive");

	UWBP_RestMenu_C_SetPassiveButtonActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.SetEquipButtonActive
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenu_C::SetEquipButtonActive(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.SetEquipButtonActive");

	UWBP_RestMenu_C_SetEquipButtonActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.SetActiveFastTravelWidget
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenu_C::SetActiveFastTravelWidget(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.SetActiveFastTravelWidget");

	UWBP_RestMenu_C_SetActiveFastTravelWidget_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableStrengthen
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RestMenu_C::CheckAvailableStrengthen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableStrengthen");

	UWBP_RestMenu_C_CheckAvailableStrengthen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailablePassive
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RestMenu_C::CheckAvailablePassive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailablePassive");

	UWBP_RestMenu_C_CheckAvailablePassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableEquip
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_RestMenu_C::CheckAvailableEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableEquip");

	UWBP_RestMenu_C_CheckAvailableEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableFastTravel
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               IsAvaliableFastTravel                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenu_C::CheckAvailableFastTravel(bool* IsAvaliableFastTravel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableFastTravel");

	UWBP_RestMenu_C_CheckAvailableFastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsAvaliableFastTravel != nullptr)
		*IsAvaliableFastTravel = params.IsAvaliableFastTravel;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.SetChallengeIconVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RestMenu_C::SetChallengeIconVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.SetChallengeIconVisibility");

	UWBP_RestMenu_C_SetChallengeIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.SetRecollectionNewIconVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RestMenu_C::SetRecollectionNewIconVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.SetRecollectionNewIconVisibility");

	UWBP_RestMenu_C_SetRecollectionNewIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.SetPassiveNewIconVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RestMenu_C::SetPassiveNewIconVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.SetPassiveNewIconVisibility");

	UWBP_RestMenu_C_SetPassiveNewIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.SetSpiritNewIconVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RestMenu_C::SetSpiritNewIconVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.SetSpiritNewIconVisibility");

	UWBP_RestMenu_C_SetSpiritNewIconVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.RefreshRestPointName
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_RestMenu_C::RefreshRestPointName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.RefreshRestPointName");

	UWBP_RestMenu_C_RefreshRestPointName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RestMenu_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnPressCancel");

	UWBP_RestMenu_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnPressContext
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RestMenu_C::OnPressContext(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnPressContext");

	UWBP_RestMenu_C_OnPressContext_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_RestMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFocusReceived");

	UWBP_RestMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F18657F70
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F18657F70()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F18657F70");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F18657F70_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CA9C93B53
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CA9C93B53()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CA9C93B53");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CA9C93B53_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FFFB8C7B3
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348FFFB8C7B3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FFFB8C7B3");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348FFFB8C7B3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C4E148390
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479C4E148390()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C4E148390");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C4E148390_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F17F69077
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F17F69077()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F17F69077");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F17F69077_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CA65AD454
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CA65AD454()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CA65AD454");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CA65AD454_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F3F09A060
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F3F09A060()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F3F09A060");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F3F09A060_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C8EA5E443
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479C8EA5E443()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C8EA5E443");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C8EA5E443_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F747ABB69
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F747ABB69()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F747ABB69");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F747ABB69_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CC5D6FF4A
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CC5D6FF4A()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CC5D6FF4A");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CC5D6FF4A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F7D6DF003
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F7D6DF003()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F7D6DF003");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F7D6DF003_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CCCC1B420
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CCCC1B420()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CCCC1B420");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CCCC1B420_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FAA067F54
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348FAA067F54()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FAA067F54");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348FAA067F54_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C1BAA3B77
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479C1BAA3B77()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C1BAA3B77");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C1BAA3B77_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F42B6A853
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F42B6A853()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F42B6A853");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F42B6A853_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CF31AEC70
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CF31AEC70()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CF31AEC70");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CF31AEC70_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F01D7E1E3
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F01D7E1E3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F01D7E1E3");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F01D7E1E3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CB07BA5C0
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CB07BA5C0()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CB07BA5C0");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CB07BA5C0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CC8EBDD08
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CC8EBDD08()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CC8EBDD08");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CC8EBDD08_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F52F9E87B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F52F9E87B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F52F9E87B");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F52F9E87B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CE355AC58
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CE355AC58()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CE355AC58");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CE355AC58_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C695AEDBD
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479C695AEDBD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C695AEDBD");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C695AEDBD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F7947992B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F7947992B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F7947992B");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F7947992B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F65BAF5C7
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F65BAF5C7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F65BAF5C7");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F65BAF5C7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CD416B1E4
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479CD416B1E4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CD416B1E4");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CD416B1E4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FD8F6A99E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348FD8F6A99E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FD8F6A99E");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348FD8F6A99E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F9C40240B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_066E292E42E788874C41348F9C40240B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F9C40240B");

	UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F9C40240B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C2DEC6028
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_2071A4134BF576284BB5479C2DEC6028()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C2DEC6028");

	UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C2DEC6028_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_B201F08648361695E1BF52BB7F603DFF
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnFinish_B201F08648361695E1BF52BB7F603DFF()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_B201F08648361695E1BF52BB7F603DFF");

	UWBP_RestMenu_C_OnFinish_B201F08648361695E1BF52BB7F603DFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_RestMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.Construct");

	UWBP_RestMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.CloseMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               PlayAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenu_C::CloseMenu(bool PlayAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.CloseMenu");

	UWBP_RestMenu_C_CloseMenu_Params params;
	params.PlayAnimation = PlayAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RestMenu_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnAnimationFinished");

	UWBP_RestMenu_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnCloseStrengthen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnCloseStrengthen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnCloseStrengthen");

	UWBP_RestMenu_C_OnCloseStrengthen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnCloseEquipment
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnCloseEquipment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnCloseEquipment");

	UWBP_RestMenu_C_OnCloseEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnCloseMap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnCloseMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnCloseMap");

	UWBP_RestMenu_C_OnCloseMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnRequestFastTravel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         GameMapHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_RestMenu_C::OnRequestFastTravel(const struct FDataTableRowHandle& GameMapHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnRequestFastTravel");

	UWBP_RestMenu_C_OnRequestFastTravel_Params params;
	params.GameMapHandle = GameMapHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::BndEvt__RestButton_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_RestMenu_C_BndEvt__RestButton_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Equipment_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::BndEvt__RestButton_Equipment_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Equipment_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UWBP_RestMenu_C_BndEvt__RestButton_Equipment_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Strengthen_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::BndEvt__RestButton_Strengthen_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Strengthen_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UWBP_RestMenu_C_BndEvt__RestButton_Strengthen_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::BndEvt__RestButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWBP_RestMenu_C_BndEvt__RestButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.RemoveMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::RemoveMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.RemoveMenu");

	UWBP_RestMenu_C_RemoveMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Save_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::BndEvt__RestButton_Save_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Save_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_RestMenu_C_BndEvt__RestButton_Save_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Passive_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::BndEvt__RestButton_Passive_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Passive_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWBP_RestMenu_C_BndEvt__RestButton_Passive_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnClosePassive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnClosePassive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnClosePassive");

	UWBP_RestMenu_C_OnClosePassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnSaveFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_RestMenu_C::OnSaveFinished(bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnSaveFinished");

	UWBP_RestMenu_C_OnSaveFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnClickedOK
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnClickedOK()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnClickedOK");

	UWBP_RestMenu_C_OnClickedOK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.CheckTutorials
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::CheckTutorials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.CheckTutorials");

	UWBP_RestMenu_C_CheckTutorials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.WidgetAnimationEvt_HideUI_K2Node_WidgetAnimationEvent_2
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::WidgetAnimationEvt_HideUI_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.WidgetAnimationEvt_HideUI_K2Node_WidgetAnimationEvent_2");

	UWBP_RestMenu_C_WidgetAnimationEvt_HideUI_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__WBP_RestMenu_RestButton_Recollection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::BndEvt__WBP_RestMenu_RestButton_Recollection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__WBP_RestMenu_RestButton_Recollection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_RestMenu_C_BndEvt__WBP_RestMenu_RestButton_Recollection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnCloseRecollection
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnCloseRecollection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnCloseRecollection");

	UWBP_RestMenu_C_OnCloseRecollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__WBP_RestMenu_RestButton_Challenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_RestMenu_C::BndEvt__WBP_RestMenu_RestButton_Challenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__WBP_RestMenu_RestButton_Challenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWBP_RestMenu_C_BndEvt__WBP_RestMenu_RestButton_Challenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnCloseChallenge
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_RestMenu_C::OnCloseChallenge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnCloseChallenge");

	UWBP_RestMenu_C_OnCloseChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnRequestMapChange
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_RestMenu_C::OnRequestMapChange(const struct FDataTableRowHandle& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnRequestMapChange");

	UWBP_RestMenu_C_OnRequestMapChange_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_RestMenu_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.OnRemovedFromFocusPath");

	UWBP_RestMenu_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_RestMenu.WBP_RestMenu_C.ExecuteUbergraph_WBP_RestMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_RestMenu_C::ExecuteUbergraph_WBP_RestMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_RestMenu.WBP_RestMenu_C.ExecuteUbergraph_WBP_RestMenu");

	UWBP_RestMenu_C_ExecuteUbergraph_WBP_RestMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
