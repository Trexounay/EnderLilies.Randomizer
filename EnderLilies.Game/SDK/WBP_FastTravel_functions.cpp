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
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.SetupWrapNavigationRules
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_FastTravel_C::SetupWrapNavigationRules()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.SetupWrapNavigationRules");

	UWBP_FastTravel_C_SetupWrapNavigationRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnPressContext
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_FastTravel_C::OnPressContext(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnPressContext");

	UWBP_FastTravel_C_OnPressContext_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnPressPrevPage
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_FastTravel_C::OnPressPrevPage(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnPressPrevPage");

	UWBP_FastTravel_C_OnPressPrevPage_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnPressNextPage
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_FastTravel_C::OnPressNextPage(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnPressNextPage");

	UWBP_FastTravel_C_OnPressNextPage_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.CreateMapItemList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_FastTravel_C::CreateMapItemList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.CreateMapItemList");

	UWBP_FastTravel_C_CreateMapItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_FastTravel_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnFocusReceived");

	UWBP_FastTravel_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_FastTravel_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnPressCancel");

	UWBP_FastTravel_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_066E292E42E788874C41348FD992F285
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_FastTravel_C::OnFinish_066E292E42E788874C41348FD992F285()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_066E292E42E788874C41348FD992F285");

	UWBP_FastTravel_C_OnFinish_066E292E42E788874C41348FD992F285_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_2071A4134BF576284BB5479C683EB6A6
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_FastTravel_C::OnFinish_2071A4134BF576284BB5479C683EB6A6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_2071A4134BF576284BB5479C683EB6A6");

	UWBP_FastTravel_C_OnFinish_2071A4134BF576284BB5479C683EB6A6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_066E292E42E788874C41348FC5F08AB2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_FastTravel_C::OnFinish_066E292E42E788874C41348FC5F08AB2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_066E292E42E788874C41348FC5F08AB2");

	UWBP_FastTravel_C_OnFinish_066E292E42E788874C41348FC5F08AB2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_2071A4134BF576284BB5479C745CCE91
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_FastTravel_C::OnFinish_2071A4134BF576284BB5479C745CCE91()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_2071A4134BF576284BB5479C745CCE91");

	UWBP_FastTravel_C_OnFinish_2071A4134BF576284BB5479C745CCE91_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_FastTravel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.Construct");

	UWBP_FastTravel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.CloseMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_FastTravel_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.CloseMenu");

	UWBP_FastTravel_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnFastTravelButtonConfirmed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_FastTravel_Button_C*                    FastTravelButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FastTravel_C::OnFastTravelButtonConfirmed(class UWBP_FastTravel_Button_C* FastTravelButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnFastTravelButtonConfirmed");

	UWBP_FastTravel_C_OnFastTravelButtonConfirmed_Params params;
	params.FastTravelButton = FastTravelButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnFastTravelButtonFocused
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_FastTravel_Button_C*                    FastTravelButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FastTravel_C::OnFastTravelButtonFocused(class UWBP_FastTravel_Button_C* FastTravelButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnFastTravelButtonFocused");

	UWBP_FastTravel_C_OnFastTravelButtonFocused_Params params;
	params.FastTravelButton = FastTravelButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_FastTravel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.PreConstruct");

	UWBP_FastTravel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.ExecuteUbergraph_WBP_FastTravel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FastTravel_C::ExecuteUbergraph_WBP_FastTravel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.ExecuteUbergraph_WBP_FastTravel");

	UWBP_FastTravel_C_ExecuteUbergraph_WBP_FastTravel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnRequestFastTravel__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         GameMapHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_FastTravel_C::OnRequestFastTravel__DelegateSignature(const struct FDataTableRowHandle& GameMapHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnRequestFastTravel__DelegateSignature");

	UWBP_FastTravel_C_OnRequestFastTravel__DelegateSignature_Params params;
	params.GameMapHandle = GameMapHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FastTravel.WBP_FastTravel_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_FastTravel_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FastTravel.WBP_FastTravel_C.OnClose__DelegateSignature");

	UWBP_FastTravel_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
