#include "CERCLE.hpp"

int main(){

    Cercle C1(1,2) , C2(1,2); 

    C1.affiche() ;
    C2.affiche() ;

    cout<<C1 ;

    
    C1.SetCentre(4);

    C1.affiche() ;
    C2.affiche() ;

    cout<<C1 ;
    if(C2==C1){
        cout<<"\ntrue" ;
    }else{
        cout<<"\nfalse" ;
    }
    return 0 ;
}