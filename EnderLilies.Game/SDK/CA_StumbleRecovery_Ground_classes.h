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

// BlueprintGeneratedClass CA_StumbleRecovery_Ground.CA_StumbleRecovery_Ground_C
// 0x0010 (FullSize[0x0300] - InheritedSize[0x02F0])
class UCA_StumbleRecovery_Ground_C : public UCA_StumbleRecovery_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              SplashSize;                                                // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SplashStrength;                                            // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_StumbleRecovery_Ground.CA_StumbleRecovery_Ground_C");
		return ptr;
	}



	void OnStartCommandAction();
	void ExecuteUbergraph_CA_StumbleRecovery_Ground(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
