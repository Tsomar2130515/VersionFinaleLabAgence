
#pragma once
#include <string>
#include "VaisseauTransport.h"
#include <string>
#include "Vaisseau.h"

        class VaisseauTransport : public Vaisseau
    {
    public:
        VaisseauTransport(Faction* faction, int valeurMarchande, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int attaque);
        ~VaisseauTransport();
        virtual std::string to_string();
    };

