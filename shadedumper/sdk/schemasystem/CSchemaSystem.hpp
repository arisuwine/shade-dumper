#pragma once
#include <cstdint>

#include "CSchemaSystemTypeScope.hpp"
#include "CSchemaType.hpp"

#include "../valve/CUtlVector.hpp"

#include "../../utils/vmt.hpp"

struct ClassBindingScopeBlock_t {
public:
	uint64_t m_Hash;
	uint64_t m_pUnknown;
	CSchemaType_DeclaredClass* m_pDeclaredClass;
};

class ISchemaSystem {
public:
	CSchemaSystemTypeScope* FindTypeScopeForModule(const char* pszModuleName, const char** ppszBindingName = NULL) {
		return CALL_VIRTUAL(this, CSchemaSystemTypeScope*, 13, pszModuleName, ppszBindingName);
	}
};

class CSchemaSystem : public ISchemaSystem {
public:
	char pad[0x190];
	CUtlVector<CSchemaSystemTypeScope*> m_TypeScopes;
};