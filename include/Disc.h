#ifndef DISC_H
#define DISC_H
#include "Color.h"


class Disc
{
    public:
        Disc();
        Disc(Color aColor);
        virtual ~Disc();
        Color getColor();

    protected:

    private:
        Color color;
};

#endif // DISC_H
