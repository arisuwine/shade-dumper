#pragma once

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