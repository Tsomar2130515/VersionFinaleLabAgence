
#pragma once
#include <string>
using namespace std;

class Faction
{
protected:
	int attaque;
	int defense;
	int vie;
	int capacite;
	string nom;
	string raceFaction;

public:
	Faction(int attaque, int defense, int vie, int capacite, string raceFaction, string nom);
	~Faction();

	inline string getNom() { return nom; }
	inline int getVie() { return vie; }
	inline int getAtt() { return attaque; }
	inline int getDef() { return defense; }
	inline int getCapacite() { return capacite; }
	inline string getRaceFaction() { return raceFaction; }
};

