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

// BlueprintGeneratedClass BTDecorator_CanMove.BTDecorator_CanMove_C
// 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
class UBTDecorator_CanMove_C : public UBTDecorator_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTDecorator_CanMove.BTDecorator_CanMove_C");
		return ptr;
	}



	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
