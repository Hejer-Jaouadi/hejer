#include <iostream>
#include "heade.h"
#include <string>


using namespace std;


void Compte::saisir()
{
    cout << "donner le num de compte : " << endl;
    cin >> numCompte;
    cout << "donner le nom du proprietaire : " ;
    getline (cin,nomProprietaire);
    cout << "donner le solde du compte en $ : " << endl;
    cin >> solde;
}


bool Compte::retirerArgent(float a)
{
    if ((solde-a)>=0)
    {
        solde -=a;
        return true;
    }
    else
    {
        cout << "solde est insuffisant" << endl;
        return false;
    }
}

void Compte::deposerArgent()
{
    float somme;
    cout << "somme : " << endl;
    cin >> somme;
    solde += somme;
}

void Compte::consulterSolde()
{
    cout << "le solde du compte " << numCompte << " est : " << solde << endl;
}


