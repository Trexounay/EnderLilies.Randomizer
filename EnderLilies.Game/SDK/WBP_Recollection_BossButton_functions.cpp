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
//		Name   -> Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.OnPressConfirm
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Recollection_BossButton_C::OnPressConfirm(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.OnPressConfirm");

	UWBP_Recollection_BossButton_C_OnPressConfirm_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Recollection_BossButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.Construct");

	UWBP_Recollection_BossButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.MoveToBossMap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_BossButton_C::MoveToBossMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.MoveToBossMap");

	UWBP_Recollection_BossButton_C_MoveToBossMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.RefreshDesign
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bFocused                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Recollection_BossButton_C::RefreshDesign(bool bFocused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.RefreshDesign");

	UWBP_Recollection_BossButton_C_RefreshDesign_Params params;
	params.bFocused = bFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.ExecuteUbergraph_WBP_Recollection_BossButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Recollection_BossButton_C::ExecuteUbergraph_WBP_Recollection_BossButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.ExecuteUbergraph_WBP_Recollection_BossButton");

	UWBP_Recollection_BossButton_C_ExecuteUbergraph_WBP_Recollection_BossButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.OnMoveToBossMap__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         BossMap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Recollection_BossButton_C::OnMoveToBossMap__DelegateSignature(const struct FDataTableRowHandle& BossMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.OnMoveToBossMap__DelegateSignature");

	UWBP_Recollection_BossButton_C_OnMoveToBossMap__DelegateSignature_Params params;
	params.BossMap = BossMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
