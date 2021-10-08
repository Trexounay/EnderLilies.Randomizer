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
//		Name   -> Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.SetupNavigation
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_MovieList_C::SetupNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.SetupNavigation");

	UWBP_Recollection_MovieList_C_SetupNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Recollection_MovieList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.OnFocusReceived");

	UWBP_Recollection_MovieList_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.CreateMovieList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Recollection_MovieList_C::CreateMovieList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.CreateMovieList");

	UWBP_Recollection_MovieList_C_CreateMovieList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Recollection_MovieList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.Construct");

	UWBP_Recollection_MovieList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.ExecuteUbergraph_WBP_Recollection_MovieList
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Recollection_MovieList_C::ExecuteUbergraph_WBP_Recollection_MovieList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.ExecuteUbergraph_WBP_Recollection_MovieList");

	UWBP_Recollection_MovieList_C_ExecuteUbergraph_WBP_Recollection_MovieList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
