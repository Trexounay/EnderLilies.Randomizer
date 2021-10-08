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
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.AllowSizeChange
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               HasMapData                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Map_Autocentered_C::AllowSizeChange(bool* HasMapData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.AllowSizeChange");

	UWBP_Map_Autocentered_C_AllowSizeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasMapData != nullptr)
		*HasMapData = params.HasMapData;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.SetSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   NewSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_Autocentered_C::SetSize(const struct FVector2D& NewSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.SetSize");

	UWBP_Map_Autocentered_C_SetSize_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.ToggleSize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Map_Autocentered_C::ToggleSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.ToggleSize");

	UWBP_Map_Autocentered_C_ToggleSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.RequestRender
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_Map_Autocentered_C::RequestRender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.RequestRender");

	UWBP_Map_Autocentered_C_RequestRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnFinish_D4E38B4E43C149E49A4E4D93E7C809D8
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_Autocentered_C::OnFinish_D4E38B4E43C149E49A4E4D93E7C809D8()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnFinish_D4E38B4E43C149E49A4E4D93E7C809D8");

	UWBP_Map_Autocentered_C_OnFinish_D4E38B4E43C149E49A4E4D93E7C809D8_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnFinish_C7FB21BE4A6F8FF4990BD59254EF849B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_Autocentered_C::OnFinish_C7FB21BE4A6F8FF4990BD59254EF849B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnFinish_C7FB21BE4A6F8FF4990BD59254EF849B");

	UWBP_Map_Autocentered_C_OnFinish_C7FB21BE4A6F8FF4990BD59254EF849B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Map_Autocentered_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.Construct");

	UWBP_Map_Autocentered_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnGameMapSwitch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_Autocentered_C::OnGameMapSwitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnGameMapSwitch");

	UWBP_Map_Autocentered_C_OnGameMapSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Map_Autocentered_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.Destruct");

	UWBP_Map_Autocentered_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnViewportOverlayRenderOpacityChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              RenderOpacity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_Autocentered_C::OnViewportOverlayRenderOpacityChanged(float RenderOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnViewportOverlayRenderOpacityChanged");

	UWBP_Map_Autocentered_C_OnViewportOverlayRenderOpacityChanged_Params params;
	params.RenderOpacity = RenderOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnMapCompletionUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_Autocentered_C::OnMapCompletionUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.OnMapCompletionUpdated");

	UWBP_Map_Autocentered_C_OnMapCompletionUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.ExecuteUbergraph_WBP_Map_Autocentered
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_Autocentered_C::ExecuteUbergraph_WBP_Map_Autocentered(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Autocentered.WBP_Map_Autocentered_C.ExecuteUbergraph_WBP_Map_Autocentered");

	UWBP_Map_Autocentered_C_ExecuteUbergraph_WBP_Map_Autocentered_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
