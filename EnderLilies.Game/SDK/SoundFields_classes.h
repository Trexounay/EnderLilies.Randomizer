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

// Class SoundFields.AmbisonicsEncodingSettings
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{
public:
	int                                                AmbisonicsOrder;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1OZH[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SoundFields.AmbisonicsEncodingSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
