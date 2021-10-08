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
// Classes
//---------------------------------------------------------------------------

// Class ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent
// 0x0088 (FullSize[0x04F0] - InheritedSize[0x0468])
class UProceduralRenderMeshComponent : public UMeshComponent
{
public:
	struct FProcRenderUpdateSettings                   SectionCreateSettings;                                     // 0x0468(0x0008) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FProcRenderUpdateSettings                   SectionUpdateSettings;                                     // 0x0470(0x0008) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KWOB[0x48];                                    // 0x0478(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FProcRenderMeshSection>              ProcMeshSections;                                          // 0x04C0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                            LocalBounds;                                               // 0x04D0(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2B5R[0x4];                                     // 0x04EC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ProceduralRenderMeshPlugin.ProceduralRenderMeshComponent");
		return ptr;
	}



	void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	bool IsMeshSectionVisible(int SectionIndex);
	int GetNumSections();
	void ClearMeshSection(int SectionIndex, bool bUpdateBounds);
	void ClearAllMeshSections();
};

// Class ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent
// 0x0058 (FullSize[0x04C0] - InheritedSize[0x0468])
class UProceduralRenderMeshProxyComponent : public UMeshComponent
{
public:
	struct FComponentReference                         MasterProceduralRenderMesh;                                // 0x0468(0x0028) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          MaterialOverride;                                          // 0x0490(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0UZ1[0x28];                                    // 0x0498(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ProceduralRenderMeshPlugin.ProceduralRenderMeshProxyComponent");
		return ptr;
	}



	void OnUpdateBounds();
	void OnRefreshSection(int SectionIndex);
	void OnMarkRenderStateDirty();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
