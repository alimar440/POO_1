#include "Ensemble.hpp"


int main(){

    Ensemble E(6) , E1(7)   ;
    Ensemble E2 = E ;

    E<<1 ;  E<<2 ;  E<<3 ;  E<<4 ;
    
    cout<<"cardinale = "<<E.cardinal()<<endl ;
    cout<<"Ensemble apres ajout "<<endl ;       E.printf() ;
    
   
    E>>4 ;    cout<<"Ensemble apres supression "<<endl ;  E.printf() ;

    if(E1%7 != -1){
        cout<<"7 est dans l'ensemble "<<endl ;
     }else{
        cout<<"7 n'est pas dans l'ensemble "<<endl ;
     }


    Ensemble E3 = suppell(E) ;

    
    return 0 ;

}