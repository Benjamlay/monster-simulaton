#include "class Monstre.h"
#include <iostream>


Monstre Monstre::pickamonster()
{
    int choice;

    Monstre monsterpicked;

    std::cout << "choisi monstre (1, 2, 3) : " << std::endl;
    std::cout << "1. papier" << std::endl;
    std::cout << "2. ciseau" << std::endl;
    std::cout << "3. pierre" << std::endl;

    std::cin >> choice;

    Monstre papier("papier", 150, 25, 20, 10);
    Monstre ciseau("ciseau", 150, 25, 20, 10);
    Monstre pierre("pierre", 150, 25, 20, 10);

    switch (choice)
    {
    case 1:
        monsterpicked = papier;
        break;
    case 2:
        monsterpicked = ciseau;
        break;
    case 3:
        monsterpicked = pierre;
        break;

    default:
        std::cout << "choix invalide" << std::endl;
        break;
    }
    return monsterpicked;
}
