#include "Magasin.h"

Magasin::Magasin(int nb ){

    max_size = nb ;
    

    stock = new Article* [max_size] ;

    for(int i = 0 ; i<max_size ; i++){
        stock[i] = nullptr ;
    }
}

void Magasin::ajouter(Article* art){

    int i = 0 ;

    while(stock[i] != nullptr){
        i++ ;
    }

    if(i<max_size){
         stock[i] = art ;
    }else{
        cout<<"plein !";
    }

}

 Magasin::~Magasin(){
    if(stock){
        int i = 0 ;
        while(stock[i]!= nullptr){

            delete stock[i++] ;
        }
        delete[] stock ;
    }
 }
    
void Magasin::affiche(){
    
    int i = 0 ;

    while(stock[i] != nullptr){

        stock[i]->affiche() ;
        cout<<"prix de vente : "<<stock[i]->getBuyPrice()<<endl ;
        i++ ;
    }

}
