#ifndef MATRICE_HPP
#define MATRICE_HPP 

#include<iostream>

struct Matrice{
    int nb_colonnes ;
    int nb_ligne ;
    float **elements ;
} ;


Matrice* creer_matrice(int nblignes , int nbcolonnes) ;
void detruire_matrice(Matrice*) ;
void afficher_matrice(Matrice*) ;
Matrice* transposee_matrice(Matrice*) ;
Matrice* marice_produit(Matrice* , Matrice*) ;
void saisie_matrice(Matrice*) ;

#endif 