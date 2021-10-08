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

// BlueprintGeneratedClass CA_s5030_Dash_Attack_GroundLv1.CA_s5030_Dash_Attack_GroundLv1_C
// 0x0019 (FullSize[0x0339] - InheritedSize[0x0320])
class UCA_s5030_Dash_Attack_GroundLv1_C : public UCA_Spirit_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                              FallStates;                                                // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               AddedFallStates;                                           // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_s5030_Dash_Attack_GroundLv1.CA_s5030_Dash_Attack_GroundLv1_C");
		return ptr;
	}



	void OnFall();
	void OnStartCommandAction();
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void ExecuteUbergraph_CA_s5030_Dash_Attack_GroundLv1(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
