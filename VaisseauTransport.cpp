#include "VaisseauTransport.h"

VaisseauTransport::VaisseauTransport(Faction* faction, int valeurMarchande, int defense, int vie, int capacite, std::string nom, int niveau, int exp, int attaque) : Vaisseau(faction,valeurMarchande, defense, vie, capacite, nom, niveau, exp, attaque) {};
VaisseauTransport::~VaisseauTransport() {}
std::string VaisseauTransport::to_string()
{
	std::string info = Vaisseau::to_string() ;
	info.append("Je suis un Vaisseau de Transport");
	
	return info;

}


