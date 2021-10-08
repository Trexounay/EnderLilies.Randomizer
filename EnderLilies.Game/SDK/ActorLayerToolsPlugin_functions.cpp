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
//		Offset -> 0x007C6AD0
//		Name   -> Function ActorLayerToolsPlugin.ActorLayerToolsBlueprintLibrary.GetActorsFromLayer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLayerName                                  Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> UActorLayerToolsBlueprintLibrary::STATIC_GetActorsFromLayer(class UObject* WorldContextObject, const struct FLayerName& Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActorLayerToolsPlugin.ActorLayerToolsBlueprintLibrary.GetActorsFromLayer");

	UActorLayerToolsBlueprintLibrary_GetActorsFromLayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
