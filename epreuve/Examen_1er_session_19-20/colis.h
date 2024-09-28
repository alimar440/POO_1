#ifndef colis_H
#define colis_H

#include "Courriers.h"

class colis : public Courriers {
        int volume ;
    public : 
        colis(int P , modeEXP M , char* Exp , char* Dest , int V):Courriers(P,M,Exp,Dest) , volume(V) {
            cout<<"appel constructeur d'une colis d'adresse "<<this<<endl ;
        } ;
        ~colis() {
            cout<<"appel destructeur d'un colis"<<endl ;
        } ;
        void affiche() ;
        int PRIX() ;
    
};
#endif //colis_H