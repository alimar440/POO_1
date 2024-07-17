#ifndef Professeur_HPP
#define Professeur_HPP

#include "salarie.hpp"

class Professeur:public Salarie{
    private :
        char* Diplome ;
        char* Matiere[10] ;

    public :
        Professeur(char*,char*,char*) ;
        ~Professeur() ;
        char* getDiplome(){return Diplome ; }
        char* getMatiere(int i){return Matiere[i] ; }
        void setMatiere(char* a) ;
        void afficheProfesseur() ;     
}; 


#endif