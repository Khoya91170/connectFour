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
    char colorJ1;
    int columnToPlay = 0;

    std::cout << "Veuillez choisir la couleur des pions pour le premier joueur." << std::endl;
    std::cout << "Tapez R pour rouge ou J pour jaune." << std::endl;
    std::cout << "_____________________________________________________________" << std::endl;
    std::cout << std::endl << "Couleur du premier joueur : " << std::endl;
    std::cin >> colorJ1;

    while(colorJ1 != 'R' && colorJ1 != 'J' && colorJ1 != 'r' && colorJ1 != 'j')
    {
        std::cout << std::endl << "Veuillez taper R pour rouge ou J pour jaune.";
        std::cout << std::endl << "Couleur du premier joueur : " << std::endl;
        std::cin >> colorJ1;
    }

    if(colorJ1 == 'R'|| colorJ1 == 'r')
    {
        std::cout << "Le second joueur aura la couleur jaune." << std::endl;
        J1 = Red;
        J2 = Yellow;
    }
    else
    {
        std::cout << "Le second joueur aura la couleur rouge." << std::endl;
        J1 = Yellow;
        J2 = Red;
    }
    displayGrid();
    std::cout <<  std::endl;
    std::cout << "Choisissez une colonne : " << std::endl;
    std::cin >> columnToPlay;

    while(columnToPlay < 1 || columnToPlay > 7)
    {
        std::cout <<  std::endl;
        std::cout << "Colonne incorrecte" << std::endl;
        std::cout << "Choisissez une colonne : " << std::endl;
        std::cin >> columnToPlay;
    }
    updateGrid(columnToPlay-1, J1);
    displayGrid();

    updateGrid(1, J1);
    displayGrid();

        updateGrid(1, J1);
    displayGrid();

        updateGrid(1, J1);
    displayGrid();

        updateGrid(1, J1);
    displayGrid();

        updateGrid(1, J1);
    displayGrid();

        updateGrid(1, J1);
    displayGrid();

        updateGrid(1, J1);
    displayGrid();
    while(winner == "NULL")
    {

    }
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
            std::cout << grid[i][j] ;
        }
        std::cout <<  std::endl;
    }
    std::cout << std::endl;
}

bool Game::updateGrid(int aColumn, Color aPlayer)
{
    //const int nbRows = 6;
    //const int nbCols = 7;

    bool isEmpty = true;
    int cpt = 0;
    while(isEmpty && cpt<nbRows)
    {
        if(grid[cpt][aColumn].getColor() != None)
        {
            isEmpty = false;
        }
        cpt++;
    }
    // If cpt = 1 the entire column is full
    if(cpt == 1)
    {
        return false;
    }
    else
    {
        Disc d = Disc(aPlayer);
        grid[cpt-1][aColumn] = d;

        for(int i=0; i<nbRows; i++)
        {
            for(int j=0; j<nbCols; j++)
            {
                std::cout << "[ " << grid[i][j].getColor() << " ]";
            }
            std::cout <<  std::endl;
        }
        std::cout <<  std::endl;
        return true;
    }
}


