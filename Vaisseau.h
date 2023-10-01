#pragma once
#include <string>
#include "Faction.h"

class Vaisseau
{
public:
    Faction* faction;

protected:
    int valeurMarchande;
    int attaque;
    int defense;
    int vie;
    int capacite;
    string nom;
    int niveau;
    int exp;

public:
    Vaisseau(Faction* faction, int valeurMarchande, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int attaque);
    ~Vaisseau();

    inline string getNom() { return nom; }
    inline int getAtt() { return attaque + faction->getAtt(); }
    inline int getDef() { return defense + faction->getDef(); }
    inline int getVie() { return vie + faction->getVie(); }
    inline int getCapacite() { return capacite + faction->getCapacite(); }
    virtual std::string to_string();
};







