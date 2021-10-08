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
//		Name   -> Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsAllRecollectionItemFromTableVisible
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AZenithPlayerController*                     PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDataTable*                                  RecollectionItemDataTable                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ERecollectionItemType                       RecollectionItemType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URecollectionBPFLibrary_C::STATIC_IsAllRecollectionItemFromTableVisible(class AZenithPlayerController* PlayerController, class UDataTable* RecollectionItemDataTable, Zenith_ERecollectionItemType RecollectionItemType, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsAllRecollectionItemFromTableVisible");

	URecollectionBPFLibrary_C_IsAllRecollectionItemFromTableVisible_Params params;
	params.PlayerController = PlayerController;
	params.RecollectionItemDataTable = RecollectionItemDataTable;
	params.RecollectionItemType = RecollectionItemType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsAnyRecollectionItemFromTableVisible
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AZenithPlayerController*                     PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDataTable*                                  RecollectionItemDataTable                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ERecollectionItemType                       RecollectionItemType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URecollectionBPFLibrary_C::STATIC_IsAnyRecollectionItemFromTableVisible(class AZenithPlayerController* PlayerController, class UDataTable* RecollectionItemDataTable, Zenith_ERecollectionItemType RecollectionItemType, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsAnyRecollectionItemFromTableVisible");

	URecollectionBPFLibrary_C_IsAnyRecollectionItemFromTableVisible_Params params;
	params.PlayerController = PlayerController;
	params.RecollectionItemDataTable = RecollectionItemDataTable;
	params.RecollectionItemType = RecollectionItemType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsAllRecollectionItemsChecked
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AZenithPlayerController*                     PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URecollectionBPFLibrary_C::STATIC_IsAllRecollectionItemsChecked(class AZenithPlayerController* PlayerController, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsAllRecollectionItemsChecked");

	URecollectionBPFLibrary_C_IsAllRecollectionItemsChecked_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsAllRecollectionItemFromTableChecked
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AZenithPlayerController*                     PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UDataTable*                                  RecollectionItemDataTable                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ERecollectionItemType                       RecollectionItemType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URecollectionBPFLibrary_C::STATIC_IsAllRecollectionItemFromTableChecked(class AZenithPlayerController* PlayerController, class UDataTable* RecollectionItemDataTable, Zenith_ERecollectionItemType RecollectionItemType, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsAllRecollectionItemFromTableChecked");

	URecollectionBPFLibrary_C_IsAllRecollectionItemFromTableChecked_Params params;
	params.PlayerController = PlayerController;
	params.RecollectionItemDataTable = RecollectionItemDataTable;
	params.RecollectionItemType = RecollectionItemType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsRecollectionItemVisible
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AZenithPlayerController*                     PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDataTableRowHandle                         RecollectionItemDataHandle                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		Zenith_ERecollectionItemType                       RecollectionItemType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URecollectionBPFLibrary_C::STATIC_IsRecollectionItemVisible(class AZenithPlayerController* PlayerController, const struct FDataTableRowHandle& RecollectionItemDataHandle, Zenith_ERecollectionItemType RecollectionItemType, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.IsRecollectionItemVisible");

	URecollectionBPFLibrary_C_IsRecollectionItemVisible_Params params;
	params.PlayerController = PlayerController;
	params.RecollectionItemDataHandle = RecollectionItemDataHandle;
	params.RecollectionItemType = RecollectionItemType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.CheckRecollectionConditions
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AZenithPlayerController*                     PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRecollectionConditionData                  RecollectionConditionData                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URecollectionBPFLibrary_C::STATIC_CheckRecollectionConditions(class AZenithPlayerController* PlayerController, const struct FRecollectionConditionData& RecollectionConditionData, class UObject* __WorldContext, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RecollectionBPFLibrary.RecollectionBPFLibrary_C.CheckRecollectionConditions");

	URecollectionBPFLibrary_C_CheckRecollectionConditions_Params params;
	params.PlayerController = PlayerController;
	params.RecollectionConditionData = RecollectionConditionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
