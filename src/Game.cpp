#include "Game.h"
#include <iostream>
#include <string>

Game::Game(bool aIs2Players)
{
    //ctor
    initGrid();

    are2Players = aIs2Players;
    winner = "NULL";

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
    char colorJ1, colorJ2;
    std::cout << "Veuillez choisir la couleur des pions pour le premier joueur." << std::endl;
    std::cout << "Tapez R pour rouge ou J pour jaune." << std::endl;
    std::cout << "_____________________________________________________________" << std::endl;
    std::cout << std::endl << "Couleur du premier joueur : " << std::endl;
    std::cin >> colorJ1;

    while(colorJ1 != 'R' && colorJ1 != 'J')
    {
        std::cout << std::endl << "Veuillez taper R pour rouge ou J pour jaune.";
        std::cout << std::endl << "Couleur du premier joueur : " << std::endl;
        std::cin >> colorJ1;
    }

    if(colorJ1 == 'R')
    {
        colorJ2 = 'J';
        std::cout << "Le second joueur aura la couleur jaune." << std::endl;
    }
    else
    {
        colorJ2 = 'R';
        std::cout << "Le second joueur aura la couleur rouge." << std::endl;
    }
    std::cout <<  std::endl;
    displayGrid();

}

void Game::displayGrid()
{
    for(int j=0; j<nbCols; j++)
    {
        std::cout << "  " << j+1 << "  ";
    }
    std::cout <<  std::endl;

    for(int i=0; i<nbRows; i++)
    {
        for(int j=0; j<nbCols; j++)
        {
            std::cout << "[ " << grid[i][j] << " ]";
        }
        std::cout <<  std::endl;
    }
}

void Game::displayMess()
{
  /*  for(int i=0; i<15; i++)
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
    }*/
    //std::cout << grid[0][0].getColor() << std::endl;
/*    if(grid[0][0] == NULL)
    {
        cout << "C'est bon c'est égale à 0" << endl;
    }
    else
        cout << "C'est pas bon" << endl;*/
}

