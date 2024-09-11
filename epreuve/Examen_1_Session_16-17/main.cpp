#include <iostream>
#include "Vaccin.h"
#include "Delocaliser.h"
#include "Compagni.h"

int main() {

    Vaccin v1("Vaccin1", 0.55, 200000, HighTech);
    Vaccin v2("Vaccin2", 0.20, 10000);

  
    cout << "Details du vaccin 1:" << endl;
    v1.affiche();

    cout << endl;

    cout << "Details du vaccin 2:" << endl;
    v2.affiche();
    cout << "Cout de conditionnement: " << v2.conditionnement() << endl;
    cout << "Cout de fabrication: " << v2.fabrication() << endl;
    cout << "Cout de production: " << v2.production() << endl;

    cout<<"******************************DELOCALISER**************************************"<<endl ;


    Delocalise v3("Vaccine3", 0.45, 150000, HighTech, false);
    Delocalise v4("Vaccine4", 0.30, 50000, Standard, true);

    cout << "Details du vaccin delocalise 1 (non frontalier) :" << endl;
    v3.affiche();
    cout << "Cout de conditionnement: " << v3.conditionnement() << endl;

    cout << "Details du vaccin délocalise 2 (frontalier) :" << endl;
    v4.affiche();
    cout << "Cout de conditionnement: " << v4.conditionnement() << endl;

    cout<<"\n\n\n\n" ;


    cout<<"******************************Compagnie**************************************"<<endl ;

    Compagnie comp("myCompanie" , 10 ) ;
    comp.ajoute(&v1) ;
    comp.ajoute(&v2) ;
    comp.ajoute(&v3) ;
    comp.ajoute(&v4) ;

    comp.affiche() ; 

    cout<<"la somme des cout de production de notre compagnie est :"<< comp.calcul() ;
     
    return 0;
}
