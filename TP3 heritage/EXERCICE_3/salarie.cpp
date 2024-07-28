#include "salarie.hpp"

Salarie::Salarie(char* a, char* b) {
    cout << "Appel du constructeur de Salarie, adresse : " << this << endl;
    prenom = new char[strlen(a) + 1];
    strcpy(prenom, a);
    nom = new char[strlen(b) + 1];
    strcpy(nom, b);
}

Salarie::Salarie(const Salarie& S) {
    cout << "Appel du constructeur de copie de Salarie, adresse : " << this << endl;
    prenom = new char[strlen(S.prenom) + 1];
    strcpy(prenom, S.prenom);
    nom = new char[strlen(S.nom) + 1];
    strcpy(nom, S.nom);
}

Salarie& Salarie::operator=( Salarie& S) {
    cout << "Appel opérateur = de Salarie" << endl;
    if (this != &S) {
        delete[] prenom;
        delete[] nom;
        prenom = new char[strlen(S.prenom) + 1];
        prenom = S.prenom;
        nom = new char[strlen(S.nom) + 1];
        nom = S.nom ;
    }
    return *this;
}

Salarie::~Salarie() {
    cout << "Appel du destructeur de Salarie, adresse : " << this << endl;
    delete[] prenom;
    delete[] nom;
}

void Salarie::affiche()  {
    cout << "AFFICHAGE SALARIE" << endl;
    cout << "Prenom : " << prenom << "  Nom : " << nom << endl;
}
