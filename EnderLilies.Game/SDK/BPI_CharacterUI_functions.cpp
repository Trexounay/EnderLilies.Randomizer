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
//		Name   -> Function BPI_CharacterUI.BPI_CharacterUI_C.RequestRemove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBPI_CharacterUI_C::RequestRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_CharacterUI.BPI_CharacterUI_C.RequestRemove");

	UBPI_CharacterUI_C_RequestRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BPI_CharacterUI.BPI_CharacterUI_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_CharacterUI_C::Initialize(class AZenithCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_CharacterUI.BPI_CharacterUI_C.Initialize");

	UBPI_CharacterUI_C_Initialize_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
