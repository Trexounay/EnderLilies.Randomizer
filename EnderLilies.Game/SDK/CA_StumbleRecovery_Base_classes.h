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

// BlueprintGeneratedClass CA_StumbleRecovery_Base.CA_StumbleRecovery_Base_C
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UCA_StumbleRecovery_Base_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_StumbleRecovery_Base.CA_StumbleRecovery_Base_C");
		return ptr;
	}



	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void OnRemovedFromBuffer();
	void ExecuteUbergraph_CA_StumbleRecovery_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
