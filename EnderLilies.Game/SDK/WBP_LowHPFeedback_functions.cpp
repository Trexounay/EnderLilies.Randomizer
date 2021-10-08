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
//		Name   -> Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.UpdateLayerColor
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                AppliedColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UWBP_LowHPFeedback_C::UpdateLayerColor(struct FLinearColor* AppliedColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.UpdateLayerColor");

	UWBP_LowHPFeedback_C_UpdateLayerColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AppliedColor != nullptr)
		*AppliedColor = params.AppliedColor;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LowHPFeedback_C::Initialize(class AZenithCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.Initialize");

	UWBP_LowHPFeedback_C_Initialize_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.OnHPChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_LowHPFeedback_C::OnHPChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.OnHPChanged");

	UWBP_LowHPFeedback_C_OnHPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LowHPFeedback_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.Tick");

	UWBP_LowHPFeedback_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.ExecuteUbergraph_WBP_LowHPFeedback
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_LowHPFeedback_C::ExecuteUbergraph_WBP_LowHPFeedback(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.ExecuteUbergraph_WBP_LowHPFeedback");

	UWBP_LowHPFeedback_C_ExecuteUbergraph_WBP_LowHPFeedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
