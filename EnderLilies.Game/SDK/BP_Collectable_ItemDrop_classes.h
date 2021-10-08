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

// BlueprintGeneratedClass BP_Collectable_ItemDrop.BP_Collectable_ItemDrop_C
// 0x001F (FullSize[0x02A8] - InheritedSize[0x0289])
class ABP_Collectable_ItemDrop_C : public ABP_Collectable_Base_C
{
public:
	unsigned char                                      UnknownData_XUW9[0x7];                                     // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FDataTableRowHandle                         ItemDataHandle;                                            // 0x0298(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Collectable_ItemDrop.BP_Collectable_ItemDrop_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnGrantDrop();
	void ExecuteUbergraph_BP_Collectable_ItemDrop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
