#ifndef Administrateur_HPP
#define Administrateur_HPP

#include "salarie.hpp"

class Administrateur:public Salarie{
    private :
        char* fonction ;
    public :
        Administrateur(char*,char*,char*) ;
        ~Administrateur() { delete fonction ; }
        char* getFonction(){return fonction ; }
        void afficheAdministrateur() ;

}; 


#endif