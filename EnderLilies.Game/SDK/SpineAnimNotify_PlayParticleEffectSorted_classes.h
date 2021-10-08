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

// BlueprintGeneratedClass SpineAnimNotify_PlayParticleEffectSorted.SpineAnimNotify_PlayParticleEffectSorted_C
// 0x0008 (FullSize[0x0098] - InheritedSize[0x0090])
class USpineAnimNotify_PlayParticleEffectSorted_C : public USpineAnimNotify_PlayParticleEffect
{
public:
	Zenith_ETranslucencyLayer                          TranslucencyLayer;                                         // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y5R2[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TranslucencyOffset;                                        // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SpineAnimNotify_PlayParticleEffectSorted.SpineAnimNotify_PlayParticleEffectSorted_C");
		return ptr;
	}



	void CustomizeParticleEffect(class UParticleSystemComponent* ParticleSystem);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
