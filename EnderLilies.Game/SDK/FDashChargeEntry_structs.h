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

// UserDefinedStruct FDashChargeEntry.FDashChargeEntry
// 0x0020
struct FFDashChargeEntry
{
	float                                              Time_2_0257E012429B434E81C71492C2B5A111;                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KTEC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              States_11_8F41BB0A4BBE8EA04639E18D3DA9576A;                // 0x0008(0x0010) (Edit, BlueprintVisible)
	class UParticleSystem*                             FXToTrigger_12_CE1485A4439479C0E2D3FA9E7A41F48C;           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
