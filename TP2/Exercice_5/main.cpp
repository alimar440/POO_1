#include "pile.hpp"

int main(){

    File P ;
    File P2 = P ;
    
    P.EnFiler(7) ;
    P.EnFiler(1) ;
    P.EnFiler(2) ;
    P.EnFiler(4) ;
    P>>7;
    cout<<"emFiler"<<endl ;

    printf(P) ;
    cout<<"deFiler"<<endl ;
    P.DeFiler() ;
    printf(P) ;

}