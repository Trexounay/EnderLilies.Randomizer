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

// Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.SetMeshSectionVisible
struct UProceduralRenderMeshComponent_SetMeshSectionVisible_Params
{
	int                                                SectionIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNewVisibility;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.IsMeshSectionVisible
struct UProceduralRenderMeshComponent_IsMeshSectionVisible_Params
{
	int                                                SectionIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.GetNumSections
struct UProceduralRenderMeshComponent_GetNumSections_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.ClearMeshSection
struct UProceduralRenderMeshComponent_ClearMeshSection_Params
{
	int                                                SectionIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateBounds;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent.ClearAllMeshSections
struct UProceduralRenderMeshComponent_ClearAllMeshSections_Params
{
};

// Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnUpdateBounds
struct UProceduralRenderMeshProxyComponent_OnUpdateBounds_Params
{
};

// Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnRefreshSection
struct UProceduralRenderMeshProxyComponent_OnRefreshSection_Params
{
	int                                                SectionIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent.OnMarkRenderStateDirty
struct UProceduralRenderMeshProxyComponent_OnMarkRenderStateDirty_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
