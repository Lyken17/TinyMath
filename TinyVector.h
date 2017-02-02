//
// Created by Lyken Syu on 2/1/17.
//

#ifndef TINYMATH_TINYVECTOR_H
#define TINYMATH_TINYVECTOR_H

template <class dtype, int size>
class TinyVector {
public:
    dtype darray[size];
    TinyVector();

    TinyVector& operator+=(const TinyVector& rhs);
    friend TinyVector operator+ (TinyVector lhs, TinyVector rhs);

    TinyVector& operator-=(const TinyVector& rhs);
    friend TinyVector operator- (TinyVector lhs, TinyVector rhs);

    TinyVector& operator*=(double scale);
    friend TinyVector operator* (TinyVector lhs, double scale);
    friend TinyVector operator* (double scale, TinyVector rhs);
    // dot production
    friend dtype operator* (const TinyVector &lhs, const TinyVector &rhs);

    TinyVector& operator/=(double scale);
    friend TinyVector operator/ (TinyVector lhs, double scale);

};


#endif //TINYMATH_TINYVECTOR_H
