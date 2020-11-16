#include <iostream>
#include "heade.h"
#include <string>

using namespace std;

int main()
{
    int s;
    Compte c;


    cout << "somme a ajouter : " << endl;
    cin >> s;
    c.saisir();
    c.consulterSolde();
    c.deposerArgent();
    c.consulterSolde();


    return 0;
}
