#include "File.hpp"


int main(){

    File P(7) ;
    //Filee P2 = P ;
    
    cout<<"apres enFiler"<<endl ;
    P.EnFiler(7) ;
    P.EnFiler(1) ;
    P.EnFiler(3) ;
    P.EnFiler(4) ;
    P.EnFiler(6) ;



    printf(P) ;

    cout<<"apres deFiler"<<endl ;
    P.DeFiler() ;
    printf(P) ;


    return 0 ;
}