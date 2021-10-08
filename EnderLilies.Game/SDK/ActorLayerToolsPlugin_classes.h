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

// Class ActorLayerToolsPlugin.ActorLayerToolsBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActorLayerToolsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ActorLayerToolsPlugin.ActorLayerToolsBlueprintLibrary");
		return ptr;
	}



	TArray<class AActor*> STATIC_GetActorsFromLayer(class UObject* WorldContextObject, const struct FLayerName& Layer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
