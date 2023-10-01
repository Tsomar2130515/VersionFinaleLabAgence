
#pragma once
#include <vector>
#include "Vaisseau.h"

class Station 
{
private:
    int platinumDisponible;
    int vieStation;
    std::vector<Vaisseau*> vecVaisseau;

public:
    Station(int platinumDisponible, int vieStation);

    ~Station();

    void Init();

    void AfficherVaisseauDispo();

    void AjouterVaisseau(Vaisseau* vaiss);

    void SupprimerVaisseau(Vaisseau* vaiss);

    bool PossederVaisseau(Vaisseau* vaiss);

    Vaisseau* ChoisirVaisseau(int choix);

    void AfficherContenuStation();
};




