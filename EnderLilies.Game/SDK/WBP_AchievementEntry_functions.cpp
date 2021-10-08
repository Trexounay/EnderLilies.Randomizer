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
//		Name   -> Function WBP_AchievementEntry.WBP_AchievementEntry_C.SetupLockedAchievement
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAchievementData                            AchievementData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_AchievementEntry_C::SetupLockedAchievement(const struct FAchievementData& AchievementData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementEntry.WBP_AchievementEntry_C.SetupLockedAchievement");

	UWBP_AchievementEntry_C_SetupLockedAchievement_Params params;
	params.AchievementData = AchievementData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementEntry.WBP_AchievementEntry_C.SetupUnlockedAchievement
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FAchievementData                            AchievementData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_AchievementEntry_C::SetupUnlockedAchievement(const struct FAchievementData& AchievementData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementEntry.WBP_AchievementEntry_C.SetupUnlockedAchievement");

	UWBP_AchievementEntry_C_SetupUnlockedAchievement_Params params;
	params.AchievementData = AchievementData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementEntry.WBP_AchievementEntry_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_AchievementEntry_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementEntry.WBP_AchievementEntry_C.RefreshDesign");

	UWBP_AchievementEntry_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementEntry.WBP_AchievementEntry_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_AchievementEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementEntry.WBP_AchievementEntry_C.Construct");

	UWBP_AchievementEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_AchievementEntry.WBP_AchievementEntry_C.ExecuteUbergraph_WBP_AchievementEntry
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_AchievementEntry_C::ExecuteUbergraph_WBP_AchievementEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_AchievementEntry.WBP_AchievementEntry_C.ExecuteUbergraph_WBP_AchievementEntry");

	UWBP_AchievementEntry_C_ExecuteUbergraph_WBP_AchievementEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
