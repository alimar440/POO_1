#include "lettre.h"

Lettre::~Lettre(){
    cout<<"appel destructeur d'une LETTRE"<<endl ;
}
void Lettre::affiche(){
    Courriers::affiche() ;
    if(format == 0 )
        cout<<"format             :"<<"A4"<<endl ;
    else
        cout<<"format             :"<<"A3"<<endl ;
}
int Lettre::PRIX(){

    int montant , tarif ;

    if(format == 0 )
        tarif = 250 ;
    else    
        tarif = 350 ;


    montant = tarif + 1.0 * (poids/1000) ;

    if(mode == 0 )
        montant *= 2 ;

    return montant ;
}