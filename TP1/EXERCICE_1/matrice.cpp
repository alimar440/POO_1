#include "matrice.hpp"

Matrice* creer_matrice(int nblignes , int nbcolonnes) {

   Matrice *maMatrice = new  Matrice ;
    maMatrice->nb_colonnes = nbcolonnes ;
    maMatrice->nb_ligne = nblignes ;

    maMatrice->elements = new float* [nblignes] ;

    for(int i = 0 ; i<nblignes ; i++){
        maMatrice->elements[i] = new float [nbcolonnes] ;
        for(int j=0 ; j<nbcolonnes ; j++)
            maMatrice->elements[i][j]=0 ;
    }
    for(int i = 0 ; i<nblignes ; i++){
        for(int j=0 ; j<nbcolonnes ; j++)
            maMatrice->elements[i][j]=0 ;
    }
    return maMatrice ;
}
void detruire_matrice(Matrice *maMatrice) {

    if(maMatrice){
        if(maMatrice->elements){
            for(int i=0 ; i<maMatrice->nb_ligne ; i++)
                if(maMatrice->elements[i])  
                    delete(maMatrice->elements[i]) ;
        }
    }

}
void afficher_matrice(Matrice *maMatrice){
    std::cout<<"\nA F F I C H A G E \n" ;

    for(int i=0 ; i<maMatrice->nb_ligne;i++){
        std::cout<<"\n";
        for(int j=0 ;j<maMatrice->nb_colonnes;j++){
            std::cout<<" "<<maMatrice->elements[i][j] ;
        }
    }

}
Matrice* transposee_matrice(Matrice* mat1){
    Matrice *mat2 = creer_matrice(mat1->nb_colonnes,mat1->nb_ligne) ;
    for(int i =0 ;i<mat1->nb_ligne;i++){
        for(int j=0 ; j<mat1->nb_colonnes;j++){
            mat2->elements[j][i]= mat1->elements[i][j] ;
        }
    }
    return mat2 ;
}
// Matrice* matrice_produit(Matrice* mat1, Matrice* mat2) {

//     Matrice *mat3 =creer_matrice(mat2->nb_colonnes,mat1->nb_ligne) ;
//     for()
//     for(int i = 0 ; i<mat1->nb_ligne;i++){
//         float prod ;
//         for(int j=0 ; j<mat2->nb_colonnes; j++){
//             prod+= mat1->[i][j]*mat2->[j][i] ;
//         }

//     }
//     return mat3;
// }
void saisie_matrice(Matrice* mat1) {
    std::cout<<"S A I S I E\n" ;
    for(int i= 0 ; i<mat1->nb_ligne; i++){
        std::cout<<"saisie de la "<<i+1<<"eme ligne \n";
        for(int j=0 ; j<mat1->nb_colonnes;j++){

            std::cout<<"Mat["<<i<<"]["<<j<<"]=" ;
            std::cin >>mat1->elements[i][j];
            std::cout<<" " ;

        }
    }
}