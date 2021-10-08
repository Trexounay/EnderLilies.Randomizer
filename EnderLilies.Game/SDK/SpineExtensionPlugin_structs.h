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
// Enums
//---------------------------------------------------------------------------

// Enum SpineExtensionPlugin.ESpineBone
enum class SpineExtensionPlugin_ESpineBone : uint8_t
{
	ESpineBone__None               = 0,
	ESpineBone__Feet               = 1,
	ESpineBone__Root               = 2,
	ESpineBone__Hip                = 3,
	ESpineBone__Head               = 4,
	ESpineBone__Eyes               = 5,
	ESpineBone__Mouth              = 6,
	ESpineBone__FootRight          = 7,
	ESpineBone__FootLeft           = 8,
	ESpineBone__HandRight          = 9,
	ESpineBone__HandLeft           = 10,
	ESpineBone__FX_01              = 11,
	ESpineBone__FX_02              = 12,
	ESpineBone__FX_03              = 13,
	ESpineBone__Hitbox_01          = 14,
	ESpineBone__Hitbox_02          = 15,
	ESpineBone__Weapon_01          = 16,
	ESpineBone__Weapon_02          = 17,
	ESpineBone__Weapon_03          = 18,
	ESpineBone__Custom             = 19,
	ESpineBone__ESpineBone_MAX     = 20,

};

// Enum SpineExtensionPlugin.ESpineBodyPart
enum class SpineExtensionPlugin_ESpineBodyPart : uint8_t
{
	ESpineBodyPart__Body           = 0,
	ESpineBodyPart__Head           = 1,
	ESpineBodyPart__ArmRight       = 2,
	ESpineBodyPart__ArmLeft        = 3,
	ESpineBodyPart__LegRight       = 4,
	ESpineBodyPart__LegLeft        = 5,
	ESpineBodyPart__ESpineBodyPart_MAX = 6,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
