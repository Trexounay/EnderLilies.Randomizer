#pragma once

// Name: enderlilies, Version: 1.1.3_chest


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

// BlueprintGeneratedClass BP_Interactable_Passives_Treasure.BP_Interactable_Passives_Treasure_C
// 0x0000 (FullSize[0x03E1] - InheritedSize[0x03E1])
class ABP_Interactable_Passives_Treasure_C : public ABP_Interactable_Treasure_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_Passives_Treasure.BP_Interactable_Passives_Treasure_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
