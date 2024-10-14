#ifndef INSTITUT_HPP
#define INSTITUT_HPP 

#include "personne.hpp"
#define MAX_SIZE 100
class institut {
        int courant ; 
        string name ;
        personne** pers ;

    public : 

        institut(const string& nom ): name(nom),courant(0)
        { pers = new personne* [MAX_SIZE] ;} ;
        ~institut(){delete[] pers ;}
        void ajout(personne* per){
            if(courant < MAX_SIZE )
                pers[courant++]= per ;

        } ;
        void affiche(){
            for(int i = 0 ; i<courant ; i++){
                cout<<"\n\n--------------------------------------------------------------\n\n";
                cout<< *pers[i] ;
            }
        } ;

} ;
#endif ;