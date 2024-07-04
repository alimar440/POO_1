#include "Ensemble.hpp"


int main(){

    Ensemble E(6) , E1(7)    ;
    Ensemble E2 = E ;

    // E.ajouter(1) ;  E.ajouter(2) ;  E.ajouter(3) ;  E.ajouter(4) ;
    
    // cout<<"cardinale = "<<E.cardinal()<<endl ;
    // cout<<"Ensemble apres ajout "<<endl ;       E.printf() ;
    
   
    // E.supprimer(4) ;    cout<<"Ensemble apres supression "<<endl ;  E.printf() ;

    // if(E1.contient(7) != -1){
    //     cout<<"7 est dans l'ensemble "<<endl ;
    //  }else{
    //     cout<<"7 n'est pas dans l'ensemble "<<endl ;
    //  }


    //test re-definement operator
    
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