#pragma once

#ifndef UNREAL_FUNCTIONS_HPP
#define UNREAL_FUNCTIONS_HPP

#include "pch.h"
#include "SDK.h"
#include "Function.hpp"

namespace Unreal
{
    enum EFindName
    {
        FNAME_Find,
        FNAME_Add,
        FNAME_Replace_Not_Safe_For_Threading
    };

    struct FName
    {
    public:
        static RC::Function<void(const CG::FName*, struct CG::FString&)> ToStringInternal;
        static RC::Function<CG::FName(const wchar_t*, EFindName)> ConstructorInternal;
    };

    static std::string FNameToString(const CG::FName* name)
    {
        CG::FString out;
        FName::ToStringInternal(name, out);
        return out.ToString();
    }
    static std::wstring FNameToStringW(const CG::FName* name)
    {
        CG::FString out;
        FName::ToStringInternal(name, out);
        return out.ToWString();
    }
}

#endif //UNREAL_FUNCTIONS_HPP
