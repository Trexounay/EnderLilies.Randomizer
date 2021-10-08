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
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.OnPaint
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UWBP_PlayerUI_C::OnPaint(struct FPaintContext* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.OnPaint");

	UWBP_PlayerUI_C_OnPaint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.PlayAnimationWithTime
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerUI_C::PlayAnimationWithTime(class UWidgetAnimation* Animation, float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.PlayAnimationWithTime");

	UWBP_PlayerUI_C_PlayAnimationWithTime_Params params;
	params.Animation = Animation;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.SetMinimapSize
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MinimapSizeIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerUI_C::SetMinimapSize(int MinimapSizeIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.SetMinimapSize");

	UWBP_PlayerUI_C_SetMinimapSize_Params params;
	params.MinimapSizeIndex = MinimapSizeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.ToggleMinimap
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerUI_C::ToggleMinimap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.ToggleMinimap");

	UWBP_PlayerUI_C_ToggleMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.ShowUIWithTime
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerUI_C::ShowUIWithTime(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.ShowUIWithTime");

	UWBP_PlayerUI_C_ShowUIWithTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.ShowUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerUI_C::ShowUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.ShowUI");

	UWBP_PlayerUI_C_ShowUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.HideUIWithTime
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerUI_C::HideUIWithTime(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.HideUIWithTime");

	UWBP_PlayerUI_C_HideUIWithTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.HideUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerUI_C::HideUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.HideUI");

	UWBP_PlayerUI_C_HideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.RefreshPlayerUIContainerVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_PlayerUI_C::RefreshPlayerUIContainerVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.RefreshPlayerUIContainerVisibility");

	UWBP_PlayerUI_C_RefreshPlayerUIContainerVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.OnFinish_EF5570CD41D995E70BC60EAC4CF2DD0D
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerUI_C::OnFinish_EF5570CD41D995E70BC60EAC4CF2DD0D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.OnFinish_EF5570CD41D995E70BC60EAC4CF2DD0D");

	UWBP_PlayerUI_C_OnFinish_EF5570CD41D995E70BC60EAC4CF2DD0D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithPlayerController*                     Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AZenithCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerUI_C::Initialize(class AZenithPlayerController* Controller, class AZenithCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.Initialize");

	UWBP_PlayerUI_C_Initialize_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.DelayedInvalidate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerUI_C::DelayedInvalidate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.DelayedInvalidate");

	UWBP_PlayerUI_C_DelayedInvalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.Construct");

	UWBP_PlayerUI_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerUI_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.Destruct");

	UWBP_PlayerUI_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.OnPlayerUIVisibilitySettingsChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerUI_C::OnPlayerUIVisibilitySettingsChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.OnPlayerUIVisibilitySettingsChanged");

	UWBP_PlayerUI_C_OnPlayerUIVisibilitySettingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerUI.WBP_PlayerUI_C.ExecuteUbergraph_WBP_PlayerUI
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerUI_C::ExecuteUbergraph_WBP_PlayerUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerUI.WBP_PlayerUI_C.ExecuteUbergraph_WBP_PlayerUI");

	UWBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
