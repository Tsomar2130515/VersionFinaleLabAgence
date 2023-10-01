
#include "Faction.h"

Faction::Faction(int attaque, int defense, int vie, int capacite, string raceFaction, string nom)
	: attaque(attaque), defense(defense), vie(vie), capacite(capacite), raceFaction(raceFaction), nom(nom) {}

Faction::~Faction() {}
