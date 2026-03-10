#pragma once
#include <cstdint>
#include <emmintrin.h>
#include <cassert>
#include <shared_mutex>

typedef int32_t int32;
typedef int16_t int16;
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef __m128i int128;

#ifdef _WIN32
typedef uint32 ThreadId_t;
#else
typedef uint64 ThreadId_t;
#endif

#define Assert(expr) assert(expr)

#define TSLIST_NODE_ALIGN __declspec(align(16))
#define TSLIST_NODE_ALIGN_POST
#define TSLIST_HEAD_ALIGN_POST
#define PLATFORM_64BITS 1

struct TSLIST_NODE_ALIGN TSLNodeBase_t
{
	TSLNodeBase_t* Next; // name to match Windows
} TSLIST_NODE_ALIGN_POST;

union TSLIST_NODE_ALIGN TSLHead_t
{
	struct Value_t
	{
		TSLNodeBase_t* Next;
		// <sergiy> Depth must be in the least significant halfword when atomically loading into register,
		//          to avoid carrying digits from Sequence. Carrying digits from Depth to Sequence is ok,
		//          because Sequence can be pretty much random. We could operate on both of them separately,
		//          but it could perhaps (?) lead to problems with store forwarding. I don't know 'cause I didn't 
		//          performance-test or design original code, I'm just making it work on PowerPC.
#ifdef VALVE_BIG_ENDIAN
		int16	Sequence;
		int16   Depth;
#else
		int16   Depth;
		int16	Sequence;
#endif
#ifdef PLATFORM_64BITS
		int32   Padding;
#endif
	} value;

	struct Value32_t
	{
		TSLNodeBase_t* Next_do_not_use_me;
		int32   DepthAndSequence;
	} value32;

#ifdef PLATFORM_64BITS
	int128 value64x128;
#else
	int64 value64x128;
#endif
} TSLIST_HEAD_ALIGN_POST;

class TSLIST_NODE_ALIGN __declspec(dllimport) CTSListBase
{
public:

public:

	CTSListBase();
	~CTSListBase();

public:
	TSLHead_t m_Head;
} TSLIST_HEAD_ALIGN_POST;

template <typename T>
class CInterlockedIntT
{
public:
	CInterlockedIntT() : m_value(0) { static_assert(sizeof(T) == sizeof(int32)); }
	CInterlockedIntT(T value) : m_value(value) {}

	T operator()(void) const { return m_value; }
	operator T() const { return m_value; }

	bool operator!() const { return (m_value == 0); }
	bool operator==(T rhs) const { return (m_value == rhs); }
	bool operator!=(T rhs) const { return (m_value != rhs); }

	T operator+(T rhs) const { return m_value + rhs; }
	T operator-(T rhs) const { return m_value - rhs; }

private:
	volatile T m_value;
};

typedef CInterlockedIntT<int> CInterlockedInt;
typedef CInterlockedIntT<unsigned> CInterlockedUInt;

enum MemoryPoolGrowType_t
{
	UTLMEMORYPOOL_GROW_NONE = 0,	// Don't allow new blobs.
	UTLMEMORYPOOL_GROW_FAST = 1,	// New blob size is numElements * (i+1)  (ie: the blocks it allocates get larger and larger each time it allocates one).
	UTLMEMORYPOOL_GROW_SLOW = 2,	// New blob size is numElements.
};

enum MemAllocAttribute_t
{
	MemAllocAttribute_Unk0 = 0,
	MemAllocAttribute_Unk1 = 1,
	MemAllocAttribute_Unk2 = 2
};

class CAtomicMutex
{
public:
	enum class State
	{
		NONE = 0,
		Acquiring = (1 << 0),
		Acquired = (1 << 1),

		MASK = (1 << 2) - 1
	};

	CAtomicMutex(uint16 spin_iters = 200) :
		m_LockCount(0),
		m_AcquireSpinIterations(spin_iters),
		m_CurrentOwnerID(0)
	{
	}

	//------------------------------------------------------
	// Mutex acquisition/release. Const intentionally defeated.
	//------------------------------------------------------
	void Lock(const char* pFileName = NULL, int nLine = -1);
	void Lock(const char* pFileName = NULL, int nLine = -1) const { (const_cast<CAtomicMutex*>(this))->Lock(pFileName, nLine); }
	void Unlock(const char* pFileName = NULL, int nLine = -1);
	void Unlock(const char* pFileName = NULL, int nLine = -1) const { (const_cast<CAtomicMutex*>(this))->Unlock(pFileName, nLine); }

	bool AssertOwnedByCurrentThread();
	void SetTrace(bool) {}

private:
	void AcquireLock(ThreadId_t threadid);

private:
	// Uses CAtomicMutex::State enum
	CInterlockedUInt m_State;
	uint16		m_LockCount;
	uint16		m_AcquireSpinIterations;
	ThreadId_t	m_CurrentOwnerID;
};

class CThreadSpinRWLock
{
public:
	bool TryLockForWrite(const char* pFileName = NULL, int nLine = -1) { return m_mutex.try_lock(); }
	bool TryLockForRead(const char* pFileName = NULL, int nLine = -1) { return m_mutex.try_lock_shared(); }

	void LockForRead(const char* pFileName = NULL, int nLine = -1) { m_mutex.lock_shared(); }
	void UnlockRead(const char* pFileName = NULL, int nLine = -1) { m_mutex.unlock_shared(); }
	void LockForWrite(const char* pFileName = NULL, int nLine = -1) { m_mutex.lock(); }
	void UnlockWrite(const char* pFileName = NULL, int nLine = -1) { m_mutex.unlock(); }

	bool TryLockForWrite(const char* pFileName = NULL, int nLine = -1) const { return const_cast<CThreadSpinRWLock*>(this)->TryLockForWrite(pFileName, nLine); }
	bool TryLockForRead(const char* pFileName = NULL, int nLine = -1) const { return const_cast<CThreadSpinRWLock*>(this)->TryLockForRead(pFileName, nLine); }

	void LockForRead(const char* pFileName = NULL, int nLine = -1) const { const_cast<CThreadSpinRWLock*>(this)->LockForRead(pFileName, nLine); }
	void UnlockRead(const char* pFileName = NULL, int nLine = -1) const { const_cast<CThreadSpinRWLock*>(this)->UnlockRead(pFileName, nLine); }
	void LockForWrite(const char* pFileName = NULL, int nLine = -1) const { const_cast<CThreadSpinRWLock*>(this)->LockForWrite(pFileName, nLine); }
	void UnlockWrite(const char* pFileName = NULL, int nLine = -1) const { const_cast<CThreadSpinRWLock*>(this)->UnlockWrite(pFileName, nLine); }

private:
	std::shared_mutex m_mutex;
};

class CUtlMemoryPoolBase
{
public:
	CUtlMemoryPoolBase(int blockSize, int numElements, int nAlignment = 0, MemoryPoolGrowType_t growMode = UTLMEMORYPOOL_GROW_FAST, const char* pszAllocOwner = NULL, MemAllocAttribute_t allocAttribute = MemAllocAttribute_Unk0);
	~CUtlMemoryPoolBase();

	// Resets the pool
	void		Init(int blockSize, int numElements, int nAlignment, MemoryPoolGrowType_t growMode, const char* pszAllocOwner, MemAllocAttribute_t allocAttribute);

	void* Alloc();	// Allocate the element size you specified in the constructor.
	void* AllocZero();	// Allocate the element size you specified in the constructor, zero the memory before construction
	void		Free(void* pMem);

	// Frees everything
	void Clear() { ClearDestruct(0); }

	// returns number of allocated blocks
	int Count() const { return m_BlocksAllocated; }
	int PeakCount() const { return m_PeakAlloc; }
	int BlockSize() const { return m_BlockSize; }
	int Size() const { return m_TotalSize; }

	 bool		IsAllocationWithinPool(void* pMem) const;

protected:
	 void		ClearDestruct(void (*)(void*));

public:
	class CBlob
	{
	public:
		CBlob* m_pNext;
		int		m_NumBytes; // Number of bytes in this blob.
		char	m_Data[1];
		char	m_Padding[3]; // to int align the struct
	};

	 bool AddNewBlob();
	 void ResetAllocationCounts();

	int			m_BlockSize;
	int			m_BlocksPerBlob;

	MemoryPoolGrowType_t m_GrowMode;

	CInterlockedInt	m_BlocksAllocated;
	CInterlockedInt	m_PeakAlloc;
	unsigned short	m_nAlignment;
	unsigned short	m_NumBlobs;

	CTSListBase		m_FreeBlocks;

	MemAllocAttribute_t m_AllocAttribute;

	bool 			m_Unk1;
	CAtomicMutex	m_Mutex;
	CBlob* m_pBlobHead;
	int				m_TotalSize;
};
