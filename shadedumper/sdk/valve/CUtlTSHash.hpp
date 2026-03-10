//===== Copyright © 1996-2005, Valve Corporation, All rights reserved. ======//
//
// Purpose: 
//
// $NoKeywords: $
//
// Thread-safe hash class
//===========================================================================//

#ifndef UTLTSHASH_H
#define UTLTSHASH_H

#ifdef _WIN32
#pragma once
#endif

#include <limits.h>
#include <vector>

#include "CUtlMemoryPoolBase.hpp"


//=============================================================================
// 
// Threadsafe Hash
//
// Number of buckets must be a power of 2.
// Key must be intp sized (32-bits on x32, 64-bits on x64)
// Designed for a usage pattern where the data is semi-static, and there
// is a well-defined point where we are guaranteed no queries are occurring.
// 
// Insertions are added into a thread-safe list, and when Commit() is called,
// the insertions are moved into a lock-free list
//
// Elements are never individually removed; clears must occur at a time
// where we and guaranteed no queries are occurring
//
typedef long long intp;
typedef intp UtlTSHashHandle_t;

template < class T >
class ITSHashConstructor
{
public:
	virtual void Construct(T * pElement) = 0;
};

template < class T >
class CDefaultTSHashConstructor : public ITSHashConstructor< T >
{
public:
	virtual void Construct(T* pElement)
	{
		::Construct(pElement);
	}
};

template < class KEYTYPE = intp >
class CUtlTSHashGenericHash
{
public:
	static int Hash(const KEYTYPE& key, int nBucketMask)
	{
		int nHash = HashIntConventional((intp)key);
		if (nBucketMask <= USHRT_MAX)
		{
			nHash ^= (nHash >> 16);
		}
		if (nBucketMask <= UCHAR_MAX)
		{
			nHash ^= (nHash >> 8);
		}
		return (nHash & nBucketMask);
	}

	static bool Compare(const KEYTYPE& lhs, const KEYTYPE& rhs)
	{
		return lhs == rhs;
	}
};

template < class KEYTYPE >
class CUtlTSHashUseKeyHashMethod
{
public:
	static int Hash(const KEYTYPE& key, int nBucketMask)
	{
		uint32 nHash = key.HashValue();
		return (nHash & nBucketMask);
	}

	static bool Compare(const KEYTYPE& lhs, const KEYTYPE& rhs)
	{
		return lhs == rhs;
	}
};

template< class T, int BUCKET_COUNT, class KEYTYPE = intp, class HashFuncs = CUtlTSHashGenericHash< KEYTYPE > >
class CUtlTSHash
{
public:
	// Constructor/Deconstructor.
	CUtlTSHash(int nAllocationCount);
	~CUtlTSHash();

	// Invalid handle.
	static UtlTSHashHandle_t InvalidHandle(void) { return (UtlTSHashHandle_t)0; }

	// Retrieval. Super fast, is thread-safe
	UtlTSHashHandle_t Find(KEYTYPE uiKey);

	// Insertion ( find or add ).
	UtlTSHashHandle_t Insert(KEYTYPE uiKey, const T& data, bool* pDidInsert = NULL);
	UtlTSHashHandle_t Insert(KEYTYPE uiKey, ITSHashConstructor<T>* pConstructor, bool* pDidInsert = NULL);

	// This insertion method assumes the element is not in the hash table, skips 
	UtlTSHashHandle_t FastInsert(KEYTYPE uiKey, const T& data);
	UtlTSHashHandle_t FastInsert(KEYTYPE uiKey, ITSHashConstructor<T>* pConstructor);

	// Commit recent insertions, making finding them faster.
	// Only call when you're certain no threads are accessing the hash table
	void Commit();

	// Removal.	Only call when you're certain no threads are accessing the hash table
	void FindAndRemove(KEYTYPE uiKey);
	void Remove(UtlTSHashHandle_t hHash) { FindAndRemove(GetID(hHash)); }
	void RemoveAll(void);
	void Purge(void);

	// Returns the number of elements in the hash table
	int Count() const;

	// Returns elements in the table
	int GetElements(int nFirstElement, int nCount, UtlTSHashHandle_t* pHandles) const;

	// Element access
	T& Element(UtlTSHashHandle_t hHash);
	T const& Element(UtlTSHashHandle_t hHash) const;
	T& operator[](UtlTSHashHandle_t hHash);
	T const& operator[](UtlTSHashHandle_t hHash) const;
	KEYTYPE GetID(UtlTSHashHandle_t hHash) const;

	template <typename Predicate>
	inline std::vector<T> merge_without_duplicates(const std::vector<T>& allocated_list, const std::vector<T>& un_allocated_list, Predicate pred);
	std::vector<T> GetElements(int nFirstElement = 0);


	// Convert element * to hashHandle
	UtlTSHashHandle_t ElementPtrToHandle(T* pElement) const;

private:
	// Templatized for memory tracking purposes
	template < typename Data_t >
	struct HashFixedDataInternal_t
	{
		KEYTYPE	m_uiKey;
		HashFixedDataInternal_t< Data_t >* m_pNext;
		Data_t	m_Data;
	};

	class HashAllocatedBlob_t
	{
	public:
		HashAllocatedBlob_t* m_unAllocatedNext; // 0x0000
		char pad_0008[8];                       // 0x0008
		T m_unAllocatedData;                    // 0x0010
		char pad_0018[8];                       // 0x0018
	}; // Size: 0x0020

	typedef HashFixedDataInternal_t<T> HashFixedData_t;

	enum
	{
		BUCKET_MASK = BUCKET_COUNT - 1
	};

	struct HashBucket_t
	{
		CThreadSpinRWLock m_AddLock;
		HashFixedData_t* m_pFirst;
		HashFixedData_t* m_pFirstUncommitted;
	};

	UtlTSHashHandle_t Find(KEYTYPE uiKey, HashFixedData_t* pFirstElement, HashFixedData_t* pLastElement);
	UtlTSHashHandle_t InsertUncommitted(KEYTYPE uiKey, HashBucket_t& bucket);
	CUtlMemoryPoolBase m_EntryMemory;
	HashBucket_t m_aBuckets[BUCKET_COUNT];
	bool m_bNeedsCommit;
	CInterlockedInt m_ContentionCheck;
};

template<class T, int BUCKET_COUNT, class KEYTYPE, class HashFuncs>
template <typename Predicate>
inline std::vector<T> CUtlTSHash<T, BUCKET_COUNT, KEYTYPE, HashFuncs>::merge_without_duplicates(const std::vector<T>& allocated_list,
	const std::vector<T>& un_allocated_list, Predicate pred) {
	std::vector<T> merged_list = allocated_list;

	for (const auto& item : un_allocated_list) {
		if (std::ranges::find_if(allocated_list, [&](const T& elem) { return pred(elem, item); }) == allocated_list.end()) {
			merged_list.push_back(item);
		}
	}

	return merged_list;
}

template <typename T>
bool ptr_compare(const T& item1, const T& item2) {
	return item1 == item2;
}

template<class T, int BUCKET_COUNT, class KEYTYPE, class HashFuncs>
std::vector<T> CUtlTSHash<T, BUCKET_COUNT, KEYTYPE, HashFuncs>::GetElements(int nFirstElement) {
	int n_count = m_EntryMemory.m_BlocksAllocated;
	std::vector<T> AllocatedList;
	if (n_count > 0) {
		int nIndex = 0;
		for (int i = 0; i < BUCKET_COUNT; i++) {
			const HashBucket_t& bucket = m_aBuckets[i];
			for (HashFixedData_t* pElement = bucket.m_pFirstUncommitted; pElement; pElement = pElement->m_pNext) {
				if (--nFirstElement >= 0)
					continue;

				if (pElement->m_Data == nullptr)
					continue;

				AllocatedList.emplace_back(pElement->m_Data);
				++nIndex;

				if (nIndex >= n_count)
					break;
			}
		}
	}

	n_count = m_EntryMemory.m_PeakAlloc - m_EntryMemory.m_BlocksAllocated;

	std::vector<T> unAllocatedList;
	if (n_count > 0) {
		int nIndex = 0;
		auto m_unBuckets = *reinterpret_cast<HashAllocatedBlob_t**>(&m_EntryMemory.m_FreeBlocks.m_Head.value32);
		for (auto unallocated_element = m_unBuckets; unallocated_element; unallocated_element = unallocated_element->m_unAllocatedNext) {
			if (unallocated_element->m_unAllocatedData == nullptr)
				continue;

			unAllocatedList.emplace_back(unallocated_element->m_unAllocatedData);
			++nIndex;

			if (nIndex >= n_count)
				break;
		}
	}

	return merge_without_duplicates(AllocatedList, unAllocatedList, ptr_compare<T>);
}


//-----------------------------------------------------------------------------
// Returns the number of elements in the hash table
//-----------------------------------------------------------------------------
template<class T, int BUCKET_COUNT, class KEYTYPE, class HashFuncs>
inline int CUtlTSHash<T, BUCKET_COUNT, KEYTYPE, HashFuncs>::Count() const
{
	return m_EntryMemory.Count();
}


//-----------------------------------------------------------------------------
// Returns elements in the table
//-----------------------------------------------------------------------------
template<class T, int BUCKET_COUNT, class KEYTYPE, class HashFuncs>
int CUtlTSHash<T, BUCKET_COUNT, KEYTYPE, HashFuncs>::GetElements(int nFirstElement, int nCount, UtlTSHashHandle_t* pHandles) const
{
	int nIndex = 0;
	for (int i = 0; i < BUCKET_COUNT; i++)
	{
		const HashBucket_t& bucket = m_aBuckets[i];
		bucket.m_AddLock.LockForRead(__FILE__, __LINE__);
		for (HashFixedData_t* pElement = bucket.m_pFirstUncommitted; pElement; pElement = pElement->m_pNext)
		{
			if (--nFirstElement >= 0)
				continue;

			pHandles[nIndex++] = (UtlTSHashHandle_t)pElement;
			if (nIndex >= nCount)
			{
				bucket.m_AddLock.UnlockRead(__FILE__, __LINE__);
				return nIndex;
			}
		}
		bucket.m_AddLock.UnlockRead(__FILE__, __LINE__);
	}
	return nIndex;
}


//-----------------------------------------------------------------------------
// Purpose: Insert data into the hash table given its key (KEYTYPE),
//          without a check to see if the element already exists within the tree.
//-----------------------------------------------------------------------------
template<class T, int BUCKET_COUNT, class KEYTYPE, class HashFuncs>
inline UtlTSHashHandle_t CUtlTSHash<T, BUCKET_COUNT, KEYTYPE, HashFuncs>::InsertUncommitted(KEYTYPE uiKey, HashBucket_t& bucket)
{
	m_bNeedsCommit = true;
	HashFixedData_t* pNewElement = static_cast<HashFixedData_t*>(m_EntryMemory.Alloc());
	pNewElement->m_pNext = bucket.m_pFirstUncommitted;
	bucket.m_pFirstUncommitted = pNewElement;
	pNewElement->m_uiKey = uiKey;
	return (UtlTSHashHandle_t)pNewElement;
}



#endif // UTLTSHASH_H
