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

// Class SignificanceManager.SignificanceManager
// 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
class USignificanceManager : public UObject
{
public:
	unsigned char                                      UnknownData_05NS[0xE0];                                    // 0x0028(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftClassPath                              SignificanceManagerClassName;                              // 0x0108(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SignificanceManager.SignificanceManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
