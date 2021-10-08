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

// Enum Synthesis.ESynth1PatchDestination
enum class Synthesis_ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain = 0,
	ESynth1PatchDestination__Osc1Frequency = 1,
	ESynth1PatchDestination__Osc1Pulsewidth = 2,
	ESynth1PatchDestination__Osc2Gain = 3,
	ESynth1PatchDestination__Osc2Frequency = 4,
	ESynth1PatchDestination__Osc2Pulsewidth = 5,
	ESynth1PatchDestination__FilterFrequency = 6,
	ESynth1PatchDestination__FilterQ = 7,
	ESynth1PatchDestination__Gain  = 8,
	ESynth1PatchDestination__Pan   = 9,
	ESynth1PatchDestination__LFO1Frequency = 10,
	ESynth1PatchDestination__LFO1Gain = 11,
	ESynth1PatchDestination__LFO2Frequency = 12,
	ESynth1PatchDestination__LFO2Gain = 13,
	ESynth1PatchDestination__Count = 14,
	ESynth1PatchDestination__ESynth1PatchDestination_MAX = 15,

};

// Enum Synthesis.ESynth1PatchSource
enum class Synthesis_ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1       = 0,
	ESynth1PatchSource__LFO2       = 1,
	ESynth1PatchSource__Envelope   = 2,
	ESynth1PatchSource__BiasEnvelope = 3,
	ESynth1PatchSource__Count      = 4,
	ESynth1PatchSource__ESynth1PatchSource_MAX = 5,

};

// Enum Synthesis.ESynthStereoDelayMode
enum class Synthesis_ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal  = 0,
	ESynthStereoDelayMode__Cross   = 1,
	ESynthStereoDelayMode__PingPong = 2,
	ESynthStereoDelayMode__Count   = 3,
	ESynthStereoDelayMode__ESynthStereoDelayMode_MAX = 4,

};

// Enum Synthesis.ESynthFilterAlgorithm
enum class Synthesis_ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole = 0,
	ESynthFilterAlgorithm__StateVariable = 1,
	ESynthFilterAlgorithm__Ladder  = 2,
	ESynthFilterAlgorithm__Count   = 3,
	ESynthFilterAlgorithm__ESynthFilterAlgorithm_MAX = 4,

};

// Enum Synthesis.ESynthFilterType
enum class Synthesis_ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass      = 0,
	ESynthFilterType__HighPass     = 1,
	ESynthFilterType__BandPass     = 2,
	ESynthFilterType__BandStop     = 3,
	ESynthFilterType__Count        = 4,
	ESynthFilterType__ESynthFilterType_MAX = 5,

};

// Enum Synthesis.ESynthModEnvBiasPatch
enum class Synthesis_ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq = 7,
	ESynthModEnvBiasPatch__Count   = 8,
	ESynthModEnvBiasPatch__ESynthModEnvBiasPatch_MAX = 9,

};

// Enum Synthesis.ESynthModEnvPatch
enum class Synthesis_ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone = 0,
	ESynthModEnvPatch__PatchToOscFreq = 1,
	ESynthModEnvPatch__PatchToFilterFreq = 2,
	ESynthModEnvPatch__PatchToFilterQ = 3,
	ESynthModEnvPatch__PatchToLFO1Gain = 4,
	ESynthModEnvPatch__PatchToLFO2Gain = 5,
	ESynthModEnvPatch__PatchToLFO1Freq = 6,
	ESynthModEnvPatch__PatchToLFO2Freq = 7,
	ESynthModEnvPatch__Count       = 8,
	ESynthModEnvPatch__ESynthModEnvPatch_MAX = 9,

};

// Enum Synthesis.ESynthLFOPatchType
enum class Synthesis_ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone = 0,
	ESynthLFOPatchType__PatchToGain = 1,
	ESynthLFOPatchType__PatchToOscFreq = 2,
	ESynthLFOPatchType__PatchToFilterFreq = 3,
	ESynthLFOPatchType__PatchToFilterQ = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth = 5,
	ESynthLFOPatchType__PatchToOscPan = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain = 8,
	ESynthLFOPatchType__Count      = 9,
	ESynthLFOPatchType__ESynthLFOPatchType_MAX = 10,

};

// Enum Synthesis.ESynthLFOMode
enum class Synthesis_ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync            = 0,
	ESynthLFOMode__OneShot         = 1,
	ESynthLFOMode__Free            = 2,
	ESynthLFOMode__Count           = 3,
	ESynthLFOMode__ESynthLFOMode_MAX = 4,

};

// Enum Synthesis.ESynthLFOType
enum class Synthesis_ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine            = 0,
	ESynthLFOType__UpSaw           = 1,
	ESynthLFOType__DownSaw         = 2,
	ESynthLFOType__Square          = 3,
	ESynthLFOType__Triangle        = 4,
	ESynthLFOType__Exponential     = 5,
	ESynthLFOType__RandomSampleHold = 6,
	ESynthLFOType__Count           = 7,
	ESynthLFOType__ESynthLFOType_MAX = 8,

};

// Enum Synthesis.ESynth1OscType
enum class Synthesis_ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine           = 0,
	ESynth1OscType__Saw            = 1,
	ESynth1OscType__Triangle       = 2,
	ESynth1OscType__Square         = 3,
	ESynth1OscType__Noise          = 4,
	ESynth1OscType__Count          = 5,
	ESynth1OscType__ESynth1OscType_MAX = 6,

};

// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class Synthesis_ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESourceEffectDynamicsPeakMode__Peak = 2,
	ESourceEffectDynamicsPeakMode__Count = 3,
	ESourceEffectDynamicsPeakMode__ESourceEffectDynamicsPeakMode_MAX = 4,

};

// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class Synthesis_ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor = 0,
	ESourceEffectDynamicsProcessorType__Limiter = 1,
	ESourceEffectDynamicsProcessorType__Expander = 2,
	ESourceEffectDynamicsProcessorType__Gate = 3,
	ESourceEffectDynamicsProcessorType__Count = 4,
	ESourceEffectDynamicsProcessorType__ESourceEffectDynamicsProcessorType_MAX = 5,

};

// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class Synthesis_EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared = 1,
	EEnvelopeFollowerPeakMode__Peak = 2,
	EEnvelopeFollowerPeakMode__Count = 3,
	EEnvelopeFollowerPeakMode__EEnvelopeFollowerPeakMode_MAX = 4,

};

// Enum Synthesis.ESourceEffectFilterParam
enum class Synthesis_ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency = 0,
	ESourceEffectFilterParam__FilterResonance = 1,
	ESourceEffectFilterParam__Count = 2,
	ESourceEffectFilterParam__ESourceEffectFilterParam_MAX = 3,

};

// Enum Synthesis.ESourceEffectFilterType
enum class Synthesis_ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass = 0,
	ESourceEffectFilterType__HighPass = 1,
	ESourceEffectFilterType__BandPass = 2,
	ESourceEffectFilterType__BandStop = 3,
	ESourceEffectFilterType__Count = 4,
	ESourceEffectFilterType__ESourceEffectFilterType_MAX = 5,

};

// Enum Synthesis.ESourceEffectFilterCircuit
enum class Synthesis_ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole = 0,
	ESourceEffectFilterCircuit__StateVariable = 1,
	ESourceEffectFilterCircuit__Ladder = 2,
	ESourceEffectFilterCircuit__Count = 3,
	ESourceEffectFilterCircuit__ESourceEffectFilterCircuit_MAX = 4,

};

// Enum Synthesis.EStereoChannelMode
enum class Synthesis_EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide    = 0,
	EStereoChannelMode__LeftRight  = 1,
	EStereoChannelMode__count      = 2,
	EStereoChannelMode__EStereoChannelMode_MAX = 3,

};

// Enum Synthesis.EPhaserLFOType
enum class Synthesis_EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine           = 0,
	EPhaserLFOType__UpSaw          = 1,
	EPhaserLFOType__DownSaw        = 2,
	EPhaserLFOType__Square         = 3,
	EPhaserLFOType__Triangle       = 4,
	EPhaserLFOType__Exponential    = 5,
	EPhaserLFOType__RandomSampleHold = 6,
	EPhaserLFOType__Count          = 7,
	EPhaserLFOType__EPhaserLFOType_MAX = 8,

};

// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class Synthesis_ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine = 0,
	ERingModulatorTypeSourceEffect__Saw = 1,
	ERingModulatorTypeSourceEffect__Triangle = 2,
	ERingModulatorTypeSourceEffect__Square = 3,
	ERingModulatorTypeSourceEffect__Count = 4,
	ERingModulatorTypeSourceEffect__ERingModulatorTypeSourceEffect_MAX = 5,

};

// Enum Synthesis.EStereoDelayFiltertype
enum class Synthesis_EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass = 0,
	EStereoDelayFiltertype__Highpass = 1,
	EStereoDelayFiltertype__Bandpass = 2,
	EStereoDelayFiltertype__Notch  = 3,
	EStereoDelayFiltertype__Count  = 4,
	EStereoDelayFiltertype__EStereoDelayFiltertype_MAX = 5,

};

// Enum Synthesis.EStereoDelaySourceEffect
enum class Synthesis_EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal = 0,
	EStereoDelaySourceEffect__Cross = 1,
	EStereoDelaySourceEffect__PingPong = 2,
	EStereoDelaySourceEffect__Count = 3,
	EStereoDelaySourceEffect__EStereoDelaySourceEffect_MAX = 4,

};

// Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class Synthesis_ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256 = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512 = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize__ESubmixEffectConvolutionReverbBlockSize_MAX = 3,

};

// Enum Synthesis.ESubmixFilterAlgorithm
enum class Synthesis_ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole = 0,
	ESubmixFilterAlgorithm__StateVariable = 1,
	ESubmixFilterAlgorithm__Ladder = 2,
	ESubmixFilterAlgorithm__Count  = 3,
	ESubmixFilterAlgorithm__ESubmixFilterAlgorithm_MAX = 4,

};

// Enum Synthesis.ESubmixFilterType
enum class Synthesis_ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass     = 0,
	ESubmixFilterType__HighPass    = 1,
	ESubmixFilterType__BandPass    = 2,
	ESubmixFilterType__BandStop    = 3,
	ESubmixFilterType__Count       = 4,
	ESubmixFilterType__ESubmixFilterType_MAX = 5,

};

// Enum Synthesis.ETapLineMode
enum class Synthesis_ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel    = 0,
	ETapLineMode__Panning          = 1,
	ETapLineMode__Disabled         = 2,
	ETapLineMode__ETapLineMode_MAX = 3,

};

// Enum Synthesis.EGranularSynthSeekType
enum class Synthesis_EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning = 0,
	EGranularSynthSeekType__FromCurrentPosition = 1,
	EGranularSynthSeekType__Count  = 2,
	EGranularSynthSeekType__EGranularSynthSeekType_MAX = 3,

};

// Enum Synthesis.EGranularSynthEnvelopeType
enum class Synthesis_EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular = 0,
	EGranularSynthEnvelopeType__Triangle = 1,
	EGranularSynthEnvelopeType__DownwardTriangle = 2,
	EGranularSynthEnvelopeType__UpwardTriangle = 3,
	EGranularSynthEnvelopeType__ExponentialDecay = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease = 5,
	EGranularSynthEnvelopeType__Gaussian = 6,
	EGranularSynthEnvelopeType__Hanning = 7,
	EGranularSynthEnvelopeType__Lanczos = 8,
	EGranularSynthEnvelopeType__Cosine = 9,
	EGranularSynthEnvelopeType__CosineSquared = 10,
	EGranularSynthEnvelopeType__Welch = 11,
	EGranularSynthEnvelopeType__Blackman = 12,
	EGranularSynthEnvelopeType__BlackmanHarris = 13,
	EGranularSynthEnvelopeType__Count = 14,
	EGranularSynthEnvelopeType__EGranularSynthEnvelopeType_MAX = 15,

};

// Enum Synthesis.CurveInterpolationType
enum class Synthesis_ECurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP = 0,
	CurveInterpolationType__LINEAR = 1,
	CurveInterpolationType__CONSTANT = 2,
	CurveInterpolationType__CurveInterpolationType_MAX = 3,

};

// Enum Synthesis.ESamplePlayerSeekType
enum class Synthesis_ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning = 0,
	ESamplePlayerSeekType__FromCurrentPosition = 1,
	ESamplePlayerSeekType__FromEnd = 2,
	ESamplePlayerSeekType__Count   = 3,
	ESamplePlayerSeekType__ESamplePlayerSeekType_MAX = 4,

};

// Enum Synthesis.ESynthKnobSize
enum class Synthesis_ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium         = 0,
	ESynthKnobSize__Large          = 1,
	ESynthKnobSize__Count          = 2,
	ESynthKnobSize__ESynthKnobSize_MAX = 3,

};

// Enum Synthesis.ESynthSlateColorStyle
enum class Synthesis_ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light   = 0,
	ESynthSlateColorStyle__Dark    = 1,
	ESynthSlateColorStyle__Count   = 2,
	ESynthSlateColorStyle__ESynthSlateColorStyle_MAX = 3,

};

// Enum Synthesis.ESynthSlateSizeType
enum class Synthesis_ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small     = 0,
	ESynthSlateSizeType__Medium    = 1,
	ESynthSlateSizeType__Large     = 2,
	ESynthSlateSizeType__Count     = 3,
	ESynthSlateSizeType__ESynthSlateSizeType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Synthesis.Synth1PatchCable
// 0x0008
struct FSynth1PatchCable
{
	float                                              Depth;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynth1PatchDestination                  Destination;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_52Z2[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.EpicSynth1Patch
// 0x0018
struct FEpicSynth1Patch
{
	Synthesis_ESynth1PatchSource                       PatchSource;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DAAQ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSynth1PatchCable>                   PatchCables;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.ModularSynthPreset
// 0x00D8 (0x00E0 - 0x0008)
struct FModularSynthPreset : public FTableRowBase
{
	unsigned char                                      bEnablePolyphony : 1;                                      // 0x0008(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S0MX[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Synthesis_ESynth1OscType                           Osc1Type;                                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KJPQ[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Osc1Gain;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Osc1Octave;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Osc1Semitones;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Osc1Cents;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Osc1PulseWidth;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynth1OscType                           Osc2Type;                                                  // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIZQ[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Osc2Gain;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Osc2Octave;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Osc2Semitones;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Osc2Cents;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Osc2PulseWidth;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Portamento;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableUnison : 1;                                         // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnableOscillatorSync : 1;                                 // 0x0040(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_30I9[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Spread;                                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pan;                                                       // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LFO1Frequency;                                             // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LFO1Gain;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOType                            LFO1Type;                                                  // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOMode                            LFO1Mode;                                                  // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOPatchType                       LFO1PatchType;                                             // 0x0056(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I9JB[0x1];                                     // 0x0057(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LFO2Frequency;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LFO2Gain;                                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOType                            LFO2Type;                                                  // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOMode                            LFO2Mode;                                                  // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthLFOPatchType                       LFO2PatchType;                                             // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8I7W[0x1];                                     // 0x0063(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GainDb;                                                    // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackTime;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecayTime;                                                 // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SustainGain;                                               // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReleaseTime;                                               // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthModEnvPatch                        ModEnvPatchType;                                           // 0x0078(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthModEnvBiasPatch                    ModEnvBiasPatchType;                                       // 0x0079(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BHDD[0x2];                                     // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bInvertModulationEnvelope : 1;                             // 0x007C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bInvertModulationEnvelopeBias : 1;                         // 0x007C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A3ZG[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ModulationEnvelopeDepth;                                   // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ModulationEnvelopeAttackTime;                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ModulationEnvelopeDecayTime;                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ModulationEnvelopeSustainGain;                             // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ModulationEnvelopeReleaseTime;                             // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLegato : 1;                                               // 0x0094(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bRetrigger : 1;                                            // 0x0094(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PPKJ[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FilterFrequency;                                           // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilterQ;                                                   // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthFilterType                         FilterType;                                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthFilterAlgorithm                    FilterAlgorithm;                                           // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O3MT[0x2];                                     // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bStereoDelayEnabled : 1;                                   // 0x00A4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RL9X[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Synthesis_ESynthStereoDelayMode                    StereoDelayMode;                                           // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WO6Z[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StereoDelayTime;                                           // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StereoDelayFeedback;                                       // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StereoDelayWetlevel;                                       // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StereoDelayRatio;                                          // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bChorusEnabled : 1;                                        // 0x00BC(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LN4V[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ChorusDepth;                                               // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChorusFeedback;                                            // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChorusFrequency;                                           // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQ7T[0x4];                                     // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FEpicSynth1Patch>                    Patches;                                                   // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.ModularSynthPresetBankEntry
// 0x00F0
struct FModularSynthPresetBankEntry
{
	struct FString                                     PresetName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModularSynthPreset                         Preset;                                                    // 0x0010(0x00E0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
// 0x0030
struct FSourceEffectBitCrusherSettings
{
	float                                              CrushedSampleRate;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YDR6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoundModulationDestinationSettings         SampleRateModulation;                                      // 0x0008(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                              CrushedBits;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9GPO[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoundModulationDestinationSettings         BitModulation;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectChorusSettings
// 0x0078
struct FSourceEffectChorusSettings
{
	float                                              Depth;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feedback;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings         DepthModulation;                                           // 0x0018(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings         FrequencyModulation;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings         FeedbackModulation;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings         WetModulation;                                             // 0x0048(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings         DryModulation;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSoundModulationDestinationSettings         SpreadModulation;                                          // 0x0068(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
// 0x0028
struct FSourceEffectDynamicsProcessorSettings
{
	Synthesis_ESourceEffectDynamicsProcessorType       DynamicsProcessorType;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESourceEffectDynamicsPeakMode            PeakMode;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XNUC[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAheadMsec;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackTimeMsec;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReleaseTimeMsec;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThresholdDb;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ratio;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KneeBandwidthDb;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InputGainDb;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutputGainDb;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStereoLinked : 1;                                         // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bAnalogMode : 1;                                           // 0x0024(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7OQ0[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
// 0x000C
struct FSourceEffectEnvelopeFollowerSettings
{
	float                                              AttackTime;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReleaseTime;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_EEnvelopeFollowerPeakMode                PeakMode;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAnalogMode;                                             // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T4RJ[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.SourceEffectEQBand
// 0x0010
struct FSourceEffectEQBand
{
	float                                              Frequency;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bandwidth;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GainDb;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bEnabled : 1;                                              // 0x000C(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZCSF[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.SourceEffectEQSettings
// 0x0010
struct FSourceEffectEQSettings
{
	TArray<struct FSourceEffectEQBand>                 EQBands;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings
// 0x0028
struct FSourceEffectFilterAudioBusModulationSettings
{
	class UAudioBus*                                   AudioBus;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnvelopeFollowerAttackTimeMsec;                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnvelopeFollowerReleaseTimeMsec;                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnvelopeGainMultiplier;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESourceEffectFilterParam                 FilterParam;                                               // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IH84[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinFrequencyModulation;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxFrequencyModulation;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinResonanceModulation;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxResonanceModulation;                                    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectFilterSettings
// 0x0020
struct FSourceEffectFilterSettings
{
	Synthesis_ESourceEffectFilterCircuit               FilterCircuit;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESourceEffectFilterType                  FilterType;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S787[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CutoffFrequency;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilterQ;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OMUT[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
// 0x000C
struct FSourceEffectFoldbackDistortionSettings
{
	float                                              InputGainDb;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThresholdDb;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutputGainDb;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
// 0x0008
struct FSourceEffectMidSideSpreaderSettings
{
	float                                              SpreadAmount;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_EStereoChannelMode                       InputMode;                                                 // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_EStereoChannelMode                       OutputMode;                                                // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEqualPower;                                               // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S5Z8[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.SourceEffectPannerSettings
// 0x0008
struct FSourceEffectPannerSettings
{
	float                                              Spread;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Pan;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectPhaserSettings
// 0x0010
struct FSourceEffectPhaserSettings
{
	float                                              WetLevel;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feedback;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_EPhaserLFOType                           LFOType;                                                   // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseQuadraturePhase;                                        // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GOB6[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.SourceEffectRingModulationSettings
// 0x0020
struct FSourceEffectRingModulationSettings
{
	Synthesis_ERingModulatorTypeSourceEffect           ModulatorType;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IA50[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Depth;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QOAT[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioBus*                                   AudioBusModulator;                                         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
// 0x0018
struct FSourceEffectSimpleDelaySettings
{
	float                                              SpeedOfSound;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayAmount;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryAmount;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetAmount;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feedback;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bDelayBasedOnDistance : 1;                                 // 0x0014(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8CO[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
// 0x0024
struct FSourceEffectStereoDelaySettings
{
	Synthesis_EStereoDelaySourceEffect                 DelayMode;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HHFD[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayTimeMsec;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feedback;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayRatio;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFilterEnabled;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_EStereoDelayFiltertype                   FilterType;                                                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DI4S[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FilterFrequency;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilterQ;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
// 0x0008
struct FSourceEffectWaveShaperSettings
{
	float                                              Amount;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutputGainDb;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
// 0x0028
struct FSubmixEffectConvolutionReverbSettings
{
	float                                              NormalizationVolumeDb;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBypass;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;             // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMixReverbOutputToOutputChannelFormat;                     // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LB5A[0x1];                                     // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SurroundRearChannelBleedDb;                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInvertRearChannelBleedPhase;                              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSurroundRearChannelFlip;                                  // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_247O[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SurroundRearChannelBleedAmount;                            // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LDWI[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioImpulseResponse*                       ImpulseResponse;                                           // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowHArdwareAcceleration;                                 // 0x0020(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XBVB[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.SubmixEffectDelaySettings
// 0x000C
struct FSubmixEffectDelaySettings
{
	float                                              MaximumDelayLength;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationTime;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayLength;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SubmixEffectFilterSettings
// 0x000C
struct FSubmixEffectFilterSettings
{
	Synthesis_ESubmixFilterType                        FilterType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESubmixFilterAlgorithm                   FilterAlgorithm;                                           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K9NU[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FilterFrequency;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilterQ;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
// 0x0010
struct FSubmixEffectFlexiverbSettings
{
	float                                              PreDelay;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DecayTime;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RoomDampening;                                             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Complexity;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.DynamicsBandSettings
// 0x0020
struct FDynamicsBandSettings
{
	float                                              CrossoverTopFrequency;                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackTimeMsec;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReleaseTimeMsec;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThresholdDb;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Ratio;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KneeBandwidthDb;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InputGainDb;                                               // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OutputGainDb;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings
// 0x0020
struct FSubmixEffectMultibandCompressorSettings
{
	AudioMixer_ESubmixEffectDynamicsProcessorType      DynamicsProcessorType;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AudioMixer_ESubmixEffectDynamicsPeakMode           PeakMode;                                                  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q62R[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookAheadMsec;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLinkChannels;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnalogMode;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFourPole;                                                 // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8ADY[0x5];                                     // 0x000B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDynamicsBandSettings>               Bands;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SubmixEffectStereoDelaySettings
// 0x0024
struct FSubmixEffectStereoDelaySettings
{
	Synthesis_EStereoDelaySourceEffect                 DelayMode;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M85C[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayTimeMsec;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feedback;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayRatio;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFilterEnabled;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_EStereoDelayFiltertype                   FilterType;                                                // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XVBB[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FilterFrequency;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FilterQ;                                                   // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.TapDelayInfo
// 0x0018
struct FTapDelayInfo
{
	Synthesis_ETapLineMode                             TapLineMode;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7BMS[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DelayLength;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gain;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutputChannel;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PanInDegrees;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TapId;                                                     // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
// 0x0018
struct FSubmixEffectTapDelaySettings
{
	float                                              MaximumDelayLength;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InterpolationTime;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTapDelayInfo>                       Taps;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.Synth2DSliderStyle
// 0x02B0 (0x02B8 - 0x0008)
struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalThumbImage;                                          // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DisabledThumbImage;                                        // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalBarImage;                                            // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DisabledBarImage;                                          // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImage;                                           // 0x0228(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              BarThickness;                                              // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S8IB[0x4];                                     // 0x02B4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.SynthKnobStyle
// 0x0230 (0x0238 - 0x0008)
struct FSynthKnobStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 LargeKnob;                                                 // 0x0008(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LargeKnobOverlay;                                          // 0x0090(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MediumKnob;                                                // 0x0118(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MediumKnobOverlay;                                         // 0x01A0(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              MinValueAngle;                                             // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValueAngle;                                             // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthKnobSize                           KnobSize;                                                  // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4C78[0x7];                                     // 0x0231(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Synthesis.PatchId
// 0x0004
struct FPatchId
{
	int                                                ID;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings
// 0x0008
struct FSourceEffectBitCrusherBaseSettings
{
	float                                              SampleRate;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BitDepth;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SourceEffectChorusBaseSettings
// 0x0018
struct FSourceEffectChorusBaseSettings
{
	float                                              Depth;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Frequency;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Feedback;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WetLevel;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DryLevel;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Spread;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Synthesis.SynthSlateStyle
// 0x0008 (0x0010 - 0x0008)
struct FSynthSlateStyle : public FSlateWidgetStyle
{
	Synthesis_ESynthSlateSizeType                      SizeType;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Synthesis_ESynthSlateColorStyle                    ColorStyle;                                                // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLGS[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
