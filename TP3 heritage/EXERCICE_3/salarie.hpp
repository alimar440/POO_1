#ifndef SALARIE_HPP
#define SALARIE_HPP

#include <iostream> 
#include <String> 
using namespace std ;
#include <cstring> 
class Salarie{
        char* nom ;
        char* prenom ;
    public :
        Salarie(char*,char*) ;
        Salarie(const Salarie& S) ;
       virtual ~Salarie() ;
        char* getPrenom(){return prenom ;};
        char* getNom(){return nom ;} ;
        virtual void affiche();
       virtual Salarie& operator=( Salarie&) ;
};


#endif