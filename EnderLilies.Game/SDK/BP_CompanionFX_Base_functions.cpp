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
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ResetAndUnbindCommandAction
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CompanionFX_Base_C::ResetAndUnbindCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ResetAndUnbindCommandAction");

	ABP_CompanionFX_Base_C_ResetAndUnbindCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.RefreshCommandActionCache
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CompanionFX_Base_C::RefreshCommandActionCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.RefreshCommandActionCache");

	ABP_CompanionFX_Base_C_RefreshCommandActionCache_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.TeleportToAssociatedLocation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CompanionFX_Base_C::TeleportToAssociatedLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.TeleportToAssociatedLocation");

	ABP_CompanionFX_Base_C_TeleportToAssociatedLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.TriggerWorldSpaceUI
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CompanionFX_Base_C::TriggerWorldSpaceUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.TriggerWorldSpaceUI");

	ABP_CompanionFX_Base_C_TriggerWorldSpaceUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.Set FXVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CompanionFX_Base_C::Set_FXVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.Set FXVisibility");

	ABP_CompanionFX_Base_C_Set_FXVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetDesiredUIOffset
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ABP_CompanionFX_Base_C::GetDesiredUIOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetDesiredUIOffset");

	ABP_CompanionFX_Base_C_GetDesiredUIOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetDesiredFXColor
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FLinearColor                                DesiredColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::GetDesiredFXColor(struct FLinearColor* DesiredColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetDesiredFXColor");

	ABP_CompanionFX_Base_C_GetDesiredFXColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DesiredColor != nullptr)
		*DesiredColor = params.DesiredColor;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetDissolveValue
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DissolveValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::SetDissolveValue(float DissolveValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetDissolveValue");

	ABP_CompanionFX_Base_C_SetDissolveValue_Params params;
	params.DissolveValue = DissolveValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetIdleAnimationName
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FString                                     IdleAnimationName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::GetIdleAnimationName(struct FString* IdleAnimationName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.GetIdleAnimationName");

	ABP_CompanionFX_Base_C_GetIdleAnimationName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IdleAnimationName != nullptr)
		*IdleAnimationName = params.IdleAnimationName;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ClearIdleAnimationOverride
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_CompanionFX_Base_C::ClearIdleAnimationOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ClearIdleAnimationOverride");

	ABP_CompanionFX_Base_C_ClearIdleAnimationOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetIdleAnimationOverride
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     IdleAnimationOverrideName                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::SetIdleAnimationOverride(const struct FString& IdleAnimationOverrideName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetIdleAnimationOverride");

	ABP_CompanionFX_Base_C_SetIdleAnimationOverride_Params params;
	params.IdleAnimationOverrideName = IdleAnimationOverrideName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeIn__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_CompanionFX_Base_C::FadeIn__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeIn__FinishedFunc");

	ABP_CompanionFX_Base_C_FadeIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeIn__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_CompanionFX_Base_C::FadeIn__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeIn__UpdateFunc");

	ABP_CompanionFX_Base_C_FadeIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeOut__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_CompanionFX_Base_C::FadeOut__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeOut__FinishedFunc");

	ABP_CompanionFX_Base_C_FadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeOut__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_CompanionFX_Base_C::FadeOut__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.FadeOut__UpdateFunc");

	ABP_CompanionFX_Base_C_FadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnShowSpine
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CompanionFX_Base_C::OnShowSpine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnShowSpine");

	ABP_CompanionFX_Base_C_OnShowSpine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnHideSpine
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CompanionFX_Base_C::OnHideSpine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnHideSpine");

	ABP_CompanionFX_Base_C_OnHideSpine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetMeshComponentsHiddenInGame
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bHiddenInGame                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CompanionFX_Base_C::OnSetMeshComponentsHiddenInGame(bool bHiddenInGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetMeshComponentsHiddenInGame");

	ABP_CompanionFX_Base_C_OnSetMeshComponentsHiddenInGame_Params params;
	params.bHiddenInGame = bHiddenInGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetPoseFadePlaneAlpha
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::SetPoseFadePlaneAlpha(float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.SetPoseFadePlaneAlpha");

	ABP_CompanionFX_Base_C_SetPoseFadePlaneAlpha_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetTranslucencyPriority
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::OnSetTranslucencyPriority(int Priority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetTranslucencyPriority");

	ABP_CompanionFX_Base_C_OnSetTranslucencyPriority_Params params;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnActivate
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CompanionFX_Base_C::OnActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnActivate");

	ABP_CompanionFX_Base_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnDeactivate
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CompanionFX_Base_C::OnDeactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnDeactivate");

	ABP_CompanionFX_Base_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveEndPlay");

	ABP_CompanionFX_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CompanionFX_Base_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveDestroyed");

	ABP_CompanionFX_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CompanionFX_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveBeginPlay");

	ABP_CompanionFX_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnEventStop
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CompanionFX_Base_C::OnEventStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnEventStop");

	ABP_CompanionFX_Base_C_OnEventStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnAssociatedCommandStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_CompanionFX_Base_C::OnAssociatedCommandStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnAssociatedCommandStart");

	ABP_CompanionFX_Base_C_OnAssociatedCommandStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ReceiveTick");

	ABP_CompanionFX_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetAssociatedSpiritData
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_CompanionFX_Base_C::OnSetAssociatedSpiritData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnSetAssociatedSpiritData");

	ABP_CompanionFX_Base_C_OnSetAssociatedSpiritData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnLeaderPawnChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       NewLeaderPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::OnLeaderPawnChanged(class APawn* NewLeaderPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.OnLeaderPawnChanged");

	ABP_CompanionFX_Base_C_OnLeaderPawnChanged_Params params;
	params.NewLeaderPawn = NewLeaderPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ExecuteUbergraph_BP_CompanionFX_Base
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_CompanionFX_Base_C::ExecuteUbergraph_BP_CompanionFX_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanionFX_Base.BP_CompanionFX_Base_C.ExecuteUbergraph_BP_CompanionFX_Base");

	ABP_CompanionFX_Base_C_ExecuteUbergraph_BP_CompanionFX_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
