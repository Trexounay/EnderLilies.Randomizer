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

// BlueprintGeneratedClass Cave_01_GAMEPLAY_LevelInstance_3.Cave_01_GAMEPLAY_C
// 0x0028 (FullSize[0x0250] - InheritedSize[0x0228])
class ACave_01_GAMEPLAY_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_CameraClampVolume_C*                     BP_CameraClampVolume_EarlyAccess_ExecuteUbergraph_Cave_01_GAMEPLAY_RefProperty; // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Trigger_Dialog_NonUnique_C*              BP_Trigger_Dialog_NonUnique_EndEarlyAccess_ExecuteUbergraph_Cave_01_GAMEPLAY_RefProperty; // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABlockingVolume*                             BlockingVolume_Early_ExecuteUbergraph_Cave_01_GAMEPLAY_RefProperty; // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WorldTravelVolume_C*                     BP_WorldTravelVolume3_ExecuteUbergraph_Cave_01_GAMEPLAY_RefProperty; // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Cave_01_GAMEPLAY_LevelInstance_3.Cave_01_GAMEPLAY_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_Cave_01_GAMEPLAY(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
