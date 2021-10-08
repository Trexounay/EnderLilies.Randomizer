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

// BlueprintGeneratedClass BP_s5060_Assassin.BP_s5060_Assassin_C
// 0x000E (FullSize[0x0660] - InheritedSize[0x0652])
class ABP_s5060_Assassin_C : public ABP_SpiritCharacterBase_C
{
public:
	unsigned char                                      UnknownData_DBE8[0x6];                                     // 0x0652(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpineBoneDriverComponent*                   SpineBoneDriver;                                           // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_s5060_Assassin.BP_s5060_Assassin_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
