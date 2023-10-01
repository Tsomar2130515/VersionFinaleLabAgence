#include "Vaisseau.h"
Vaisseau::Vaisseau(Faction* faction ,int valeurMarchande, int defense, int vie, int capacite, std::string nom, int niveau, int exp,int attaque) 
{
	this->faction = faction;
	this->valeurMarchande = valeurMarchande;
	this->niveau=niveau;
	this->capacite = capacite;
	this->nom = nom;
	this->defense = defense;
	this->exp=exp;
	this->vie = vie;
	this->attaque=attaque;
	
}


Vaisseau::~Vaisseau() {}

std::string Vaisseau::to_string()
{
	std::string info;
	info.append("Nom :" + nom + "\n");

	info.append("Valeur Marchande :" + std::to_string(valeurMarchande)+ "\n");

	info.append("Attaque:" + std::to_string(this->getAtt()+faction->getAtt()) + "\n");

	info.append("Defense :" + std::to_string(this->getDef()+faction->getDef())+"\n");

	info.append("Niveau :" + std::to_string(this->niveau)+ "\n");

	info.append("Capacite:" + std::to_string(capacite+faction->getCapacite())+ "\n");

	info.append("Exp:" +std::to_string(exp)+ "\n");

	info.append("Vie:" + std::to_string(this->getVie()) + "\n");
	return info;
	

}


