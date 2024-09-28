#include "BoiteAuLettre.h"

BoiteAuLettre::BoiteAuLettre( char* n ,int V , int H , int M ):max(M) , volumeBoite(V) , hauteur(H) {
            nom = new char[strlen(n) + 1] ;
            strcpy(nom , n) ;
            couriers = new Courriers*[max] ;
            courant = 0 ;
 } ;

 BoiteAuLettre::~BoiteAuLettre(){
            if(couriers) delete [] couriers;
                cout<<"Appel du destructeur !"<<endl;
        }

void BoiteAuLettre::ajoute(Courriers *C ){ 

    if(courant < max ) 
        couriers[courant++] = C ;
     } ; 

void BoiteAuLettre::affiche(){

    cout<<"\n\n\n\n";
    cout<<"Nom colis : "<<nom <<endl ;
    
    for(int i = 0 ; i<courant ; i++){
        

        cout<<"courrier numero :  "<<i+1 <<endl ;
        couriers[i]->affiche() ;
        cout<<"Prix timbre        :"<<couriers[i]->PRIX() ;

        cout<<"\n\n\n\n";
    }
}