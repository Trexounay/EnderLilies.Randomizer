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

// BlueprintGeneratedClass CA_Dive.CA_Dive_C
// 0x0011 (FullSize[0x02F9] - InheritedSize[0x02E8])
class UCA_Dive_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      DiveState;                                                 // 0x02F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDiveStateSet;                                            // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_Dive.CA_Dive_C");
		return ptr;
	}



	bool CanStartCommandAction();
	void OnMovementModeUpdated(TEnumAsByte<Engine_EMovementMode> NewMovementMode, TEnumAsByte<Engine_EMovementMode> PrevMovementMode);
	void OnBreakWaterSurfaceDelegate_Event_1();
	void BindPawnEvents(class APawn* Pawn);
	void UnbindPawnEvents(class APawn* Pawn);
	void RemoveDiveState();
	void OnStartCommandAction();
	void AddDiveState();
	void ExecuteUbergraph_CA_Dive(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
