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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralRenderMeshPlugin.ProcRenderUpdateSettings
// 0x0008
struct FProcRenderUpdateSettings
{
	bool                                               bUpdatePositionData;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateColorData;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateNormalData;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateTangentData;                                        // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateUV0Data;                                            // 0x0004(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateUV1Data;                                            // 0x0005(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateUV2Data;                                            // 0x0006(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUpdateUV3Data;                                            // 0x0007(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ProceduralRenderMeshPlugin.ProcRenderMeshSection
// 0x0070
struct FProcRenderMeshSection
{
	TArray<struct FVector>                             Positions;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                   // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FColor>                              Colors;                                                    // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           UVs;                                                       // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint16_t>                                   ProcIndexBuffer;                                           // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBox                                        SectionLocalBox;                                           // 0x0050(0x001C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bEnableCollision;                                          // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSectionVisible;                                           // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0G79[0x2];                                     // 0x006E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct ProceduralRenderMeshPlugin.ProcRenderMeshTangent
// 0x0010
struct FProcRenderMeshTangent
{
	struct FVector                                     TangentX;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipTangentY;                                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZVD9[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ProceduralRenderMeshPlugin.ProcRenderMeshVertex
// 0x004C
struct FProcRenderMeshVertex
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProcRenderMeshTangent                      Tangent;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV0;                                                       // 0x002C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV1;                                                       // 0x0034(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV2;                                                       // 0x003C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV3;                                                       // 0x0044(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
