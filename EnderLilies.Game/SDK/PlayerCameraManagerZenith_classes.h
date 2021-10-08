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

// BlueprintGeneratedClass PlayerCameraManagerZenith.PlayerCameraManagerZenith_C
// 0x0008 (FullSize[0x2828] - InheritedSize[0x2820])
class APlayerCameraManagerZenith_C : public APlayerCameraManagerZenithBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x2820(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCameraManagerZenith.PlayerCameraManagerZenith_C");
		return ptr;
	}



	void OnPostUpdateCamera();
	void ExecuteUbergraph_PlayerCameraManagerZenith(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
