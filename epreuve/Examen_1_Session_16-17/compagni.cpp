#include "compagni.h"
#include <cstring>

Compagnie::Compagnie(char* nom, int nbMax){
    max_size = nbMax ;

    name = new char[strlen(nom) + 1 ] ;
    strcpy(name , nom ) ;

    stock = new Vaccin* [max_size];

    for(int i = 0 ; i<max_size ; i++ ){
        stock[i] = nullptr ;
    }

} 
void Compagnie::ajoute(Vaccin* Vac ) {
    int i = 0 ;

   
    while(stock[i] != nullptr )
        i++ ;
    if(i<max_size){
     
        stock[i] = Vac ;
    }
}
Compagnie::~Compagnie() {
    int i = 0 ; 
    while(stock[i] != 0 ){
        delete[] stock[i] ;
        i++ ;
    }
    delete stock ;
}
void Compagnie::affiche() {
     int i = 0 ; 
    
    cout<<"\n\nnom de notre compagnie \n\n"<<name <<endl;
    while(stock[i] != 0 ){
        stock[i]->affiche() ;
        cout<<"\n"<<endl ;
        i++ ;
    }
}
double Compagnie::calcul(){
     int i = 0 ; 
     double somme ;
    while(stock[i] != 0 ){
        somme += stock[i]->production() ;
        i++;
    }
    return somme ;
}