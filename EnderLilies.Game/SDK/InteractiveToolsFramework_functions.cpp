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
//		Offset -> 0x02CC58F0
//		Name   -> Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bWorldIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState");

	UGizmoBaseComponent_UpdateWorldLocalState_Params params;
	params.bWorldIn = bWorldIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5860
//		Name   -> Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               bHoveringIn                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState");

	UGizmoBaseComponent_UpdateHoverState_Params params;
	params.bHoveringIn = bHoveringIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC56F0
//		Name   -> Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
//		Flags  -> (Native, Public, HasOutParms, HasDefaults)
// Parameters:
//		struct FTransform                                  NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGizmoTransformSource::SetTransform(const struct FTransform& NewTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.SetTransform");

	UGizmoTransformSource_SetTransform_Params params;
	params.NewTransform = NewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5560
//		Name   -> Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
//		Flags  -> (Native, Public, HasDefaults, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UGizmoTransformSource::GetTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoTransformSource.GetTransform");

	UGizmoTransformSource_GetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D50950
//		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
//		Flags  -> (Native, Public, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGizmoAxisSource::HasTangentVectors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors");

	UGizmoAxisSource_HasTangentVectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02CC5470
//		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, Const)
// Parameters:
//		struct FVector                                     TangentXOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     TangentYOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoAxisSource::GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors");

	UGizmoAxisSource_GetTangentVectors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TangentXOut != nullptr)
		*TangentXOut = params.TangentXOut;
	if (TangentYOut != nullptr)
		*TangentYOut = params.TangentYOut;

}


// Function:
//		Offset -> 0x02CC53C0
//		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
//		Flags  -> (Native, Public, HasDefaults, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGizmoAxisSource::GetOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin");

	UGizmoAxisSource_GetOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02CC5380
//		Name   -> Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
//		Flags  -> (Native, Public, HasDefaults, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UGizmoAxisSource::GetDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoAxisSource.GetDirection");

	UGizmoAxisSource_GetDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02CC57D0
//		Name   -> Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
//		Flags  -> (Native, Public, Const)
// Parameters:
//		bool                                               bHovering                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoClickTarget::UpdateHoverState(bool bHovering)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState");

	UGizmoClickTarget_UpdateHoverState_Params params;
	params.bHovering = bHovering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5320
//		Name   -> Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
//		Flags  -> (Native, Public)
void UGizmoStateTarget::EndUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate");

	UGizmoStateTarget_EndUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5340
//		Name   -> Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
//		Flags  -> (Native, Public)
void UGizmoStateTarget::BeginUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate");

	UGizmoStateTarget_BeginUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC55D0
//		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
//		Flags  -> (Native, Public)
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoFloatParameterSource::SetParameter(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter");

	UGizmoFloatParameterSource_SetParameter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5400
//		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
//		Flags  -> (Native, Public, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UGizmoFloatParameterSource::GetParameter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter");

	UGizmoFloatParameterSource_GetParameter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02CC5360
//		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
//		Flags  -> (Native, Public)
void UGizmoFloatParameterSource::EndModify()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify");

	UGizmoFloatParameterSource_EndModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5320
//		Name   -> Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
//		Flags  -> (Native, Public)
void UGizmoFloatParameterSource::BeginModify()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify");

	UGizmoFloatParameterSource_BeginModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5660
//		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
//		Flags  -> (Native, Public, HasOutParms, HasDefaults)
// Parameters:
//		struct FVector2D                                   NewValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGizmoVec2ParameterSource::SetParameter(const struct FVector2D& NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter");

	UGizmoVec2ParameterSource_SetParameter_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5430
//		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
//		Flags  -> (Native, Public, HasDefaults, Const)
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UGizmoVec2ParameterSource::GetParameter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter");

	UGizmoVec2ParameterSource_GetParameter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02CC5360
//		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
//		Flags  -> (Native, Public)
void UGizmoVec2ParameterSource::EndModify()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify");

	UGizmoVec2ParameterSource_EndModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02CC5320
//		Name   -> Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
//		Flags  -> (Native, Public)
void UGizmoVec2ParameterSource::BeginModify()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify");

	UGizmoVec2ParameterSource_BeginModify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
