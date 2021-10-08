#pragma once

// Name: enderlilies, Version: 1.1.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.SetupNavigation
struct UWBP_Recollection_MovieList_C_SetupNavigation_Params
{
};

// Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.OnFocusReceived
struct UWBP_Recollection_MovieList_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.CreateMovieList
struct UWBP_Recollection_MovieList_C_CreateMovieList_Params
{
};

// Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.Construct
struct UWBP_Recollection_MovieList_C_Construct_Params
{
};

// Function WBP_Recollection_MovieList.WBP_Recollection_MovieList_C.ExecuteUbergraph_WBP_Recollection_MovieList
struct UWBP_Recollection_MovieList_C_ExecuteUbergraph_WBP_Recollection_MovieList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
