#include "matrice.hpp"

using namespace std ;
int main(){

    //creation de matrice initialiser a 0 
    Matrice *mat1=creer_matrice(4,2) ;
    afficher_matrice(mat1) ;
    saisie_matrice(mat1) ;
    afficher_matrice(mat1) ;
    cout<<"\nT R A N S P O S E E \n" ;
    afficher_matrice(transposee_matrice(mat1)) ;
    detruire_matrice(mat1) ;

}