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

// Class Synthesis.ModularSynthPresetBank
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>        Presets;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.ModularSynthPresetBank");
		return ptr;
	}



};

// Class Synthesis.ModularSynthLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.ModularSynthLibrary");
		return ptr;
	}



	void STATIC_AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const struct FString& PresetName);
};

// Class Synthesis.ModularSynthComponent
// 0x06C0 (FullSize[0x0D80] - InheritedSize[0x06C0])
class UModularSynthComponent : public USynthComponent
{
public:
	int                                                VoiceCount;                                                // 0x06C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1DSL[0x6BC];                                   // 0x06C4(0x06BC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.ModularSynthComponent");
		return ptr;
	}



	void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);
	void SetSustainGain(float SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayMode(Synthesis_ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetSpread(float Spread);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	void SetPitchBend(float PitchBend);
	void SetPan(float Pan);
	void SetOscType(int OscIndex, Synthesis_ESynth1OscType OscType);
	void SetOscSync(bool bIsSynced);
	void SetOscSemitones(int OscIndex, float Semitones);
	void SetOscPulsewidth(int OscIndex, float Pulsewidth);
	void SetOscOctave(int OscIndex, float Octave);
	void SetOscGainMod(int OscIndex, float OscGainMod);
	void SetOscGain(int OscIndex, float OscGain);
	void SetOscFrequencyMod(int OscIndex, float OscFreqMod);
	void SetOscCents(int OscIndex, float Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(Synthesis_ESynthModEnvPatch InPatchType);
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float DecayTimeMsec);
	void SetModEnvBiasPatch(Synthesis_ESynthModEnvBiasPatch InPatchType);
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float AttackTimeMsec);
	void SetLFOType(int LFOIndex, Synthesis_ESynthLFOType LFOType);
	void SetLFOPatch(int LFOIndex, Synthesis_ESynthLFOPatchType LFOPatchType);
	void SetLFOMode(int LFOIndex, Synthesis_ESynthLFOMode LFOMode);
	void SetLFOGainMod(int LFOIndex, float GainMod);
	void SetLFOGain(int LFOIndex, float Gain);
	void SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz);
	void SetLFOFrequency(int LFOIndex, float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(Synthesis_ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterAlgorithm(Synthesis_ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool EnableUnison);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled);
	void SetEnableLegato(bool LegatoEnabled);
	void SetDecayTime(float DecayTimeMsec);
	void SetChorusFrequency(float Frequency);
	void SetChorusFeedback(float Feedback);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusDepth(float Depth);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int Velocity, float Duration);
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
	struct FPatchId CreatePatch(Synthesis_ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault);
};

// Class Synthesis.SourceEffectBitCrusherPreset
// 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_LPHB[0x58];                                    // 0x0068(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectBitCrusherSettings             Settings;                                                  // 0x00C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectBitCrusherPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings);
	void SetSampleRateModulator(class USoundModulatorBase* Modulator);
	void SetSampleRate(float SampleRate);
	void SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings);
	void SetBits(float Bits);
	void SetBitModulator(class USoundModulatorBase* Modulator);
};

// Class Synthesis.SourceEffectChorusPreset
// 0x0118 (FullSize[0x0180] - InheritedSize[0x0068])
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_A06W[0xA0];                                    // 0x0068(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectChorusSettings                 Settings;                                                  // 0x0108(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectChorusPreset");
		return ptr;
	}



	void SetWetModulator(class USoundModulatorBase* Modulator);
	void SetWet(float WetAmount);
	void SetSpreadModulator(class USoundModulatorBase* Modulator);
	void SetSpread(float Spread);
	void SetSettings(const struct FSourceEffectChorusBaseSettings& Settings);
	void SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings);
	void SetFrequencyModulator(class USoundModulatorBase* Modulator);
	void SetFrequency(float Frequency);
	void SetFeedbackModulator(class USoundModulatorBase* Modulator);
	void SetFeedback(float Feedback);
	void SetDryModulator(class USoundModulatorBase* Modulator);
	void SetDry(float DryAmount);
	void SetDepthModulator(class USoundModulatorBase* Modulator);
	void SetDepth(float Depth);
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// 0x0078 (FullSize[0x00E0] - InheritedSize[0x0068])
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_TGJ8[0x50];                                    // 0x0068(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectDynamicsProcessorSettings      Settings;                                                  // 0x00B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectDynamicsProcessorPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);
};

// Class Synthesis.EnvelopeFollowerListener
// 0x0020 (FullSize[0x00D0] - InheritedSize[0x00B0])
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnEnvelopeFollowerUpdate;                                  // 0x00B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DQ5I[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.EnvelopeFollowerListener");
		return ptr;
	}



};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_VGTA[0x34];                                    // 0x0068(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectEnvelopeFollowerSettings       Settings;                                                  // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectEnvelopeFollowerPreset");
		return ptr;
	}



	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
};

// Class Synthesis.SourceEffectEQPreset
// 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_R5TV[0x38];                                    // 0x0068(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectEQSettings                     Settings;                                                  // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectEQPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectEQSettings& InSettings);
};

// Class Synthesis.SourceEffectFilterPreset
// 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_G7W6[0x48];                                    // 0x0068(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectFilterSettings                 Settings;                                                  // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectFilterPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectFilterSettings& InSettings);
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_7FHK[0x34];                                    // 0x0068(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectFoldbackDistortionSettings     Settings;                                                  // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectFoldbackDistortionPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_7BJN[0x30];                                    // 0x0068(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectMidSideSpreaderSettings        Settings;                                                  // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectMidSideSpreaderPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);
};

// Class Synthesis.SourceEffectPannerPreset
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_KKHR[0x30];                                    // 0x0068(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectPannerSettings                 Settings;                                                  // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectPannerPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectPannerSettings& InSettings);
};

// Class Synthesis.SourceEffectPhaserPreset
// 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_HFXH[0x38];                                    // 0x0068(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectPhaserSettings                 Settings;                                                  // 0x00A0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectPhaserPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);
};

// Class Synthesis.SourceEffectRingModulationPreset
// 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_BE2G[0x48];                                    // 0x0068(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectRingModulationSettings         Settings;                                                  // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectRingModulationPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_HKES[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectSimpleDelaySettings            Settings;                                                  // 0x00A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectSimpleDelayPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);
};

// Class Synthesis.SourceEffectStereoDelayPreset
// 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_KGJB[0x4C];                                    // 0x0068(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectStereoDelaySettings            Settings;                                                  // 0x00B4(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectStereoDelayPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);
};

// Class Synthesis.SourceEffectWaveShaperPreset
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData_ZOEN[0x30];                                    // 0x0068(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSourceEffectWaveShaperSettings             Settings;                                                  // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SourceEffectWaveShaperPreset");
		return ptr;
	}



	void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);
};

// Class Synthesis.AudioImpulseResponse
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                      ImpulseResponse;                                           // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                NumChannels;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SampleRate;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalizationVolumeDb;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTrueStereo;                                               // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KH34[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      IRData;                                                    // 0x0048(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.AudioImpulseResponse");
		return ptr;
	}



};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// 0x0088 (FullSize[0x00F0] - InheritedSize[0x0068])
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                           // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmixEffectConvolutionReverbSettings      Settings;                                                  // 0x0070(0x0028) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	Synthesis_ESubmixEffectConvolutionReverbBlockSize  BlockSize;                                                 // 0x0098(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableHardwareAcceleration;                               // 0x0099(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LBQW[0x56];                                    // 0x009A(0x0056) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectConvolutionReverbPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

// Class Synthesis.SubmixEffectDelayPreset
// 0x0050 (FullSize[0x00B8] - InheritedSize[0x0068])
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_IDUW[0x34];                                    // 0x0068(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectDelaySettings                  Settings;                                                  // 0x009C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings                  DynamicSettings;                                           // 0x00A8(0x000C) (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6NN1[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectDelayPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void SetDelay(float Length);
	float GetMaxDelayInMilliseconds();
};

// Class Synthesis.SubmixEffectFilterPreset
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_PUAT[0x34];                                    // 0x0068(0x0034) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectFilterSettings                 Settings;                                                  // 0x009C(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectFilterPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);
	void SetFilterType(Synthesis_ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(Synthesis_ESubmixFilterAlgorithm InAlgorithm);
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_JD6Z[0x38];                                    // 0x0068(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectFlexiverbSettings              Settings;                                                  // 0x00A0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectFlexiverbPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);
};

// Class Synthesis.SubmixEffectMultibandCompressorPreset
// 0x0068 (FullSize[0x00D0] - InheritedSize[0x0068])
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_8ME7[0x48];                                    // 0x0068(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectMultibandCompressorSettings    Settings;                                                  // 0x00B0(0x0020) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectMultibandCompressorPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings);
};

// Class Synthesis.SubmixEffectStereoDelayPreset
// 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_HJFD[0x4C];                                    // 0x0068(0x004C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectStereoDelaySettings            Settings;                                                  // 0x00B4(0x0024) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectStereoDelayPreset");
		return ptr;
	}



	void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings);
};

// Class Synthesis.SubmixEffectTapDelayPreset
// 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData_WJ10[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSubmixEffectTapDelaySettings               Settings;                                                  // 0x00A8(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C9OG[0x18];                                    // 0x00C0(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SubmixEffectTapDelayPreset");
		return ptr;
	}



	void SetTap(int TapId, const struct FTapDelayInfo& TapInfo);
	void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void RemoveTap(int TapId);
	void GetTapIds(TArray<int>* TapIds);
	void GetTap(int TapId, struct FTapDelayInfo* TapInfo);
	float GetMaxDelayInMilliseconds();
	void AddTap(int* TapId);
};

// Class Synthesis.Synth2DSlider
// 0x0370 (FullSize[0x0478] - InheritedSize[0x0108])
class USynth2DSlider : public UWidget
{
public:
	float                                              ValueX;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ValueY;                                                    // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueXDelegate;                                            // 0x0110(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueYDelegate;                                            // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSynth2DSliderStyle                         WidgetStyle;                                               // 0x0130(0x02B8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x03F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x03F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_82WD[0x2];                                     // 0x03FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StepSize;                                                  // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V6HB[0x7];                                     // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x0418(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                  // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                    // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChangedX;                                           // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChangedY;                                           // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQ8X[0x10];                                    // 0x0468(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.Synth2DSlider");
		return ptr;
	}



	void SetValue(const struct FVector2D& InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	struct FVector2D GetValue();
};

// Class Synthesis.GranularSynth
// 0x03C0 (FullSize[0x0A80] - InheritedSize[0x06C0])
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                                  GranulatedSoundWave;                                       // 0x06C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KVDC[0x3B8];                                   // 0x06C8(0x03B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.GranularSynth");
		return ptr;
	}



	void SetSustainGain(float SustainGain);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, Synthesis_EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
	void SetGrainEnvelopeType(Synthesis_EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
	void SetDecayTime(float DecayTimeMsec);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int Velocity, float Duration);
	void NoteOff(float Note, bool bKill);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};

// Class Synthesis.MonoWaveTableSynthPreset
// 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
class UMonoWaveTableSynthPreset : public UObject
{
public:
	struct FString                                     PresetName;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bLockKeyframesToGridBool : 1;                              // 0x0038(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S7YV[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LockKeyframesToGrid;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WaveTableResolution;                                       // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_731U[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FRuntimeFloatCurve>                  WaveTable;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic)
	unsigned char                                      bNormalizeWaveTables : 1;                                  // 0x0058(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K2UG[0x117];                                   // 0x0059(0x0117) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.MonoWaveTableSynthPreset");
		return ptr;
	}



};

// Class Synthesis.SynthComponentMonoWaveTable
// 0x0740 (FullSize[0x0E00] - InheritedSize[0x06C0])
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	struct FScriptMulticastDelegate                    OnTableAltered;                                            // 0x06C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNumTablesChanged;                                        // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                             // 0x06E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_418U[0x718];                                   // 0x06E8(0x0718) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthComponentMonoWaveTable");
		return ptr;
	}



	void SetWaveTablePosition(float InPosition);
	void SetSustainPedalState(bool InSustainPedalState);
	void SetPosLfoType(Synthesis_ESynthLFOType InLfoType);
	void SetPosLfoFrequency(float InLfoFrequency);
	void SetPosLfoDepth(float InLfoDepth);
	void SetPositionEnvelopeSustainGain(float InSustainGain);
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool bInInvert);
	void SetPositionEnvelopeDepth(float InDepth);
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InDepth);
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
	void SetLowPassFilterResonance(float InNewQ);
	void SetFrequencyWithMidiNote(float InMidiNote);
	void SetFrequencyPitchBend(float FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float InSustainGain);
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool bInInvert);
	void SetFilterEnvelopeDepth(float InDepth);
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InDepth);
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
	bool SetCurveValue(int TableIndex, int KeyframeIndex, float NewValue);
	bool SetCurveTangent(int TableIndex, float InNewTangent);
	bool SetCurveInterpolationType(Synthesis_ECurveInterpolationType InterpolationType, int TableIndex);
	void SetAmpEnvelopeSustainGain(float InSustainGain);
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool bInInvert);
	void SetAmpEnvelopeDepth(float InDepth);
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InDepth);
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
	void RefreshWaveTable(int Index);
	void RefreshAllWaveTables();
	void NoteOn(float InMidiNote, float InVelocity);
	void NoteOff(float InMidiNote);
	int GetNumTableEntries();
	int GetMaxTableIndex();
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);
	float GetCurveTangent(int TableIndex);
};

// Class Synthesis.SynthComponentToneGenerator
// 0x0020 (FullSize[0x06E0] - InheritedSize[0x06C0])
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                              Frequency;                                                 // 0x06C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // 0x06C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WP18[0x18];                                    // 0x06C8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthComponentToneGenerator");
		return ptr;
	}



	void SetVolume(float InVolume);
	void SetFrequency(float InFrequency);
};

// Class Synthesis.SynthSamplePlayer
// 0x0130 (FullSize[0x07F0] - InheritedSize[0x06C0])
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                                  SoundWave;                                                 // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSampleLoaded;                                            // 0x06C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSamplePlaybackProgress;                                  // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W2N3[0x108];                                   // 0x06E8(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthSamplePlayer");
		return ptr;
	}



	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float TimeSec);
	void SeekToTime(float TimeSec, Synthesis_ESamplePlayerSeekType SeekType, bool bWrap);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};

// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary");
		return ptr;
	}



	float STATIC_GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
	float STATIC_GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
};

// Class Synthesis.SynthKnob
// 0x02F8 (FullSize[0x0400] - InheritedSize[0x0108])
class USynthKnob : public UWidget
{
public:
	float                                              Value;                                                     // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepSize;                                                  // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseSpeed;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MouseFineTuneSpeed;                                        // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ShowTooltipInfo : 1;                                       // 0x0118(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H9CJ[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ParameterName;                                             // 0x0120(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ParameterUnits;                                            // 0x0138(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x0150(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSynthKnobStyle                             WidgetStyle;                                               // 0x0160(0x0238) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0399(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YB69[0x6];                                     // 0x039A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                  // 0x03C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                    // 0x03D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x03E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B3ZI[0x10];                                    // 0x03F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Synthesis.SynthKnob");
		return ptr;
	}



	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetLocked(bool InValue);
	float GetValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
