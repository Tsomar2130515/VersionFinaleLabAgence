
#pragma once
#include <string>
#include "VaisseauTransport.h"
#include "Vaisseau.h"

class VaisseauLivraison : public Vaisseau
{
public:
    VaisseauLivraison(Faction* faction, int valeurMarchande, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int attaque);
    ~VaisseauLivraison();
    virtual std::string to_string();
};

