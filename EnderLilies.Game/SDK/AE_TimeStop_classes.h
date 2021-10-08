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

// BlueprintGeneratedClass AE_TimeStop.AE_TimeStop_C
// 0x000C (FullSize[0x0114] - InheritedSize[0x0108])
class UAE_TimeStop_C : public UAbilityEffectTimedComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0108(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimeDilation;                                              // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AE_TimeStop.AE_TimeStop_C");
		return ptr;
	}



	void OnFinish_5831EB8E400B5AC991EA4B86FD353718();
	void OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos);
	void ExecuteUbergraph_AE_TimeStop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
