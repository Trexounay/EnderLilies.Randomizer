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
// Enums
//---------------------------------------------------------------------------

// Enum NavigationSystem.ERuntimeGenerationType
enum class NavigationSystem_ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4,

};

// Enum NavigationSystem.ENavCostDisplay
enum class NavigationSystem_ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3,

};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class NavigationSystem_ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override = 0,
	ENavSystemOverridePolicy__Append = 1,
	ENavSystemOverridePolicy__Skip = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX = 3,

};

// Enum NavigationSystem.ERecastPartitioning
enum class NavigationSystem_ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaID;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VP1O[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AreaClass;                                                 // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extent;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0WY1[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TravelCostOverride;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnteringCostOverride;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsExcluded : 1;                                           // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideTravelCost : 1;                                   // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverrideEnteringCost : 1;                                 // 0x0010(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LZ35[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag1 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag2 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag3 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag4 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag5 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag6 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag7 : 1;                                             // 0x0000(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag8 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag9 : 1;                                             // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag10 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag11 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag12 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag13 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag14 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bNavFlag15 : 1;                                            // 0x0001(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MTPO[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData_G9H8[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// 0x0008 (0x0070 - 0x0068)
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
	uint32_t                                           NavLinkUserId;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8P1A[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// 0x0040
struct FRecastNavMeshGenerationProperties
{
	int                                                TilePoolSize;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TileSizeUU;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellSize;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CellHeight;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentRadius;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentHeight;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxSlope;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AgentMaxStepHeight;                                        // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinRegionArea;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MergeRegionSize;                                           // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSimplificationError;                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileNumberHardLimit;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<NavigationSystem_ERecastPartitioning>  RegionPartitioning;                                        // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<NavigationSystem_ERecastPartitioning>  LayerPartitioning;                                         // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QD67[0x2];                                     // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RegionChunkSplits;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerChunkSplits;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSortNavigationAreasByCost : 1;                            // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bPerformVoxelFiltering : 1;                                // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bMarkLowHeightAreas : 1;                                   // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bUseExtraTopCellWhenMarkingAreas : 1;                      // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanSequences : 1;                               // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFilterLowSpanFromTileCache : 1;                           // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bFixedTilePoolSize : 1;                                    // 0x003C(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MAGG[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Height;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
