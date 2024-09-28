#include "colis.h"

void colis::affiche(){
    Courriers::affiche() ;
    cout<<"volume             :"<<volume<<endl ;

}

int colis::PRIX(){

    int montant =  0.25 * volume * poids * 1.0 ; 

    if(mode == 0)
        montant *= 2 ;

    return montant ;
}