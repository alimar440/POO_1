#ifndef Administrateur_HPP
#define Administrateur_HPP

#include "salarie.hpp"
#include <cstring> 
class Administrateur:public Salarie{
    private :
        char* fonction ;
    public :
        Administrateur(char*,char*,char*) ;
        ~Administrateur() ;
        Administrateur(Administrateur&) ;
        char* getFonction(){return fonction ; }
        void affiche() ;
        Administrateur& operator=(Administrateur& A) ;

}; 


#endif