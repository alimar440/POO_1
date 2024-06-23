#ifndef ENSEMBLE_HPP
#define ENSEMBLE_HPP 


#include<iostrem>
using namespace std ;


struct Node{ 

    int size ;
    int data ;
    Node* suiv ;

    Node(int d) : data(d), suiv(nullptr) {}
};

class Ensemble{

    Node* tete ;
    Node* courant ;
public:

    Ensemble(int nb ) ;
    int cardinal()const ;
   
    void ajouter( int el ) ;
    void supprimer(int el ) ;
    int contient(int el) ;
    void printf() ;
    ~Ensemble();

};
#endif ENSEMBLE_HPP