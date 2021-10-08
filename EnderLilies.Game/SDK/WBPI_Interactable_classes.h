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

// BlueprintGeneratedClass WBPI_Interactable.WBPI_Interactable_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWBPI_Interactable_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass WBPI_Interactable.WBPI_Interactable_C");
		return ptr;
	}



	void SetInteractionText(const struct FText& InteractionText, Zenith_EInteractableInputType InteractableDirInput);
	void HideInteractableUI();
	void ShowInteractableUI();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
