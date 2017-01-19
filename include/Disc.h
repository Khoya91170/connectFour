#ifndef DISC_H
#define DISC_H
#include "Color.h"
#include <iostream>


class Disc
{
    public:
        Disc();
        Disc(Color aColor);
        virtual ~Disc();
        Color  getColor();

        friend std::ostream& operator<<(std::ostream& os, const Disc& d);

    protected:

    private:
        Color color;
};l

#endif // DISC_H
