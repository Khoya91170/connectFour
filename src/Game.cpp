#include "Game.h"
#include <iostream>
#include <string>

Game::Game(bool aIs2Players)
{
    //ctor
    initGrid();

    are2Players = aIs2Players;
    if(are2Players)
    {
        launchGameTwoPlayers();
    }
    else
    {
        launchGameOnePlayer();
    }
}

Game::~Game()
{
    //dtor
}

void Game::initGrid()
{
    for(int i=0; i<nbRows; i++)
    {
        for(int j=0; j<nbCols; j++)
        {
            grid[i][j] = Disc();
        }
    }
}

void Game::launchGameOnePlayer()
{

}

void Game::launchGameTwoPlayers()
{
    std::string colorJ1, colorJ2;
    std::cout << "Veuillez choisir la couleur des pions pour le premier joueur." << std::endl;
    std::cout << "Tapez R pour rouge ou J pour jaune." << std::endl;
    std::cout << "_____________________________________________________________" << std::endl;
    std::cout << std::endl << "Couleur du premier joueur : " << std::endl;

}

void Game::displayMess()
{
    for(int i=0; i<15; i++)
    {
        std::cout << "_";
    }

    for(int i=0; i<nbRows; i++)
    {
        for(int j=0; j<nbCols; j++)
        {

        }
        std::cout << "|_" << std::endl;
    }

    for(int i=0; i<15; i++)
    {
        std::cout << "_";
    }
    //std::cout << grid[0][0].getColor() << std::endl;
/*    if(grid[0][0] == NULL)
    {
        cout << "C'est bon c'est égale à 0" << endl;
    }
    else
        cout << "C'est pas bon" << endl;*/
}

