

#include <iostream>
#include "class Monstre.h"
#include "fight.h"


int rejouer = 0;

bool JouerEncore()
{
    if (rejouer == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    // pas encore trouvé la bonne combinaison pour que papier batte pierre, pierre batte ciseau, et ciseau batte papier
    
    
    Monstre Monstre1;
    Monstre Monstre2;

    std::cout << "bienvenu dans Monster fight simulator !" << std::endl;
    std::cout << "vous devez choisir deux personnages" << std::endl;

    do
    {
        Monstre1 = Monstre1.pickamonster();
        std::cout << "tu as choisi : " << Monstre1.GetNom() << std::endl;
        Monstre2 = Monstre2.pickamonster();
        std::cout << "tu as choisi : " << Monstre2.GetNom() << std::endl;

        

        if (Monstre1 == Monstre2)
        {
            std::cout << "vous ne pouvez pas choisir les memes personnages" << std::endl;
            std::cout << "voulez vous reesayer de choisir des personnages en mettant un choix valide ?" << std::endl;
            std::cout << "1. oui " << std::endl;
            std::cout << "2. non " << std::endl;
            std::cin >> rejouer;
        }   

        fight(Monstre1, Monstre2);
        std::cout << "_____________________________________" << std::endl;
        std::cout << "Voulez vous rejouer ? " << std::endl;
        std::cout << "1. oui " << std::endl;
        std::cout << "2. non " << std::endl;
        std::cin >> rejouer;

    } while (JouerEncore());
    
    if (rejouer == 2)
    {
        std::cout << "a bientot ! " << std::endl;
    }

    return 0;
}

