#pragma once

#include "SchemaMetaInfoHandle_t.hpp"

// forward declarations
class CSchemaSystemTypeScope;
class CSchemaClassInfo;
class CSchemaEnumInfo;
struct SchemaMetadataEntryData_t;

// enums
enum SchemaCollectionManipulatorAction_t
{
	SCHEMA_COLLECTION_MANIPULATOR_ACTION_GET_COUNT = 0,
	SCHEMA_COLLECTION_MANIPULATOR_ACTION_GET_ELEMENT_CONST,
	SCHEMA_COLLECTION_MANIPULATOR_ACTION_GET_ELEMENT,
	SCHEMA_COLLECTION_MANIPULATOR_ACTION_SWAP_ELEMENTS,
	SCHEMA_COLLECTION_MANIPULATOR_ACTION_INSERT_BEFORE,
	SCHEMA_COLLECTION_MANIPULATOR_ACTION_REMOVE_MULTIPLE,
	SCHEMA_COLLECTION_MANIPULATOR_ACTION_SET_COUNT,
};

enum SchemaTypeCategory_t : uint8_t
{
	SCHEMA_TYPE_BUILTIN = 0,
	SCHEMA_TYPE_POINTER,
	SCHEMA_TYPE_BITFIELD,
	SCHEMA_TYPE_FIXED_ARRAY,
	SCHEMA_TYPE_ATOMIC,
	SCHEMA_TYPE_DECLARED_CLASS,
	SCHEMA_TYPE_DECLARED_ENUM,
	SCHEMA_TYPE_INVALID,
};

enum SchemaAtomicCategory_t : uint8_t
{
	SCHEMA_ATOMIC_PLAIN = 0,
	SCHEMA_ATOMIC_T,
	SCHEMA_ATOMIC_COLLECTION_OF_T,
	SCHEMA_ATOMIC_TT,
	SCHEMA_ATOMIC_I,
	SCHEMA_ATOMIC_INVALID,
};

enum SchemaBuiltinType_t
{
	SCHEMA_BUILTIN_TYPE_INVALID = 0,
	SCHEMA_BUILTIN_TYPE_VOID,
	SCHEMA_BUILTIN_TYPE_CHAR,
	SCHEMA_BUILTIN_TYPE_INT8,
	SCHEMA_BUILTIN_TYPE_UINT8,
	SCHEMA_BUILTIN_TYPE_INT16,
	SCHEMA_BUILTIN_TYPE_UINT16,
	SCHEMA_BUILTIN_TYPE_INT32,
	SCHEMA_BUILTIN_TYPE_UINT32,
	SCHEMA_BUILTIN_TYPE_INT64,
	SCHEMA_BUILTIN_TYPE_UINT64,
	SCHEMA_BUILTIN_TYPE_FLOAT32,
	SCHEMA_BUILTIN_TYPE_FLOAT64,
	SCHEMA_BUILTIN_TYPE_BOOL,
	SCHEMA_BUILTIN_TYPE_COUNT,
};

// typedefs
typedef int LoggingChannelID_t;
typedef void* (*SchemaCollectionManipulatorFn_t)(SchemaCollectionManipulatorAction_t eAction, void* pCollection, int index1, int index2);

struct SchemaAtomicTypeInfo_t {
	const char* m_pszName;
	const char* m_pszTokenName;

	int m_nAtomicID;

	int m_nStaticMetadataCount;
	SchemaMetadataEntryData_t* m_pStaticMetadata;
};

class CSchemaType {
public:
	void* vft;										// 0x0
	const char* m_sTypeName;						// 0x8
	CSchemaSystemTypeScope* m_pTypeScope;			// 0x10
	SchemaTypeCategory_t m_eTypeCategory;			// 0x18
	SchemaAtomicCategory_t m_eAtomicCategory;		// 0x19
};

class CSchemaType_Builtin : public CSchemaType
{
public:
	SchemaBuiltinType_t m_eBuiltinType;
	uint8_t m_nSize;
};

class CSchemaType_Ptr : public CSchemaType
{
public:
	CSchemaType* m_pObjectType;
};

class CSchemaType_Atomic : public CSchemaType
{
public:
	SchemaAtomicTypeInfo_t* m_pAtomicInfo;
	int m_nAtomicID;
	uint16_t m_nSize;
	uint8_t m_nAlignment;
};

class CSchemaType_Atomic_T : public CSchemaType_Atomic
{
public:
	CSchemaType* m_pTemplateType;
};

class CSchemaType_Atomic_CollectionOfT : public CSchemaType_Atomic_T
{
public:
	SchemaCollectionManipulatorFn_t m_pfnManipulator;
	uint16_t m_nElementSize;
	uint64_t m_nFixedBufferCount;
};

class CSchemaType_Atomic_TT : public CSchemaType_Atomic_T
{
public:
	CSchemaType* m_pTemplateType2;
};

class CSchemaType_Atomic_I : public CSchemaType_Atomic
{
public:
	int m_nInteger;
};

class CSchemaType_DeclaredClass : public CSchemaType
{
public:
	CSchemaClassInfo* m_pClassInfo;
	bool m_bGlobalPromotionRequired;
};

class CSchemaType_DeclaredEnum : public CSchemaType
{
public:
	CSchemaEnumInfo* m_pEnumInfo;
	bool m_bGlobalPromotionRequired;
};

class CSchemaType_FixedArray : public CSchemaType
{
public:
	int m_nElementCount;
	uint16_t m_nElementSize;
	uint8_t m_nElementAlignment;
	CSchemaType* m_pElementType;
};

class CSchemaType_Bitfield : public CSchemaType
{
public:
	int m_nBitfieldCount;
};