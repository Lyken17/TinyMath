//
// Created by ligeng on 15/02/17.
//

#include <cmath>
#include "TinyPoint.h"

typedef double dtype;

TinyPoint::TinyPoint(dtype x, dtype y) {
    darray[0] = x;
    darray[1] = y;
}

dtype TinyPoint::crossProduct(const TinyPoint &rhs) {
    return crossProduct(*this, rhs);
}

dtype TinyPoint::crossProduct(const TinyPoint &lhs, const TinyPoint &rhs) {
    return lhs.x * rhs.y - lhs.y * rhs.x;
}

TinyPoint TinyPoint::rotate(double angle) {
    double theta = angle * M_PI / 180.0;

    dtype new_x = cos(theta) * x - sin(theta) * y;
    dtype new_y = sin(theta) * x + cos(theta) * y;

    x = new_x;
    y = new_y;
    return *this;
}