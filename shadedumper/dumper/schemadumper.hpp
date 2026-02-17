#pragma once
#include <Windows.h>
#include <optional>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <filesystem>

#include "../sdk/schemasystem/CSchemaSystem.hpp"
#include "../sdk/CInterfaceSystem.hpp"

class CSchemaClassInfo;
class CSchemaSystemTypeScope;
class CSchemaEnumInfo;

namespace fs = std::filesystem;

static inline CSchemaSystem* g_pCSchemaSystem = CInterfaceSystem::Get<CSchemaSystem>("schemasystem.dll", "SchemaSystem_001");

template <typename T>
__declspec(noinline) bool IsValid(void* p, size_t offset, T* result) {
    __try {
        uintptr_t target = reinterpret_cast<uintptr_t>(p) + offset;
        *result = *reinterpret_cast<T*>(target);
        return true;
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return false;
    }
}

static __declspec(noinline) bool IsValidString(const char* str) {
    __try {
        for (size_t i = 0; i < 256; i++)
            if (str[i] == '\0')
                return true;

        return false;
    }
    __except (GetExceptionCode() == EXCEPTION_ACCESS_VIOLATION
        ? EXCEPTION_EXECUTE_HANDLER
        : EXCEPTION_CONTINUE_SEARCH) {
        return false;
    }
}

template <typename T>
std::optional<T> SafeRead(void* p, size_t offset = 0) {
    T buffer;
    if (IsValid<T>(p, offset, &buffer))
        return buffer;

    return std::nullopt;
}

static std::optional<std::string_view> SafeReadString(const char* str) {
    if (IsValidString(str))
        return std::string_view(str);

    return std::nullopt;
}

class SchemaDumper {
private:
    struct DumperData_t {
        struct ModuleDumpData_t {
            std::string m_sModuleName;
            std::string m_sTimestamp;
            size_t m_nDumpedClasses;
            size_t m_nDumpedEnums;
        };

        std::string m_Date;
        long long m_nExecutionTime;
        std::vector<ModuleDumpData_t> m_ModuleData;
        size_t m_nTotalDumpedClasses;
        size_t m_nTotalDumpedEnums;
    };

    static inline DumperData_t m_DumpData;

    struct SchemaCacheClassInfo_t {
        struct Field_t {
            std::string m_sName;
            std::string m_sOffset;
            std::string m_sTypeInfo;
        };

        std::string m_sClassName;
        std::string m_sParentName;
        std::vector<Field_t> m_Fields;
        uint32_t m_nFlags;
    };

    struct SchemaCacheEnumInfo_t {
        struct Field_t {
            std::string m_sName;
            int64_t m_nValue;
        };

        std::string m_sEnumName;
        std::string m_sType;
        uint8_t m_nFlags;
        std::vector<Field_t> m_Fields;
    };

    using CSchemaCacheClassMap              = std::unordered_map<std::string, SchemaCacheClassInfo_t>;
    using CSchemaCacheEnumMap               = std::unordered_map<std::string, SchemaCacheEnumInfo_t>;
    using CSchemaCacheClassFieldVector      = std::vector       <SchemaCacheClassInfo_t::Field_t>;
    using CSchemaCacheEnumFieldVector       = std::vector       <SchemaCacheEnumInfo_t::Field_t>;
    using CSchemaCacheEnumVector            = std::vector       <SchemaCacheEnumInfo_t>;
    using CSchemaStringVector               = std::vector       <std::string>;
    using CSchemaUnorderedSetString         = std::unordered_set<std::string>;

    static std::string                      GetBaseClassName    (CSchemaClassInfo* pClassInfo);
    static bool                             ProccesTypeScope    (CSchemaSystemTypeScope* pTypeScope, CSchemaCacheEnumVector& enums, CSchemaCacheClassMap& unSorted, CSchemaCacheClassMap& sorted, CSchemaStringVector& order);
    static bool                             ProcessClasses      (CSchemaSystemTypeScope* pTypeScope, CSchemaCacheClassMap& unSorted, CSchemaCacheClassMap& sorted, CSchemaStringVector& order);
    static bool                             ProcessEnums        (CSchemaSystemTypeScope* pTypeScope, CSchemaCacheEnumVector& enums);

    template <typename ObjectType, typename ObjectInfoType, typename Executor, typename... Args>
    static void                             ProcessObjectGeneric(ObjectType* pArray, uint16_t nArraySize, size_t nOffset, Executor executor, Args&&... args);
    static bool                             ProcessSingleClass  (CSchemaClassInfo* pClassInfo, CSchemaCacheClassMap& unSorted, CSchemaCacheClassMap& sorted, CSchemaStringVector& order);
    static bool                             ProcessSingleEnum   (CSchemaEnumInfo* pEnumInfo, CSchemaCacheEnumVector& cachedEnums);

    template <typename ResultObject, typename ObjectType, typename Extractor>
    static void                             CollectFieldsGeneric(ResultObject& result, ObjectType* pArray, uint16_t nArraySize, Extractor extractor);
    static CSchemaCacheClassFieldVector     CollectClassFields  (CSchemaClassInfo* pClassInfo);
    static CSchemaCacheEnumFieldVector      CollectEnumFields   (CSchemaEnumInfo* pEnumInfo);

    static bool                             ResolveStep         (CSchemaCacheClassMap& unSorted, CSchemaCacheClassMap& sorted, CSchemaStringVector& order);
    static std::unordered_set<std::string>  ResolveOrphans      (CSchemaCacheClassMap& unSorted, CSchemaCacheClassMap& sorted, CSchemaStringVector& order);

    static void                             GenerateHeaderFile  (const fs::path& directory, std::string_view sScopeName, CSchemaCacheEnumVector& enums, CSchemaCacheClassMap& classes, CSchemaUnorderedSetString& missingParents, CSchemaStringVector& order);
    static void                             GenerateClass       (std::ofstream& file, CSchemaCacheClassMap& classes, CSchemaStringVector& order);
    static void                             GenerateEnum        (std::ofstream& file, CSchemaCacheEnumVector& enums);
    static void                             GenerateInfoFile    (const fs::path& directory);

public:
    static void Dump(fs::path path = fs::path());
    SchemaDumper() = delete;
};

template <typename ObjectType, typename ObjectInfoType, typename Executor, typename... Args>
void SchemaDumper::ProcessObjectGeneric(ObjectType* pArray, uint16_t nArraySize, size_t nOffset, Executor executor, Args&&... args) {
    for (uint16_t i = 0; i < nArraySize; i++) {
        auto pDeclaredObject = SafeRead<ObjectType>(pArray, sizeof(ObjectType) * i);
        if (!pDeclaredObject)
            continue;

        uintptr_t pData = reinterpret_cast<uintptr_t>(pDeclaredObject->m_pData);
        if (!pData)
            continue;

        auto pObjectInfo = SafeRead<ObjectInfoType*>(reinterpret_cast<void*>(pData + nOffset));
        if (!pObjectInfo || !(*pObjectInfo))
            continue;

        std::invoke(executor, *pObjectInfo, std::forward<Args>(args)...);
    }
}

template <typename ResultObject, typename ObjectType, typename Extractor>
void SchemaDumper::CollectFieldsGeneric(ResultObject& result, ObjectType* pArray, uint16_t nArraySize, Extractor extractor) {
    for (uint16_t i = 0; i < nArraySize; i++) {
        auto field = SafeRead<ObjectType>(pArray, sizeof(ObjectType) * i);
        if (!field)
            continue;

        auto pszName = SafeReadString((*field).m_pszName);
        if (!pszName)
            continue;

        bool bIsValid = std::ranges::all_of((*pszName), [](unsigned char c) {
            return isascii(c);
            });

        if (!bIsValid)
            continue;

        extractor(result, *field);
    }
}