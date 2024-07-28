#include "Administration.hpp"


Administrateur::Administrateur(char* a,char* b,char* c):Salarie(a,b){
    cout<<"appel constructeur de Administrateur d'adresse this"<<this<<endl ;
    fonction = new char[strlen(c) +1] ;
    if(!fonction)
        cout<<"memoire sature";
   
    strcpy(fonction ,c) ;
   
    
}
Administrateur::Administrateur(Administrateur& A): Salarie(A){
    cout<<"appel constructeur de recopie de Administrateur d'adresse this"<<this<<endl ;
    
    fonction = new char[strlen(A.fonction) + 1] ;

    // fonction = A.fonction ;
   strcpy(fonction , A.fonction) ;
} 

Administrateur& Administrateur::operator=(Administrateur& A){
    cout<<"appel operateur =  de administration "<<endl ;
    Salarie *adr1 , *adr2 ;
    adr1 = this ;   adr2 = &A ;

    *adr1 = *adr2 ;
    delete[] fonction ;
   // cout<<"ne marche pas"<<endl ;
    fonction = new char[strlen(A.fonction) + 1] ;
    strcpy(fonction , A.fonction) ;

    return *this ;
}


Administrateur::~Administrateur(){
    delete[] fonction ;
 }


void Administrateur::affiche(){
     cout<<"A F F I C H A G E   A D M I N I S T R A T E U R "<<endl     ;
    Salarie::affiche();
    cout<<"fonction :  "<<fonction<<endl ;
}

