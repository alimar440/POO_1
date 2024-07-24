#include "salarie.hpp"


Salarie::Salarie(char*a ,char* b) {
    cout<<"appel du constructeur d'adresse"<<this<<endl ;
    prenom = new char [strlen(a)+1] ;
    nom = new char [strlen(b)] ;

    strcpy(prenom,a) ;
    strcpy(nom,b)
}

Salarie::~Salarie(){
    delete[] nom ;
    delete[] prenom ;
}
void Salarie::afficheSalarie(){
    cout<<"Prenom :  "<<Prenom<<"Nom :  "<<nom<<endl ;
}
