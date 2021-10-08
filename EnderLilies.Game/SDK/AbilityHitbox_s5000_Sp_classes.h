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

// BlueprintGeneratedClass AbilityHitbox_s5000_Sp.AbilityHitbox_s5000_Sp_C
// 0x0010 (FullSize[0x0408] - InheritedSize[0x03F8])
class AAbilityHitbox_s5000_Sp_C : public AAbilityHitbox_Default_C
{
public:
	class UAE_TimeStop_C*                              AE_TimeStop;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAE_PlaySpecificSE_C*                        AE_PlaySpecificSE;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AbilityHitbox_s5000_Sp.AbilityHitbox_s5000_Sp_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
