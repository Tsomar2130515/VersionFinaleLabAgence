#pragma once
#include <string>
#include "VaisseauTransport.h"
#include "Vaisseau.h"

class VaisseauGuerre : public Vaisseau
{
public:
    VaisseauGuerre(Faction* faction, int valeurMarchande, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int attaque);
    ~VaisseauGuerre();
    virtual std::string to_string();
};


