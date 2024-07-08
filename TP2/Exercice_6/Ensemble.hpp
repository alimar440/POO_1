#ifndef ENSEMBLE_HPP
#define ENSEMBLE_HPP 


#include<iostream>
using namespace std ;


struct Node{ 

    
    int data ;
    Node* suiv ;

    Node(int d) : data(d), suiv(nullptr) {}
    
};

class Ensemble{
    int size ;
    Node* tete ;
    Node* courant ;
public:

    Ensemble(int nb ) ;
    Ensemble(Ensemble& ens ) ;
    int cardinal()const ;
    
    void ajouter( int el ) ;
    void supprimer(int el ) ;
    int contient(int el)const ;
    void printf()const ;
    ~Ensemble();
    Ensemble& operator<<(int el ) ;
    Ensemble& operator>>(int el) ;
    int operator%(int el);


};

#endif