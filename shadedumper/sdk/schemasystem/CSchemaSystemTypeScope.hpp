#pragma once
#include <cstdint>

#include "CSchemaType.hpp"

#include "SchemaClassInfoData_t.hpp"

class CSchemaInfo;
class CSchemaClassInfo;
class CSchemaEnumInfo;

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

	uint8_t m_nFlags;

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
};

template <typename T>
struct SchemaDeclaredTypeEntry_t {
	uint64_t m_Hash1;
	uint64_t m_Hash2;
	T* m_pData;
};

class CSchemaSystemTypeScope {
public:
	void* vft;
	char m_szScopeName[256];
	BYTE pad[0x368];
	uint16_t m_nNumDeclaredClasses;
	BYTE pad_0480[0x6];
	SchemaDeclaredTypeEntry_t<CSchemaType_DeclaredClass>* m_pDeclaredClasses;
	BYTE pad2[0x20];
	uint16_t m_nNumDeclaredEnums;
	BYTE pad3[0x6];
	SchemaDeclaredTypeEntry_t<CSchemaType_DeclaredEnum>* m_pDeclaredEnums;
};