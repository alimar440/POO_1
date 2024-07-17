#ifndef SALARIE_HPP
#define SALARIE_HPP

#include <iostream> 
using namespace std ;

class Salarie{
        char* nom ;
        char* prenom ;
    public :
        Salarie(char*,char*) ;
        ~Salarie() { delete nom ; delete prenom ;}
        char* getPrenom(){return prenom ;}
        char* getNom(){return nom ;}
        void afficheSalarie() ;
};


#endif