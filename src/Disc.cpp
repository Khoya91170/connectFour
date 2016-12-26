#include "Disc.h"

Disc::Disc()
{
    color = None;
}

Disc::Disc(Color aColor)
{
    //ctor
    color = aColor;
}

Disc::~Disc()
{
    //dtor
}

Color Disc::getColor()
{
    return color;
}
