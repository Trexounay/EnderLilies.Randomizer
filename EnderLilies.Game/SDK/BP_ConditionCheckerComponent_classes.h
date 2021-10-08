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

// BlueprintGeneratedClass BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UBP_ConditionCheckerComponent_C : public UActorComponent
{
public:
	TEnumAsByte<EConditionOperatorType_EConditionOperatorType> ConditionOperator;                                         // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WZEQ[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTriggerCondition*>                   Conditions;                                                // 0x00B8(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ConditionCheckerComponent.BP_ConditionCheckerComponent_C");
		return ptr;
	}



	void BuildAndCheckConditions(TArray<class UClass*>* Array, class APlayerController* PlayerController, TEnumAsByte<EConditionOperatorType_EConditionOperatorType> Operator, bool* Passed);
	void CheckConditions(class APlayerController* PlayerController, bool* Passed);
	void BuildConditions(TArray<class UClass*>* Array);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
