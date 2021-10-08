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
//		Name   -> Function PlayerCameraManagerZenith.PlayerCameraManagerZenith_C.OnPostUpdateCamera
//		Flags  -> (Event, Protected, BlueprintEvent)
void APlayerCameraManagerZenith_C::OnPostUpdateCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerCameraManagerZenith.PlayerCameraManagerZenith_C.OnPostUpdateCamera");

	APlayerCameraManagerZenith_C_OnPostUpdateCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PlayerCameraManagerZenith.PlayerCameraManagerZenith_C.ExecuteUbergraph_PlayerCameraManagerZenith
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APlayerCameraManagerZenith_C::ExecuteUbergraph_PlayerCameraManagerZenith(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerCameraManagerZenith.PlayerCameraManagerZenith_C.ExecuteUbergraph_PlayerCameraManagerZenith");

	APlayerCameraManagerZenith_C_ExecuteUbergraph_PlayerCameraManagerZenith_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
