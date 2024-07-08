#ifndef PILE_HPP
#define PILE_HPP

using namespace std ;
#include <iostream> 

struct Pile_elt{
    int data ;
    Pile_elt *suiv ;

    Pile_elt(int d): date(d) , suiv(nullptr) {}
} ;

class Pile {

        Pile_elt *head ;
    public: 

        Pile() ;
} ;