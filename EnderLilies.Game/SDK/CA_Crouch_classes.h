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

// BlueprintGeneratedClass CA_Crouch.CA_Crouch_C
// 0x000F (FullSize[0x0310] - InheritedSize[0x0301])
class UCA_Crouch_C : public UCA_Base_InputHold_C
{
public:
	unsigned char                                      UnknownData_WDLM[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0308(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_Crouch.CA_Crouch_C");
		return ptr;
	}



	void OnStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void ExecuteUbergraph_CA_Crouch(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
