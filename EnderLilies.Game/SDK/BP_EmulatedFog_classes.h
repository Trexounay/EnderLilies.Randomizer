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

// BlueprintGeneratedClass BP_EmulatedFog.BP_EmulatedFog_C
// 0x002C (FullSize[0x0284] - InheritedSize[0x0258])
class ABP_EmulatedFog_C : public AEmulatedFog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                 // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartXValue;                                               // 0x0278(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Falloff;                                                   // 0x027C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Opacity;                                                   // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_EmulatedFog.BP_EmulatedFog_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnActivateFog();
	void OnDeactivateFog();
	void ExecuteUbergraph_BP_EmulatedFog(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
