#ifndef LETTRE_H
#define LETTRE_H

#include "Courriers.h"

class Lettre : public Courriers {
        Format format ;
    public : 
        Lettre(int P , modeEXP M , char* Exp , char* Dest , Format F):Courriers(P,M,Exp,Dest) , format(F) {
            cout<<"appel constructeur d'une LETTRE d'adresse "<<this<<endl ;
        } ;
        ~Lettre() ;
        void affiche() ;
        int PRIX() ;
    
};
#endif //LETTRE_H