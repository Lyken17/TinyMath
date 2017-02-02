//
// Created by Lyken Syu on 2/1/17.
//

#include "TinyVector.h"

template <class dtype, int size>
TinyVector<dtype, size>::TinyVector()  {
    for(int i = 0; i < size; ++i)
        darray[i] = 0;
};

//addition
template <class dtype, int size>
TinyVector<dtype, size>&
    TinyVector<dtype, size>::operator+=
        (const TinyVector &rhs)
{
    for (int i = 0; i < size; ++i)
        this->darray[i] += rhs.darray[i];
    return *this;
}

template <class dtype, int size>
TinyVector<dtype, size>
    operator+
        (TinyVector<dtype, size> lhs,
         TinyVector<dtype, size> rhs)
{
    lhs += rhs;
    return lhs;
}

// subtraction
template <class dtype, int size>
TinyVector<dtype, size>&
    TinyVector<dtype, size>::operator-=
        (const TinyVector &rhs)
{
    for (int i = 0; i < size; ++i)
        this->darray[i] -= rhs.darray[i];
    return *this;
};

template <class dtype, int size>
TinyVector<dtype, size>
operator-
        (TinyVector<dtype, size> lhs,
         TinyVector<dtype, size> rhs)
{
    lhs -= rhs;
    return lhs;
}

// multiplication
template <class dtype, int size>
TinyVector<dtype, size>&
    TinyVector<dtype, size>::operator*=
        (double scale)
{
    for (int i = 0; i < size; ++i)
        this->darray[i] *= scale;
    return *this;
}

template <class dtype, int size>
TinyVector<dtype, size>
    operator*
        (TinyVector<dtype, size> lhs,
         double scale)
{
    lhs *= scale;
    return lhs;
}

template <class dtype, int size>
TinyVector<dtype, size>
    operator*
        (double scale,
         TinyVector<dtype, size> rhs)
{
    rhs *= scale;
    return rhs;
}


template <class dtype, int size>
dtype
    operator*
        (const TinyVector<dtype, size> &lhs,
         const TinyVector<dtype, size> &rhs)
{
    dtype res = 0.0;
    for(int i = 0; i < size; ++i)
        res += lhs.darray[i] * rhs.darray[i];
    return res;
}

// division
template <class dtype, int size>
TinyVector<dtype, size>&
    TinyVector<dtype, size>::operator/=
        (double scale)
{
    for (int i = 0; i < size; ++i)
        this->darray[i] /= scale;
    return *this;
}

template <class dtype, int size>
TinyVector<dtype, size>
    operator/
        (TinyVector<dtype, size> lhs,
         double scale)
{
    lhs /= scale;
    return lhs;
}

