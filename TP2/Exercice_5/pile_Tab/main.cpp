#include "File.hpp"



int main(){

    File P(10) ;
    
    
    cout<<"apres enFiler"<<endl ;
    P.EnFiler(7) ;
    P.EnFiler(1) ;
    P.EnFiler(3) ;
    P.EnFiler(4) ;
    P.EnFiler(6) ;

   File P2 = P ;

   P2.EnFiler(10) ;

   Fi



    printf(P) ;

    cout<<"apres deFiler"<<endl ;
    
    printf(P) ;

    
    cout<<"test operateur d'affectation:  "<<endl ;
    File F(2) ;
    F = P ;
    printf(F) ;

    return 0 ;
}