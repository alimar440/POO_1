#include "Ensemble.hpp"


int main(){

    Ensemble E(6) , E1(3) ;
    
    E.ajouter(1) ;  E.ajouter(2) ;  E.ajouter(3) ;  E.ajouter(4) ;
    Ensemble E2 = E ;
    cout<<"cardinale = "<<E.cardinal()<<endl ;

    E.printf() ;

    if( E%5 ){
        E.supprimer(2) ;
    }else{
        E.supprimer(1) ;
        
    }

   
    E<<5<<6;    E>>2>>3;       E.printf() ;

    
    E1 = E ;     E1.printf() ;

    
    return 0 ;

}