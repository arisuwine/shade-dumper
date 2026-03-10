#pragma once
#define NOMINMAX

#include <Windows.h>
#include <optional>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <filesystem>


#include "../sdk/CInterfaceSystem.hpp"

class CSchemaSystem;
class CSchemaClassInfo;
class CSchemaSystemTypeScope;
class CSchemaEnumInfo;

namespace fs = std::filesystem;

static inline CSchemaSystem* g_pSchemaSystem = CInterfaceSystem::Get<CSchemaSystem>("schemasystem.dll", "SchemaSystem_001");

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
            int m_nOffset;
            std::string m_sTypeInfo;
        };

        std::string m_sClassName;
        std::string m_sBaseClassName;
        std::vector<Field_t> m_Fields;
        std::vector<std::string> m_Flags;

        SchemaCacheClassInfo_t(std::string_view sClassName, std::string_view sBaseClassName, std::vector<std::string> Flags) : m_sClassName(std::string(sClassName)), m_sBaseClassName(std::string(sBaseClassName)), m_Flags(std::move(Flags)) {}
        void AddField(std::string_view sName, int nOffset, std::string_view sTypeName) {
            m_Fields.push_back({ std::string(sName), nOffset, std::string(sTypeName) });
        }
    };

    struct SchemaCacheEnumInfo_t {
        struct Field_t {
            std::string m_sName;
            int64_t m_nValue;
        };

        std::string m_sEnumName;
        uint8_t m_nSize;
        std::vector<std::string> m_Flags;
        std::vector<Field_t> m_Fields;

        SchemaCacheEnumInfo_t(std::string_view sEnumName, uint8_t nSize, std::vector<std::string> Flags) : m_sEnumName(std::string(sEnumName)), m_nSize(nSize), m_Flags(std::move(Flags)) {}
        void AddField(std::string_view sName, int64_t nValue) {
            m_Fields.push_back({ std::string(sName), nValue });
        }
    };

    using CSchemaCacheClassVector = std::vector<SchemaCacheClassInfo_t>;
    using CSchemaCacheEnumVector = std::vector       <SchemaCacheEnumInfo_t>;

    static CSchemaCacheClassVector          SortByInheritance(const CSchemaCacheClassVector& input);

    static void                             GenerateHeaderFile(const fs::path& directory, std::string_view sScopeName, const CSchemaCacheEnumVector& enums, const CSchemaCacheClassVector& classes);
    static void                             GenerateClass(std::ofstream& file, const CSchemaCacheClassVector& classes);
    static void                             GenerateEnum(std::ofstream& file, const CSchemaCacheEnumVector& enums);
    static void                             GenerateInfoFile(const fs::path& directory);

public:
    static void Dump(fs::path path = fs::path());
    SchemaDumper() = delete;
};