#include "Courriers.h"
#include "Lettre.h"
#include "colis.h"
#include "BoiteAuLettre.h"

int main(){
    colis C1(14 , express , "adr1" , "adr2" , 12) ;
    colis C2(1442 , normal , "adr3" , "adr4" , 122) ;
    Lettre L1(1442 , normal , "adr5" , "adr6" , A3) ;
    Lettre L2(1442 , express , "adr5" , "adr6" , A4) ;

    BoiteAuLettre Boite("EXPEDITIF" , 10 , 20 , 5) ;
    Boite.ajoute(&C1);
    Boite.ajoute(&C2);
    Boite.ajoute(&L1);
    Boite.ajoute(&L2);

    Boite.affiche() ;
    
    


    return 0 ; 



}