#include "class Monstre.h"
#include <iostream>


Monstre Monstre::pickamonster()
{
    int choice;

    Monstre monsterpicked;
    


    std::cout << "choisi un monstre (1, 2, 3) : " << std::endl;
    std::cout << "1. papier" << std::endl;
    std::cout << "2. ciseau" << std::endl;
    std::cout << "3. pierre" << std::endl;

    std::cin >> choice;

    Monstre papier("papier", 10, 5, 10, 5);
    Monstre ciseau("ciseau", 25, 5, 10, 7);
    Monstre pierre("pierre", 50, 5, 10, 4);

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
