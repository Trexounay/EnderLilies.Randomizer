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
//		Name   -> Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.Play SE
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Get_Item_Generic_C::Play_SE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.Play SE");

	UWBP_Get_Item_Generic_C_Play_SE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.SetTextWithFormat
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class URefreshableRichTextBlock*                   TextBlock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       NewFormat                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<struct FRichTextFormatElement>              NewFormatElements                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_Get_Item_Generic_C::SetTextWithFormat(class URefreshableRichTextBlock* TextBlock, const struct FText& NewFormat, TArray<struct FRichTextFormatElement> NewFormatElements)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.SetTextWithFormat");

	UWBP_Get_Item_Generic_C_SetTextWithFormat_Params params;
	params.TextBlock = TextBlock;
	params.NewFormat = NewFormat;
	params.NewFormatElements = NewFormatElements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Get_Item_Generic_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.OnFocusReceived");

	UWBP_Get_Item_Generic_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Get_Item_Generic_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.Construct");

	UWBP_Get_Item_Generic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Get_Item_Generic_C::BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_Get_Item_Generic_C_BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.ExecuteUbergraph_WBP_Get_Item_Generic
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Get_Item_Generic_C::ExecuteUbergraph_WBP_Get_Item_Generic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Get_Item_Generic.WBP_Get_Item_Generic_C.ExecuteUbergraph_WBP_Get_Item_Generic");

	UWBP_Get_Item_Generic_C_ExecuteUbergraph_WBP_Get_Item_Generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
