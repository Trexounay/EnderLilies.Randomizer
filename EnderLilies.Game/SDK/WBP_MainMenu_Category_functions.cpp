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
//		Name   -> Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MainMenu_Category_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.PreConstruct");

	UWBP_MainMenu_Category_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_MainMenu_Category_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.Construct");

	UWBP_MainMenu_Category_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.SetSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MainMenu_Category_C::SetSelected(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.SetSelected");

	UWBP_MainMenu_Category_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_MainMenu_Category_C::BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UWBP_MainMenu_Category_C_BndEvt__CategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.ExecuteUbergraph_WBP_MainMenu_Category
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_Category_C::ExecuteUbergraph_WBP_MainMenu_Category(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.ExecuteUbergraph_WBP_MainMenu_Category");

	UWBP_MainMenu_Category_C_ExecuteUbergraph_WBP_MainMenu_Category_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_MainMenu_Category_C*                    Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MainMenu_Category_C::OnClicked__DelegateSignature(class UWBP_MainMenu_Category_C* Category)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MainMenu_Category.WBP_MainMenu_Category_C.OnClicked__DelegateSignature");

	UWBP_MainMenu_Category_C_OnClicked__DelegateSignature_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
