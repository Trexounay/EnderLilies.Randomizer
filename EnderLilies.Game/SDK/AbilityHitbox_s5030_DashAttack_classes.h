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

// BlueprintGeneratedClass AbilityHitbox_s5030_DashAttack.AbilityHitbox_s5030_DashAttack_C
// 0x0008 (FullSize[0x0400] - InheritedSize[0x03F8])
class AAbilityHitbox_s5030_DashAttack_C : public AAbilityHitbox_Default_C
{
public:
	class UAE_BreakDashBlocks_C*                       AE_BreakDashBlocks;                                        // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AbilityHitbox_s5030_DashAttack.AbilityHitbox_s5030_DashAttack_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
