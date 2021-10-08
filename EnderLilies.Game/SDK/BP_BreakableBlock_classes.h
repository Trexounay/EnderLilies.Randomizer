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

// BlueprintGeneratedClass BP_BreakableBlock.BP_BreakableBlock_C
// 0x0014 (FullSize[0x0354] - InheritedSize[0x0340])
class ABP_BreakableBlock_C : public ABP_Breakable_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStateComponent*                             State;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                BreakNecessaryAttackLevel;                                 // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableBlock.BP_BreakableBlock_C");
		return ptr;
	}



	void TryBreakBlock(class AActor* From, int AttackLevel);
	void OnAttackLevelInsufficient(int AttackLevel, int NecessaryAttackLevel);
	void ExecuteUbergraph_BP_BreakableBlock(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
