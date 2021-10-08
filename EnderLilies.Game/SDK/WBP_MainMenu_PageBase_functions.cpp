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
//		Name   -> Function WBP_MainMenu_PageBase.WBP_MainMenu_PageBase_C.GetFooter
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UWBP_MainMenu_Footer_C*                      Footer                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_PageBase_C::GetFooter(class UWBP_MainMenu_Footer_C** Footer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_PageBase.WBP_MainMenu_PageBase_C.GetFooter");

	UWBP_MainMenu_PageBase_C_GetFooter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Footer != nullptr)
		*Footer = params.Footer;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_PageBase.WBP_MainMenu_PageBase_C.SetFooter
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_MainMenu_Footer_C*                      Footer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FFRichTextInputPair>                 FooterDataEntries                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_MainMenu_PageBase_C::SetFooter(class UWBP_MainMenu_Footer_C* Footer, TArray<struct FFRichTextInputPair>* FooterDataEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_PageBase.WBP_MainMenu_PageBase_C.SetFooter");

	UWBP_MainMenu_PageBase_C_SetFooter_Params params;
	params.Footer = Footer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FooterDataEntries != nullptr)
		*FooterDataEntries = params.FooterDataEntries;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_PageBase.WBP_MainMenu_PageBase_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_MainMenu_PageBase_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_PageBase.WBP_MainMenu_PageBase_C.OnFocusReceived");

	UWBP_MainMenu_PageBase_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
