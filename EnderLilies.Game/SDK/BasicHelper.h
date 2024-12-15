#pragma once
#pragma warning(disable: 4267)

// Name: enderlilies, Version: 1.1.3

#include <vector>
#include <locale>
#include <unordered_set>
#include <unordered_map>
#include <Windows.h>
#include <iostream>
#include <sstream>

#define GOBJECTS_CHUNKS
#define FNAME_POOL
#define UE4

/*!!HELPER_DEF!!*/

#if defined(EXTERNAL_PROPS)
#include "../MemoryManager.h"
#endif

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{

#if defined(EXTERNAL_PROPS)
extern MemoryManager* Mem;
#else
bool InitSdk(const std::string& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset);
bool InitSdk115();
bool InitSdk116();
#endif

template<typename Fn>
inline Fn GetVFunction(const void* instance, std::size_t index)
{
	auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

const void* GetVFunction(const void* instance, std::size_t index)
{
	auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
	return (vtable[index]);
}

class UObject;

enum EObjectFlags
{
	// Do not add new flags unless they truly belong here. There are alternatives.
	// if you change any the bit of any of the RF_Load flags, then you will need legacy serialization
	RF_NoFlags = 0x00000000,	///< No flags, used to avoid a cast

	// This first group of flags mostly has to do with what kind of object it is. Other than transient, these are the persistent object flags.
	// The garbage collector also tends to look at these.
	RF_Public = 0x00000001,	///< Object is visible outside its package.
	RF_Standalone = 0x00000002,	///< Keep object around for editing even if unreferenced.
	RF_MarkAsNative = 0x00000004,	///< Object (UField) will be marked as native on construction (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_Transactional = 0x00000008,	///< Object is transactional.
	RF_ClassDefaultObject = 0x00000010,	///< This object is its class's default object
	RF_ArchetypeObject = 0x00000020,	///< This object is a template for another object - treat like a class default object
	RF_Transient = 0x00000040,	///< Don't save object.

	// This group of flags is primarily concerned with garbage collection.
	RF_MarkAsRootSet = 0x00000080,	///< Object will be marked as root set on construction and not be garbage collected, even if unreferenced (DO NOT USE THIS FLAG in HasAnyFlags() etc)
	RF_TagGarbageTemp = 0x00000100,	///< This is a temp user flag for various utilities that need to use the garbage collector. The garbage collector itself does not interpret it.

	// The group of flags tracks the stages of the lifetime of a uobject
	RF_NeedInitialization = 0x00000200,	///< This object has not completed its initialization process. Cleared when ~FObjectInitializer completes
	RF_NeedLoad = 0x00000400,	///< During load, indicates object needs loading.
	RF_KeepForCooker = 0x00000800,	///< Keep this object during garbage collection because it's still being used by the cooker
	RF_NeedPostLoad = 0x00001000,	///< Object needs to be postloaded.
	RF_NeedPostLoadSubobjects = 0x00002000,	///< During load, indicates that the object still needs to instance subobjects and fixup serialized component references
	RF_NewerVersionExists = 0x00004000,	///< Object has been consigned to oblivion due to its owner package being reloaded, and a newer version currently exists
	RF_BeginDestroyed = 0x00008000,	///< BeginDestroy has been called on the object.
	RF_FinishDestroyed = 0x00010000,	///< FinishDestroy has been called on the object.

	// Misc. Flags
	RF_BeingRegenerated = 0x00020000,	///< Flagged on UObjects that are used to create UClasses (e.g. Blueprints) while they are regenerating their UClass on load (See FLinkerLoad::CreateExport()), as well as UClass objects in the midst of being created
	RF_DefaultSubObject = 0x00040000,	///< Flagged on subobjects that are defaults
	RF_WasLoaded = 0x00080000,	///< Flagged on UObjects that were loaded
	RF_TextExportTransient = 0x00100000,	///< Do not export object to text form (e.g. copy/paste). Generally used for sub-objects that can be regenerated from data in their parent object.
	RF_LoadCompleted = 0x00200000,	///< Object has been completely serialized by linkerload at least once. DO NOT USE THIS FLAG, It should be replaced with RF_WasLoaded.
	RF_InheritableComponentTemplate = 0x00400000, ///< Archetype of the object can be in its super class
	RF_DuplicateTransient = 0x00800000,	///< Object should not be included in any type of duplication (copy/paste, binary duplication, etc.)
	RF_StrongRefOnFrame = 0x01000000,	///< References to this object from persistent function frame are handled as strong ones.
	RF_NonPIEDuplicateTransient = 0x02000000,	///< Object should not be included for duplication unless it's being duplicated for a PIE session
	RF_Dynamic = 0x04000000,	///< Field Only. Dynamic field - doesn't get constructed during static initialization, can be constructed multiple times
	RF_WillBeLoaded = 0x08000000,	///< This object was constructed during load and will be loaded shortly
	RF_HasExternalPackage = 0x10000000,	///< This object has an external package assigned and should look it up when getting the outermost package
};

template<class T>
struct TArray
{
private:
	T* Data;
	int32_t Count;
	int32_t Max;
	
	friend struct FString;

public:
	TArray()
	{
		Data = nullptr;
		Max = 0;
		Count = 0;
	}

	void Add(T obj)
	{
		Data = static_cast<T*>(realloc(Data, sizeof(T) * Count + 1));
		Data[Count] = obj;
		Count += 1;
	}

	int Num() const
	{
		return Count;
	}

	int GetIndex(T elem) const
	{
		for (int i = 0; i < Num(); ++i)
		{
			if (Data[i] == elem)
				return i;
		}
		return -1;
	}

	T& operator[](int i)
	{
		return Data[i];
	}

	const T& operator[](int i) const
	{
		return Data[i];
	}

	bool IsValidIndex(int i) const
	{
		return i < Num();
	}

	void Empty()
	{
		Count = 0;
	}
};

struct FString : public TArray<wchar_t>
{
	FString() = default;

	explicit FString(const wchar_t* other)
	{
		Max = Count = *other ? std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	inline bool IsValid() const
	{
		return Data != nullptr;
	}

	inline const wchar_t* cw_str() const
	{
		return Data;
	}

	inline const char* c_str() const
	{
		return (const char*)Data;
	}

	std::string ToString() const
	{
		size_t length = std::wcslen(Data);
		std::string str(length, '\0');
		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}

	std::wstring ToWString() const
	{
		std::wstring str(Data);
		return str;
	}
};


class FUObjectItem
{
public:
	class UObject* Object;
	int Flags;
	int32_t ClusterIndex;
	int32_t SerialNumber;
	unsigned char pad_ME8PLCD95K[0x04];
	enum class ObjectFlags : int32_t
	{
		None = 0,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		NoStrongReference = 1 << 31
	};

#ifdef UE4
	inline bool IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::Unreachable));
	}
	inline bool IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::PendingKill));
	}
#endif
};

#ifdef GOBJECTS_CHUNKS
class TUObjectArray
{
	enum
	{
		NumElementsPerChunk = 64 * 1024,
	};
public:
	inline int32_t Num() const
	{
		return NumElements;
	}

	inline int32_t Max() const
	{
		return MaxElements;
	}

	inline bool IsValidIndex(int32_t Index) const
	{
		return Index < Num() && Index >= 0;
	}

	inline FUObjectItem* GetObjectPtr(int32_t Index) const
	{
		const int32_t ChunkIndex = Index / NumElementsPerChunk;
		const int32_t WithinChunkIndex = Index % NumElementsPerChunk;
		if (!IsValidIndex(Index)) return nullptr;
		if (ChunkIndex > NumChunks) return nullptr;
		if (Index > MaxElements) return nullptr;
		FUObjectItem* Chunk = Objects[ChunkIndex];
		if (!Chunk) return nullptr;
		return Chunk + WithinChunkIndex;
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;

		return (*ItemPtr).Object;
	}

	inline FUObjectItem* GetItemByIndex(int32_t index) const
	{
		FUObjectItem* ItemPtr = GetObjectPtr(index);
		if (!ItemPtr) return nullptr;
		return ItemPtr;
	}

public:
	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int32_t MaxElements;
	int32_t NumElements;
	int32_t MaxChunks;
	int32_t NumChunks;
};
#else
class TUObjectArray
{
private:
	FUObjectItem* Objects;
	int32_t MaxElements;
	int32_t NumElements;
	
public:
	inline int32_t Num() const
	{
		return NumElements;
	}

	inline UObject* GetByIndex(int32_t index) const
	{
		return Objects[index].Object;
	}

	inline FUObjectItem* GetItemByIndex(int32_t index) const
	{
		if (index < NumElements)
		{
			return &Objects[index];
		}
		return nullptr;
	}
};
#endif // GOBJECTS_CHUNKS

#ifdef FNAME_POOL
struct FNameEntryHeader
{
	uint16_t bIsWide : 1;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
	uint16_t Len : 15;
#else
	static constexpr uint32_t ProbeHashBits = 5;
	uint16_t LowercaseProbeHash : ProbeHashBits;
	uint16_t Len : 10;
#endif
};

class FNameEntry
{
public:
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
	uint32_t ComparisonId; /*FNameEntryId*/
#endif
	FNameEntryHeader Header;

	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	inline int32_t GetLength() const
	{
		return Header.Len;
	}
	inline bool IsWide() const
	{
		return Header.bIsWide;
	}
	inline int32_t GetId() const
	{
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		return ComparisonId;
#else
		return *(uint16_t*)&Header;
#endif
	}
	inline std::string GetAnsiName() const
	{
		uint32_t len = GetLength();
		if (len > 1024) return "[Error: Overflow]";

		return std::string((const char*)AnsiName, len);
	}
	inline std::wstring GetWideName() const
	{
		uint32_t len = GetLength();
		return std::wstring((const wchar_t*)WideName, len);
	}
#ifdef UNI_NAMES
	std::wstring GetName() const
	{
		return GetWideName();
	}
#else
	std::string GetName() const
	{
		return GetAnsiName();
	}
#endif
};

class FNameEntryAllocator
{
	/*
	enum { Stride = alignof(FNameEntry) };
	enum { BlockSizeBytes = Stride * FNameBlockOffsets };
	*/
private:
	unsigned char frwLock[0x8];
public:
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
	static const int Stride = 0x04;
#else
	static const int Stride = 0x02;
#endif
	int32_t CurrentBlock;
	int32_t CurrentByteCursor;
	uint8_t* Blocks[8192];

	inline int32_t NumBlocks() const
	{
		return CurrentBlock + 1;
	}
	inline FNameEntry* GetById(int32_t key) const
	{
		int block = key >> 16;
		int offset = (uint16_t)key;

		if (!IsValidIndex(key, block, offset))
			return reinterpret_cast<FNameEntry*>(Blocks[0] + 0); // "None"

		return reinterpret_cast<FNameEntry*>(Blocks[block] + ((uint64_t)offset * Stride));
	}

	inline bool IsValidIndex(int32_t key) const
	{
		uint32_t block = key >> 16;
		uint16_t offset = key;
		return IsValidIndex(key, block, offset);
	}

	inline bool IsValidIndex(int32_t key, uint32_t block, uint16_t offset) const
	{
		return (key >= 0 && block < (uint32_t)NumBlocks() && offset * Stride < 0x20000);
	}
};

class FNamePool
{
public:
	FNameEntryAllocator Allocator;
	uint32_t AnsiCount;
	uint32_t WideCount;

	inline FNameEntry* GetNext(uintptr_t& nextFNameAddress, int32_t& nextFNameComparisonId)
	{
		static int lastBlock = 0;
		if (nextFNameAddress == NULL)
		{
			lastBlock = 0;
			nextFNameAddress = reinterpret_cast<uintptr_t>(Allocator.Blocks[0]);
		}

	RePlay:
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		nextFNameComparisonId = *reinterpret_cast<int32_t*>(nextFNameAddress);
#else
		nextFNameComparisonId = MAKELONG((uint16_t)((nextFNameAddress - reinterpret_cast<uintptr_t>(Allocator.Blocks[lastBlock])) / 2), (uint16_t)lastBlock);
#endif
		int32_t block = nextFNameComparisonId >> 16;
		int32_t offset = (uint16_t)nextFNameComparisonId;
		int32_t offsetFromBlock = (int32_t)(nextFNameAddress - reinterpret_cast<uintptr_t>(Allocator.Blocks[lastBlock]));

		// Get entry information
		const uintptr_t entryOffset = nextFNameAddress;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		const int toAdd = 0x04 + 0x02; // HeaderOffset + HeaderSize
		const uint16_t nameHeader = *reinterpret_cast<uint16_t*>(entryOffset + 0x04);
		int nameLength = nameHeader >> 1;
#else
		const int toAdd = 0x00 + 0x02; // HeaderOffset + HeaderSize
		if (entryOffset == 0)
			return nullptr;
		const uint16_t nameHeader = *reinterpret_cast<uint16_t*>(entryOffset);
		int nameLength = nameHeader >> 6;
#endif
		bool isWide = (nameHeader & 1) != 0;

		if (isWide)
			nameLength += nameLength;

#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		int aligne = (entryOffset + toAdd + nameLength) % 4;
		if (aligne != 0)
			nameLength += 4 - aligne;
#else
		// if odd number (odd numbers are aligned with 0x00)
		if (!isWide && nameLength % 2 != 0)
			nameLength += 1;
#endif

		// Block end ?
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		if (offsetFromBlock + toAdd + nameLength >= 0xFFFF * FNameEntryAllocator::Stride || nameHeader == 0x00 || (block == Allocator.CurrentBlock && offset >= Allocator.CurrentByteCursor))
#else
		if (offsetFromBlock + toAdd + (nameLength * 2) >= 0xFFFF * FNameEntryAllocator::Stride || nameHeader == 0x00 || block == Allocator.CurrentBlock && offset >= Allocator.CurrentByteCursor)
#endif
		{
			nextFNameAddress = reinterpret_cast<uintptr_t>(Allocator.Blocks[++lastBlock]);
			goto RePlay;
		}

		// We hit last Name in last Block
		if (lastBlock > Allocator.CurrentBlock)
			return nullptr;

		// Get next name address
		nextFNameAddress = entryOffset + toAdd + nameLength;

		// Get name
		FNameEntry* ret = Allocator.GetById(nextFNameComparisonId);

		return ret;
	}

	inline FNameEntry* GetNext(uintptr_t& nextFNameAddress)
	{
		int32_t nextFNameComparisonId = -1;
		return GetNext(nextFNameAddress, nextFNameComparisonId);
	}

	inline size_t Num() const
	{
		return AnsiCount;
	}

	inline bool IsValidIndex(int32_t id) const
	{
		return Allocator.IsValidIndex(static_cast<int32_t>(id));
	}

	inline FNameEntry* GetById(int32_t key) const
	{
		return Allocator.GetById(key);
	}

	inline FNameEntry* operator[](int32_t id) const
	{
		return Allocator.GetById(static_cast<int32_t>(id));
	}
};

using GNAME_TYPE = FNamePool;
#elif defined UE4

class FNameEntry
{
public:
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;

	class FNameEntry* HashNext;
	int32_t Index;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	inline const int32_t GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}

	inline bool IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}

	inline std::string GetAnsiName() const
	{
		return std::string(AnsiName);
	}

	inline std::wstring GetWideName() const
	{
		return std::wstring(WideName);
	}
#ifdef UNI_NAMES
	std::wstring GetName() const
	{
		return GetWideName();
	}
#else
	std::string GetName() const
	{
		return GetAnsiName();
	}
#endif
};

template<typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
class TStaticIndirectArrayThreadSafeRead
{
public:
	inline size_t Num() const
	{
		return NumElements;
	}

	inline bool IsValidIndex(int32_t index) const
	{
		return index < Num() && index >= 0;
	}

	inline ElementType* operator[](int32_t index) const
	{
		ElementType* ItemPtr = GetItemPtr(index);
		return ItemPtr;
	}

private:
	inline ElementType* GetItemPtr(int32_t Index) const
	{
		int32_t ChunkIndex = Index / ElementsPerChunk;
		int32_t WithinChunkIndex = Index % ElementsPerChunk;
		ElementType* Chunk = (*Chunks)[ChunkIndex];
		int offset = WithinChunkIndex * 8;
		uintptr_t ptrAddress = *reinterpret_cast<uintptr_t*>(reinterpret_cast<unsigned char*>(Chunk) + offset);
		ElementType* ItemPtr = reinterpret_cast<ElementType*>(ptrAddress);
		return ItemPtr;
	}

	enum
	{
		ChunkTableSize = (MaxTotalElements + ElementsPerChunk - 1) / ElementsPerChunk
	};

	ElementType** Chunks[ChunkTableSize];
	int32_t NumElements;
	int32_t NumChunks;
};

using TNameEntryArray = TStaticIndirectArrayThreadSafeRead<FNameEntry, 4 * 1024 * 1024, 16384>;
using GNAME_TYPE = TNameEntryArray;

#elif defined UE3

class FNameEntry
{
	static const auto NAME_WIDE_MASK = 0x1;
	static const auto NAME_INDEX_SHIFT = 1;
public:
	uint64_t Flags;
	uint32_t Index;
#ifdef UNI_NAMES
	int32_t pad;
#endif
	FNameEntry* HashNext;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};
	inline const int32_t GetIndex() const
	{
		return Index >> NAME_INDEX_SHIFT;
	}
	inline bool IsWide() const
	{
		return Index & NAME_WIDE_MASK;
	}
	inline std::string GetAnsiName() const
	{
		return std::string(AnsiName);
	}
	inline std::wstring GetWideName() const
	{
		return std::wstring(WideName);
	}
#ifdef UNI_NAMES
	std::wstring GetName() const
	{
		return GetWideName();
	}
#else
	std::string GetName() const
	{
		return GetAnsiName();
	}
#endif
};

using GNAME_TYPE = TArray<FNameEntry*>;
#endif

struct FName
{
	static GNAME_TYPE* GNames;
	int32_t ComparisonIndex;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
	uint32_t DisplayIndex; // FNameEntryId
#endif
	int32_t Number;

	FName() :
		ComparisonIndex(0),
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		DisplayIndex(0), // FNameEntryId
#endif
		Number(0)
	{ }

	FName(int32_t i) :
		ComparisonIndex(i),
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		DisplayIndex(i), // FNameEntryId
#endif
		Number(0)
	{ }

	FName(const char* nameToFind) :
		ComparisonIndex(0),
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		DisplayIndex(0), // FNameEntryId
#endif
		Number(0)
	{
#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;

		int compid = -1;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress, compid);
			name != nullptr;
			name = GetGlobalNames().GetNext(lastFNameAddress, compid))
		{
			if (name->GetAnsiName() == nameToFind)
			{
				ComparisonIndex = compid;
				return;
			}
		}
#else
		for (size_t i = 0; i < GetGlobalNames().Num(); ++i)
		{
			if (GetGlobalNames()[i]->GetAnsiName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
#endif
	}

	FName(const wchar_t* nameToFind) :
		ComparisonIndex(0),
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
		DisplayIndex(0), // FNameEntryId
#endif
		Number(0)
	{
		static std::unordered_set<int> cache;

		for (auto i : cache)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				std::cout << "found name!" << std::endl;
				ComparisonIndex = i;
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
				DisplayIndex = i;
#endif
				return;
	}
}

#ifdef FNAME_POOL
		uintptr_t lastFNameAddress = NULL;
		for (FNameEntry* name = GetGlobalNames().GetNext(lastFNameAddress); name != nullptr; name = GetGlobalNames().GetNext(lastFNameAddress))
		{
			if (name->GetWideName() == nameToFind)
			{
				std::cout << "insert name!" << std::endl;
				cache.insert(name->GetId());
				ComparisonIndex = name->GetId();
#ifdef FNamePool_WITH_CASE_PRESERVING_NAME
				DisplayIndex = name->GetId();
#endif
				return;
			}
		}
#else
		for (size_t i = 0; i < GetGlobalNames().Num(); ++i)
		{
			if (GetGlobalNames()[i]->GetWideName() == nameToFind)
			{
				cache.insert(i);
				ComparisonIndex = i;
				return;
			}
		}
#endif
	}

	// GetRawString - returns an unedited string as the engine uses it
	inline std::string GetRawString() const
	{
		thread_local wchar_t *toto = reinterpret_cast<wchar_t*>(malloc(sizeof(wchar_t) * 1024));
		thread_local FString TempString(toto);
		static void(*AppendString)(const FName*, FString&) = nullptr;

		if (!AppendString)
			AppendString = reinterpret_cast<void(*)(const FName*, FString&)>(uintptr_t(GetModuleHandle(0)) + 0x00EE1C40);

		AppendString(this, TempString);

		std::string OutputString = TempString.ToString();
		return OutputString;
	}

	static inline GNAME_TYPE& GetGlobalNames()
	{
		return *GNames;
	}
	inline std::string GetNameA() const
	{
		if (Number > 0)
		{
			std::stringstream s;
			s << GetGlobalNames()[ComparisonIndex]->GetAnsiName() << "_" << Number-1;
			return s.str();
		}
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	}
	inline std::string GetAnsiName() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	}
	inline std::wstring GetNameW() const
	{
		if (Number > 0)
		{
			std::wstringstream s;
			s << GetGlobalNames()[ComparisonIndex]->GetWideName() << L"_" << Number-1;
			return s.str();
		}
		return GetGlobalNames()[ComparisonIndex]->GetWideName();
	}
#ifdef UNI_NAMES
	inline std::wstring GetName() const
	{
		return GetNameW();
	}
#else
	inline std::string GetName() const
	{
		return GetNameA();
	}
#endif

	inline bool operator==(const FName& other) const
	{
		return ComparisonIndex == other.ComparisonIndex && Number == other.Number;
	}

	inline bool operator!=(const FName& other) const
	{
		return !(this->operator==(other));
	}

	inline bool operator==(const char* other) const
	{
		CG::FNameEntry* entry = CG::FName::GetGlobalNames()[ComparisonIndex];
		return strncmp(entry->AnsiName, other, entry->GetLength()) == 0;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	inline TEnumAsByte()
	{
	}

	inline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit inline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	inline operator TEnum() const
	{
		return (TEnum)value;
	}

	inline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	inline UObject* GetObject() const
	{
		return ObjectPointer;
	}
	inline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}
	inline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<typename InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	inline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}
	inline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}
	inline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FText
{
public:
	void *Data;
	char UnknownData[0x10];

	void SetFromString(CG::FString const& str)
	{
		FText tmp = FromString(str);
		Data = tmp.Data;
	}

	inline FText& operator=(const wchar_t* other)
	{
		SetFromString(CG::FString(other));
		return *this;
	}

	static CG::FText FromString(CG::FString const& str)
	{
		uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleA(0));
		auto ptr = ((CG::FText(__fastcall*)(CG::FString const&))(base + 0xE26010));
		return ptr(str);
	}
};

struct FScriptDelegate
{
	char UnknownData[0x10];
};

struct FScriptMulticastDelegate
{
	char UnknownData[0x10];
};

struct FMulticastSparseDelegate
{
	char UnknownData[0x1];
};

struct FStructBaseChain
{
	struct FStructBaseChain** StructBaseChainArray;
	int32_t NumStructBasesInChainMinusOne;
	unsigned char pad_EKZ822LQWW[0x04];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

#ifdef UE4
struct FWeakObjectPtr
{
public:
	inline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : public TWeakObjectPtrBase
{
public:
	inline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	inline T& operator*() const
	{
		return *Get();
	}

	inline T* operator->() const
	{
		return Get();
	}

	inline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	inline operator T* () const
	{
		return TBASE::Get();
	}

	inline operator const T* () const
	{
		return (const T*)TBASE::Get();
	}

	explicit inline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	char UnknownData[0x10];
};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{
};

class FSoftObjectPath_
{
	unsigned char padding[0x4];
public:
	struct FName                                       AssetPathName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SubPathString;
};


struct FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath_>
{
};

template<typename ObjectType>
class TAssetPtr : FAssetPtr
{
};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{
};
#endif

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

