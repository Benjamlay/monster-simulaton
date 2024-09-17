

#include <iostream>
#include "class Monstre.h"
#include "fight.h"

bool JouerEncore()
{
    if()
}

int main()
{
    Monstre papier("papier", 70, 10, 30, 50);
    Monstre ciseau("ciseau", 50, 5, 40, 60);
    Monstre pierre("pierre", 100, 15, 20, 40);

    Monstre Monstre1;
    Monstre Monstre2;

    
    Monstre1 = Monstre1.pickamonster();
    Monstre1.afficher();
    Monstre2 = Monstre2.pickamonster();
    Monstre2.afficher();



    fight(Monstre1, Monstre2);

    return 0;
}

