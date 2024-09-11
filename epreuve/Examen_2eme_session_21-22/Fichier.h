#ifndef FICHIER_H
#define FICHIER_H   

using namespace std ;

#include <iostream>

#include "objet.h"


struct Node {

    objet* data ;
    Node* suivant ;

    Node(objet* obj ) : data(obj) { suivant = nullptr ;} ;

};

class Liste{
        Node* tete ;
        Node* courant ;
    public: 


      Liste() : tete(nullptr), courant(nullptr) {}


        void ajouter(objet* obj )  ;


        void afficher() const  ;

        virtual ~Liste() ;

};
#endif