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

// Enum AudioSynesthesia.EConstantQFFTSizeEnum
enum class AudioSynesthesia_EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min     = 0,
	EConstantQFFTSizeEnum__XXSmall = 1,
	EConstantQFFTSizeEnum__XSmall  = 2,
	EConstantQFFTSizeEnum__Small   = 3,
	EConstantQFFTSizeEnum__Medium  = 4,
	EConstantQFFTSizeEnum__Large   = 5,
	EConstantQFFTSizeEnum__XLarge  = 6,
	EConstantQFFTSizeEnum__XXLarge = 7,
	EConstantQFFTSizeEnum__Max     = 8,

};

// Enum AudioSynesthesia.EConstantQNormalizationEnum
enum class AudioSynesthesia_EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm = 0,
	EConstantQNormalizationEnum__EqualEnergy = 1,
	EConstantQNormalizationEnum__EqualAmplitude = 2,
	EConstantQNormalizationEnum__EConstantQNormalizationEnum_MAX = 3,

};

// Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
enum class AudioSynesthesia_ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A   = 0,
	ELoudnessNRTCurveTypeEnum__B   = 1,
	ELoudnessNRTCurveTypeEnum__C   = 2,
	ELoudnessNRTCurveTypeEnum__D   = 3,
	ELoudnessNRTCurveTypeEnum__None = 4,
	ELoudnessNRTCurveTypeEnum__ELoudnessNRTCurveTypeEnum_MAX = 5,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
