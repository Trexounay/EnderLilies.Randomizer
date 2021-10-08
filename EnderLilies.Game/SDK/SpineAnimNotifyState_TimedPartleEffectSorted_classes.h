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

// BlueprintGeneratedClass SpineAnimNotifyState_TimedPartleEffectSorted.SpineAnimNotifyState_TimedPartleEffectSorted_C
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class USpineAnimNotifyState_TimedPartleEffectSorted_C : public USpineAnimNotifyState_TimedParticleEffect
{
public:
	Zenith_ETranslucencyLayer                          TranslucencyLayer;                                         // 0x0080(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_05H9[0x3];                                     // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TranslucencyOffset;                                        // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SpineAnimNotifyState_TimedPartleEffectSorted.SpineAnimNotifyState_TimedPartleEffectSorted_C");
		return ptr;
	}



	void CustomizeParticleEffect(class UParticleSystemComponent* ParticleSystem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
