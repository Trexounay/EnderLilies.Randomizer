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
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.Get_ArrowRight_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_TipsMenu_C::Get_ArrowRight_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.Get_ArrowRight_ColorAndOpacity_1");

	UWBP_TipsMenu_C_Get_ArrowRight_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.Get_ArrowLeft_ColorAndOpacity_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UWBP_TipsMenu_C::Get_ArrowLeft_ColorAndOpacity_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.Get_ArrowLeft_ColorAndOpacity_1");

	UWBP_TipsMenu_C_Get_ArrowLeft_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.RefreshPageDisplay
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TipsMenu_C::RefreshPageDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.RefreshPageDisplay");

	UWBP_TipsMenu_C_RefreshPageDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.ConstructTipsList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TipsMenu_C::ConstructTipsList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.ConstructTipsList");

	UWBP_TipsMenu_C_ConstructTipsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.CreateTipsPage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Tips_List_C*                            TipsPage                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TipsMenu_C::CreateTipsPage(class UWBP_Tips_List_C** TipsPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.CreateTipsPage");

	UWBP_TipsMenu_C_CreateTipsPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TipsPage != nullptr)
		*TipsPage = params.TipsPage;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_TipsMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.OnFocusReceived");

	UWBP_TipsMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_TipsMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.Construct");

	UWBP_TipsMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.BndEvt__TipsPageScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TipsMenu_C::BndEvt__TipsPageScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.BndEvt__TipsPageScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature");

	UWBP_TipsMenu_C_BndEvt__TipsPageScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.OnFocusedTipItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Tips_Item_C*                            TipItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TipsMenu_C::OnFocusedTipItem(class UWBP_Tips_Item_C* TipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.OnFocusedTipItem");

	UWBP_TipsMenu_C_OnFocusedTipItem_Params params;
	params.TipItem = TipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsMenu.WBP_TipsMenu_C.ExecuteUbergraph_WBP_TipsMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TipsMenu_C::ExecuteUbergraph_WBP_TipsMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsMenu.WBP_TipsMenu_C.ExecuteUbergraph_WBP_TipsMenu");

	UWBP_TipsMenu_C_ExecuteUbergraph_WBP_TipsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
