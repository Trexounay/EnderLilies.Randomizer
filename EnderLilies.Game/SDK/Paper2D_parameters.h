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

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
struct UPaperFlipbook_IsValidKeyFrameIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetTotalDuration
struct UPaperFlipbook_GetTotalDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtTime
struct UPaperFlipbook_GetSpriteAtTime_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClampToEnds;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSprite*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
struct UPaperFlipbook_GetSpriteAtFrame_Params
{
	int                                                FrameIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperSprite*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetNumKeyFrames
struct UPaperFlipbook_GetNumKeyFrames_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetNumFrames
struct UPaperFlipbook_GetNumFrames_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
struct UPaperFlipbook_GetKeyFrameIndexAtTime_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bClampToEnds;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.Stop
struct UPaperFlipbookComponent_Stop_Params
{
};

// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
struct UPaperFlipbookComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetPlayRate
struct UPaperFlipbookComponent_SetPlayRate_Params
{
	float                                              NewRate;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
struct UPaperFlipbookComponent_SetPlaybackPositionInFrames_Params
{
	int                                                NewFramePosition;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFireEvents;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
struct UPaperFlipbookComponent_SetPlaybackPosition_Params
{
	float                                              NewPosition;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFireEvents;                                               // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetNewTime
struct UPaperFlipbookComponent_SetNewTime_Params
{
	float                                              NewTime;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetLooping
struct UPaperFlipbookComponent_SetLooping_Params
{
	bool                                               bNewLooping;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.SetFlipbook
struct UPaperFlipbookComponent_SetFlipbook_Params
{
	class UPaperFlipbook*                              NewFlipbook;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
struct UPaperFlipbookComponent_ReverseFromEnd_Params
{
};

// Function Paper2D.PaperFlipbookComponent.Reverse
struct UPaperFlipbookComponent_Reverse_Params
{
};

// Function Paper2D.PaperFlipbookComponent.PlayFromStart
struct UPaperFlipbookComponent_PlayFromStart_Params
{
};

// Function Paper2D.PaperFlipbookComponent.Play
struct UPaperFlipbookComponent_Play_Params
{
};

// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
struct UPaperFlipbookComponent_OnRep_SourceFlipbook_Params
{
	class UPaperFlipbook*                              OldFlipbook;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.IsReversing
struct UPaperFlipbookComponent_IsReversing_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.IsPlaying
struct UPaperFlipbookComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.IsLooping
struct UPaperFlipbookComponent_IsLooping_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetSpriteColor
struct UPaperFlipbookComponent_GetSpriteColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetPlayRate
struct UPaperFlipbookComponent_GetPlayRate_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
struct UPaperFlipbookComponent_GetPlaybackPositionInFrames_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
struct UPaperFlipbookComponent_GetPlaybackPosition_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
struct UPaperFlipbookComponent_GetFlipbookLengthInFrames_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
struct UPaperFlipbookComponent_GetFlipbookLength_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
struct UPaperFlipbookComponent_GetFlipbookFramerate_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperFlipbookComponent.GetFlipbook
struct UPaperFlipbookComponent_GetFlipbook_Params
{
	class UPaperFlipbook*                              ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
struct UPaperGroupedSpriteComponent_UpdateInstanceTransform_Params
{
	int                                                InstanceIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  NewInstanceTransform;                                      // 0x0010(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMarkRenderStateDirty;                                     // 0x0041(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTeleport;                                                 // 0x0042(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0043(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
struct UPaperGroupedSpriteComponent_UpdateInstanceColor_Params
{
	int                                                InstanceIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                NewInstanceColor;                                          // 0x0004(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMarkRenderStateDirty;                                     // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
struct UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Params
{
	struct FVector                                     WorldSpaceSortAxis;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
struct UPaperGroupedSpriteComponent_RemoveInstance_Params
{
	int                                                InstanceIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
struct UPaperGroupedSpriteComponent_GetInstanceTransform_Params
{
	int                                                InstanceIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  OutInstanceTransform;                                      // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
struct UPaperGroupedSpriteComponent_GetInstanceCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
struct UPaperGroupedSpriteComponent_ClearInstances_Params
{
};

// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
struct UPaperGroupedSpriteComponent_AddInstance_Params
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                                Sprite;                                                    // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x003C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
struct UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params
{
	class UPaperSprite*                                Sprite;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ReturnValue;                                               // 0x0010(0x0088)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperSpriteComponent.SetSpriteColor
struct UPaperSpriteComponent_SetSpriteColor_Params
{
	struct FLinearColor                                NewColor;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperSpriteComponent.SetSprite
struct UPaperSpriteComponent_SetSprite_Params
{
	class UPaperSprite*                                NewSprite;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperSpriteComponent.GetSprite
struct UPaperSpriteComponent_GetSprite_Params
{
	class UPaperSprite*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTerrainComponent.SetTerrainColor
struct UPaperTerrainComponent_SetTerrainColor_Params
{
	struct FLinearColor                                NewColor;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetTileMapColor
struct UPaperTileMapComponent_SetTileMapColor_Params
{
	struct FLinearColor                                NewColor;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetTileMap
struct UPaperTileMapComponent_SetTileMap_Params
{
	class UPaperTileMap*                               NewTileMap;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetTile
struct UPaperTileMapComponent_SetTile_Params
{
	int                                                X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaperTileInfo                              NewValue;                                                  // 0x0010(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetLayerColor
struct UPaperTileMapComponent_SetLayerColor_Params
{
	struct FLinearColor                                NewColor;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetLayerCollision
struct UPaperTileMapComponent_SetLayerCollision_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasCollision;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideThickness;                                        // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomThickness;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideOffset;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CustomOffset;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildCollision;                                         // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
struct UPaperTileMapComponent_SetDefaultCollisionThickness_Params
{
	float                                              Thickness;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRebuildCollision;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.ResizeMap
struct UPaperTileMapComponent_ResizeMap_Params
{
	int                                                NewWidthInTiles;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NewHeightInTiles;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.RebuildCollision
struct UPaperTileMapComponent_RebuildCollision_Params
{
};

// Function Paper2D.PaperTileMapComponent.OwnsTileMap
struct UPaperTileMapComponent_OwnsTileMap_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
struct UPaperTileMapComponent_MakeTileMapEditable_Params
{
};

// Function Paper2D.PaperTileMapComponent.GetTilePolygon
struct UPaperTileMapComponent_GetTilePolygon_Params
{
	int                                                TileX;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileY;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Points;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                LayerIndex;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetTileMapColor
struct UPaperTileMapComponent_GetTileMapColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
struct UPaperTileMapComponent_GetTileCornerPosition_Params
{
	int                                                TileX;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileY;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
struct UPaperTileMapComponent_GetTileCenterPosition_Params
{
	int                                                TileX;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileY;                                                     // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LayerIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWorldSpace;                                               // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetTile
struct UPaperTileMapComponent_GetTile_Params
{
	int                                                X;                                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Y;                                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaperTileInfo                              ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetMapSize
struct UPaperTileMapComponent_GetMapSize_Params
{
	int                                                MapWidth;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapHeight;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumLayers;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.GetLayerColor
struct UPaperTileMapComponent_GetLayerColor_Params
{
	int                                                Layer;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
struct UPaperTileMapComponent_CreateNewTileMap_Params
{
	int                                                MapWidth;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapHeight;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileWidth;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TileHeight;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PixelsPerUnrealUnit;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCreateLayer;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.PaperTileMapComponent.AddNewLayer
struct UPaperTileMapComponent_AddNewLayer_Params
{
	class UPaperTileLayer*                             ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.TileMapBlueprintLibrary.MakeTile
struct UTileMapBlueprintLibrary_MakeTile_Params
{
	int                                                TileIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperTileSet*                               TileSet;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipH;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipV;                                                    // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipD;                                                    // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPaperTileInfo                              ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
struct UTileMapBlueprintLibrary_GetTileUserData_Params
{
	struct FPaperTileInfo                              Tile;                                                      // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
struct UTileMapBlueprintLibrary_GetTileTransform_Params
{
	struct FPaperTileInfo                              Tile;                                                      // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Paper2D.TileMapBlueprintLibrary.BreakTile
struct UTileMapBlueprintLibrary_BreakTile_Params
{
	struct FPaperTileInfo                              Tile;                                                      // 0x0000(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                TileIndex;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperTileSet*                               TileSet;                                                   // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipH;                                                    // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipV;                                                    // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipD;                                                    // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
