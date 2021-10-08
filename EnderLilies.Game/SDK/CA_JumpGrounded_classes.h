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

// BlueprintGeneratedClass CA_JumpGrounded.CA_JumpGrounded_C
// 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
class UCA_JumpGrounded_C : public UCA_Jump_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_JumpGrounded.CA_JumpGrounded_C");
		return ptr;
	}



	bool CanStartCommandAction();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
