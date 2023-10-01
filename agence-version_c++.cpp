

#include <iostream>
#include <ctime>
#include "Vaisseau.h"
#include "Factory.h"
#include "Station.h"
using namespace std;

int main() 
{
   srand(static_cast<unsigned>(time(nullptr)));

   std::cout << "... Production d'un Vaisseau" << std::endl;

  std::vector<Vaisseau*> monVecteur;

  Station stationJoueur(10, 15);

  Station stationEnnemie(30, 25);

  stationJoueur.Init();

  stationEnnemie.Init();

  std::cout << "Bienvenue au jeu La guerre des stations !" << std::endl;

  int rounds = 3;

  for (int round = 1; round <= rounds; round++) 
  {
  std::cout << "\n Round " << round << ":" << endl;

  std::cout << "Contenu de la Station Joueur : " << endl;

  stationJoueur.AfficherVaisseauDispo();

  int choixVaisseau;

  cout << "Selectionnez votre vaisseau combattant en entrant son numéro : ";

  cin >> choixVaisseau;

  Vaisseau* vaisseauJoueur = stationJoueur.ChoisirVaisseau(choixVaisseau);

  if (vaisseauJoueur != nullptr && stationJoueur.PossederVaisseau(vaisseauJoueur)) 
  {
     Vaisseau* vaisseauEnnemi = Factory::getRandomVaisseau();

    cout << "Vous choisissez " << vaisseauJoueur->getNom() << " pour le combat." << endl;

    cout << "La station ennemie entame le duel avec " << vaisseauEnnemi->getNom() << endl;

     if (vaisseauEnnemi->getAtt() > vaisseauJoueur->getDef())
     {
         cout << "La station ennemie gagne le duel ! Votre vaisseau " << vaisseauJoueur->getNom() << " vous a été dérobé." << endl;

          stationJoueur.SupprimerVaisseau(vaisseauJoueur);

          stationEnnemie.AjouterVaisseau(vaisseauJoueur);

          cout << " Vous avez affronte : " << vaisseauEnnemi->to_string() << endl;
     }
     else if (vaisseauEnnemi->getAtt() < vaisseauJoueur->getDef()) 
     {
     cout << "Vous gagnez le duel, Bravo ! Le vaisseau " << vaisseauEnnemi->getNom() << " est maintenant le votre !" <<endl;

     stationJoueur.AjouterVaisseau(vaisseauEnnemi);

     stationEnnemie.SupprimerVaisseau(vaisseauEnnemi);

     cout << " Vous avez affronte : " << vaisseauEnnemi->to_string() << endl;
     }
     else
     {
       cout << "Match Nul ! Les vaisseaux sont equivalents." << endl;
       
       cout << " Vous avez affronte: " << vaisseauEnnemi->to_string() <<endl;

     }
   }
  else 
  {
    cout << "Ce vaisseau ne vous appartient plus ou le vaisseau n'existe pas." << endl;
  }

  
  }

   cout << "\n Fin du jeu. Voici le contenu des deux stations : " <<endl;

  cout << "Station Joueur :" << endl;

   stationJoueur.AfficherContenuStation();

   cout << "Station Ennemie :" << endl;

   stationEnnemie.AfficherContenuStation();

    return 0;
}


                           


  



                  






