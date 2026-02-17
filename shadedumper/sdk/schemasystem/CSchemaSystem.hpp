#pragma once
#include <cstdint>

#include "CSchemaSystemTypeScope.hpp"
#include "CSchemaType.hpp"

#include "../valve/CUtlVector.hpp"

struct ClassBindingScopeBlock_t {
public:
	uint64_t m_Hash;
	uint64_t m_pUnknown;
	CSchemaType_DeclaredClass* m_pDeclaredClass;
};

class CSchemaSystem {
public:
	char pad[0x190];
	CUtlVector<CSchemaSystemTypeScope*> m_TypeScopes;
};