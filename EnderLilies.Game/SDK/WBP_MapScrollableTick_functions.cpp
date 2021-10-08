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
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnPreviewMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MapScrollableTick_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnPreviewMouseButtonDown");

	UWBP_MapScrollableTick_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseButtonUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MapScrollableTick_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseButtonUp");

	UWBP_MapScrollableTick_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseMove
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MapScrollableTick_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseMove");

	UWBP_MapScrollableTick_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseWheel
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MapScrollableTick_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseWheel");

	UWBP_MapScrollableTick_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MapScrollableTick_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnKeyDown");

	UWBP_MapScrollableTick_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.InitializeMapZoom
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
void UWBP_MapScrollableTick_C::InitializeMapZoom(const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.InitializeMapZoom");

	UWBP_MapScrollableTick_C_InitializeMapZoom_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.GetScrollSpeed
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              ScrollSpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollableTick_C::GetScrollSpeed(float* ScrollSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.GetScrollSpeed");

	UWBP_MapScrollableTick_C_GetScrollSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScrollSpeed != nullptr)
		*ScrollSpeed = params.ScrollSpeed;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.UpdateMapZoom
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGeometry                                   Geometry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
void UWBP_MapScrollableTick_C::UpdateMapZoom(float DeltaTime, const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.UpdateMapZoom");

	UWBP_MapScrollableTick_C_UpdateMapZoom_Params params;
	params.DeltaTime = DeltaTime;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.UpdateMapScroll
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   ScrollValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollableTick_C::UpdateMapScroll(const struct FGeometry& Geometry, const struct FVector2D& ScrollValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.UpdateMapScroll");

	UWBP_MapScrollableTick_C_UpdateMapScroll_Params params;
	params.Geometry = Geometry;
	params.ScrollValue = ScrollValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollableTick_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.Tick");

	UWBP_MapScrollableTick_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnRequestZoom
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MapScrollableTick_C::OnRequestZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnRequestZoom");

	UWBP_MapScrollableTick_C_OnRequestZoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_MapScrollableTick_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseEnter");

	UWBP_MapScrollableTick_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.ZoomToLevel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewZoomLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollableTick_C::ZoomToLevel(int NewZoomLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.ZoomToLevel");

	UWBP_MapScrollableTick_C_ZoomToLevel_Params params;
	params.NewZoomLevel = NewZoomLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.ExecuteUbergraph_WBP_MapScrollableTick
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollableTick_C::ExecuteUbergraph_WBP_MapScrollableTick(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.ExecuteUbergraph_WBP_MapScrollableTick");

	UWBP_MapScrollableTick_C_ExecuteUbergraph_WBP_MapScrollableTick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
