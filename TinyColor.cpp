//
// Created by Lyken Syu on 2/2/17.
//

#include "TinyColor.h"

typedef unsigned int colorInt;

TinyColor::TinyColor(colorInt R, colorInt G, colorInt B, colorInt A) {
    darray[0] = R;
    darray[1] = G;
    darray[2] = B;
    darray[3] = A;
}

colorInt TinyColor::RGB2NUM() {
    return RGB2NUM(this->darray[0], this->darray[1], this->darray[2], this->darray[3]);
}

colorInt TinyColor::RGB2NUM(std::tuple<colorInt, colorInt, colorInt> color) {
    colorInt R, G, B;
    std::tie(R, G, B) = color;
    return RGB2NUM(R, G, B);
}
colorInt TinyColor::RGB2NUM(colorInt R, colorInt G, colorInt B, colorInt A) {
    return (A << 24) + (R << 16) + (G << 8) + B;
}

std::tuple<colorInt, colorInt, colorInt> TinyColor::NUM2RGB(colorInt color) {
    colorInt A, R, G, B;
    A = (color & 0xff000000) >> 24;
    R = (color & 0x00ff0000) >> 16;
    G = (color & 0x0000ff00) >>  8;
    B = (color & 0x000000ff) >>  0;
    return std::make_tuple(R, G, B);
}
