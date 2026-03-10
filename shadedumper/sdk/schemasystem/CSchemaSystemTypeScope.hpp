#pragma once
#include <cstdint>
#include <vector>
#include <string>
#include <format>
#include <algorithm>

#include "CSchemaType.hpp"

#include "../valve/CUtlTSHash.hpp"

class CSchemaInfo;
class CSchemaClassInfo;
class CSchemaEnumInfo;
class CSchemaClassInfo;

enum SchemaClassManipulatorAction_t
{
	SCHEMA_CLASS_MANIPULATOR_ACTION_REGISTER = 0,
	SCHEMA_CLASS_MANIPULATOR_ACTION_REGISTER_PRE,
	SCHEMA_CLASS_MANIPULATOR_ACTION_ALLOCATE,
	SCHEMA_CLASS_MANIPULATOR_ACTION_DEALLOCATE,
	SCHEMA_CLASS_MANIPULATOR_ACTION_CONSTRUCT_IN_PLACE,
	SCHEMA_CLASS_MANIPULATOR_ACTION_DESCTRUCT_IN_PLACE,
	SCHEMA_CLASS_MANIPULATOR_ACTION_GET_SCHEMA_BINDING,
};

enum SchemaClassFlags1_t : uint32_t
{
	SCHEMA_CF1_HAS_VIRTUAL_MEMBERS = (1 << 0),
	SCHEMA_CF1_IS_ABSTRACT = (1 << 1),
	SCHEMA_CF1_HAS_TRIVIAL_CONSTRUCTOR = (1 << 2),
	SCHEMA_CF1_HAS_TRIVIAL_DESTRUCTOR = (1 << 3),
	SCHEMA_CF1_LIMITED_METADATA = (1 << 4),
	SCHEMA_CF1_INHERITANCE_DEPTH_CALCULATED = (1 << 5),
	SCHEMA_CF1_MODULE_LOCAL_TYPE_SCOPE = (1 << 6),
	SCHEMA_CF1_GLOBAL_TYPE_SCOPE = (1 << 7),
	SCHEMA_CF1_CONSTRUCT_ALLOWED = (1 << 8),
	SCHEMA_CF1_CONSTRUCT_DISALLOWED = (1 << 9),
	SCHEMA_CF1_INFO_TAG_MNetworkAssumeNotNetworkable = (1 << 10),
	SCHEMA_CF1_INFO_TAG_MNetworkNoBase = (1 << 11),
	SCHEMA_CF1_INFO_TAG_MIgnoreTypeScopeMetaChecks = (1 << 12),
	SCHEMA_CF1_INFO_TAG_MDisableDataDescValidation = (1 << 13),
	SCHEMA_CF1_INFO_TAG_MClassHasEntityLimitedDataDesc = (1 << 14),
	SCHEMA_CF1_INFO_TAG_MClassHasCustomAlignedNewDelete = (1 << 15),
	SCHEMA_CF1_UNK016 = (1 << 16),
	SCHEMA_CF1_INFO_TAG_MConstructibleClassBase = (1 << 17),
	SCHEMA_CF1_INFO_TAG_MHasKV3TransferPolymorphicClassname = (1 << 18),
};

enum SchemaEnumFlags_t : uint8_t
{
	SCHEMA_EF_IS_REGISTERED = (1 << 0),
	SCHEMA_EF_MODULE_LOCAL_TYPE_SCOPE = (1 << 1),
	SCHEMA_EF_GLOBAL_TYPE_SCOPE = (1 << 2),
};

typedef void* (*SchemaClassManipulatorFn_t)(SchemaClassManipulatorAction_t eAction, void* pObject);

struct SchemaMetadataEntryData_t
{
	const char* m_pszName;
	void* m_pData;
};

struct SchemaClassFieldData_t
{
	const char* m_pszName;

	CSchemaType* m_pType;

	int m_nSingleInheritanceOffset;

	int m_nStaticMetadataCount;
	SchemaMetadataEntryData_t* m_pStaticMetadata;

	std::string GetTypeName() const {
		std::string sTypeName = m_pType->m_sTypeName;
		sTypeName.erase(std::remove(sTypeName.begin(), sTypeName.end(), ' '), sTypeName.end());
		return sTypeName;
	}
};

struct SchemaBaseClassInfoData_t
{
	uint32_t m_nOffset;
	CSchemaClassInfo* m_pClass;
};

struct datamap_t
{
	void* dataDesc; // typedescription_t
	int					dataNumFields;
	char const* dataClassName;
	datamap_t* baseMap;

	void* m_pOptimizedDataMap; // optimized_datamap_t
	int					m_nPackedSize;

#if defined(_DEBUG)
	bool				bValidityChecked;
#endif // _DEBUG
};

struct SchemaEnumeratorInfoData_t
{
	const char* m_pszName;

	int64_t m_nValue;

	int m_nStaticMetadataCount;
	SchemaMetadataEntryData_t* m_pStaticMetadata;
};

struct SchemaEnumInfoData_t
{
	CSchemaEnumInfo* m_pSchemaBinding;

	const char* m_pszName;
	const char* m_pszProjectName;

	uint8_t m_nSize;
	uint8_t m_nAlignment;

	SchemaEnumFlags_t m_nFlags;

	uint16_t m_nEnumeratorCount;
	uint16_t m_nStaticMetadataCount;

	SchemaEnumeratorInfoData_t* m_pEnumerators;
	SchemaMetadataEntryData_t* m_pStaticMetadata;

	CSchemaSystemTypeScope* m_pTypeScope;

	int64_t m_nMinEnumeratorValue;
	int64_t m_nMaxEnumeratorValue;
};

class CSchemaEnumInfo : public SchemaEnumInfoData_t
{
public:
	std::vector<SchemaEnumeratorInfoData_t> GetFields() const {
		if (!m_pEnumerators)
			return {};

		return { m_pEnumerators, m_pEnumerators + m_nEnumeratorCount };
	}

	std::string_view GetModuleName() const {
		if (!m_pszProjectName)
			return {};

		return m_pszProjectName;
	}

	std::string GetName() const {
		if (!m_pszName)
			return "";

		std::string sName = m_pszName;
		std::replace(sName.begin(), sName.end(), ':', '_');

		return sName;
	}

	std::vector<std::string> GetStringFlags() const {
		std::vector<std::string> flags;

		if (m_nFlags & SCHEMA_EF_MODULE_LOCAL_TYPE_SCOPE)
			flags.emplace_back("Local Type Scope");

		if (m_nFlags & SCHEMA_EF_GLOBAL_TYPE_SCOPE)
			flags.emplace_back("Global Type Scope");

		return flags;
	}

	uint8_t GetSize() const {
		return m_nSize;
	}

	int64_t GetMinValue() const {
		return m_nMinEnumeratorValue;
	}
};

struct SchemaClassInfoData_t
{
	CSchemaClassInfo* m_pSchemaBinding;

	const char* m_pszName;
	const char* m_pszProjectName;

	int m_nSize;

	uint16_t m_nFieldCount;
	uint16_t m_nStaticMetadataCount;

	uint8_t m_nAlignment;
	uint8_t m_nBaseClassCount;

	uint16_t m_nMultipleInheritanceDepth;
	uint16_t m_nSingleInheritanceDepth;

	SchemaClassFieldData_t* m_pFields;
	SchemaBaseClassInfoData_t* m_pBaseClasses;
	datamap_t* m_pDataDescMap;
	SchemaMetadataEntryData_t* m_pStaticMetadata;

	CSchemaSystemTypeScope* m_pTypeScope;
	CSchemaType_DeclaredClass* m_pDeclaredClass;

	SchemaClassFlags1_t m_nClassFlags;
	uint32_t m_nFlags2;

	typedef void* (*SchemaClassManipulatorFn_t)(int eAction, void* pObject);
	SchemaClassManipulatorFn_t m_pfnManipulator;
};

class CSchemaClassInfo : public SchemaClassInfoData_t
{
public:
	std::vector<SchemaClassFieldData_t> GetFields() const {
		if (!m_pFields)
			return {};

		return { m_pFields, m_pFields + m_nFieldCount };
	}

	std::string_view GetModuleName() const {
		if (!m_pszProjectName)
			return {};

		return m_pszProjectName;
	}

	std::string GetName() const {
		if (!m_pszName)
			return "";

		std::string sName = m_pszName;
		std::replace(sName.begin(), sName.end(), ':', '_');

		return sName;
	}

	std::string GetBaseClassName() const {
		if (!m_pBaseClasses || !m_pBaseClasses->m_pClass)
			return {};

		return m_pBaseClasses->m_pClass->GetName();
	}

	std::vector<std::string> GetStringFlags() const {
		std::vector<std::string> flags;

		if (m_nClassFlags & SCHEMA_CF1_HAS_VIRTUAL_MEMBERS)
			flags.emplace_back("Has VTable");

		if (m_nClassFlags & SCHEMA_CF1_IS_ABSTRACT)
			flags.emplace_back("Is Absract");

		if (m_nClassFlags & SCHEMA_CF1_HAS_TRIVIAL_CONSTRUCTOR)
			flags.emplace_back("Has Trivial Constructor");

		if (m_nClassFlags & SCHEMA_CF1_HAS_TRIVIAL_DESTRUCTOR)
			flags.emplace_back("Has Trivial Destructor");

		if (m_nClassFlags & SCHEMA_CF1_CONSTRUCT_ALLOWED)
			flags.emplace_back("Construct Allowed");

		if (m_nClassFlags & SCHEMA_CF1_MODULE_LOCAL_TYPE_SCOPE)
			flags.emplace_back("Local Type Scope");

		if (m_nClassFlags & SCHEMA_CF1_GLOBAL_TYPE_SCOPE)
			flags.emplace_back("Global Type Scope");

		return flags;
	}
};

template <typename T>
struct SchemaDeclaredTypeEntry_t {
	uint64_t m_Hash1;
	uint64_t m_Hash2;
	T* m_pData;
};

class CSchemaSystemTypeScope
{
public:
	void* __vftable; //0x0000
	char m_ScopeName[256]; //0x0008
	char pad_0108[0x458];
	CUtlTSHash<CSchemaClassInfo*, 256, uint32_t> m_ClassBindings; //0x0560
	CUtlTSHash<CSchemaEnumInfo*, 256, uint32_t> m_EnumBindings; //0x1DD0

	std::string_view GetName() const {
		return m_ScopeName;
	}
};