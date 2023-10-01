#include "Factory.h"
#include <ctime>

static int genererNbre(int min, int max)
{

	return (rand() % (max - min + 1)) + min;

}





Vaisseau* Factory::getRandomVaisseau()
{
	srand(time(NULL));
	int n = (rand() % 3) + 1; 
	Faction* maFaction = nullptr;

	if (n == 1)
	{
		maFaction = new Faction(5, 3, 10, 4, "Bleu", "FactionBleu");
	}
	else if (n == 2)
	{
		maFaction = new Faction(10, 3, 5, 7, "Rouge", "FactionRouge");
	}
	else
	{
		maFaction = new Faction(7, 4, 8, 6, "Vert", "FactionVerte"); 
	}

	Vaisseau* monVaisseau = nullptr;

	if (n == 1)
	{
		monVaisseau = new VaisseauGuerre(maFaction, 4, 3, 10, 8, "VaisseauGuerre", 5, 8, 3);
	}
	else if (n == 2)
	{
		monVaisseau = new VaisseauTransport(maFaction, 8, 5, 10, 4, "VaisseauTransport", 7, 2, 3);
	}
	else
	{
		monVaisseau = new VaisseauLivraison(maFaction, 5, 8, 2, 4, "VaisseauLivraison", 7, 5, 2);
	}

	return monVaisseau;
}
