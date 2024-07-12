#include "File.hpp"


int main(){

    File P(6) ;
    //Filee P2 = P ;
    
    cout<<"enFiler"<<endl ;
    P.EnFiler(7) ;
    P.EnFiler(1) ;
    P.EnFiler(3) ;
    P.EnFiler(4) ;
    P.EnFiler(6) ;



    printf(P) ;

    cout<<"deFiler"<<endl ;
    P.DeFiler() ;
    printf(P) ;


    return 0 ;
}