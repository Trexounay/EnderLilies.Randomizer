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

// Enum Paper2D.EFlipbookCollisionMode
enum class Paper2D_EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision = 0,
	EFlipbookCollisionMode__FirstFrameCollision = 1,
	EFlipbookCollisionMode__EachFrameCollision = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 3,

};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class Paper2D_EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder = 0,
	EPaperSpriteAtlasPadding__PadWithZero = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX = 2,

};

// Enum Paper2D.ETileMapProjectionMode
enum class Paper2D_ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal = 0,
	ETileMapProjectionMode__IsometricDiamond = 1,
	ETileMapProjectionMode__IsometricStaggered = 2,
	ETileMapProjectionMode__HexagonalStaggered = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX = 4,

};

// Enum Paper2D.ESpritePivotMode
enum class Paper2D_ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left     = 0,
	ESpritePivotMode__Top_Center   = 1,
	ESpritePivotMode__Top_Right    = 2,
	ESpritePivotMode__Center_Left  = 3,
	ESpritePivotMode__Center_Center = 4,
	ESpritePivotMode__Center_Right = 5,
	ESpritePivotMode__Bottom_Left  = 6,
	ESpritePivotMode__Bottom_Center = 7,
	ESpritePivotMode__Bottom_Right = 8,
	ESpritePivotMode__Custom       = 9,
	ESpritePivotMode__ESpritePivotMode_MAX = 10,

};

// Enum Paper2D.ESpritePolygonMode
enum class Paper2D_ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox = 0,
	ESpritePolygonMode__TightBoundingBox = 1,
	ESpritePolygonMode__ShrinkWrapped = 2,
	ESpritePolygonMode__FullyCustom = 3,
	ESpritePolygonMode__Diced      = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX = 5,

};

// Enum Paper2D.ESpriteShapeType
enum class Paper2D_ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box          = 0,
	ESpriteShapeType__Circle       = 1,
	ESpriteShapeType__Polygon      = 2,
	ESpriteShapeType__ESpriteShapeType_MAX = 3,

};

// Enum Paper2D.ESpriteCollisionMode
enum class Paper2D_ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None     = 0,
	ESpriteCollisionMode__Use2DPhysics = 1,
	ESpriteCollisionMode__Use3DPhysics = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// 0x0010
struct FPaperFlipbookKeyFrame
{
	class UPaperSprite*                                Sprite;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FrameRun;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QAQS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.SpriteInstanceData
// 0x0050
struct FSpriteInstanceData
{
	struct FMatrix                                     Transform;                                                 // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                                SourceSprite;                                              // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      VertexColor;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialIndex;                                             // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// 0x0038
struct FPaperTerrainMaterialRule
{
	class UPaperSprite*                                StartCap;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperSprite*>                        Body;                                                      // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                                EndCap;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumAngle;                                              // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumAngle;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableCollision;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JBB0[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CollisionOffset;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DrawOrder;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MNHX[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.PaperTileInfo
// 0x0010
struct FPaperTileInfo
{
	class UPaperTileSet*                               TileSet;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PackedTileIndex;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RYX8[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.IntMargin
// 0x0010
struct FIntMargin
{
	int                                                Left;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Top;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Right;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Bottom;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Paper2D.PaperTileSetTerrain
// 0x0018
struct FPaperTileSetTerrain
{
	struct FString                                     TerrainName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CenterTileIndex;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R34O[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// 0x0040
struct FPaperSpriteAtlasSlot
{
	unsigned char                                      SpriteRef[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                AtlasIndex;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                X;                                                         // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                         // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KMCJ[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.SpriteDrawCallRecord
// 0x00D0
struct FSpriteDrawCallRecord
{
	struct FVector                                     Destination;                                               // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RZ3Z[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    BaseTexture;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0TZ9[0x30];                                    // 0x0018(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FColor                                      Color;                                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3BQY[0x84];                                    // 0x004C(0x0084) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.SpriteAssetInitParameters
// 0x0040
struct FSpriteAssetInitParameters
{
	unsigned char                                      UnknownData_RG73[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.PaperSpriteSocket
// 0x0040
struct FPaperSpriteSocket
{
	struct FTransform                                  LocalTransform;                                            // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ILK[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.SpriteGeometryShape
// 0x0030
struct FSpriteGeometryShape
{
	Paper2D_ESpriteShapeType                           ShapeType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LO8L[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           Vertices;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   BoxSize;                                                   // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   BoxPosition;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rotation;                                                  // 0x0028(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNegativeWinding;                                          // 0x002C(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4IL9[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.SpriteGeometryCollection
// 0x0030
struct FSpriteGeometryCollection
{
	TArray<struct FSpriteGeometryShape>                Shapes;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TEnumAsByte<Paper2D_ESpritePolygonMode>            GeometryType;                                              // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OX6F[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PixelsPerSubdivisionX;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PixelsPerSubdivisionY;                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAvoidVertexMerging;                                       // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A2GV[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AlphaThreshold;                                            // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DetailAmount;                                              // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SimplifyEpsilon;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RJ2Q[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Paper2D.PaperTileMetadata
// 0x0040
struct FPaperTileMetadata
{
	struct FName                                       UserDataName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpriteGeometryCollection                   CollisionData;                                             // 0x0008(0x0030) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      TerrainMembership[0x4];                                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XUT5[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
