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

// BlueprintGeneratedClass CAS_s5050_PileAttackGround_Lv3.CAS_s5050_PileAttackGround_Lv3_C
// 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
class UCAS_s5050_PileAttackGround_Lv3_C : public UCASummon_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CAS_s5050_PileAttackGround_Lv3.CAS_s5050_PileAttackGround_Lv3_C");
		return ptr;
	}



	void OnStartCommandAction();
	void ExecuteUbergraph_CAS_s5050_PileAttackGround_Lv3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
