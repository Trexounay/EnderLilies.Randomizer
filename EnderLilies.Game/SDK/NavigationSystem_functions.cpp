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
//		Offset -> 0x02BCF540
//		Name   -> Function NavigationSystem.NavigationPath.IsValid
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");

	UNavigationPath_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00D3E830
//		Name   -> Function NavigationSystem.NavigationPath.IsStringPulled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsStringPulled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	UNavigationPath_IsStringPulled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF510
//		Name   -> Function NavigationSystem.NavigationPath.IsPartial
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationPath::IsPartial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	UNavigationPath_IsPartial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCEDD0
//		Name   -> Function NavigationSystem.NavigationPath.GetPathLength
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNavigationPath::GetPathLength()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	UNavigationPath_GetPathLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCEB70
//		Name   -> Function NavigationSystem.NavigationPath.GetPathCost
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UNavigationPath::GetPathCost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	UNavigationPath_GetPathCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCEA60
//		Name   -> Function NavigationSystem.NavigationPath.GetDebugString
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UNavigationPath::GetDebugString()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	UNavigationPath_GetDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCE600
//		Name   -> Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<Engine_ENavigationOptionFlag>          DoRecalculation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationPath::EnableRecalculationOnInvalidation(TEnumAsByte<Engine_ENavigationOptionFlag> DoRecalculation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	UNavigationPath_EnableRecalculationOnInvalidation_Params params;
	params.DoRecalculation = DoRecalculation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BCE520
//		Name   -> Function NavigationSystem.NavigationPath.EnableDebugDrawing
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		bool                                               bShouldDrawDebugData                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                PathColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, const struct FLinearColor& PathColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	UNavigationPath_EnableDebugDrawing_Params params;
	params.bShouldDrawDebugData = bShouldDrawDebugData;
	params.PathColor = PathColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD0470
//		Name   -> Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Invoker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor* Invoker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	UNavigationSystemV1_UnregisterNavigationInvoker_Params params;
	params.Invoker = Invoker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD03B0
//		Name   -> Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Goal                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation");

	UNavigationSystemV1_SimpleMoveToLocation_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02AEC6F0
//		Name   -> Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Goal                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor");

	UNavigationSystemV1_SimpleMoveToActor_Params params;
	params.Controller = Controller;
	params.Goal = Goal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD0320
//		Name   -> Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                MaxNumberOfJobs                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystemV1_SetMaxSimultaneousTileGenerationJobsCount_Params params;
	params.MaxNumberOfJobs = MaxNumberOfJobs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD02A0
//		Name   -> Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Engine_ENavDataGatheringModeConfig                 NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::SetGeometryGatheringMode(Engine_ENavDataGatheringModeConfig NewMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	UNavigationSystemV1_SetGeometryGatheringMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD0280
//		Name   -> Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	UNavigationSystemV1_ResetMaxSimultaneousTileGenerationJobsCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD0170
//		Name   -> Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Invoker                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TileGenerationRadius                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TileRemovalRadius                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	UNavigationSystemV1_RegisterNavigationInvoker_Params params;
	params.Invoker = Invoker;
	params.TileGenerationRadius = TileGenerationRadius;
	params.TileRemovalRadius = TileRemovalRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BCFF80
//		Name   -> Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     QueryExtent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation");

	UNavigationSystemV1_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCFEF0
//		Name   -> Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class ANavMeshBoundsVolume*                        NavVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	UNavigationSystemV1_OnNavigationBoundsUpdated_Params params;
	params.NavVolume = NavVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BCFCC0
//		Name   -> Function NavigationSystem.NavigationSystemV1.NavigationRaycast
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RayStart                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RayEnd                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     HitLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AController*                                 Querier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector* HitLocation, class UClass* FilterClass, class AController* Querier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	UNavigationSystemV1_NavigationRaycast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.RayStart = RayStart;
	params.RayEnd = RayEnd;
	params.FilterClass = FilterClass;
	params.Querier = Querier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCFBB0
//		Name   -> Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     Object                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      OldArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      NewArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData");

	UNavigationSystemV1_K2_ReplaceAreaInOctreeData_Params params;
	params.Object = Object;
	params.OldArea = OldArea;
	params.NewArea = NewArea;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF9B0
//		Name   -> Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Point                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ProjectedLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     QueryExtent                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, struct FVector* ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	UNavigationSystemV1_K2_ProjectPointToNavigation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Point = Point;
	params.NavData = NavData;
	params.FilterClass = FilterClass;
	params.QueryExtent = QueryExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ProjectedLocation != nullptr)
		*ProjectedLocation = params.ProjectedLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF790
//		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	UNavigationSystemV1_K2_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF570
//		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	UNavigationSystemV1_K2_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF570
//		Name   -> Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     RandomLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, struct FVector* RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius");

	UNavigationSystemV1_K2_GetRandomLocationInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomLocation != nullptr)
		*RandomLocation = params.RandomLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF480
//		Name   -> Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	UNavigationSystemV1_IsNavigationBeingBuiltOrLocked_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF3F0
//		Name   -> Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UNavigationSystemV1::STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	UNavigationSystemV1_IsNavigationBeingBuilt_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF210
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius");

	UNavigationSystemV1_GetRandomReachablePointInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCF030
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Origin                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UNavigationSystemV1::STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius");

	UNavigationSystemV1_GetRandomPointInNavigableRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCEE00
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetPathLength
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PathLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ENavigationQueryResult>         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathLength, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	UNavigationSystemV1_GetPathLength_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathLength != nullptr)
		*PathLength = params.PathLength;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCEBA0
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetPathCost
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PathCost                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_ENavigationQueryResult>         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<Engine_ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float* PathCost, class ANavigationData* NavData, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	UNavigationSystemV1_GetPathCost_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.NavData = NavData;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PathCost != nullptr)
		*PathCost = params.PathCost;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCEAE0
//		Name   -> Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNavigationSystemV1*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationSystemV1* UNavigationSystemV1::STATIC_GetNavigationSystem(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	UNavigationSystemV1_GetNavigationSystem_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCE890
//		Name   -> Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathEnd                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      PathfindingContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNavigationPath*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	UNavigationSystemV1_FindPathToLocationSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.PathEnd = PathEnd;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BCE680
//		Name   -> Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PathStart                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      GoalActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TetherDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      PathfindingContext                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UNavigationPath*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	UNavigationSystemV1_FindPathToActorSynchronously_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PathStart = PathStart;
	params.GoalActor = GoalActor;
	params.TetherDistance = TetherDistance;
	params.PathfindingContext = PathfindingContext;
	params.FilterClass = FilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x02BD2430
//		Name   -> Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bRelevant                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	UNavRelevantComponent_SetNavigationRelevancy_Params params;
	params.bRelevant = bRelevant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD23A0
//		Name   -> Function NavigationSystem.NavModifierComponent.SetAreaClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      NewAreaClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UNavModifierComponent::SetAreaClass(class UClass* NewAreaClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	UNavModifierComponent_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD2310
//		Name   -> Function NavigationSystem.NavModifierVolume.SetAreaClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      NewAreaClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ANavModifierVolume::SetAreaClass(class UClass* NewAreaClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	ANavModifierVolume_SetAreaClass_Params params;
	params.NewAreaClass = NewAreaClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x02BD2170
//		Name   -> Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FBox                                        Bounds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UClass*                                      OldArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      NewArea                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReplaceLinks                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(const struct FBox& Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds");

	ARecastNavMesh_K2_ReplaceAreaInTileBounds_Params params;
	params.Bounds = Bounds;
	params.OldArea = OldArea;
	params.NewArea = NewArea;
	params.ReplaceLinks = ReplaceLinks;

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
