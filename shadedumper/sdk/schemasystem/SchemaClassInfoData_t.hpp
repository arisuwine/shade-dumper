#pragma once
#include <cstdint>

class CSchemaClassInfo;
class SchemaClassFieldData_t;
class SchemaBaseClassInfoData_t;
class datamap_t;
class SchemaMetadataEntryData_t;
class CSchemaSystemTypeScope;
class CSchemaType_DeclaredClass;

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

	uint32_t m_nFlags1;
	uint32_t m_nFlags2;

	typedef void* (*SchemaClassManipulatorFn_t)(int eAction, void* pObject);
	SchemaClassManipulatorFn_t m_pfnManipulator;
};

class CSchemaClassInfo : public SchemaClassInfoData_t
{
};