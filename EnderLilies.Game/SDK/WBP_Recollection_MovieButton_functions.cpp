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
//		Name   -> Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.OnPressConfirm
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Recollection_MovieButton_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.OnPressConfirm");

	UWBP_Recollection_MovieButton_C_OnPressConfirm_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Recollection_MovieButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.Construct");

	UWBP_Recollection_MovieButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.PlayMovie
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_MovieButton_C::PlayMovie()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.PlayMovie");

	UWBP_Recollection_MovieButton_C_PlayMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.OnVideoFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_MovieButton_C::OnVideoFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.OnVideoFinished");

	UWBP_Recollection_MovieButton_C_OnVideoFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Recollection_MovieButton_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.RefreshDesign");

	UWBP_Recollection_MovieButton_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.ExecuteUbergraph_WBP_Recollection_MovieButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Recollection_MovieButton_C::ExecuteUbergraph_WBP_Recollection_MovieButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieButton.WBP_Recollection_MovieButton_C.ExecuteUbergraph_WBP_Recollection_MovieButton");

	UWBP_Recollection_MovieButton_C_ExecuteUbergraph_WBP_Recollection_MovieButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
