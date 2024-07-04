#include "Ensemble.hpp"


int main(){

    //  test re-definement operator

    Ensemble E(6) , E1(7)   ;
    Ensemble E2 = E ;

    E1<<6; E1<<3 ;  E1<<7 ; E1<<7 ;
    
    cout<<"Ensemble apres ajout "<<endl ;       E1.printf() ; 

     E1>>3 ;  E1>>7 ;    cout<<"Ensemble apres supression "<<endl ;  E1.printf() ;

     if( (E1%7) ){
        cout<<"7 est dans l'ensemble "<<endl ;
     }else{
        cout<<"7 n'est pas dans l'ensemble "<<endl ;
     }
    
      
    
    return 0 ;

}