#include "professeur.cpp" 

Professeur::Professeur(char* a,char* b,char* c):Salarie(a,b){
    diplome = new char[strlen(c) +1 ] ;
    
}
void Professeur::afficheProfesseur() {
    afficheSalarie();
    cout<<"Diplome : "<<Diplome ; 
}

 Professeur::~Professeur(){
    if(diplome)
        delete diplome ;
    if(matiere){
        for(int i =0 ; i<10 ; i++){
            if(matiere[i])
                delete matiere[i] ;
        }
    }
 }