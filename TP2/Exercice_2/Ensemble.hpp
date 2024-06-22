#ifndef ENSEMBLE_HPP
#define ENSEMBLE_HPP

#include<iostream>
#include<cstring> 

using namespace std ;

class Ensemble{

    int size ;
    int *element ;

public :

    Ensemble(int nb ) ;
    int cardinal()const ;
    void ajouter( int el ) ;
    void supprimer(int el ) ;
    int contient(int el) ;
    void printf() ;
    ~Ensemble();

 //redefinition of the fonction "ajouter" by "<<" , "supprimer " by ">>" en "contient" by "%"

     Ensemble& operator<<(int el) ;
     Ensemble& operator>>(int el) ;
    int operator%(int el ) ;

    

};

#endif 



