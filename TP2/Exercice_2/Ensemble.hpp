#ifndef ENSEMBLE_HPP
#define ENSEMBLE_HPP

#include<iostream>
#include<cstring> 

using namespace std ;





class Ensemble{

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


    friend Ensemble suppell(Ensemble E) ;

};

#endif 



