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
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Achievement_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.OnFocusReceived");

	UWBP_Achievement_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Achievement_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.OnPressCancel");

	UWBP_Achievement_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.AddAchievementEntry
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAchievementData                            AchievementData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Achievement_C::AddAchievementEntry(const struct FAchievementData& AchievementData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.AddAchievementEntry");

	UWBP_Achievement_C_AddAchievementEntry_Params params;
	params.AchievementData = AchievementData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.BuildPage
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Achievement_C::BuildPage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.BuildPage");

	UWBP_Achievement_C_BuildPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.OnFinish_066E292E42E788874C41348F3DEB2213
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Achievement_C::OnFinish_066E292E42E788874C41348F3DEB2213()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.OnFinish_066E292E42E788874C41348F3DEB2213");

	UWBP_Achievement_C_OnFinish_066E292E42E788874C41348F3DEB2213_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.OnFinish_2071A4134BF576284BB5479C8C476630
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Achievement_C::OnFinish_2071A4134BF576284BB5479C8C476630()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.OnFinish_2071A4134BF576284BB5479C8C476630");

	UWBP_Achievement_C_OnFinish_2071A4134BF576284BB5479C8C476630_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.OnFinish_066E292E42E788874C41348FEDC27B56
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Achievement_C::OnFinish_066E292E42E788874C41348FEDC27B56()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.OnFinish_066E292E42E788874C41348FEDC27B56");

	UWBP_Achievement_C_OnFinish_066E292E42E788874C41348FEDC27B56_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.OnFinish_2071A4134BF576284BB5479C5C6E3F75
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Achievement_C::OnFinish_2071A4134BF576284BB5479C5C6E3F75()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.OnFinish_2071A4134BF576284BB5479C5C6E3F75");

	UWBP_Achievement_C_OnFinish_2071A4134BF576284BB5479C5C6E3F75_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Achievement_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.Construct");

	UWBP_Achievement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.Close
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Achievement_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.Close");

	UWBP_Achievement_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Achievement_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.OnRemovedFromFocusPath");

	UWBP_Achievement_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.ExecuteUbergraph_WBP_Achievement
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Achievement_C::ExecuteUbergraph_WBP_Achievement(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.ExecuteUbergraph_WBP_Achievement");

	UWBP_Achievement_C_ExecuteUbergraph_WBP_Achievement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Achievement.WBP_Achievement_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Achievement_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Achievement.WBP_Achievement_C.OnClose__DelegateSignature");

	UWBP_Achievement_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
