#pragma once

class CSchemaSystemTypeScope;
class CSchemaClassInfo;
class CSchemaEnumInfo;
struct SchemaMetadataEntryData_t;

template <typename T>
struct SchemaMetaInfoHandle_t
{
	SchemaMetaInfoHandle_t() : m_pObj(nullptr) {}
	SchemaMetaInfoHandle_t(T* obj) : m_pObj(obj) {}
	inline T* Get() const { return m_pObj; }
	bool operator<(const SchemaMetaInfoHandle_t& rhs) const { return m_pObj < rhs.m_pObj; }
	bool operator==(const SchemaMetaInfoHandle_t& rhs) const { return m_pObj == rhs.m_pObj; }
	bool operator!=(const SchemaMetaInfoHandle_t& rhs) const { return m_pObj != rhs.m_pObj; }
	T& operator*() const { return *m_pObj; };
	T* operator->() const { return m_pObj; };

	T* m_pObj;
};

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

class CSchemaType {
public:
	void* vft;										// 0x0
	const char* m_sTypeName;						// 0x8
	CSchemaSystemTypeScope* m_pTypeScope;			// 0x10
	SchemaTypeCategory_t m_eTypeCategory;			// 0x18
	SchemaAtomicCategory_t m_eAtomicCategory;		// 0x19
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