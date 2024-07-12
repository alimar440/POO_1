#ifndef PILE_HPP
#define PILE_HPP

using namespace std ;
#include <iostream> 

struct Pile_elt{
    int data ;
    Pile_elt *suiv ;

    Pile_elt(int d): data(d) , suiv(nullptr) {} ;
} ;


class Pile {

        Pile_elt *head ;
    public: 

        Pile() ;
        ~Pile() ;
        Pile(Pile& P) ;
        void Empiler(int el) ;
        void Depiler() ;
        int Sommet() ;
        bool Est_vide() const ;
        friend void printf( Pile ens) ;
} ;

#endif