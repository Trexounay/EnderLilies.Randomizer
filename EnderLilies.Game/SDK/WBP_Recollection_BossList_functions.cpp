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
//		Name   -> Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.SetupNavigation
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_BossList_C::SetupNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.SetupNavigation");

	UWBP_Recollection_BossList_C_SetupNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.CreateBossList
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Recollection_BossList_C::CreateBossList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.CreateBossList");

	UWBP_Recollection_BossList_C_CreateBossList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Recollection_BossList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnFocusReceived");

	UWBP_Recollection_BossList_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Recollection_BossList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.Construct");

	UWBP_Recollection_BossList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnMoveToBossMap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         BossMap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Recollection_BossList_C::OnMoveToBossMap(const struct FDataTableRowHandle& BossMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnMoveToBossMap");

	UWBP_Recollection_BossList_C_OnMoveToBossMap_Params params;
	params.BossMap = BossMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.ExecuteUbergraph_WBP_Recollection_BossList
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Recollection_BossList_C::ExecuteUbergraph_WBP_Recollection_BossList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.ExecuteUbergraph_WBP_Recollection_BossList");

	UWBP_Recollection_BossList_C_ExecuteUbergraph_WBP_Recollection_BossList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnRequestBossRush__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_BossList_C::OnRequestBossRush__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnRequestBossRush__DelegateSignature");

	UWBP_Recollection_BossList_C_OnRequestBossRush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnRequestMapChange__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Recollection_BossList_C::OnRequestMapChange__DelegateSignature(const struct FDataTableRowHandle& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnRequestMapChange__DelegateSignature");

	UWBP_Recollection_BossList_C_OnRequestMapChange__DelegateSignature_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
