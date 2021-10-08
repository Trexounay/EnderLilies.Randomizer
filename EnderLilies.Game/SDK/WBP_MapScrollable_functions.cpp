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
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToCurrentMap
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MapScrollable_C::ScrollToCurrentMap(bool* Success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToCurrentMap");

	UWBP_MapScrollable_C_ScrollToCurrentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.ToggleLegendDisplay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_MapScrollable_C::ToggleLegendDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.ToggleLegendDisplay");

	UWBP_MapScrollable_C_ToggleLegendDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.Center to Map
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollable_C::Center_to_Map(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.Center to Map");

	UWBP_MapScrollable_C_Center_to_Map_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.ClampSides
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FGeometry                                   Geometry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   Clamp_to_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   Clamped                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollable_C::ClampSides(const struct FGeometry& Geometry, const struct FVector2D& Clamp_to_, struct FVector2D* Clamped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.ClampSides");

	UWBP_MapScrollable_C_ClampSides_Params params;
	params.Geometry = Geometry;
	params.Clamp_to_ = Clamp_to_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Clamped != nullptr)
		*Clamped = params.Clamped;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.OnPressContext
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MapScrollable_C::OnPressContext(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.OnPressContext");

	UWBP_MapScrollable_C_OnPressContext_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MapScrollable_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.OnFocusReceived");

	UWBP_MapScrollable_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MapScrollable_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.Construct");

	UWBP_MapScrollable_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MapScrollable_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.PreConstruct");

	UWBP_MapScrollable_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToMap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Map_Level_C*                            MapLevelItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollable_C::ScrollToMap(class UWBP_Map_Level_C* MapLevelItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToMap");

	UWBP_MapScrollable_C_ScrollToMap_Params params;
	params.MapLevelItem = MapLevelItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToMapID
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       MapID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollable_C::ScrollToMapID(const struct FName& MapID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToMapID");

	UWBP_MapScrollable_C_ScrollToMapID_Params params;
	params.MapID = MapID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MapScrollable.WBP_MapScrollable_C.ExecuteUbergraph_WBP_MapScrollable
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MapScrollable_C::ExecuteUbergraph_WBP_MapScrollable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MapScrollable.WBP_MapScrollable_C.ExecuteUbergraph_WBP_MapScrollable");

	UWBP_MapScrollable_C_ExecuteUbergraph_WBP_MapScrollable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
