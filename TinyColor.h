//
// Created by Lyken Syu on 2/2/17.
//

#ifndef TINYMATH_TINYCOLOR_H
#define TINYMATH_TINYCOLOR_H

#include <tuple>

#include "TinyVector"

typedef unsigned int colorInt;

class TinyColor : TinyVector<colorInt, 4> {
    // TODO: add common colors

    // initialize by 3/4 nums
    TinyColor(colorInt R, colorInt G, colorInt B, colorInt A = 0xff);

    colorInt RGB2NUM();
    static colorInt RGB2NUM(std::tuple<colorInt, colorInt, colorInt> color);
    static colorInt RGB2NUM(colorInt R, colorInt G, colorInt B, colorInt A = 0xff);

    static std::tuple<colorInt, colorInt, colorInt> NUM2RGB(colorInt color);


    static const colorInt   RED   = 0xffff0000,
                            GREEN = 0xff00ff00,
                            BLUE  = 0xff0000ff;
};


#endif //TINYMATH_TINYCOLOR_H
