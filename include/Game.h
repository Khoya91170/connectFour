#ifndef GAME_H
#define GAME_H
#include "Disc.h"
#include <array>


const int nbRows = 6;
const int nbCols = 7;

class Game
{
    public:
        Game(bool aIs2Players);
        virtual ~Game();
        void displayMess();

    protected:

    private:
        Color J1;
        Color J2;

        std::array<std::array<Disc, nbCols>, nbRows> grid;
        void initGrid();
        bool are2Players;
        void launchGameOnePlayer();
        void launchGameTwoPlayers();
};

#endif // GAME_H
