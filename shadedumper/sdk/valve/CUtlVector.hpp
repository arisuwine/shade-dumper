#pragma once
#include "CUtlMemory.hpp"

template< class T, class A = CUtlMemory<T> >
class CUtlVector
{
    typedef A CAllocator;
public:
    T& operator[](int i)
    {
        return m_Memory[i];
    }

    T& Element(int i)
    {
        return m_Memory[i];
    }

    T* Base()
    {
        return m_Memory.Base();
    }

    int Count() const
    {
        return m_Size;
    }

    void RemoveAll()
    {
        for (int i = m_Size; --i >= 0; )
            Destruct(&Element(i));

        m_Size = 0;
    }

    int AddToTail()
    {
        return InsertBefore(m_Size);
    }

    int InsertBefore(int elem)
    {
        GrowVector();
        ShiftElementsRight(elem);
        Construct(&Element(elem));

        return elem;
    }

    void GrowVector(int num = 1)
    {
        if (m_Size + num > m_Memory.NumAllocated())
            m_Memory.Grow(m_Size + num - m_Memory.NumAllocated());

        m_Size += num;
    }

    void ShiftElementsRight(int elem, int num = 1)
    {
        int numToMove = m_Size - elem - num;
        if ((numToMove > 0) && (num > 0))
            memmove(&Element(elem + num), &Element(elem), numToMove * sizeof(T));
    }

    int m_Size;
    CAllocator m_Memory;
};