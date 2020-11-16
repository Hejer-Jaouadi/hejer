#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <string>

using namespace std;

class Compte
{
public:
    int numCompte;
    string nomProprietaire;
    float solde;

    void saisir();
    bool retirerArgent(float a);
    void deposerArgent();
    void consulterSolde();

};

#endif // HEADER_H_INCLUDED
