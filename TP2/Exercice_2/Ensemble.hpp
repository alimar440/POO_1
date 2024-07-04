#ifndef ENSEMBLE_HPP
#define ENSEMBLE_HPP

#include<iostream>
#include<cstring> 

using namespace std ;

class Ensemble{

    int i ;
    int size ;
    int card ;
    int *element ;

public :

    Ensemble(int nb ) ;
    Ensemble(const Ensemble& ens) ;
    int cardinal()const{ return card ;} ;
    int Esize()const{return size ;} ; 
    void ajouter( int el ) ;
    void supprimer(int el ) ;
    int contient(int el) ;
    void printf() ;
    ~Ensemble();

 //redefinition of the fonction "ajouter" by "<<" , "supprimer " by ">>" en "contient" by "%"

    Ensemble& operator<<(int el) ;
    Ensemble& operator>>(int el) ;
    int operator%(int el ) ;
    Ensemble& operator=(const Ensemble& ens) ;

    Ensemble operator+(const Ensemble& ens ) ;
    Ensemble operator*( Ensemble& ens)   ;

    void init() ;
    int exist() ;
    int prochain() ;
    
    int somme() ;
};

#endif 



