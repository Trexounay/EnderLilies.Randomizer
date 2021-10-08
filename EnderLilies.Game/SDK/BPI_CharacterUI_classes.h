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

// BlueprintGeneratedClass BPI_CharacterUI.BPI_CharacterUI_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_CharacterUI_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_CharacterUI.BPI_CharacterUI_C");
		return ptr;
	}



	void RequestRemove();
	void Initialize(class AZenithCharacter* Character);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
