#ifndef MONSTRE_H
#define MONSTRE_H

#include <iostream>

class Monstre
{
private:
    std::string nom = "none";
    int pointsdevie = 0;
    int defense = 0;
    int pointsattaque = 0;
    int speed = 0;

public:
    Monstre();
    Monstre(std::string n, int pv, int def, int pa, int spe);
    void afficher() const;

    Monstre pickamonster();

    bool IsAlive() const;

    int GetDamage() const;

    int GetSpeed() const;

    int GetPointdevie() const;

    int Getdefense() const;

    std::string GetNom() const;

    
};

#endif