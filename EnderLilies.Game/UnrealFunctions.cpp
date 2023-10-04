#include "pch.h"
#include "SDK.h"
#include "UnrealFunctions.hpp"

namespace Unreal
{
    RC::Function<void(const CG::FName*, struct CG::FString&)> FName::ToStringInternal;
    RC::Function<CG::FName(const wchar_t*, EFindName)> FName::ConstructorInternal;
}
