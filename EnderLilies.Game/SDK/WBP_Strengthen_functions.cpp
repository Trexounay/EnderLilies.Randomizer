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
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.GetSpritCurrencyLevelTranslationText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Zenith_ECurrencyType                               CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       CurrencyTypeText                                           (Parm, OutParm)
void UWBP_Strengthen_C::GetSpritCurrencyLevelTranslationText(Zenith_ECurrencyType CurrencyType, struct FText* CurrencyTypeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.GetSpritCurrencyLevelTranslationText");

	UWBP_Strengthen_C_GetSpritCurrencyLevelTranslationText_Params params;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrencyTypeText != nullptr)
		*CurrencyTypeText = params.CurrencyTypeText;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.CreateConfirmationWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Strengthen_C::CreateConfirmationWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.CreateConfirmationWidget");

	UWBP_Strengthen_C_CreateConfirmationWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.SetLevelUpTexts
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         DataTableRowHandle                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UWBP_Strengthen_C::SetLevelUpTexts(const struct FDataTableRowHandle& DataTableRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.SetLevelUpTexts");

	UWBP_Strengthen_C_SetLevelUpTexts_Params params;
	params.DataTableRowHandle = DataTableRowHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.GetSpiritLevelDataLevel
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FDataTableRowHandle                         DataTableRowHandle                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FSpiritParameterLevelData                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSpiritParameterLevelData UWBP_Strengthen_C::GetSpiritLevelDataLevel(const struct FDataTableRowHandle& DataTableRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.GetSpiritLevelDataLevel");

	UWBP_Strengthen_C_GetSpiritLevelDataLevel_Params params;
	params.DataTableRowHandle = DataTableRowHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.SetButtonText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ECurrencyType                               CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Strengthen_C::SetButtonText(Zenith_ECurrencyType CurrencyType, int Value, const struct FDataTableRowHandle& ItemHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.SetButtonText");

	UWBP_Strengthen_C_SetButtonText_Params params;
	params.CurrencyType = CurrencyType;
	params.Value = Value;
	params.ItemHandle = ItemHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.SetExplanationVisible
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Strengthen_C::SetExplanationVisible(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.SetExplanationVisible");

	UWBP_Strengthen_C_SetExplanationVisible_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.SetExplanationText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FText>                               Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_Strengthen_C::SetExplanationText(TArray<struct FText>* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.SetExplanationText");

	UWBP_Strengthen_C_SetExplanationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.SetArrowVisible
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CastCountArrow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               RecastArrow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Strengthen_C::SetArrowVisible(bool CastCountArrow, bool RecastArrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.SetArrowVisible");

	UWBP_Strengthen_C_SetArrowVisible_Params params;
	params.CastCountArrow = CastCountArrow;
	params.RecastArrow = RecastArrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.SetRequireCurrencyWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         Item_Handle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Strengthen_C::SetRequireCurrencyWidget(const struct FDataTableRowHandle& Item_Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.SetRequireCurrencyWidget");

	UWBP_Strengthen_C_SetRequireCurrencyWidget_Params params;
	params.Item_Handle = Item_Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.SetSpiritLevelIcon
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         DataTableRowHandle                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UWBP_Strengthen_C::SetSpiritLevelIcon(const struct FDataTableRowHandle& DataTableRowHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.SetSpiritLevelIcon");

	UWBP_Strengthen_C_SetSpiritLevelIcon_Params params;
	params.DataTableRowHandle = DataTableRowHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnPressContext
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Strengthen_C::OnPressContext(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnPressContext");

	UWBP_Strengthen_C_OnPressContext_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.IsSpiritMaxLevel
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FDataTableRowHandle                         ItemHandle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		bool                                               IsMaxLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Strengthen_C::IsSpiritMaxLevel(const struct FDataTableRowHandle& ItemHandle, bool* IsMaxLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.IsSpiritMaxLevel");

	UWBP_Strengthen_C_IsSpiritMaxLevel_Params params;
	params.ItemHandle = ItemHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsMaxLevel != nullptr)
		*IsMaxLevel = params.IsMaxLevel;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.LevelUpSpirit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Strengthen_C::LevelUpSpirit(const struct FDataTableRowHandle& ItemHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.LevelUpSpirit");

	UWBP_Strengthen_C_LevelUpSpirit_Params params;
	params.ItemHandle = ItemHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.CanPayCost
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Zenith_ECurrencyType                               CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanPayCost                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Strengthen_C::CanPayCost(Zenith_ECurrencyType CurrencyType, int Value, bool* CanPayCost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.CanPayCost");

	UWBP_Strengthen_C_CanPayCost_Params params;
	params.CurrencyType = CurrencyType;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanPayCost != nullptr)
		*CanPayCost = params.CanPayCost;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.GetCurrencyCount
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		Zenith_ECurrencyType                               CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                CurrencyCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Strengthen_C::GetCurrencyCount(Zenith_ECurrencyType CurrencyType, int* CurrencyCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.GetCurrencyCount");

	UWBP_Strengthen_C_GetCurrencyCount_Params params;
	params.CurrencyType = CurrencyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrencyCount != nullptr)
		*CurrencyCount = params.CurrencyCount;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.GetCost
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FDataTableRowHandle                         ItemHandle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		Zenith_ECurrencyType                               CurrencyType                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Strengthen_C::GetCost(const struct FDataTableRowHandle& ItemHandle, Zenith_ECurrencyType* CurrencyType, int* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.GetCost");

	UWBP_Strengthen_C_GetCost_Params params;
	params.ItemHandle = ItemHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrencyType != nullptr)
		*CurrencyType = params.CurrencyType;
	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Strengthen_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnFocusReceived");

	UWBP_Strengthen_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Strengthen_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnPressCancel");

	UWBP_Strengthen_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_066E292E42E788874C41348FA6A33E9D
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::OnFinish_066E292E42E788874C41348FA6A33E9D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_066E292E42E788874C41348FA6A33E9D");

	UWBP_Strengthen_C_OnFinish_066E292E42E788874C41348FA6A33E9D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_2071A4134BF576284BB5479C170F7ABE
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::OnFinish_2071A4134BF576284BB5479C170F7ABE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_2071A4134BF576284BB5479C170F7ABE");

	UWBP_Strengthen_C_OnFinish_2071A4134BF576284BB5479C170F7ABE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_066E292E42E788874C41348FB97C0A6B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::OnFinish_066E292E42E788874C41348FB97C0A6B()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_066E292E42E788874C41348FB97C0A6B");

	UWBP_Strengthen_C_OnFinish_066E292E42E788874C41348FB97C0A6B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_2071A4134BF576284BB5479C08D04E48
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::OnFinish_2071A4134BF576284BB5479C08D04E48()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_2071A4134BF576284BB5479C08D04E48");

	UWBP_Strengthen_C_OnFinish_2071A4134BF576284BB5479C08D04E48_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Strengthen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.Construct");

	UWBP_Strengthen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.CloseMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.CloseMenu");

	UWBP_Strengthen_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Strengthen_C::BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature");

	UWBP_Strengthen_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.RefreshCurrencies
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::RefreshCurrencies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.RefreshCurrencies");

	UWBP_Strengthen_C_RefreshCurrencies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Strengthen_C::BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature");

	UWBP_Strengthen_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnConfirmationStrengthenClickYES
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::OnConfirmationStrengthenClickYES()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnConfirmationStrengthenClickYES");

	UWBP_Strengthen_C_OnConfirmationStrengthenClickYES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnConfirmationStrengthenClickNo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::OnConfirmationStrengthenClickNo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnConfirmationStrengthenClickNo");

	UWBP_Strengthen_C_OnConfirmationStrengthenClickNo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__StrengthenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_Strengthen_C::BndEvt__StrengthenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__StrengthenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UWBP_Strengthen_C_BndEvt__StrengthenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.ExecuteUbergraph_WBP_Strengthen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Strengthen_C::ExecuteUbergraph_WBP_Strengthen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.ExecuteUbergraph_WBP_Strengthen");

	UWBP_Strengthen_C_ExecuteUbergraph_WBP_Strengthen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Strengthen.WBP_Strengthen_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Strengthen_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Strengthen.WBP_Strengthen_C.OnClose__DelegateSignature");

	UWBP_Strengthen_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
