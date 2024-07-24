#include "File.hpp"


int main(){

    File P(10) ;
    //Filee P2 = P ;
    
    cout<<"apres enFiler"<<endl ;
    
    P<<6 ;
    P<<4 ;
    P<<10 ;
    P<<12;



    printf(P) ;

    cout<<"apres deFiler"<<endl ;
    P>>1 ;
    printf(P) ;

    
    cout<<"test operateur d'affectation:  "<<endl ;
    File F(2) ;
    F = P ;
    printf(F) ;

    return 0 ;
}