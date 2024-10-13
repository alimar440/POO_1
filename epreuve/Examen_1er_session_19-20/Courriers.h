#ifndef COURRIERS_H
#define COURRIERS_H


#include <iostream>
#include <cstring> 

using namespace std ;
enum modeEXP { express , normal } ;
enum Format {A4 , A3 } ;

class Courriers{
    protected :
        int poids ;
        modeEXP mode ;
        char* adresseExpedition ;
        char* adresseDestination ;
    public :
        Courriers (int P , modeEXP M , char* Exp , char* Dest  ) ;
        ~Courriers() ; 
        void virtual affiche() ;
        int virtual PRIX() = 0 ;

} ;
#endif

