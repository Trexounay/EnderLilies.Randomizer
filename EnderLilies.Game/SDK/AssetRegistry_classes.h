﻿#pragma once

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

	// Class AssetRegistry.AssetRegistryImpl
	// 0x0790 (FullSize[0x07B8] - InheritedSize[0x0028])
	class UAssetRegistryImpl : public UObject
	{
	public:
		unsigned char                                      UnknownData_WZNN[0x790];                                   // 0x0028(0x0790) MISSED OFFSET (PADDING)


		static UClass* StaticClass()
		{
			static UClass* ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryImpl");
			return ptr;
		}



	};

	// Class AssetRegistry.AssetRegistry
	// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	class UAssetRegistry : public UInterface
	{
	public:


		static UClass* StaticClass()
		{
			static UClass* ptr = UObject::FindClass("Class AssetRegistry.AssetRegistry");
			return ptr;
		}



		void WaitForCompletion();
		void UseFilterToExcludeAssets(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter);
		void SearchAllAssets(bool bSynchronousSearch);
		void ScanPathsSynchronous(TArray<struct FString> InPaths, bool bForceRescan);
		void ScanModifiedAssetFiles(TArray<struct FString> InFilePaths);
		void ScanFilesSynchronous(TArray<struct FString> InFilePaths, bool bForceRescan);
		void RunAssetsThroughFilter(TArray<struct FAssetData>* AssetDataList, const struct FARFilter& Filter);
		void PrioritizeSearchPath(const struct FString& PathToPrioritize);
		bool K2_GetReferencers(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& ReferenceOptions, TArray<struct FName>* OutReferencers);
		bool K2_GetDependencies(const struct FName& PackageName, const struct FAssetRegistryDependencyOptions& DependencyOptions, TArray<struct FName>* OutDependencies);
		bool IsLoadingAssets();
		bool HasAssets(const struct FName& PackagePath, bool bRecursive);
		void GetSubPaths(const struct FString& InBasePath, TArray<struct FString>* OutPathList, bool bInRecurse);
		bool GetAssetsByPath(const struct FName& PackagePath, TArray<struct FAssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
		bool GetAssetsByPackageName(const struct FName& PackageName, TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
		bool GetAssetsByClass(const struct FName& ClassName, TArray<struct FAssetData>* OutAssetData, bool bSearchSubClasses);
		bool GetAssets(const struct FARFilter& Filter, TArray<struct FAssetData>* OutAssetData);
		struct FAssetData GetAssetByObjectPath(const struct FName& ObjectPath, bool bIncludeOnlyOnDiskAssets);
		struct FAssetData GetAssetByObjectPath(const FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets);
		void GetAllCachedPaths(TArray<struct FString>* OutPathList);
		bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
	};

	// Class AssetRegistry.AssetRegistryHelpers
	// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	class UAssetRegistryHelpers : public UObject
	{
	public:


		static UClass* StaticClass()
		{
			static UClass* ptr = UObject::FindClass("Class AssetRegistry.AssetRegistryHelpers");
			return ptr;
		}



		struct FSoftObjectPath STATIC_ToSoftObjectPath(const struct FAssetData& InAssetData);
		struct FARFilter STATIC_SetFilterTagsAndValues(const struct FARFilter& InFilter, TArray<struct FTagAndValue> InTagsAndValues);
		bool STATIC_IsValid(const struct FAssetData& InAssetData);
		bool STATIC_IsUAsset(const struct FAssetData& InAssetData);
		bool STATIC_IsRedirector(const struct FAssetData& InAssetData);
		bool STATIC_IsAssetLoaded(const struct FAssetData& InAssetData);
		bool STATIC_GetTagValue(const struct FAssetData& InAssetData, const struct FName& InTagName, struct FString* OutTagValue);
		struct FString STATIC_GetFullName(const struct FAssetData& InAssetData);
		struct FString STATIC_GetExportTextName(const struct FAssetData& InAssetData);
		class UClass* STATIC_GetClass(const struct FAssetData& InAssetData);
		void STATIC_GetAssetRegistry();
		static class TScriptInterface<class CG::UAssetRegistry> STATIC_GetAssetRegistryFix();
		class UObject* STATIC_GetAsset(const struct FAssetData& InAssetData);
		struct FAssetData STATIC_CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
