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

    protected:

    private:
        Color J1;
        Color J2;
        std::string winner;

        std::array<std::array<Disc, nbCols>, nbRows> grid;
        void initGrid();
        bool are2Players;
        void launchGameOnePlayer();
        void launchGameTwoPlayers();
        void displayGrid();
        bool updateGrid(int aColumn, Color aPlayer);
};

#endif // GAME_H
