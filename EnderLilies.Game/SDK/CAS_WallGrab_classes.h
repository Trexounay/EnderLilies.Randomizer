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

// BlueprintGeneratedClass CAS_WallGrab.CAS_WallGrab_C
// 0x0018 (FullSize[0x0398] - InheritedSize[0x0380])
class UCAS_WallGrab_C : public UCASummon_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               SummonSetSwitchPressed;                                    // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_V18X[0x7];                                     // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpiritEquipComponent*                       SpiritEquipComponent;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CAS_WallGrab.CAS_WallGrab_C");
		return ptr;
	}



	void CheckSummonSetSwitch();
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void OnInitialize();
	void ExecuteUbergraph_CAS_WallGrab(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
