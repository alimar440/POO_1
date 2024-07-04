#include "Matrice.hpp"

using namespace std ;
int main(){

    Matrice M2(3,4) ,M1(4,3) ;

    // M2.SetElement(0,2 , 12) ; M2.SetElement(0,1 ,21) ; M2.SetElement(0,3,3) ;M2.SetElement(0,0, 43) ; 
    // M2.SetElement(1,2 , 1) ; M2.SetElement(1,1 ,2) ; M2.SetElement(1,3,3) ;M2.SetElement(1,0, 4) ;  
    // M2.SetElement(2,2 , 7) ; M2.SetElement(3,1 ,4) ; M2.SetElement(2,3,7) ;M2.SetElement(2,0, 0) ;
    // M2.SetElement(3,2 , 1) ; M2.SetElement(3,1 ,2) ; M2.SetElement(3,3,3) ;M2.SetElement(3,0, 4) ;  

    M2.saisie() ;
    M1.saisie() ;

    M1.printf() ;
    M2.printf() ;

    Matrice M3 = M1.produit(M2) ;

    cout<<"resultat produit matriciel"<<endl ; M3.printf() ;

    M1.printf() ;


}