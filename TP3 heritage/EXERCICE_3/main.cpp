#include "Administration.hpp"
#include "professeur.hpp"
#include "salarie.hpp"


int main(){

    char ali[10] , modou[10] , salif[10] ; 
    char nom[10] , ndiaye[10] , cisse[10]; 
    char secretaire[20] , recteur[10] , adjoin[10 ]; 
    char master[10] , licence[10] , doctorat[10] ;
    char algebre[10] , algo[10] , poo[5] , devweb[10] ,SI[5] ; 
    strcpy(ali , "alimar") ;  strcpy(modou , "modou") ; strcpy(salif , "salif") ;
    strcpy(nom , "ngom") ;    strcpy(ndiaye , "ndiaye") ; strcpy(cisse , "cisse") ;
    strcpy(secretaire , "secretaire") ; strcpy(recteur , "recteur") ; strcpy(adjoin , "adjoin" ) ;
    strcpy(master, "MASTER") ; strcpy(licence , "licence") ; strcpy(doctorat , "doctorat") ;
    strcpy(algebre, "algebre") ; strcpy(algo , "algo") ; strcpy(poo , "poo") ; strcpy(devweb , "devweb") ; strcpy(SI , "SI") ; 
    

    // Salarie S1( ali , nom) , S2( modou , ndiaye ) , S3(salif , cisse) ;
    // Professeur P1(ali , nom , master ) , P2(salif , ndiaye , doctorat) , P3(modou , ndiaye , licence) ;
    // Administrateur A1(ali , nom , secretaire) , A2(salif , ndiaye , recteur) ;
    // P1.setMatiere(algo) ; P1.setMatiere(poo) ; P1.setMatiere(devweb) ; P1.setMatiere(SI) ;
    // P2.setMatiere(poo) ;P2.setMatiere(SI) ; 

    // S1.affiche() ;   S2. affiche() ; S3.affiche() ;

    // cout<<"------------------TEST d'une situation d'invocation et operateur d'affectation(=) pour salarie ------------------"<<endl ;
    // Salarie S4 = S1 ; 
    // cout<<"    * RESULTAT  constructeur de copie"<<endl ; 
    // S4.affiche() ;
    // S4 = S2 = S3 ;
    // cout<<"    * RESULTAT  operateur d'affectation"<<endl ; 
    // S4.affiche() ;
    // cout<<"------------------TEST d'une situation d'invocation et operateur d'affectation(=) pour proffeseur ------------------"<<endl ;
    
    
    
    // Professeur P4 = P2  ;

    // cout<<"   \n\n *     RESULTAT  constructeur de copie\n\n "<<endl ; 

    // P4.affiche() ;

    // cout<<"\n\n    *     RESULTAT  operateur d'affectation\n\n"<<endl ; 

    // P4 = P1  ;

    // P4.affiche() ;

    // cout<<"------------------TEST d'une situation d'invocation et operateur d'affectation(=) pour administration ------------------"<<endl ;
    
    
    
    // Administrateur A3 = A1  ;

    // cout<<"    \n\n    *RESULTAT  constructeur de copie \n\n "<<endl ; 

    // A3.affiche() ;

    // cout<<"  \n\n  *       RESULTAT  operateur d'affectation\n\n"<<endl ; 

    // A3  = A1 = A2;

    // A3.affiche() ;



   


  cout<<"-------------------------------------T Y P A  E  STATIQUE-----------------\n\n\n "<<endl ;


  // Salarie S(ali,nom) ;
  Professeur P(ali , ndiaye , recteur) ;



 
    
    return 0 ;
}

