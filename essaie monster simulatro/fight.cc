#include <iostream>
#include "fight.h"

void fight(const Monstre& Monstre1, const Monstre& Monstre2)
{
	std::cout << "début du combat !" << std::endl;

	//determiner qui commence

	Monstre attaquant = Monstre1;
	Monstre defenseur = Monstre2;


	if (Monstre1.GetSpeed() <= Monstre2.GetSpeed())
	{
		attaquant = Monstre2;
		defenseur = Monstre1;
	}

	int pvAttaquant = attaquant.GetPointdevie();
	int pvDefenseur = defenseur.GetPointdevie();

	while (Monstre1.IsAlive() && Monstre2.IsAlive())
	{
		int damage = attaquant.GetDamage() - defenseur.Getdefense();
		if (damage < 0)
		{
			damage = 0;
		}

		pvDefenseur -= damage;
		std::cout << attaquant.GetNom() << " attaque " << defenseur.GetNom() << std::endl;
		std::cout << defenseur.GetNom() << " n a plus que " << pvDefenseur << " points de vie " << std::endl;

		if (pvDefenseur <= 0)
		{
			std::cout << defenseur.GetNom() << " est mort dans d'atroces souffrances :( " << std::endl;

			return;
		}

		std::swap(attaquant, defenseur);
		std::swap(pvAttaquant, pvDefenseur);

	}
	std::cout << " le combat est terminé " << std::endl;
}