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
//		Name   -> Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.OnReady_DA4995B24DCA828804B34EAB8F3BFE41
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_ZenithPlayerStart_C::OnReady_DA4995B24DCA828804B34EAB8F3BFE41()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.OnReady_DA4995B24DCA828804B34EAB8F3BFE41");

	ABP_ZenithPlayerStart_C_OnReady_DA4995B24DCA828804B34EAB8F3BFE41_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.OnReady_F13B2D194E945BB1D5D4F98A77744A89
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_ZenithPlayerStart_C::OnReady_F13B2D194E945BB1D5D4F98A77744A89()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.OnReady_F13B2D194E945BB1D5D4F98A77744A89");

	ABP_ZenithPlayerStart_C_OnReady_F13B2D194E945BB1D5D4F98A77744A89_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.OnPlayerRespawn
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ZenithPlayerStart_C::OnPlayerRespawn(class APlayerController* PlayerController, class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.OnPlayerRespawn");

	ABP_ZenithPlayerStart_C_OnPlayerRespawn_Params params;
	params.PlayerController = PlayerController;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.PostWorldLoading
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_ZenithPlayerStart_C::PostWorldLoading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.PostWorldLoading");

	ABP_ZenithPlayerStart_C_PostWorldLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.OnSaveFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ZenithPlayerStart_C::OnSaveFinished(bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.OnSaveFinished");

	ABP_ZenithPlayerStart_C_OnSaveFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.ExecuteUbergraph_BP_ZenithPlayerStart
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ZenithPlayerStart_C::ExecuteUbergraph_BP_ZenithPlayerStart(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ZenithPlayerStart.BP_ZenithPlayerStart_C.ExecuteUbergraph_BP_ZenithPlayerStart");

	ABP_ZenithPlayerStart_C_ExecuteUbergraph_BP_ZenithPlayerStart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
