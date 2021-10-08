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
//		Offset -> 0x007CC570
//		Name   -> Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.SetMeshSectionVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralRenderMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.SetMeshSectionVisible");

	UProceduralRenderMeshComponent_SetMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007CC400
//		Name   -> Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.IsMeshSectionVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProceduralRenderMeshComponent::IsMeshSectionVisible(int SectionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.IsMeshSectionVisible");

	UProceduralRenderMeshComponent_IsMeshSectionVisible_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007CC3D0
//		Name   -> Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.GetNumSections
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UProceduralRenderMeshComponent::GetNumSections()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.GetNumSections");

	UProceduralRenderMeshComponent_GetNumSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x007CC300
//		Name   -> Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.ClearMeshSection
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUpdateBounds                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralRenderMeshComponent::ClearMeshSection(int SectionIndex, bool bUpdateBounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.ClearMeshSection");

	UProceduralRenderMeshComponent_ClearMeshSection_Params params;
	params.SectionIndex = SectionIndex;
	params.bUpdateBounds = bUpdateBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007CC2E0
//		Name   -> Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.ClearAllMeshSections
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UProceduralRenderMeshComponent::ClearAllMeshSections()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.ClearAllMeshSections");

	UProceduralRenderMeshComponent_ClearAllMeshSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007CC550
//		Name   -> Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnUpdateBounds
//		Flags  -> (Final, Native, Private)
void UProceduralRenderMeshProxyComponent::OnUpdateBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnUpdateBounds");

	UProceduralRenderMeshProxyComponent_OnUpdateBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007CC4C0
//		Name   -> Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnRefreshSection
//		Flags  -> (Final, Native, Private)
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralRenderMeshProxyComponent::OnRefreshSection(int SectionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnRefreshSection");

	UProceduralRenderMeshProxyComponent_OnRefreshSection_Params params;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x007CC4A0
//		Name   -> Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnMarkRenderStateDirty
//		Flags  -> (Final, Native, Private)
void UProceduralRenderMeshProxyComponent::OnMarkRenderStateDirty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnMarkRenderStateDirty");

	UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
