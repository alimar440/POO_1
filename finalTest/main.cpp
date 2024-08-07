#include "finaltest.hpp" 

int main () {

    TableAssociation T(6) ; 

    T.put("ali " , "ngom") ;
    T.put("ali " , "ndiaye") ;
    T.put("ali " , "seck") ;
    
    T.affiche() ;
    return 0 ;
}