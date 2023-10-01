

#include "Station.h"
#include "Factory.h"
#include <iostream>
using namespace std;


Station::Station(int platinumDisponible, int vieStation) : platinumDisponible(platinumDisponible), vieStation(vieStation) 
{

}

Station::~Station() 
{
	for (Vaisseau* v : vecVaisseau) 
	{
		delete v;
	}
}

void Station::Init() 
{
	for (int i = 0; i < 3; ++i) 
	{

		vecVaisseau.push_back(Factory::getRandomVaisseau());
	}
}

void Station::AfficherVaisseauDispo() 
{
	int compt = 1;
	for (Vaisseau* vaisseau : vecVaisseau)
	{
		cout << "Vaisseau no - " << compt << " " << vaisseau->to_string() << endl;

		compt++;
	}
}

void Station::AjouterVaisseau(Vaisseau* vaiss) 
{
	vecVaisseau.push_back(vaiss);
}





void Station::SupprimerVaisseau(Vaisseau* vaiss)
{
	
	auto it = vecVaisseau.begin();
	while (it != vecVaisseau.end()) 
	{
		

		if (*it == vaiss) 
		{
			delete* it; 

			it = vecVaisseau.erase(it);  

		
		}
		else 
		{
			++it;  
		}
	}
}





bool Station::PossederVaisseau(Vaisseau* vaiss) 
{
	bool possedeOuPas = false;

	for (Vaisseau* vaisseau : vecVaisseau) 
	{
		
		if (vaisseau == vaiss) 
		{
			possedeOuPas = true;
			
		}
	}

	return possedeOuPas;
}



Vaisseau* Station::ChoisirVaisseau(int choix) 
{
	if (choix >= 1 && choix <= vecVaisseau.size()) 
	{
		return vecVaisseau[choix - 1];
	}
	else
	{
		std::cout << "Vaisseau non disponible:" << std::endl;
		return nullptr;
	}
}

void Station::AfficherContenuStation() 
{
	cout << "\n Contenu de la Station : " << endl;

	AfficherVaisseauDispo();
}




 



