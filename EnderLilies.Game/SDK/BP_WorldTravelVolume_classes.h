﻿#pragma once

// Name: enderlilies, Version: 1.1.3

#include "pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

struct ABP_Interactable_WorldTravel_C_Params
{
	class AController* Controller;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

class ABP_Interactable_WorldTravel_C : public ABP_Interactable_Base_C
{
public:
	unsigned char                                      UnknownData_16UF[0x7];								      // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                         GameMapToLoad;                                             // 0x0320(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FName                                       PlayerStartTag;                                            // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void OnInteract(class AController* Controller)
	{
		UFunction* fn = UObject::FindFunction("BP_Interactable_WorldTravel_C.OnInteract");
		//UFunction* fn = UObject::FindObject<UFunction>("Function BP_Interactable_WorldTravel.BP_Interactable_WorldTravel_C.OnInteract");

		ABP_Interactable_WorldTravel_C_Params params;
		params.Controller = Controller;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;

		this->ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

	}
};


// BlueprintGeneratedClass BP_WorldTravelVolume.BP_WorldTravelVolume_C
// 0x0020 (FullSize[0x0248] - InheritedSize[0x0228])
class ABP_WorldTravelVolume_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                         GameMapToLoad;                                             // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)
	struct FName                                       PlayerStartTag;                                            // 0x0240(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldTravelVolume.BP_WorldTravelVolume_C");
		return ptr;
	}



	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void OnPlayerEnter();
	void ExecuteUbergraph_BP_WorldTravelVolume(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
