#include "VaisseauGuerre.h"

VaisseauGuerre::VaisseauGuerre(Faction* faction,int valeurMarchande, int defense, int vie, int capacite, std::string nom, int niveau, int exp,int attaque) : Vaisseau(faction,valeurMarchande, defense, vie, capacite, nom, niveau, exp, attaque){};
VaisseauGuerre::~VaisseauGuerre(){}
std::string VaisseauGuerre::to_string()
{
	std::string info = Vaisseau::to_string();
	info.append("Je suis un Vaisseau de Guerre");

	return info;

}
