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

// BlueprintGeneratedClass CA_JumpOutOfWater.CA_JumpOutOfWater_C
// 0x000C (FullSize[0x0334] - InheritedSize[0x0328])
class UCA_JumpOutOfWater_C : public UCA_Jump_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              NecessaryOutOfWaterBodyRatio;                              // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_JumpOutOfWater.CA_JumpOutOfWater_C");
		return ptr;
	}



	bool CanStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void ExecuteUbergraph_CA_JumpOutOfWater(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
