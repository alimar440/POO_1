#include "personnel.hpp"
#include "personnelAdministtrative.hpp"
#include "personnelEnseignant.hpp"
#include "personne.hpp"
#include "Institut.hpp"

int main(){

    institut Ins("institut") ;
    personnel p("ali", "sanar" , 2001 , 500000) ;
    admin a("mar", "sanar" , 2012 , 1200000,"assistant") ;
    enseignant e("ali", "sanar" ,  2022 , 250000,"qwerty") ;
    enseignant e1("ali", "sanar" ,  2022 ,"qwddfdd",48, 5000) ;

    Ins.ajout(&p);
    Ins.ajout(&a);
    Ins.ajout(&e);
    Ins.ajout(&e1);

    Ins.affiche() ;


    

    return 0 ;
}