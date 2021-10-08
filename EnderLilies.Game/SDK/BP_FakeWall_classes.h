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

// BlueprintGeneratedClass BP_FakeWall.BP_FakeWall_C
// 0x0029 (FullSize[0x0259] - InheritedSize[0x0230])
class ABP_FakeWall_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPaperSpriteComponent*                       PaperSprite;                                               // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBillboardComponent*                         Billboard;                                                 // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FadeOut_Alpha_7EF52E9443FF1F04215AA8B527169899;            // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeOut__Direction_7EF52E9443FF1F04215AA8B527169899;       // 0x024C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_NRMG[0x3];                                     // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeOut;                                                   // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Disappeared;                                               // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_FakeWall.BP_FakeWall_C");
		return ptr;
	}



	void IsDisappeared(bool* Disappeared);
	void UserConstructionScript();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void Disappear();
	void ForceDisappear();
	void ExecuteUbergraph_BP_FakeWall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
