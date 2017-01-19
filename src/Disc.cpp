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

std::ostream& operator<<(std::ostream& os, const Disc& d)
{
    // For each number we have a color. E.g 33 ---> yellow and 31 ---> red
    if(d.color == Yellow)
    {
        std::string color = "\033[1;"+std::to_string(33)+"m";
        os << color << "O";
    }
    else if(d.color == Red)
    {
        std::string color = "\033[1;"+std::to_string(31)+"m";
        os << color << "O";
    }
    else
    {
        os << "O";
    }

    return os;
}
