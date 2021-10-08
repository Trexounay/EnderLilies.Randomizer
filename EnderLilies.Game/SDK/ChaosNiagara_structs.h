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

// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ChaosNiagara_ELocationZToSpawnEnum : uint8_t
{
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None = 0,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min = 1,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max = 2,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ELocationZToSpawnEnum__ChaosNiagara_Max = 4,

};

// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ChaosNiagara_ELocationYToSpawnEnum : uint8_t
{
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None = 0,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min = 1,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max = 2,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ELocationYToSpawnEnum__ChaosNiagara_Max = 4,

};

// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ChaosNiagara_ELocationXToSpawnEnum : uint8_t
{
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None = 0,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min = 1,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max = 2,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ELocationXToSpawnEnum__ChaosNiagara_Max = 4,

};

// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ChaosNiagara_ELocationFilteringModeEnum : uint8_t
{
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ELocationFilteringModeEnum__ChaosNiagara_Max = 2,

};

// Enum ChaosNiagara.EDataSourceTypeEnum
enum class ChaosNiagara_EDataSourceTypeEnum : uint8_t
{
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision = 0,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking = 1,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing = 2,
	EDataSourceTypeEnum__ChaosNiagara_Max = 3,

};

// Enum ChaosNiagara.EDebugTypeEnum
enum class ChaosNiagara_EDebugTypeEnum : uint8_t
{
	EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug = 0,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver = 1,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	EDebugTypeEnum__ChaosNiagara_Max = 3,

};

// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ChaosNiagara_ERandomVelocityGenerationTypeEnum : uint8_t
{
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max = 3,

};

// Enum ChaosNiagara.EDataSortTypeEnum
enum class ChaosNiagara_EDataSortTypeEnum : uint8_t
{
	EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting = 0,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle = 1,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	EDataSortTypeEnum__ChaosNiagara_Max = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosNiagara.ChaosDestructionEvent
// 0x0044
struct FChaosDestructionEvent
{
	struct FVector                                     Position;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0018(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularVelocity;                                           // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtentMin;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtentMax;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParticleID;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Type;                                                      // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
