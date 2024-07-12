#include "pile.hpp"

int main(){

    Pile P ;
    Pile P2 = P ;
    
    P.Empiler(7) ;
    P.Empiler(1) ;
    P.Empiler(2) ;
    P.Empiler(4) ;
    cout<<"empiler"<<endl ;

    printf(P) ;
    cout<<"depiler"<<endl ;
    P.Depiler() ;
    printf(P) ;

}