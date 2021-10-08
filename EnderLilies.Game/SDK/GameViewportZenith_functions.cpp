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
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.OnControllerConnected
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                ControllerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameViewportZenith_C::OnControllerConnected(int ControllerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.OnControllerConnected");

	UGameViewportZenith_C_OnControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.OnControllerDisconnected
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                ControllerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameViewportZenith_C::OnControllerDisconnected(int ControllerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.OnControllerDisconnected");

	UGameViewportZenith_C_OnControllerDisconnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.OnKeyDownBP
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   InKeyEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGameViewportZenith_C::OnKeyDownBP(const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.OnKeyDownBP");

	UGameViewportZenith_C_OnKeyDownBP_Params params;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.OnMouseMoveBP
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGameViewportZenith_C::OnMouseMoveBP(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.OnMouseMoveBP");

	UGameViewportZenith_C_OnMouseMoveBP_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.OnMouseDownBP
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UGameViewportZenith_C::OnMouseDownBP(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.OnMouseDownBP");

	UGameViewportZenith_C_OnMouseDownBP_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.OnReceivedFocus
//		Flags  -> (Event, Protected, BlueprintEvent)
void UGameViewportZenith_C::OnReceivedFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.OnReceivedFocus");

	UGameViewportZenith_C_OnReceivedFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.OnApplicationDeactivated
//		Flags  -> (Event, Protected, BlueprintEvent)
void UGameViewportZenith_C::OnApplicationDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.OnApplicationDeactivated");

	UGameViewportZenith_C_OnApplicationDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.OnApplicationReactivated
//		Flags  -> (Event, Protected, BlueprintEvent)
void UGameViewportZenith_C::OnApplicationReactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.OnApplicationReactivated");

	UGameViewportZenith_C_OnApplicationReactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function GameViewportZenith.GameViewportZenith_C.ExecuteUbergraph_GameViewportZenith
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameViewportZenith_C::ExecuteUbergraph_GameViewportZenith(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameViewportZenith.GameViewportZenith_C.ExecuteUbergraph_GameViewportZenith");

	UGameViewportZenith_C_ExecuteUbergraph_GameViewportZenith_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
