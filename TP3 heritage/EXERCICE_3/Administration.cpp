#include "Adminitration.hpp"


Administrateur::Administrateur(char* a,char* b,char* c):Salarie(a,b){
    cout<<"appel constructeur de Administrateur d'adresse this"<<this<<endl ;
    fonction = new char[strlen(c) +1] ;
    if(!fonction)
        cout<<"memoire sature";
    strcpy(fonction ,c) ;
    for(int i = 0 ; i<10 ; i++){
        matiere[i] =NULL ;
    }
}

void professeur::setMatiere(char* a ){
    for(int i=0 ; i<10;i++){
        if(strcmp(matiere[i],a)==0){
            cout<<"matriere deja presente"<<endl ;
            return ;
        }
    }
    matiere[i]= new char [strlen(a)+1] ;
    strcpy(matiere[i],a) ;
}
void Administrateur::afficheAdministrateur(){
    afficheSalarie();
    cout<<"fonction :  "<<fonction<<endl ;
}

