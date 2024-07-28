#include "professeur.hpp"
#include <cstring>
#include <iostream>
using namespace std;

Professeur::Professeur(char* a, char* b, char* c) : Salarie(a, b) {
    cout << "Appel du constructeur de Professeur, adresse : " << this << endl;
    Diplome = new char[strlen(c) + 1];
    strcpy(Diplome, c);

    for (int i = 0; i < 10; i++) {
        Matiere[i] = nullptr;
    }
}

Professeur::Professeur(const Professeur& p) : Salarie(p) {
    cout << "Appel du constructeur de copie de Professeur, adresse : " << this << endl;
    
    Diplome = new char[strlen(p.Diplome) + 1];
    strcpy(Diplome, p.Diplome);

    for (int i = 0; i < 10; i++) {
        if (p.Matiere[i]) {
            Matiere[i] = new char[strlen(p.Matiere[i]) + 1];
            strcpy(Matiere[i], p.Matiere[i]);
        } else {
            Matiere[i] = nullptr;
        }
    }
}

Professeur& Professeur::operator=( Professeur& P) {
    cout << "Appel opérateur = de Professeur" << endl;

    if (this != &P) {
        
        // Salarie::operator=(P);
        Salarie *adr1 = this; 
        Salarie *adr2 = &P; 
        *adr1 = *adr2 ;

        delete[] Diplome;

         Diplome = new char[strlen(P.Diplome) + 1];
        strcpy(Diplome, P.Diplome);

        for (int i = 0; i < 10; i++) {
            delete[] Matiere[i];
        }

        for (int i = 0; i < 10; i++) {
            if (P.Matiere[i]) {
                Matiere[i] = new char[strlen(P.Matiere[i]) + 1];
                strcpy(Matiere[i], P.Matiere[i]);
            } else {
                Matiere[i] = nullptr;
            }
        }
    }

    return *this;
}

Professeur::~Professeur() {
    cout << "Appel du destructeur de Professeur, adresse : " << this << endl;
    delete[] Diplome;

    for (int i = 0; i < 10; i++) {
        delete[] Matiere[i];
    }
}

void Professeur::affiche() {
    cout << "AFFICHAGE PROFESSEUR" << endl;
    Salarie::affiche();
    cout << "Diplome : " << Diplome << endl;
    
    for (int i = 0; i < 10; i++) {
        if (Matiere[i]) {
            cout << "Matiere " << i + 1 << " = " << Matiere[i] << endl;
        }
    }
}

void Professeur::setMatiere(char* a) {
    for (int i = 0; i < 10; i++) {
        if (!Matiere[i]) {
            Matiere[i] = new char[strlen(a) + 1];
            strcpy(Matiere[i], a);
            cout << "Matiere " << i + 1 << " ajoutée : " << Matiere[i] << endl;
            return;
        }
    }
    cout << "Impossible d'ajouter la matière. La liste est pleine." << endl;
}
