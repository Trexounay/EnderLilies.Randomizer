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

// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRTSettings");
		return ptr;
	}



};

// Class AudioSynesthesia.AudioSynesthesiaNRT
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.AudioSynesthesiaNRT");
		return ptr;
	}



};

// Class AudioSynesthesia.ConstantQNRTSettings
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                              StartingFrequency;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumBands;                                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NumBandsPerOctave;                                         // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnalysisPeriod;                                            // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDownmixToMono;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AudioSynesthesia_EConstantQFFTSizeEnum             FFTSize;                                                   // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EFFTWindowType                              WindowType;                                                // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Engine_EAudioSpectrumType                          SpectrumType;                                              // 0x003B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BandWidthStretch;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AudioSynesthesia_EConstantQNormalizationEnum       CQTNormalization;                                          // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_STGA[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NoiseFloorDb;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRTSettings");
		return ptr;
	}



};

// Class AudioSynesthesia.ConstantQNRT
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                       Settings;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.ConstantQNRT");
		return ptr;
	}



	void GetNormalizedChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ);
	void GetChannelConstantQAtTime(float InSeconds, int InChannel, TArray<float>* OutConstantQ);
};

// Class AudioSynesthesia.LoudnessNRTSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                              AnalysisPeriod;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumFrequency;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumFrequency;                                          // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AudioSynesthesia_ELoudnessNRTCurveTypeEnum         CurveType;                                                 // 0x0034(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VYM6[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NoiseFloorDb;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LKLS[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRTSettings");
		return ptr;
	}



};

// Class AudioSynesthesia.LoudnessNRT
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                        Settings;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.LoudnessNRT");
		return ptr;
	}



	void GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness);
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness);
	void GetLoudnessAtTime(float InSeconds, float* OutLoudness);
	void GetChannelLoudnessAtTime(float InSeconds, int InChannel, float* OutLoudness);
};

// Class AudioSynesthesia.OnsetNRTSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                               bDownmixToMono;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O9OX[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GranularityInSeconds;                                      // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Sensitivity;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumFrequency;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumFrequency;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_16PW[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRTSettings");
		return ptr;
	}



};

// Class AudioSynesthesia.OnsetNRT
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                           Settings;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AudioSynesthesia.OnsetNRT");
		return ptr;
	}



	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
