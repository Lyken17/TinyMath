//
// Created by ligeng on 15/02/17.
//

#ifndef TINYMATH_TINYPOINT_H
#define TINYMATH_TINYPOINT_H

#include "TinyVector"

typedef double dtype;

class TinyPoint: public TinyVector<dtype, 2> {
public:
    TinyPoint(dtype x, dtype y);

    dtype crossProduct(const TinyPoint &rhs);
    static dtype crossProduct(const TinyPoint &lhs, const TinyPoint &rhs);

    TinyPoint rotate(double angle);

    // binding
    dtype &x = darray[0];
    dtype &y = darray[1];
};



#endif //TINYMATH_TINYPOINT_H
