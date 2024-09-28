#include "Courriers.h"

Courriers::Courriers (int P , modeEXP M , char* Exp , char* Dest  ) : poids(P) , mode(M) {

        cout<<"appel constructeur d'un courriers d'adresse "<<this<<endl ;

        adresseDestination = new char [strlen(Dest) + 1 ] ;
        adresseExpedition  = new char [strlen(Exp ) + 1 ] ;

        strcpy(adresseDestination , Dest) ;
        strcpy(adresseExpedition , Exp  ) ;
}
Courriers::~Courriers() {
        
        cout<<"appel destructeur d'un courriers"<<endl ;
        delete[] adresseDestination ;
        delete[] adresseExpedition ;
} 
void  Courriers::affiche(){
    cout<<"POIDS              :"<<poids<<endl ;
    cout<<"adresseDestination :"<<adresseDestination<<endl ;
    cout<<"adresseExpedition  :"<<adresseExpedition<<endl ;
    if(mode == 0)
        cout<<"mode               :"<<"express"<<endl ;
    else
        cout<<"mode               :"<<"normal"<<endl ;

}
