#include "class Monstre.h"
#include <iostream>

Monstre::Monstre() : nom("inconnu"), pointsdevie(0), pointsattaque(0), defense(0), speed(0) {}

Monstre::Monstre(std::string n, int pv, int def, int pa, int spe) :
    nom(n),
    pointsdevie(pv),
    pointsattaque(pa),
    defense(def),
    speed(spe) {
}

void Monstre::afficher() const
{
    std::cout << "nom :" << nom << std::endl;
    std::cout << "points de vie :" << pointsdevie << std::endl;
    std::cout << "points d attaque :" << pointsattaque << std::endl;
    std::cout << "points de defense :" << defense << std::endl;
    std::cout << "points de vitesse :" << speed << std::endl;
}


bool Monstre::IsAlive() const
{
    if (pointsdevie > 0)
    {
        return true;
    }
    else
    {
        return false;
    }

  
}

int Monstre::GetDamage() const
{
    return pointsattaque;
}

int Monstre::GetSpeed() const
{
    return speed;
}

int Monstre::GetPointdevie() const
{
    return pointsdevie;
}

int Monstre::Getdefense() const
{
    return defense;
}
std::string Monstre::GetNom() const
{
    return nom;
}
bool Monstre::operator==(const Monstre& other) const
{
    return nom == other.nom &&
        pointsdevie == other.pointsdevie &&
        pointsattaque == other.pointsattaque &&
        defense == other.defense &&
        speed == other.speed;
}


