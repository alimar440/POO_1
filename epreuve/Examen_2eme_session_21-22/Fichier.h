#ifndef FICHIER_H
#define FICHIER_H   

using namespace std ;

#include <iostream>

class objet { 
         int val ;
    public :
        objet(int valeur) : val(valeur){ cout<<"Appel construteur d'adresse :"<<this<<endl ; } ;
        ~objet(){  cout<<"Appel destructeur d'adresse :"<<this<<endl ; } ;
        int getValeur(){return val ; } ;

        void affiche () { cout<< "valeur :"<<val<<endl ;  } ;
};

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

        ~Liste() ;

};
#endif