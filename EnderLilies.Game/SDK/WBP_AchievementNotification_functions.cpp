// Name: enderlilies, Version: 1.1.3

#include "pch.h"
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
//		Name   -> Function WBP_AchievementNotification.WBP_AchievementNotification_C.SetupNotification
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAchievementData                            AchievementData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_AchievementNotification_C::SetupNotification(const struct FAchievementData& AchievementData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementNotification.WBP_AchievementNotification_C.SetupNotification");

	UWBP_AchievementNotification_C_SetupNotification_Params params;
	params.AchievementData = AchievementData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementNotification.WBP_AchievementNotification_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AchievementNotification_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementNotification.WBP_AchievementNotification_C.OnAnimationFinished");

	UWBP_AchievementNotification_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementNotification.WBP_AchievementNotification_C.LaunchNextNotification
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_AchievementNotification_C::LaunchNextNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementNotification.WBP_AchievementNotification_C.LaunchNextNotification");

	UWBP_AchievementNotification_C_LaunchNextNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementNotification.WBP_AchievementNotification_C.QueueAchievementNotification
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_EZenithAchievement                          Achievement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AchievementNotification_C::QueueAchievementNotification(Zenith_EZenithAchievement Achievement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementNotification.WBP_AchievementNotification_C.QueueAchievementNotification");

	UWBP_AchievementNotification_C_QueueAchievementNotification_Params params;
	params.Achievement = Achievement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementNotification.WBP_AchievementNotification_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_AchievementNotification_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementNotification.WBP_AchievementNotification_C.Construct");

	UWBP_AchievementNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementNotification.WBP_AchievementNotification_C.ExecuteUbergraph_WBP_AchievementNotification
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AchievementNotification_C::ExecuteUbergraph_WBP_AchievementNotification(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementNotification.WBP_AchievementNotification_C.ExecuteUbergraph_WBP_AchievementNotification");

	UWBP_AchievementNotification_C_ExecuteUbergraph_WBP_AchievementNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
