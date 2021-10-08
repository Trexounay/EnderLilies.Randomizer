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
//		Name   -> Function WBP_BaseMapLayout.WBP_BaseMapLayout_C.GetLevels
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		TArray<class UWBP_Map_Level_C*>                    Levels                                                     (Parm, OutParm, ContainsInstancedReference)
void UWBP_BaseMapLayout_C::GetLevels(TArray<class UWBP_Map_Level_C*>* Levels)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BaseMapLayout.WBP_BaseMapLayout_C.GetLevels");

	UWBP_BaseMapLayout_C_GetLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Levels != nullptr)
		*Levels = params.Levels;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BaseMapLayout.WBP_BaseMapLayout_C.GetLinks
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		TArray<class UWBP_Map_Link_C*>                     MapLinks                                                   (Parm, OutParm, ContainsInstancedReference)
void UWBP_BaseMapLayout_C::GetLinks(TArray<class UWBP_Map_Link_C*>* MapLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BaseMapLayout.WBP_BaseMapLayout_C.GetLinks");

	UWBP_BaseMapLayout_C_GetLinks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapLinks != nullptr)
		*MapLinks = params.MapLinks;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
