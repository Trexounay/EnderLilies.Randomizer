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
//		Name   -> Function WBP_Map.WBP_Map_C.FindMapItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       MapID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_Map_Level_C*                            MapLevelItem                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_C::FindMapItem(const struct FName& MapID, class UWBP_Map_Level_C** MapLevelItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.FindMapItem");

	UWBP_Map_C_FindMapItem_Params params;
	params.MapID = MapID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapLevelItem != nullptr)
		*MapLevelItem = params.MapLevelItem;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.GenerateMapLinkList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_Map_C::GenerateMapLinkList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.GenerateMapLinkList");

	UWBP_Map_C_GenerateMapLinkList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.GenerateMapLevelItemList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_Map_C::GenerateMapLevelItemList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.GenerateMapLevelItemList");

	UWBP_Map_C_GenerateMapLevelItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.GetCurrentMapItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UWBP_Map_Level_C*                            MapItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_C::GetCurrentMapItem(class UWBP_Map_Level_C** MapItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.GetCurrentMapItem");

	UWBP_Map_C_GetCurrentMapItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapItem != nullptr)
		*MapItem = params.MapItem;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Map_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.Construct");

	UWBP_Map_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.OnMapItemConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Map_Level_C*                            MapLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_C::OnMapItemConfirm(class UWBP_Map_Level_C* MapLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.OnMapItemConfirm");

	UWBP_Map_C_OnMapItemConfirm_Params params;
	params.MapLevel = MapLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.SetupMap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_C::SetupMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.SetupMap");

	UWBP_Map_C_SetupMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.RefreshCurrentMap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_C::RefreshCurrentMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.RefreshCurrentMap");

	UWBP_Map_C_RefreshCurrentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.OnPlayerOpenWorld
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_C::OnPlayerOpenWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.OnPlayerOpenWorld");

	UWBP_Map_C_OnPlayerOpenWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.OnGameMapSwitch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_C::OnGameMapSwitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.OnGameMapSwitch");

	UWBP_Map_C_OnGameMapSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.OnMapItemFocused
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Map_Level_C*                            MapLevelItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_C::OnMapItemFocused(class UWBP_Map_Level_C* MapLevelItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.OnMapItemFocused");

	UWBP_Map_C_OnMapItemFocused_Params params;
	params.MapLevelItem = MapLevelItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Map_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.PreConstruct");

	UWBP_Map_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.SetMapBGVisibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		UMG_ESlateVisibility                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_C::SetMapBGVisibility(UMG_ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.SetMapBGVisibility");

	UWBP_Map_C_SetMapBGVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.OnMapCompletionUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_C::OnMapCompletionUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.OnMapCompletionUpdated");

	UWBP_Map_C_OnMapCompletionUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.OnClearedObjectManagerReady
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_C::OnClearedObjectManagerReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.OnClearedObjectManagerReady");

	UWBP_Map_C_OnClearedObjectManagerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.ExecuteUbergraph_WBP_Map
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_C::ExecuteUbergraph_WBP_Map(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.ExecuteUbergraph_WBP_Map");

	UWBP_Map_C_ExecuteUbergraph_WBP_Map_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.OnMapItemGotFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Map_Level_C*                            MapLevelItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_C::OnMapItemGotFocused__DelegateSignature(class UWBP_Map_Level_C* MapLevelItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.OnMapItemGotFocused__DelegateSignature");

	UWBP_Map_C_OnMapItemGotFocused__DelegateSignature_Params params;
	params.MapLevelItem = MapLevelItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map.WBP_Map_C.OnMapItemConfirmed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Map_Level_C*                            MapLevelItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_C::OnMapItemConfirmed__DelegateSignature(class UWBP_Map_Level_C* MapLevelItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map.WBP_Map_C.OnMapItemConfirmed__DelegateSignature");

	UWBP_Map_C_OnMapItemConfirmed__DelegateSignature_Params params;
	params.MapLevelItem = MapLevelItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
