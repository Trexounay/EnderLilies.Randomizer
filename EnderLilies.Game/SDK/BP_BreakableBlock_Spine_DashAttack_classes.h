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

// BlueprintGeneratedClass BP_BreakableBlock_Spine_DashAttack.BP_BreakableBlock_Spine_DashAttack_C
// 0x000C (FullSize[0x03D0] - InheritedSize[0x03C4])
class ABP_BreakableBlock_Spine_DashAttack_C : public ABP_BreakableBlock_Spine_C
{
public:
	unsigned char                                      UnknownData_FP6V[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableBlock_Spine_DashAttack.BP_BreakableBlock_Spine_DashAttack_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
